// Synthetic metrics only; no network or Snapchat services.
@interface SCNGrpcRPCInfo : NSObject
@property(nonatomic, copy) NSString *serviceMethodName, *host, *protocol;
@property(nonatomic) int64_t channelType;
@property(nonatomic) bool connectionReused;
@property(nonatomic) int32_t dnsResolveInMillis, connetionSetupInMillis, sslSetupInMillis, reqWireSize, responseWireSize;
@property(nonatomic, strong) NSNumber *cronetErrorCode;
@end
@implementation SCNGrpcRPCInfo
@end

static BOOL TestMetricsGetterThrows;
@interface SCNGrpcUnaryMetricsInfo : NSObject
@property(nonatomic, strong) SCNGrpcRPCInfo *rpcInfo;
@property(nonatomic, strong) NSNumber *testAuthSuccess, *argosSuccess;
@property(nonatomic) int64_t connectionTime, networkTTFB, responseTime, requestSize, responseSize;
@property(nonatomic) int64_t authLatency, argosLatency, serverLatency, argosType;
@property(nonatomic) int32_t statusCode;
@property(nonatomic) bool success;
@property(nonatomic, copy) NSString *taskId, *requestId, *responseContentType, *responseContentEncoding;
- (NSNumber *)authSuccess;
- (id)consistentIdTracking;
@end
@implementation SCNGrpcUnaryMetricsInfo
- (NSNumber *)authSuccess
{
    if (TestMetricsGetterThrows) [NSException raise:@"MetricGetterFailure" format:@"SS06_PRIVATE_METRIC_SENTINEL"];
    return self.testAuthSuccess;
}
- (id)consistentIdTracking
{
    [NSException raise:@"ForbiddenMetricRead" format:@"must not read persistent tracking identifiers"];
    return nil;
}
@end

static NSUInteger TestMetricsOriginalCalls;
static id TestMetricsOriginalArgument;
static SEL TestMetricsOriginalCommand;
static NSException *TestMetricsOriginalException;
static void *TestMetricsQueueKey = &TestMetricsQueueKey;
static void *TestMetricsObservedQueue;
@interface SCGrpcEventLogger : NSObject
- (void)logUnaryBlizzard:(id)metrics;
@end
@implementation SCGrpcEventLogger
- (void)logUnaryBlizzard:(id)metrics
{
    ++TestMetricsOriginalCalls;
    TestMetricsOriginalArgument = metrics;
    TestMetricsOriginalCommand = _cmd;
    TestMetricsObservedQueue = dispatch_get_specific(TestMetricsQueueKey);
    if (TestMetricsOriginalException) @throw TestMetricsOriginalException;
}
@end

@interface SS06TestWrongMetricGetter : NSObject
- (double)statusCode;
@end
@implementation SS06TestWrongMetricGetter
- (double)statusCode { [NSException raise:@"WrongGetterWasCalled" format:@"test"]; return 0; }
@end

static int TestMetricsObservations(void)
{
    CHECK(SS06LogOnlyInstallMetricsObserver());
    SCGrpcEventLogger *logger = [SCGrpcEventLogger new];
    SCNGrpcUnaryMetricsInfo *metrics = [SCNGrpcUnaryMetricsInfo new];
    metrics.rpcInfo = [SCNGrpcRPCInfo new];
    metrics.rpcInfo.serviceMethodName = @"snapchat.janus.api.LoginService/LoginWithPassword";
    metrics.rpcInfo.host = @"example.invalid";
    metrics.rpcInfo.protocol = @"h2";
    metrics.rpcInfo.channelType = 2;
    metrics.rpcInfo.connectionReused = true;
    metrics.rpcInfo.cronetErrorCode = @(-105);
    metrics.rpcInfo.reqWireSize = 500;
    metrics.rpcInfo.responseWireSize = 300;
    metrics.testAuthSuccess = @NO;
    metrics.argosSuccess = @YES;
    metrics.serverLatency = 123;
    metrics.statusCode = 0;
    metrics.success = true;
    metrics.taskId = @"SS06_PRIVATE_METRIC_SENTINEL-task";
    metrics.requestId = @"SS06_PRIVATE_METRIC_SENTINEL-request";
    metrics.responseContentType = @"application/grpc";
    dispatch_queue_t queue = dispatch_queue_create("metrics.fixture", DISPATCH_QUEUE_SERIAL);
    dispatch_queue_set_specific(queue, TestMetricsQueueKey, TestMetricsQueueKey, NULL);
    unsigned long long call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    dispatch_sync(queue, ^{ [logger logUnaryBlizzard:metrics]; });
    CHECK(TestMetricsOriginalCalls == 1 && TestMetricsOriginalArgument == metrics);
    CHECK(TestMetricsOriginalCommand == @selector(logUnaryBlizzard:));
    CHECK(TestMetricsObservedQueue == TestMetricsQueueKey);
    NSDictionary *facts = TestRPCFacts(call, @"transport.metrics");
    CHECK([facts[@"authSuccess"] isEqual:@NO] && [facts[@"argosSuccess"] isEqual:@YES]);
    CHECK([facts[@"authSuccess_state"] isEqual:@"observed"]);
    CHECK([facts[@"rpc_link"] isEqual:@"unverified"] && !facts[@"rpc_call"]);
    CHECK([facts[@"serverLatency"] isEqual:@123]);
    CHECK([facts[@"statusCode_semantics"] isEqual:@"native_metrics_not_Janus"]);
    CHECK([facts[@"rpcInfo"][@"cronetErrorCode"] isEqual:@(-105)]);
    CHECK([facts[@"taskId_sha256"] isEqual:SS06LogOnlySHA256([metrics.taskId dataUsingEncoding:NSUTF8StringEncoding])]);
    CHECK(!facts[@"taskId"] && !facts[@"requestId"] && !facts[@"consistentIdTracking"]);
    CHECK([facts[@"responseContentEncoding_state"] isEqual:@"nil"]);

    // nil is not false; a failing getter does not hide other facts or delivery.
    metrics.testAuthSuccess = nil;
    metrics.argosSuccess = @2;
    call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    [logger logUnaryBlizzard:metrics];
    facts = TestRPCFacts(call, @"transport.metrics");
    CHECK([facts[@"authSuccess_state"] isEqual:@"nil"] && !facts[@"authSuccess"]);
    CHECK([facts[@"argosSuccess_state"] isEqual:@"unexpected_boolean_value"] && !facts[@"argosSuccess"]);
    TestMetricsGetterThrows = YES;
    call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    [logger logUnaryBlizzard:metrics];
    facts = TestRPCFacts(call, @"transport.metrics");
    CHECK([facts[@"authSuccess_state"] isEqual:@"observation_failed"]);
    CHECK([facts[@"serverLatency"] isEqual:@123]);
    TestMetricsGetterThrows = NO;

    // A synchronous exact-path link is explicit; a later record cannot reuse it.
    SS06LogOnlyActiveRPCCall = 777;
    SS06LogOnlyActiveRPCPath = "/snapchat.janus.api.LoginService/LoginWithPassword";
    call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    [logger logUnaryBlizzard:metrics];
    facts = TestRPCFacts(call, @"transport.metrics");
    CHECK([facts[@"rpc_link"] isEqual:@"same_rpc_stack"] && [facts[@"rpc_call"] isEqual:@777]);
    metrics.rpcInfo.serviceMethodName = @"/snapchat.janus.api.RegistrationService/RegisterWithUsernamePassword";
    call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    [logger logUnaryBlizzard:metrics];
    facts = TestRPCFacts(call, @"transport.metrics");
    CHECK([facts[@"rpc_link"] isEqual:@"unverified"] && !facts[@"rpc_call"]);
    SS06LogOnlyActiveRPCCall = 0; SS06LogOnlyActiveRPCPath = NULL;
    metrics.rpcInfo.serviceMethodName = @"/snapchat.janus.api.LoginService/LoginWithPassword";
    call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    [logger logUnaryBlizzard:metrics];
    CHECK([TestRPCFacts(call, @"transport.metrics")[@"rpc_link"] isEqual:@"unverified"]);

    NSMutableDictionary *typed = [NSMutableDictionary new];
    SS06LogOnlyMetricScalar([SS06TestWrongMetricGetter new], "statusCode", 'i', typed);
    CHECK([typed[@"statusCode_state"] isEqual:@"getter_unavailable"] && !typed[@"statusCode"]);
    metrics.rpcInfo.host = @"example.invalid?token=SS06_PRIVATE_METRIC_SENTINEL";
    call = atomic_load(&SS06LogOnlyCallSequence) + 1;
    [logger logUnaryBlizzard:metrics];
    CHECK([TestRPCFacts(call, @"transport.metrics")[@"rpcInfo"][@"host_state"] isEqual:@"omitted_characters"]);

    // The observer never enables metrics, replaces the delegate, or calls the
    // original twice. Foreign paths, query suffixes, wrong objects and nil pass.
    NSUInteger beforeCalls = TestMetricsOriginalCalls;
    unsigned long long beforeSequence = atomic_load(&SS06LogOnlyCallSequence);
    metrics.rpcInfo.serviceMethodName = @"/unrelated.Service/Method";
    [logger logUnaryBlizzard:metrics];
    metrics.rpcInfo.serviceMethodName = @"/snapchat.janus.api.LoginService/LoginWithPassword?x=1";
    [logger logUnaryBlizzard:metrics];
    [logger logUnaryBlizzard:[NSObject new]];
    [logger logUnaryBlizzard:nil];
    CHECK(TestMetricsOriginalCalls == beforeCalls + 4);
    CHECK(atomic_load(&SS06LogOnlyCallSequence) == beforeSequence);
    TestMetricsOriginalException = [NSException exceptionWithName:@"OriginalMetricException" reason:@"test" userInfo:nil];
    BOOL preserved = NO;
    @try { [logger logUnaryBlizzard:metrics]; }
    @catch (NSException *exception) { preserved = exception == TestMetricsOriginalException; }
    CHECK(preserved && TestMetricsOriginalCalls == beforeCalls + 5);
    TestMetricsOriginalException = nil;
    CHECK(![SS06LogOnlyHistory containsString:@"SS06_PRIVATE_METRIC_SENTINEL"]);
    puts("PASS: native metrics nil/false/true, scalar ABI guards, exact path filter, identifier hashes, no stale RPC link, identity/queue/exceptions");
    return 0;
}
