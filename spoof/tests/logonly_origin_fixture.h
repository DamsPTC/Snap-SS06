// Synthetic transport events; no real server, credentials or device access.
static NSUInteger TestRegistrationHeaderReads;
@interface SS06TestRegistrationRequest : GPBMessage
@property(nonatomic, strong) SS06TestRPCRequest *heldHeader;
- (BOOL)hasRegistrationHeader;
- (id)registrationHeader;
@end
@implementation SS06TestRegistrationRequest
- (BOOL)hasRegistrationHeader { return self.heldHeader != nil; }
- (id)registrationHeader
{
    ++TestRegistrationHeaderReads;
    if (!self.heldHeader) self.heldHeader = [SS06TestRPCRequest new];
    return self.heldHeader;
}
@end

static BOOL TestWireSchemaThrows;
static uint32_t TestWireStatusNumber = 7;
@interface SS06TestWireFieldDescriptor : NSObject
@property(nonatomic) uint32_t number;
@end
@implementation SS06TestWireFieldDescriptor
@end
@interface SS06TestWireDescriptor : NSObject
- (id)fieldWithName:(NSString *)name;
@end
@implementation SS06TestWireDescriptor
- (id)fieldWithName:(NSString *)name
{
    if (TestWireSchemaThrows) [NSException raise:@"WireSchemaFailure" format:@"SS06_PRIVATE_TEST_SENTINEL"];
    SS06TestWireFieldDescriptor *field = [SS06TestWireFieldDescriptor new];
    if ([name isEqualToString:@"statusCode"]) field.number = TestWireStatusNumber;
    if ([name isEqualToString:@"errorData"]) field.number = 11;
    if ([name isEqualToString:@"humanReadableErrorMessage"]) field.number = 3;
    return field.number ? field : nil;
}
@end
@interface SCJanusLoginWithPasswordResponse : SS06TestRPCResponse
+ (id)descriptor;
@end
@implementation SCJanusLoginWithPasswordResponse
+ (id)descriptor { return [SS06TestWireDescriptor new]; }
@end
@interface SCJanusRegisterWithUsernamePasswordResponse : SCJanusLoginWithPasswordResponse
@end
@implementation SCJanusRegisterWithUsernamePasswordResponse
@end
@interface SCJanusErrorData : SS06TestRPCErrorData
+ (id)descriptor;
@end
@implementation SCJanusErrorData
+ (id)descriptor { return [SS06TestWireDescriptor new]; }
@end
@interface SCNGrpcStatus : NSObject
@property(nonatomic) int64_t statusCode;
@property(nonatomic, copy) NSString *errorString;
@end
@implementation SCNGrpcStatus
@end

static NSUInteger TestWireOriginalCalls;
static id TestWireEvent, TestWireStatus;
static SEL TestWireCommand;
static id TestNextWireReply;
@interface SCNGrpcUnaryEventHandlerImpl : NSObject
@property(nonatomic, copy) void (^completion)(id, id);
@property(nonatomic, strong) id reply;
- (void)onEvent:(id)event status:(id)status;
@end
@implementation SCNGrpcUnaryEventHandlerImpl
- (void)onEvent:(id)event status:(id)status
{
    ++TestWireOriginalCalls;
    TestWireEvent = event; TestWireStatus = status; TestWireCommand = _cmd;
    if (self.completion) self.completion(self.reply, status);
}
@end
static id TestMakeUnaryHandler(id completion)
{
    SCNGrpcUnaryEventHandlerImpl *handler = [SCNGrpcUnaryEventHandlerImpl new];
    handler.completion = completion; handler.reply = TestNextWireReply;
    return handler;
}

static NSData *TestWireBytes(unsigned char status, NSString *message)
{
    NSData *text = [message dataUsingEncoding:NSUTF8StringEncoding];
    const unsigned char head[] = {(unsigned char)(TestWireStatusNumber << 3), status, 0x5a,
        (unsigned char)(text.length + 2), 0x1a, (unsigned char)text.length};
    NSMutableData *data = [NSMutableData dataWithBytes:head length:sizeof(head)];
    [data appendData:text];
    return data;
}

static int TestOriginObservations(void)
{
    CHECK(SS06LogOnlyInstallReceiveObserver());
    SS06TestRegistrationRequest *request = [SS06TestRegistrationRequest new];
    request.heldHeader = [SS06TestRPCRequest new];
    request.heldHeader.clientAttestationPayload = [@"abc" dataUsingEncoding:NSUTF8StringEncoding];
    request.heldHeader.iosDeviceCheckToken = @"synthetic-token";
    SS06LogOnlyRequestFacts(90001, @"/test.Registration/Register", request);
    NSDictionary *facts = TestRPCFacts(90001, @"rpc.request");
    CHECK([facts[@"request_context_source"] isEqual:@"registrationHeader"]);
    CHECK([facts[@"registration_header_present"] boolValue]);
    CHECK([facts[@"attestation_bytes"] integerValue] == 3);
    CHECK([facts[@"attestation_sha256"] isEqual:@"ba7816bf8f01cfea414140de5dae2223b00361a396177a9cb410ff61f20015ad"]);
    CHECK([facts[@"devicecheck_chars"] integerValue] == 15);
    request.heldHeader = nil;
    NSUInteger reads = TestRegistrationHeaderReads;
    SS06LogOnlyRequestFacts(90002, @"/test.Registration/Register", request);
    CHECK(TestRegistrationHeaderReads == reads && !request.heldHeader);
    CHECK([TestRPCFacts(90002, @"rpc.request")[@"attestation_state"] isEqual:@"container_absent"]);

    NSString *message = @"Synthetic refusal SS03";
    NSData *wire = TestWireBytes(20, message);
    NSMutableDictionary *raw = [NSMutableDictionary new];
    SS06LogOnlyWireResponse(wire, [SCJanusRegisterWithUsernamePasswordResponse class], [SCJanusErrorData class], raw);
    CHECK([raw[@"wire_status_field_number"] integerValue] == 7);
    CHECK([raw[@"wire_status_code"] integerValue] == 20);
    CHECK(([raw[@"wire_support_codes"] isEqual:@[@"SS03"]]));
    CHECK([raw[@"wire_message"][@"message_preview"] isEqual:message]);
    TestWireStatusNumber = 4;
    raw = [NSMutableDictionary new];
    SS06LogOnlyWireResponse(TestWireBytes(16, message), [SCJanusLoginWithPasswordResponse class], [SCJanusErrorData class], raw);
    CHECK([raw[@"wire_status_field_number"] integerValue] == 4 && [raw[@"wire_status_code"] integerValue] == 16);
    TestWireStatusNumber = 7;
    // Duplicates are explicit, not silently interpreted as the active payload.
    NSMutableData *duplicates = [wire mutableCopy]; [duplicates appendData:wire];
    raw = [NSMutableDictionary new];
    SS06LogOnlyWireResponse(duplicates, [SCJanusLoginWithPasswordResponse class], [SCJanusErrorData class], raw);
    CHECK([raw[@"wire_status_occurrences"] integerValue] == 2 && !raw[@"wire_status_code"] && !raw[@"wire_message"]);
    for (NSUInteger length = 1; length < wire.length; ++length) {
        SS06LogOnlyWireField field = SS06LogOnlyFindWireField([wire subdataWithRange:NSMakeRange(0, length)], 11);
        CHECK(!field.valid || field.occurrences == 0);
    }
    const unsigned char malformed[] = {0x5a, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 2};
    CHECK(!SS06LogOnlyFindWireField([NSData dataWithBytes:malformed length:sizeof(malformed)], 11).valid);
    CHECK(!SS06LogOnlyFindWireField([NSMutableData dataWithLength:262145], 11).valid);
    const unsigned char groupTag[] = {0x0b};
    CHECK(!SS06LogOnlyFindWireField([NSData dataWithBytes:groupTag length:sizeof(groupTag)], 11).valid);
    raw = [NSMutableDictionary new];
    SS06LogOnlyWireResponse(wire, Nil, Nil, raw);
    CHECK([raw[@"wire_schema_state"] isEqual:@"unavailable"] && !raw[@"wire_status_code"]);

    SS06LogOnlyTarget *login = NULL, *registration = NULL;
    for (NSUInteger i = 0; i < SS06LogOnlyTargetCount; ++i) {
        if (!strcmp(SS06LogOnlyTargets[i].selectorName, "loginWithPasswordWithRequest:callOptionsBuilder:handler:")) login = &SS06LogOnlyTargets[i];
        if (!strcmp(SS06LogOnlyTargets[i].selectorName, "registerWithUsernamePasswordWithRequest:callOptionsBuilder:handler:")) registration = &SS06LogOnlyTargets[i];
    }
    CHECK(login && registration);
    SCJanusLoginWithPasswordResponse *loginReply = [SCJanusLoginWithPasswordResponse new]; loginReply.testStatus = 16;
    SCJanusRegisterWithUsernamePasswordResponse *registrationReply = [SCJanusRegisterWithUsernamePasswordResponse new]; registrationReply.testStatus = 20;
    __block NSUInteger completions = 0;
    __block id lastReply, lastStatus;
    __block BOOL onMain = YES;
    id completion = ^(id response, id error) { ++completions; lastReply = response; lastStatus = error; onMain = [NSThread isMainThread]; };
    TestRPCUsesTransport = YES;
    TestNextWireReply = loginReply;
    TestInvokeTransport(login, [objc_getClass(login->className) new], request, nil, completion, nil);
    SCNGrpcUnaryEventHandlerImpl *first = TestTransportArgs[3];
    NSDictionary *firstContext = objc_getAssociatedObject(first, &SS06LogOnlyTransportContextKey);
    TestNextWireReply = registrationReply;
    TestInvokeTransport(registration, [objc_getClass(registration->className) new], request, nil, completion, nil);
    SCNGrpcUnaryEventHandlerImpl *second = TestTransportArgs[3];
    NSDictionary *secondContext = objc_getAssociatedObject(second, &SS06LogOnlyTransportContextKey);
    TestRPCUsesTransport = NO; TestNextWireReply = nil;
    CHECK(firstContext && secondContext && first != second);
    CHECK(SS06LogOnlyActiveRPCCall == 0 && SS06LogOnlyActiveRPCPath == NULL);
    unsigned long long firstRPC = [firstContext[@"rpc_call"] unsignedLongLongValue];
    unsigned long long secondRPC = [secondContext[@"rpc_call"] unsignedLongLongValue];
    CHECK(firstRPC && secondRPC && firstRPC != secondRPC);
    NSUInteger before = TestWireOriginalCalls;
    dispatch_group_t group = dispatch_group_create();
    dispatch_group_async(group, dispatch_get_global_queue(QOS_CLASS_DEFAULT, 0), ^{ [second onEvent:wire status:nil]; });
    CHECK(dispatch_group_wait(group, dispatch_time(DISPATCH_TIME_NOW, 5 * NSEC_PER_SEC)) == 0);
    CHECK(completions == 1 && !onMain && lastReply == registrationReply && lastStatus == nil);
    CHECK(TestWireEvent == wire && TestWireStatus == nil && TestWireOriginalCalls == before + 1);
    CHECK(TestWireCommand == sel_registerName("onEvent:status:"));
    facts = TestRPCFacts(secondRPC, @"rpc.response");
    CHECK([facts[@"transport_delivery_link"] isEqual:@"same_onEvent_stack"]);
    unsigned long long received = [facts[@"transport_event_call"] unsignedLongLongValue];
    NSDictionary *eventFacts = TestRPCFacts(received, @"transport.event");
    CHECK([eventFacts[@"rpc_call"] unsignedLongLongValue] == secondRPC);
    CHECK([eventFacts[@"wire_status_code"] integerValue] == 20);
    CHECK(([eventFacts[@"wire_support_codes"] isEqual:@[@"SS03"]]));
    CHECK([eventFacts[@"event_sha256"] isEqual:SS06LogOnlySHA256(wire)]);
    CHECK([eventFacts[@"network_origin"] isEqual:@"unverified"]);
    CHECK([eventFacts[@"origin_stack"] count] > 0);
    [first onEvent:TestWireBytes(16, message) status:nil];
    CHECK(completions == 2 && lastReply == loginReply);
    CHECK([TestRPCFacts(firstRPC, @"rpc.response")[@"transport_call"] isEqual:firstContext[@"transport_call"]]);
    CHECK(SS06LogOnlyDeliveryRPC == 0 && SS06LogOnlyDeliveryEvent == 0);

    // The raw status object is separate from Janus' enum, and is passed intact.
    SCNGrpcStatus *status = [SCNGrpcStatus new]; status.statusCode = 14;
    status.errorString = @"Unavailable for synthetic@example.invalid";
    [first onEvent:nil status:status];
    facts = TestRPCFacts(atomic_load(&SS06LogOnlyCallSequence), @"transport.event");
    CHECK([facts[@"grpc_status_code"] integerValue] == 14);
    CHECK([facts[@"grpc_error"][@"message_preview"] isEqual:@"Unavailable for [email]"]);
    CHECK(lastStatus == status && TestWireStatus == status && !TestWireEvent);

    TestWireSchemaThrows = YES;
    before = completions;
    [first onEvent:wire status:nil];
    CHECK(completions == before + 1 && lastReply == loginReply);
    TestWireSchemaThrows = NO;
    // Original completion exceptions must escape, while restoring TLS scope.
    first.completion = ^(__unused id response, __unused id error) { @throw TestTransportException; };
    BOOL threw = NO;
    @try { [first onEvent:wire status:nil]; }
    @catch (NSException *exception) { threw = exception == TestTransportException; }
    CHECK(threw && SS06LogOnlyDeliveryRPC == 0 && SS06LogOnlyDeliveryEvent == 0);
    first.completion = nil;
    SS06LogOnlyBindTransportHandler(first, 90003, firstContext[@"path"]);
    [first onEvent:wire status:nil];
    facts = TestRPCFacts(atomic_load(&SS06LogOnlyCallSequence), @"transport.event");
    CHECK([facts[@"handler_link"] isEqual:@"ambiguous"] && ![facts[@"rpc_call"] unsignedLongLongValue]);
    // An unrelated handler produces no invented Janus association.
    SCNGrpcUnaryEventHandlerImpl *unlinked = [SCNGrpcUnaryEventHandlerImpl new];
    unsigned long long sequence = atomic_load(&SS06LogOnlyCallSequence);
    [unlinked onEvent:wire status:nil];
    CHECK(atomic_load(&SS06LogOnlyCallSequence) == sequence && TestWireEvent == wire);
    CHECK(TestDrainMainQueue());
    CHECK(![TestClipboardSnapshots.lastObject containsString:@"synthetic@example.invalid"]);
    CHECK(![TestClipboardSnapshots.lastObject containsString:@"SS06_PRIVATE_TEST_SENTINEL"]);
    CHECK(TestDescriptionCalls == 0 && TestDataCalls == 0);
    puts("PASS: registrationHeader presence, pre-decode wire fields, bounded malformed parsing, out-of-order handler correlation, status/stack observations, unchanged objects/queues/exceptions");
    return 0;
}
