// Classes simulées pour chaque cible vérifiée ; aucun client/serveur réel.
#import <objc/message.h>

static id TestTransportReceiver, TestTransportArgs[4], TestTransportResult;
static SEL TestTransportCommand;
static int TestTransportRequestType;
static NSUInteger TestTransportCalls, TestDescriptionCalls, TestDataCalls, TestSizeCalls;
static BOOL TestTransportThrows, TestSizeThrows;
static NSException *TestTransportException;
static void (^TestDeviceCompletion)(id);
static BOOL TestRPCRepliesSynchronously;
static id TestRPCReply, TestRPCError;

@interface GPBMessage : NSObject
- (NSUInteger)serializedSize;
- (NSData *)data;
@end
@implementation GPBMessage
- (NSUInteger)serializedSize
{
    ++TestSizeCalls;
    if (TestSizeThrows) [NSException raise:@"SizeFailure" format:@"SS06_PRIVATE_TEST_SENTINEL"];
    return 321;
}
- (NSData *)data { ++TestDataCalls; return [NSData data]; }
- (NSString *)description { ++TestDescriptionCalls; return @"SS06_PRIVATE_TEST_SENTINEL"; }
@end

static void TestTransportOriginal(id receiver, SEL selector, id a, id b, id c, id d)
{
    ++TestTransportCalls;
    TestTransportReceiver = receiver; TestTransportCommand = selector;
    TestTransportArgs[0] = a; TestTransportArgs[1] = b;
    TestTransportArgs[2] = c; TestTransportArgs[3] = d;
    if (TestTransportThrows) @throw TestTransportException;
}
static void TestRPCOriginal(id receiver, SEL selector, id a, id b, id c)
{
    TestTransportOriginal(receiver, selector, a, b, c, nil);
    if (TestRPCRepliesSynchronously && c) ((void (^)(id, id))c)(TestRPCReply, TestRPCError);
}
static id TestUnaryOriginal(id receiver, SEL selector, id a, id b, id c, id d)
{ TestTransportOriginal(receiver, selector, a, b, c, d); return TestTransportResult; }
static void TestDeviceOriginal(id receiver, SEL selector, id a)
{ TestTransportOriginal(receiver, selector, a, nil, nil, nil); TestDeviceCompletion = [a copy]; }
static id TestAttestationOriginal(id receiver, SEL selector, id a, id b)
{ TestTransportOriginal(receiver, selector, a, b, nil, nil); return TestTransportResult; }
static id TestTypedAttestationOriginal(id receiver, SEL selector, id a, id b, int type)
{ TestTransportRequestType = type; TestTransportOriginal(receiver, selector, a, b, nil, nil); return TestTransportResult; }
static void TestVoidUnaryOriginal(id receiver, SEL selector, id a, id b, id c, id d)
{ TestTransportOriginal(receiver, selector, a, b, c, d); }

static BOOL TestSetupTransportClasses(void)
{
    for (NSUInteger index = 0; index < SS06LogOnlyTargetCount; ++index) {
        SS06LogOnlyTarget *target = &SS06LogOnlyTargets[index];
        Class cls = objc_getClass(target->className);
        if (!cls) { cls = objc_allocateClassPair([NSObject class], target->className, 0); objc_registerClassPair(cls); }
        IMP original = NULL;
        switch (target->kind) {
            case SS06LogOnlyRPC: original = (IMP)TestRPCOriginal; break;
            case SS06LogOnlyTransport: original = (IMP)TestUnaryOriginal; break;
            case SS06LogOnlyDeviceCheck: original = (IMP)TestDeviceOriginal; break;
            case SS06LogOnlyAttestationTyped: original = (IMP)TestTypedAttestationOriginal; break;
            default: original = (IMP)TestAttestationOriginal; break;
        }
        NSString *encoding = [NSString stringWithFormat:@"%c@:%s", target->signature[0], target->signature + 1];
        if (!class_addMethod(cls, sel_registerName(target->selectorName), original, encoding.UTF8String)) return NO;
    }
    return YES;
}

static id TestInvokeTransport(SS06LogOnlyTarget *target, id receiver, id a, id b, id c, id d)
{
    switch (target->kind) {
        case SS06LogOnlyRPC:
            ((void (*)(id, SEL, id, id, id))objc_msgSend)(receiver, target->selector, a, b, c); return nil;
        case SS06LogOnlyTransport:
            return ((id (*)(id, SEL, id, id, id, id))objc_msgSend)(receiver, target->selector, a, b, c, d);
        case SS06LogOnlyDeviceCheck:
            ((void (*)(id, SEL, id))objc_msgSend)(receiver, target->selector, a); return nil;
        case SS06LogOnlyAttestationTyped:
            return ((id (*)(id, SEL, id, id, int))objc_msgSend)(receiver, target->selector, a, b, 107);
        default:
            return ((id (*)(id, SEL, id, id))objc_msgSend)(receiver, target->selector, a, b);
    }
}

static int TestTransportObservers(void)
{
    CHECK(SS06LogOnlyTargetCount == 34);
    CHECK(SS06LogOnlyInstallTransportObservers()); // Ne ré-échange aucune méthode.
    TestTransportException = [NSException exceptionWithName:@"OriginalFailure" reason:@"SS06_PRIVATE_TEST_SENTINEL" userInfo:nil];
    GPBMessage *request = [GPBMessage new];
    NSData *wire = [@"SS06_PRIVATE_TEST_SENTINEL" dataUsingEncoding:NSUTF8StringEncoding];
    id options = [NSMutableDictionary new];
    __block NSUInteger callbacks = 0;
    id handler = ^(__unused id value) { ++callbacks; };
    NSString *path = @"/snapchat.janus.api.LoginService/AppLogin?password=SS06_PRIVATE_TEST_SENTINEL#SS06_PRIVATE_TEST_SENTINEL";
    for (NSUInteger index = 0; index < SS06LogOnlyTargetCount; ++index) {
        SS06LogOnlyTarget *target = &SS06LogOnlyTargets[index];
        id receiver = [objc_getClass(target->className) new];
        id a = request, b = options, c = handler, d = nil;
        if (target->kind == SS06LogOnlyTransport) { a = path; b = wire; c = options; d = handler; }
        if (target->kind == SS06LogOnlyDeviceCheck) { a = handler; b = nil; c = nil; }
        if (target->kind == SS06LogOnlyAttestation || target->kind == SS06LogOnlyAttestationTyped) { a = @"SS06_PRIVATE_TEST_SENTINEL"; b = path; c = nil; }
        if (target->kind == SS06LogOnlyArgos) { a = path; b = request; c = nil; }
        TestTransportResult = wire;
        NSUInteger before = TestTransportCalls;
        id result = TestInvokeTransport(target, receiver, a, b, c, d);
        CHECK(TestTransportCalls == before + 1);
        CHECK(TestTransportReceiver == receiver && TestTransportCommand == target->selector);
        if (target->kind == SS06LogOnlyDeviceCheck) CHECK(TestTransportArgs[0] != a && TestTransportArgs[0] != nil);
        else CHECK(TestTransportArgs[0] == a);
        CHECK(TestTransportArgs[1] == b);
        CHECK(TestTransportArgs[2] == c && TestTransportArgs[3] == d);
        CHECK(result == (target->signature[0] == '@' ? wire : nil));
        if (target->kind == SS06LogOnlyAttestationTyped) CHECK(TestTransportRequestType == 107);

        // Le retour nil et les mêmes objets/handlers restent transmis.
        TestTransportResult = nil;
        CHECK(TestInvokeTransport(target, receiver, nil, nil, nil, nil) == nil);
        CHECK(TestTransportArgs[0] == nil && TestTransportArgs[1] == nil);
        before = TestTransportCalls;
        TestTransportThrows = YES;
        BOOL sameException = NO;
        @try { TestInvokeTransport(target, receiver, a, b, c, d); }
        @catch (NSException *exception) { sameException = exception == TestTransportException; }
        CHECK(sameException && TestTransportCalls == before + 1);
        TestTransportThrows = NO;
    }
    CHECK(callbacks == 0 && TestDescriptionCalls == 0 && TestDataCalls == 0 && TestSizeCalls > 0);

    // Une erreur de mesure ne supprime pas l'appel original.
    TestSizeThrows = YES;
    SS06LogOnlyTarget *rpc = NULL;
    for (NSUInteger index = 0; index < SS06LogOnlyTargetCount; ++index)
        if (SS06LogOnlyTargets[index].kind == SS06LogOnlyRPC) { rpc = &SS06LogOnlyTargets[index]; break; }
    CHECK(rpc != NULL);
    NSUInteger before = TestTransportCalls;
    TestInvokeTransport(rpc, [objc_getClass(rpc->className) new], request, options, handler, nil);
    CHECK(TestTransportCalls == before + 1);
    TestSizeThrows = NO;

    // L'autre classe du binaire a un retour void : refuser le hook retournant id.
    Class plus = objc_allocateClassPair([NSObject class], "SCPlusGrpcService", 0);
    objc_registerClassPair(plus);
    SEL unary = sel_registerName("unaryCall:request:callOptionsBuilder:handler:");
    CHECK(class_addMethod(plus, unary, (IMP)TestVoidUnaryOriginal, "v@:@@@@"));
    IMP rejected = NULL;
    CHECK(!SS06LogOnlyInstallTypedObserver(plus, unary, sel_registerName("ss06_test_rejected:"), (IMP)TestUnaryOriginal, &rejected, "@@@@@"));
    CHECK(rejected == NULL && class_getMethodImplementation(plus, unary) == (IMP)TestVoidUnaryOriginal);

    CHECK(TestDrainMainQueue());
    NSString *history = TestClipboardSnapshots.lastObject;
    CHECK([history containsString:@"stage=rpc.enter"] && [history containsString:@"serialized_bytes=321"]);
    CHECK([history containsString:@"stage=transport.enter"] && [history containsString:@"bytes=26 size_source=NSData.length"]);
    CHECK([history containsString:@"stage=devicecheck.enter"] && [history containsString:@"stage=attestation.return"]);
    CHECK([history containsString:@"requestType=107"] && [history containsString:@"stage=rpc.throw"]);
    CHECK([history containsString:@"measurement-failed"]);
    CHECK(![history containsString:@"SS06_PRIVATE_TEST_SENTINEL"]);
    CHECK(![history containsString:@"?password="] && ![history containsString:@"#SS06"]);
    CHECK(!TestClipboardOffMain);
    CHECK([SS06LogOnlySafePath(@"https://example.invalid/private") isEqualToString:@"redacted"]);
    CHECK([SS06LogOnlySafePath(@42) isEqualToString:@"unknown-type"]);
    CHECK([SS06LogOnlySafePath(nil) isEqualToString:@"nil"]);
    puts("PASS: 34 transport targets, original arguments/returns/exceptions, signature guards, no request descriptions/data, clipboard trace");

    SS06LogOnlyTarget *native = NULL, *device = NULL;
    for (NSUInteger index = 0; index < SS06LogOnlyTargetCount; ++index) {
        if (strcmp(SS06LogOnlyTargets[index].selectorName, "_getAttestationPayload:path:requestType:") == 0) native = &SS06LogOnlyTargets[index];
        if (SS06LogOnlyTargets[index].kind == SS06LogOnlyDeviceCheck) device = &SS06LogOnlyTargets[index];
    }
    CHECK(native && device);
    NSMutableData *sample = [NSMutableData dataWithLength:1421];
    for (NSUInteger i = 0; i < sample.length; ++i) ((uint8_t *)sample.mutableBytes)[i] = (uint8_t)i;
    TestTransportResult = sample;
    CHECK(TestInvokeTransport(native, [objc_getClass(native->className) new], nil,
          @"/snapchat.janus.api.LoginService/AppLogin", nil, nil) == sample);
    CHECK(TestDrainMainQueue());
    NSString *base64 = [sample base64EncodedStringWithOptions:0];
    CHECK([TestClipboardSnapshots.lastObject containsString:[@"bytes=1421 base64=" stringByAppendingString:base64]]);
    CHECK([TestClipboardSnapshots.lastObject containsString:@"source=request.iosDeviceCheckToken"]);
    CHECK([TestClipboardSnapshots.lastObject containsString:@"SS06_SYNTHETIC_DEVICE_TOKEN"]);

    // Le callback peut arriver après le retour de la méthode, sur une autre file.
    __block NSUInteger valueCallbacks = 0;
    __block id lastValue;
    __block BOOL callbackOnMain = YES;
    id valueHandler = ^(id value) { ++valueCallbacks; lastValue = value; callbackOnMain = [NSThread isMainThread]; };
    TestInvokeTransport(device, [objc_getClass(device->className) new], valueHandler, nil, nil, nil);
    CHECK(valueCallbacks == 0 && TestDeviceCompletion != nil);
    NSMutableString *synthetic = [@"SS06_SYNTHETIC_TOKEN\n\"%@" mutableCopy];
    dispatch_group_t group = dispatch_group_create();
    dispatch_group_async(group, dispatch_get_global_queue(QOS_CLASS_DEFAULT, 0), ^{ TestDeviceCompletion(synthetic); });
    CHECK(dispatch_group_wait(group, dispatch_time(DISPATCH_TIME_NOW, 5 * NSEC_PER_SEC)) == 0);
    CHECK(valueCallbacks == 1 && lastValue == synthetic && !callbackOnMain);
    TestDeviceCompletion(nil);
    CHECK(valueCallbacks == 2 && lastValue == nil);
    TestDeviceCompletion(@"");
    CHECK(valueCallbacks == 3 && [lastValue isEqual:@""]);
    TestDeviceCompletion(@"DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11");
    CHECK(valueCallbacks == 4 && [lastValue isEqual:@"DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11"]);
    CHECK(TestDrainMainQueue());
    NSData *json = [NSJSONSerialization dataWithJSONObject:@{@"token": synthetic} options:0 error:NULL];
    CHECK([TestClipboardSnapshots.lastObject containsString:[[NSString alloc] initWithData:json encoding:NSUTF8StringEncoding]]);
    CHECK([TestClipboardSnapshots.lastObject containsString:@"source=devicecheck.callback"]);
    CHECK([TestClipboardSnapshots.lastObject containsString:@"requestPath=unknown pathSource=unavailable"]);

    id throwingHandler = ^(__unused id value) { @throw TestTransportException; };
    TestInvokeTransport(device, [objc_getClass(device->className) new], throwingHandler, nil, nil, nil);
    BOOL callbackException = NO;
    @try { TestDeviceCompletion(synthetic); }
    @catch (NSException *exception) { callbackException = exception == TestTransportException; }
    CHECK(callbackException);
    TestDeviceCompletion = nil;
    puts("PASS: complete 1421-byte base64 capture, setter value, asynchronous DeviceCheck values, object/queue/callback exceptions preserved");
    return 0;
}
