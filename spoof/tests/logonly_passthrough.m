// Test hôte macOS : observateurs + historique, presse-papiers UIKit simulé.
#define SS06_LOGONLY_TESTING 1
#import "../SS06LogOnly.m"
#include <stdio.h>

#define CHECK(condition) do { if (!(condition)) { \
    fprintf(stderr, "FAIL line %d: %s\n", __LINE__, #condition); return 1; \
} } while (0)

static NSUInteger PayloadCalls, TokenCalls;
static SEL PayloadCommand, TokenCommand;
static id LastToken;
static BOOL SetterThrows;
static BOOL TestAppActive, TestClipboardThrows, TestClipboardOffMain;
static NSMutableArray<NSString *> *TestClipboardSnapshots;

static BOOL SS06LogOnlyAppIsActive(void)
{
    if (![NSThread isMainThread]) TestClipboardOffMain = YES;
    return TestAppActive;
}

static void SS06LogOnlyWriteClipboard(NSString *snapshot)
{
    if (![NSThread isMainThread]) TestClipboardOffMain = YES;
    if (TestClipboardThrows) [NSException raise:@"TestClipboardException" format:@"test"];
    [TestClipboardSnapshots addObject:[snapshot copy]];
}

static BOOL TestDrainMainQueue(void)
{
    __block BOOL done = NO;
    dispatch_async(dispatch_get_main_queue(), ^{ done = YES; });
    NSDate *deadline = [NSDate dateWithTimeIntervalSinceNow:5];
    while (!done && [deadline timeIntervalSinceNow] > 0) {
        [[NSRunLoop currentRunLoop] runUntilDate:[NSDate dateWithTimeIntervalSinceNow:0.01]];
    }
    return done;
}

static void TestBecomeActive(void)
{
    TestAppActive = YES;
    [[NSNotificationCenter defaultCenter] postNotificationName:SS06LogOnlyActiveNotification object:nil];
}

@interface SS06TestServiceBase : NSObject
@property(nonatomic, strong) id testPayload;
@property(nonatomic) BOOL getterThrows;
- (id)_appLoginClientAttestationPayload;
@end
@implementation SS06TestServiceBase
- (id)_appLoginClientAttestationPayload
{
    ++PayloadCalls;
    PayloadCommand = _cmd;
    if (self.getterThrows) [NSException raise:@"OriginalGetterException" format:@"test"];
    return self.testPayload;
}
@end
@interface SCLoginJanusService : SS06TestServiceBase
@end
@implementation SCLoginJanusService
@end

static void TestOriginalTokenSetter(id self, SEL command, id value)
{
    (void)self;
    ++TokenCalls;
    TokenCommand = command;
    if (SetterThrows) [NSException raise:@"OriginalSetterException" format:@"test"];
    LastToken = value;
}

@interface SCJanusAppLoginRequest : NSObject
@property(nonatomic, strong) id iosDeviceCheckToken;
@end
@implementation SCJanusAppLoginRequest
@dynamic iosDeviceCheckToken;
+ (BOOL)resolveInstanceMethod:(SEL)selector
{
    if (selector == @selector(setIosDeviceCheckToken:)) {
        return class_addMethod(self, selector, (IMP)TestOriginalTokenSetter, "v@:@");
    }
    return [super resolveInstanceMethod:selector];
}
@end

#import "logonly_transport_fixture.h"
#import "logonly_response_fixture.h"
#import "logonly_origin_fixture.h"

int main(void)
{
    @autoreleasepool {
        SEL payloadSelector = @selector(_appLoginClientAttestationPayload);
        IMP baseBefore = method_getImplementation(class_getInstanceMethod([SS06TestServiceBase class], payloadSelector));
        TestClipboardSnapshots = [NSMutableArray new];
        CHECK(TestSetupTransportClasses());
        SS06LogOnlyStart(); // Même init que la dylib ; app initialement inactive.
        CHECK(SS06LogOnlyInstallObservers());
        CHECK(SS06LogOnlyInstallObservers()); // Installation idempotente.
        CHECK(baseBefore == method_getImplementation(class_getInstanceMethod([SS06TestServiceBase class], payloadSelector)));
        CHECK(!class_getInstanceMethod([SS06TestServiceBase class], NSSelectorFromString(@"ss06_logonly_appLoginClientAttestationPayload")));

        SCLoginJanusService *service = [SCLoginJanusService new];
        NSData *payload = [@"SS06_PRIVATE_TEST_SENTINEL" dataUsingEncoding:NSUTF8StringEncoding];
        service.testPayload = payload;
        CHECK([service _appLoginClientAttestationPayload] == payload);
        CHECK(PayloadCalls == 1 && PayloadCommand == payloadSelector);
        service.testPayload = [NSData data];
        CHECK([service _appLoginClientAttestationPayload] == service.testPayload);
        service.testPayload = nil;
        CHECK([service _appLoginClientAttestationPayload] == nil);
        service.testPayload = @42;
        CHECK([service _appLoginClientAttestationPayload] == service.testPayload);
        CHECK(PayloadCalls == 4);
        service.getterThrows = YES;
        BOOL getterException = NO;
        @try { [service _appLoginClientAttestationPayload]; }
        @catch (NSException *exception) { getterException = [exception.name isEqualToString:@"OriginalGetterException"]; }
        CHECK(getterException && PayloadCalls == 5);

        SCJanusAppLoginRequest *request = [SCJanusAppLoginRequest new];
        NSString *token = [@"SS06_SYNTHETIC_DEVICE_TOKEN" mutableCopy];
        [request setIosDeviceCheckToken:token];
        CHECK(TokenCalls == 1 && TokenCommand == @selector(setIosDeviceCheckToken:));
        CHECK(LastToken == token);
        NSString *emptyToken = @"";
        [request setIosDeviceCheckToken:emptyToken];
        CHECK(LastToken == emptyToken);
        [request setIosDeviceCheckToken:nil];
        CHECK(LastToken == nil);
        [request setIosDeviceCheckToken:@"é"];
        CHECK([LastToken isEqual:@"é"]);
        CHECK(TokenCalls == 4);
        SetterThrows = YES;
        BOOL setterException = NO;
        @try { [request setIosDeviceCheckToken:token]; }
        @catch (NSException *exception) { setterException = [exception.name isEqualToString:@"OriginalSetterException"]; }
        CHECK(setterException && TokenCalls == 5);
        CHECK([LastToken isEqual:@"é"]);
        puts("PASS: original calls, object identity, selectors, nil/empty, exceptions, inherited and dynamic methods");

        // Aucun accès réel au presse-papiers ; les lignes pré-activation sont conservées.
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == 0);
        TestBecomeActive();
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == 1);
        NSString *firstHistory = TestClipboardSnapshots.lastObject;
        CHECK([firstHistory containsString:@"init logonly active;"]);
        CHECK([firstHistory containsString:@"clientAttestationPayload state=nonempty bytes=26"]);
        CHECK([firstHistory containsString:@"clientAttestationPayload state=empty bytes=0"]);
        CHECK([firstHistory containsString:@"clientAttestationPayload state=nil bytes=0"]);
        CHECK([firstHistory containsString:@"iosDeviceCheckToken state=nonempty chars=1 utf8_bytes=2"]);
        CHECK(![firstHistory containsString:@"SS06_PRIVATE_TEST_SENTINEL"]);
        NSArray<NSString *> *lines = [firstHistory componentsSeparatedByString:@"\n"];
        CHECK([firstHistory containsString:@"observer onEvent:status: installed class=SCNGrpcUnaryEventHandlerImpl"]);
        CHECK([firstHistory containsString:@"receive_observer installed=1 expected=1"]);
        // Two additional initialization records for the pre-decode observer.
        CHECK(lines.count == 16 + SS06LogOnlyTargetCount + 1 + 2 + SS06_SELFREAD);
        NSRegularExpression *prefix = [NSRegularExpression
            regularExpressionWithPattern:@"^\\[SS06LogOnly\\] [0-9]{4}-[0-9]{2}-[0-9]{2}T[0-9]{2}:[0-9]{2}:[0-9]{2}\\.[0-9]{3}Z .+$"
            options:0 error:NULL];
        CHECK(prefix != nil);
        for (NSString *line in lines) {
            if (line.length) CHECK([prefix numberOfMatchesInString:line options:0 range:NSMakeRange(0, line.length)] == 1);
        }

        // Une nouvelle mesure recopie l'historique entier sans attendre un geste.
        SS06LogOnlyMeasurePayload([NSData data]);
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == 2);
        CHECK([TestClipboardSnapshots.lastObject hasPrefix:firstHistory]);
        CHECK([TestClipboardSnapshots.lastObject hasSuffix:@"clientAttestationPayload state=empty bytes=0\n"]);

        // Producteurs concurrents : aucune ligne perdue, aucune copie ancienne
        // ne remplace une nouvelle. Les tâches de copie lisent le dernier snapshot.
        NSString *beforeConcurrent = TestClipboardSnapshots.lastObject;
        dispatch_apply(16, dispatch_get_global_queue(QOS_CLASS_DEFAULT, 0), ^(size_t index) {
            @autoreleasepool { SS06LogOnlyRecord(@"test concurrent measurement=%lu", (unsigned long)index); }
        });
        CHECK(TestDrainMainQueue());
        NSString *afterConcurrent = TestClipboardSnapshots.lastObject;
        CHECK([afterConcurrent hasPrefix:beforeConcurrent]);
        CHECK([afterConcurrent componentsSeparatedByString:@"\n"].count ==
              [beforeConcurrent componentsSeparatedByString:@"\n"].count + 16);
        for (NSUInteger index = 0; index < 16; ++index) {
            NSString *marker = [NSString stringWithFormat:@"test concurrent measurement=%lu\n", (unsigned long)index];
            CHECK([afterConcurrent componentsSeparatedByString:marker].count == 2);
        }
        for (NSUInteger index = 1; index < TestClipboardSnapshots.count; ++index) {
            CHECK([TestClipboardSnapshots[index] hasPrefix:TestClipboardSnapshots[index - 1]]);
        }

        // Mesures hors premier plan : flush à l'activation, pas de réécriture sans nouveauté.
        NSUInteger copies = TestClipboardSnapshots.count;
        TestAppActive = NO;
        SS06LogOnlyMeasureToken(@"pending");
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == copies);
        TestBecomeActive();
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == copies + 1);
        CHECK([TestClipboardSnapshots.lastObject hasPrefix:afterConcurrent]);
        CHECK([TestClipboardSnapshots.lastObject hasSuffix:@"iosDeviceCheckToken state=nonempty chars=7 utf8_bytes=7\n"]);
        TestBecomeActive();
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == copies + 1);

        // Un échec de copie n'efface pas les mesures et ne provoque pas de boucle.
        TestClipboardThrows = YES;
        SS06LogOnlyMeasureToken(nil);
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == copies + 1);
        TestClipboardThrows = NO;
        TestBecomeActive();
        CHECK(TestDrainMainQueue());
        CHECK(TestClipboardSnapshots.count == copies + 2);
        CHECK([TestClipboardSnapshots.lastObject hasSuffix:@"iosDeviceCheckToken state=nil chars=0 utf8_bytes=0\n"]);
        CHECK(!TestClipboardOffMain);
        CHECK(![TestClipboardSnapshots.lastObject containsString:@"SS06_PRIVATE_TEST_SENTINEL"]);
        puts("PASS: timestamped full history, automatic main-queue clipboard, concurrency, deferred activation, retry");
        CHECK(TestTransportObservers() == 0);
        CHECK(TestRPCResponses() == 0);
        CHECK(TestOriginObservations() == 0);
    }
    return 0;
}
