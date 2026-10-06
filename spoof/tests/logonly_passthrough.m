// Test hôte macOS : contrat des observateurs, sans client ni serveur iOS.
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

int main(void)
{
    @autoreleasepool {
        SEL payloadSelector = @selector(_appLoginClientAttestationPayload);
        IMP baseBefore = method_getImplementation(class_getInstanceMethod([SS06TestServiceBase class], payloadSelector));
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
        NSString *token = [@"SS06_PRIVATE_TEST_SENTINEL" mutableCopy];
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
    }
    return 0;
}
