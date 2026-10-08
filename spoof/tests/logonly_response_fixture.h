// Synthetic responses only. No Snapchat session or network access.
@interface SS06TestRPCRequest : GPBMessage
@property(nonatomic, copy) NSData *clientAttestationPayload;
@property(nonatomic, copy) NSString *iosDeviceCheckToken;
@end
@implementation SS06TestRPCRequest
@end

@interface SS06TestRPCErrorData : GPBMessage
@property(nonatomic, copy) NSString *humanReadableErrorMessage;
@end
@implementation SS06TestRPCErrorData
@end

static NSUInteger TestErrorDataReads;
static BOOL TestStatusThrows;
@interface SS06TestRPCResponse : GPBMessage
@property(nonatomic) int testStatus;
@property(nonatomic, strong) SS06TestRPCErrorData *heldErrorData;
- (int)statusCode;
- (BOOL)hasErrorData;
- (SS06TestRPCErrorData *)errorData;
@end
@implementation SS06TestRPCResponse
- (int)statusCode
{
    if (TestStatusThrows) [NSException raise:@"ObservationFailure" format:@"SS06_PRIVATE_TEST_SENTINEL"];
    return self.testStatus;
}
- (BOOL)hasErrorData { return self.heldErrorData != nil; }
- (SS06TestRPCErrorData *)errorData { ++TestErrorDataReads; return self.heldErrorData; }
@end

static NSString *TestRPCLine(unsigned long long call, NSString *stage)
{
    NSString *marker = [NSString stringWithFormat:@" call=%llu stage=%@ ", call, stage];
    @synchronized (SS06LogOnlyHistory) {
        for (NSString *line in [SS06LogOnlyHistory componentsSeparatedByString:@"\n"])
            if ([line containsString:marker]) return line;
    }
    return nil;
}

static NSDictionary *TestRPCFacts(unsigned long long call, NSString *stage)
{
    NSString *line = TestRPCLine(call, stage);
    if (!line) return nil;
    NSRange marker = [line rangeOfString:@" facts="];
    if (marker.location == NSNotFound) return nil;
    NSData *json = [[line substringFromIndex:NSMaxRange(marker)] dataUsingEncoding:NSUTF8StringEncoding];
    return [NSJSONSerialization JSONObjectWithData:json options:0 error:NULL];
}

static int TestRPCResponses(void)
{
    SS06TestRPCRequest *request = [SS06TestRPCRequest new];
    request.clientAttestationPayload = [@"abc" dataUsingEncoding:NSUTF8StringEncoding];
    request.iosDeviceCheckToken = @"DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11";
    SS06TestRPCResponse *reply = [SS06TestRPCResponse new];
    reply.testStatus = 7;
    reply.heldErrorData = [SS06TestRPCErrorData new];
    reply.heldErrorData.humanReadableErrorMessage = @"SS06_PRIVATE_TEST_SENTINEL: refused (SS06). SS03; XSS18Y SS069";
    NSError *error = [NSError errorWithDomain:@"TestRPCTransport" code:-17
        userInfo:@{NSLocalizedDescriptionKey: @"SS06_PRIVATE_TEST_SENTINEL"}];
    __block NSUInteger callbacks = 0;
    __block id receivedReply, receivedError;
    __block BOOL callbackOnMain = YES;
    id handler = ^(id value, id failure) {
        ++callbacks; receivedReply = value; receivedError = failure;
        callbackOnMain = [NSThread isMainThread];
    };
    CHECK(SS06LogOnlyHasResponseBlockSignature(handler));
    CHECK(SS06LogOnlyHasResponseBlockSignature(^(__unused id a, __unused id b) {}));
    CHECK(!SS06LogOnlyHasResponseBlockSignature(^(__unused id a) {}));
    CHECK(!SS06LogOnlyHasResponseBlockSignature(^(__unused id a, __unused NSInteger b) {}));
    CHECK(!SS06LogOnlyHasResponseBlockSignature(^id(__unused id a, __unused id b) { return nil; }));
    CHECK(!SS06LogOnlyHasResponseBlockSignature([NSObject new]));
    CHECK(!SS06LogOnlyHasResponseBlockSignature(nil));
    CHECK([SS06LogOnlySHA256(request.clientAttestationPayload) isEqualToString:
        @"ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"]);

    NSUInteger observed = 0;
    SS06LogOnlyTarget *rpc = NULL;
    for (NSUInteger index = 0; index < SS06LogOnlyTargetCount; ++index) {
        SS06LogOnlyTarget *target = &SS06LogOnlyTargets[index];
        if (target->kind != SS06LogOnlyRPC) continue;
        rpc = target;
        id receiver = [objc_getClass(target->className) new];
        TestInvokeTransport(target, receiver, request, nil, handler, nil);
        unsigned long long call = atomic_load(&SS06LogOnlyCallSequence);
        id forwarded = TestTransportArgs[2];
        CHECK(forwarded && forwarded != handler && callbacks == observed);
        CHECK(TestTransportArgs[0] == request && TestTransportArgs[1] == nil);
        CHECK(TestRPCLine(call, @"rpc.local_return") != nil);
        CHECK(TestRPCLine(call, @"rpc.response") == nil);
        NSDictionary *sent = TestRPCFacts(call, @"rpc.request");
        CHECK([sent[@"attestation_bytes"] unsignedIntegerValue] == 3);
        CHECK([sent[@"attestation_sha256"] isEqual:SS06LogOnlySHA256(request.clientAttestationPayload)]);
        CHECK([sent[@"devicecheck_state"] isEqual:@"unavailability_sentinel"]);
        ((void (^)(id, id))forwarded)(reply, nil);
        ++observed;
        CHECK(callbacks == observed && receivedReply == reply && receivedError == nil);
        NSDictionary *received = TestRPCFacts(call, @"rpc.response");
        CHECK([received[@"response_present"] boolValue] && ![received[@"transport_error_present"] boolValue]);
        CHECK([received[@"status_code"] intValue] == 7);
        CHECK(([received[@"support_codes"] isEqual:@[@"SS06", @"SS03"]]));
        CHECK([received[@"message_source"] isEqual:@"errorData.humanReadableErrorMessage"]);
        CHECK([received[@"server_rule"] isEqual:@"unknown"]);
        CHECK([TestRPCLine(call, @"rpc.response") containsString:[NSString stringWithUTF8String:target->path]]);
    }
    CHECK(observed == 27 && rpc != NULL);

    // Reuse the SAME request object for concurrent RPCs, respond out of order.
    id receiver = [objc_getClass(rpc->className) new];
    TestInvokeTransport(rpc, receiver, request, nil, handler, nil);
    unsigned long long first = atomic_load(&SS06LogOnlyCallSequence);
    id firstCompletion = TestTransportArgs[2];
    TestInvokeTransport(rpc, receiver, request, nil, handler, nil);
    unsigned long long second = atomic_load(&SS06LogOnlyCallSequence);
    id secondCompletion = TestTransportArgs[2];
    CHECK(first != second && firstCompletion != secondCompletion);
    dispatch_group_t group = dispatch_group_create();
    dispatch_group_async(group, dispatch_get_global_queue(QOS_CLASS_DEFAULT, 0), ^{
        ((void (^)(id, id))secondCompletion)(nil, error);
        ((void (^)(id, id))firstCompletion)(reply, nil);
    });
    CHECK(dispatch_group_wait(group, dispatch_time(DISPATCH_TIME_NOW, 5 * NSEC_PER_SEC)) == 0);
    CHECK(!callbackOnMain && callbacks == observed + 2);
    CHECK(![TestRPCFacts(second, @"rpc.response")[@"response_present"] boolValue]);
    CHECK([TestRPCFacts(second, @"rpc.response")[@"error_code"] integerValue] == -17);
    CHECK([TestRPCFacts(second, @"rpc.response")[@"error_domain"] isEqual:@"TestRPCTransport"]);
    CHECK(TestRPCFacts(second, @"rpc.response")[@"support_codes"] == nil);
    CHECK(([TestRPCFacts(first, @"rpc.response")[@"support_codes"] isEqual:@[@"SS06", @"SS03"]]));

    // Absence stays absent; observing must not autocreate a protobuf submessage.
    reply.heldErrorData = nil;
    NSUInteger readsBefore = TestErrorDataReads;
    TestInvokeTransport(rpc, receiver, request, nil, handler, nil);
    unsigned long long absent = atomic_load(&SS06LogOnlyCallSequence);
    ((void (^)(id, id))TestTransportArgs[2])(reply, nil);
    CHECK(TestErrorDataReads == readsBefore && reply.heldErrorData == nil);
    CHECK(![TestRPCFacts(absent, @"rpc.response")[@"error_data_present"] boolValue]);

    // A synchronous completion is observed before local_return.
    TestRPCRepliesSynchronously = YES;
    TestRPCReply = reply; TestRPCError = error;
    NSUInteger before = callbacks;
    TestInvokeTransport(rpc, receiver, request, nil, handler, nil);
    unsigned long long synchronous = atomic_load(&SS06LogOnlyCallSequence);
    CHECK(callbacks == before + 1 && receivedReply == reply && receivedError == error);
    CHECK(TestRPCFacts(synchronous, @"rpc.response") != nil);
    NSString *snapshot = [SS06LogOnlyHistory copy];
    CHECK([snapshot rangeOfString:TestRPCLine(synchronous, @"rpc.response")].location <
          [snapshot rangeOfString:TestRPCLine(synchronous, @"rpc.local_return")].location);
    TestRPCRepliesSynchronously = NO; TestRPCReply = nil; TestRPCError = nil;

    // Observation exceptions cannot suppress a completion; original exceptions escape.
    TestStatusThrows = YES;
    TestInvokeTransport(rpc, receiver, request, nil, handler, nil);
    before = callbacks;
    ((void (^)(id, id))TestTransportArgs[2])(reply, error);
    CHECK(callbacks == before + 1 && receivedReply == reply && receivedError == error);
    TestStatusThrows = NO;
    id throwing = ^(__unused id value, __unused id failure) { @throw TestTransportException; };
    TestInvokeTransport(rpc, receiver, request, nil, throwing, nil);
    BOOL propagated = NO;
    @try { ((void (^)(id, id))TestTransportArgs[2])(nil, nil); }
    @catch (NSException *exception) { propagated = exception == TestTransportException; }
    CHECK(propagated);
    TestInvokeTransport(rpc, receiver, request, nil, nil, nil);
    CHECK(TestTransportArgs[2] == nil);

    CHECK(TestDrainMainQueue());
    NSString *history = TestClipboardSnapshots.lastObject;
    CHECK([history containsString:@"stage=rpc.response"] && [history containsString:@"trace="]);
    CHECK(![history containsString:@"SS06_PRIVATE_TEST_SENTINEL"]);
    CHECK(TestDescriptionCalls == 0 && TestDataCalls == 0);
    puts("PASS: 27 correlated RPC completions, fingerprint, SS06 source, out-of-order reuse, transport errors, presence, signature guards, object/queue/exception preservation");
    return 0;
}
