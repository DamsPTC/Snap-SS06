// Observe the delivery boundary BEFORE SCNGrpcUnaryEventHandlerImpl decodes it.
// This is not a packet capture or proof of the private server's decision rule.
#include <dlfcn.h>
#include <execinfo.h>

static IMP SS06LogOnlyOriginalOnEvent;
static char SS06LogOnlyTransportContextKey;

// A bounded protobuf wire reader. It never serializes a request/response, and
// only exposes explicitly selected fields. Groups/duplicates fail closed.
typedef struct {
    BOOL valid;
    NSUInteger occurrences, offset, length;
    unsigned int type;
    uint64_t scalar;
} SS06LogOnlyWireField;

static BOOL SS06LogOnlyWireVarint(const uint8_t *bytes, NSUInteger length,
                                 NSUInteger *offset, uint64_t *value)
{
    *value = 0;
    for (unsigned int i = 0; i < 10; ++i) {
        if (*offset >= length) return NO;
        uint8_t byte = bytes[(*offset)++];
        if (i == 9 && byte > 1) return NO;
        *value |= (uint64_t)(byte & 127) << (7 * i);
        if (!(byte & 128)) return YES;
    }
    return NO;
}

static SS06LogOnlyWireField SS06LogOnlyFindWireField(NSData *data, uint32_t wanted)
{
    SS06LogOnlyWireField result = {0};
    if (!wanted || wanted > 0x1fffffff || data.length > 262144) return result;
    const uint8_t *bytes = data.bytes;
    NSUInteger length = data.length, offset = 0, fields = 0;
    while (offset < length) {
        uint64_t tag = 0, value = 0;
        if (++fields > 4096 || !SS06LogOnlyWireVarint(bytes, length, &offset, &tag) ||
            !(tag >> 3) || (tag >> 3) > 0x1fffffff) return result;
        NSUInteger start = offset, size = 0;
        unsigned int type = tag & 7;
        switch (type) {
            case 0:
                if (!SS06LogOnlyWireVarint(bytes, length, &offset, &value)) return result;
                break;
            case 1: size = 8; break;
            case 2:
                if (!SS06LogOnlyWireVarint(bytes, length, &offset, &value) || value > length - offset) return result;
                start = offset; size = (NSUInteger)value; break;
            case 5: size = 4; break;
            default: return result;
        }
        if (size > length - offset) return result;
        offset += size;
        if ((tag >> 3) == wanted) {
            ++result.occurrences;
            result.offset = start; result.length = size;
            result.type = type; result.scalar = value;
        }
    }
    result.valid = YES;
    return result;
}

static uint32_t SS06LogOnlyClassFieldNumber(Class cls, NSString *name)
{
    id field = SS06LogOnlyClassFieldDescriptor(cls, name);
    Method method = SS06LogOnlyGetter(field, "number", 'I');
    if (!method) return 0;
    uint32_t number = ((uint32_t (*)(id, SEL))method_getImplementation(method))(field, sel_registerName("number"));
    return number <= 0x1fffffff ? number : 0;
}

static void SS06LogOnlyWireResponse(NSData *data, Class responseClass, Class errorClass, NSMutableDictionary *facts)
{
    // Numbers come from the runtime schema; they are not inferred from 16/20.
    uint32_t statusNumber = SS06LogOnlyClassFieldNumber(responseClass, @"statusCode");
    uint32_t errorNumber = SS06LogOnlyClassFieldNumber(responseClass, @"errorData");
    uint32_t messageNumber = SS06LogOnlyClassFieldNumber(errorClass, @"humanReadableErrorMessage");
    facts[@"wire_schema_state"] = statusNumber && errorNumber && messageNumber ? @"available" : @"unavailable";
    if (!statusNumber || !errorNumber || !messageNumber) return;
    facts[@"wire_response_class"] = NSStringFromClass(responseClass);
    facts[@"wire_status_field_number"] = @(statusNumber);
    facts[@"wire_error_field_number"] = @(errorNumber);
    SS06LogOnlyWireField status = SS06LogOnlyFindWireField(data, statusNumber);
    SS06LogOnlyWireField failure = SS06LogOnlyFindWireField(data, errorNumber);
    facts[@"wire_scan_state"] = status.valid && failure.valid ? @"complete" : @"unsupported_or_malformed_or_over_limit";
    if (!status.valid || !failure.valid) return;
    facts[@"wire_status_occurrences"] = @(status.occurrences);
    facts[@"wire_error_occurrences"] = @(failure.occurrences);
    if (status.occurrences == 1 && status.type == 0 && status.scalar <= INT32_MAX)
        facts[@"wire_status_code"] = @(status.scalar);
    // A repeated message may require protobuf merging; do not invent a result.
    if (failure.occurrences != 1 || failure.type != 2) return;
    NSData *nested = [data subdataWithRange:NSMakeRange(failure.offset, failure.length)];
    SS06LogOnlyWireField message = SS06LogOnlyFindWireField(nested, messageNumber);
    facts[@"wire_message_scan_complete"] = @(message.valid);
    if (!message.valid || message.occurrences != 1 || message.type != 2) return;
    if (message.length > 16384) { facts[@"wire_message_state"] = @"over_limit"; return; }
    NSString *string = [[NSString alloc] initWithBytes:(const uint8_t *)nested.bytes + message.offset
                                               length:message.length encoding:NSUTF8StringEncoding];
    if (!string) { facts[@"wire_message_state"] = @"invalid_utf8"; return; }
    NSMutableDictionary *preview = [NSMutableDictionary new];
    SS06LogOnlyMessagePreview(string, preview);
    facts[@"wire_message"] = preview;
    facts[@"wire_support_codes"] = SS06LogOnlySupportCodes(string);
    facts[@"wire_message_state"] = @"observed_field";
    // Observed field does not assert which payload oneof the full decoder selects.
}

static NSArray *SS06LogOnlyOriginStack(void)
{
    void *frames[20];
    int count = backtrace(frames, 20);
    NSMutableArray *result = [NSMutableArray new];
    for (int i = 0; i < count; ++i) {
        Dl_info info = {0};
        if (!dladdr(frames[i], &info) || !info.dli_fbase || !info.dli_fname) continue;
        NSString *name = [[NSString stringWithUTF8String:info.dli_fname] lastPathComponent];
        NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:
            @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-"];
        if (!name.length || name.length > 128 || [name rangeOfCharacterFromSet:allowed.invertedSet].location != NSNotFound) name = @"redacted";
        uintptr_t address = (uintptr_t)frames[i], base = (uintptr_t)info.dli_fbase;
        if (address < base) continue;
        [result addObject:@{@"image":name, @"offset_hex":[NSString stringWithFormat:@"0x%llx", (unsigned long long)(address - base)]}];
    }
    return result;
}

static void SS06LogOnlyBindTransportHandler(id handler, unsigned long long call, id rawPath)
{
    @try {
        NSString *path = SS06LogOnlySafePath(rawPath);
        Class cls = NSClassFromString(@"SCNGrpcUnaryEventHandlerImpl");
        if (!cls || ![handler isKindOfClass:cls] || ![path hasPrefix:@"/snapchat.janus.api."]) return;
        unsigned long long rpc = SS06LogOnlyActiveRPCPath &&
            [path isEqualToString:[NSString stringWithUTF8String:SS06LogOnlyActiveRPCPath]] ? SS06LogOnlyActiveRPCCall : 0;
        BOOL reused;
        @synchronized (handler) {
            reused = objc_getAssociatedObject(handler, &SS06LogOnlyTransportContextKey) != nil;
            NSDictionary *context = reused ? @{@"ambiguous":@YES} :
                @{@"transport_call":@(call), @"rpc_call":@(rpc), @"path":[path copy]};
            objc_setAssociatedObject(handler, &SS06LogOnlyTransportContextKey, context, OBJC_ASSOCIATION_RETAIN);
        }
        SS06LogOnlyResponseJSON(call, path, "transport.bind", @{
            @"rpc_call":@(reused ? 0 : rpc),
            @"link_state":reused ? @"reused_handler_ambiguous" : (rpc ? @"same_rpc_stack" : @"rpc_unlinked")
        });
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"call=%llu stage=transport.bind observation_failed=YES", call);
    }
}

static void SS06LogOnlyOnEvent(id receiver, SEL selector, id event, id status)
{
    NSDictionary *context = nil;
    unsigned long long eventCall = 0, rpc = 0, transport = 0;
    @try {
        context = objc_getAssociatedObject(receiver, &SS06LogOnlyTransportContextKey);
        if (context) {
            eventCall = SS06LogOnlyNextCall();
            BOOL ambiguous = [context[@"ambiguous"] boolValue];
            rpc = [context[@"rpc_call"] unsignedLongLongValue];
            transport = [context[@"transport_call"] unsignedLongLongValue];
            NSString *path = context[@"path"] ?: @"unknown";
            NSMutableDictionary *facts = [@{
                @"source":@"SCNGrpcUnaryEventHandlerImpl.onEvent_before_decode",
                @"rpc_call":@(rpc), @"transport_call":@(transport),
                @"handler_link":ambiguous ? @"ambiguous" : @"associated_handler",
                @"event_present":@(event != nil), @"grpc_status_present":@(status != nil),
                @"network_origin":@"unverified", @"server_rule":@"unknown"
            } mutableCopy];
            if (event) facts[@"event_class"] = NSStringFromClass(object_getClass(event));
            if (status) facts[@"grpc_status_class"] = NSStringFromClass(object_getClass(status));
            if ([event isKindOfClass:[NSData class]]) {
                facts[@"event_bytes"] = @([event length]);
                if ([event length] <= 262144) {
                    facts[@"event_sha256"] = SS06LogOnlySHA256(event);
                    // These two mappings are established by the generated service code.
                    Class responseClass = Nil;
                    if ([path isEqualToString:@"/snapchat.janus.api.LoginService/LoginWithPassword"])
                        responseClass = NSClassFromString(@"SCJanusLoginWithPasswordResponse");
                    if ([path isEqualToString:@"/snapchat.janus.api.RegistrationService/RegisterWithUsernamePassword"])
                        responseClass = NSClassFromString(@"SCJanusRegisterWithUsernamePasswordResponse");
                    SS06LogOnlyWireResponse(event, responseClass, NSClassFromString(@"SCJanusErrorData"), facts);
                } else facts[@"wire_scan_state"] = @"over_limit";
            }
            Class statusClass = NSClassFromString(@"SCNGrpcStatus");
            if (statusClass && [status isKindOfClass:statusClass]) {
                Method code = SS06LogOnlyGetter(status, "statusCode", 'q');
                if (code) facts[@"grpc_status_code"] = @(((int64_t (*)(id, SEL))method_getImplementation(code))(status, sel_registerName("statusCode")));
                id message = SS06LogOnlyReadObject(status, "errorString", NULL);
                if ([message isKindOfClass:[NSString class]]) {
                    NSMutableDictionary *preview = [NSMutableDictionary new];
                    SS06LogOnlyMessagePreview(message, preview);
                    facts[@"grpc_error"] = preview;
                }
            }
            facts[@"origin_stack"] = SS06LogOnlyOriginStack();
            SS06LogOnlyResponseJSON(eventCall, path, "transport.event", facts);
        }
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"call=%llu stage=transport.event observation_failed=YES", eventCall);
    }
    unsigned long long oldRPC = SS06LogOnlyDeliveryRPC, oldTransport = SS06LogOnlyDeliveryTransport, oldEvent = SS06LogOnlyDeliveryEvent;
    // Clear the scope for unrelated/reentrant deliveries too.
    SS06LogOnlyDeliveryRPC = rpc; SS06LogOnlyDeliveryTransport = transport; SS06LogOnlyDeliveryEvent = eventCall;
    @try {
        ((void (*)(id, SEL, id, id))SS06LogOnlyOriginalOnEvent)(receiver, selector, event, status);
    } @finally {
        SS06LogOnlyDeliveryRPC = oldRPC; SS06LogOnlyDeliveryTransport = oldTransport; SS06LogOnlyDeliveryEvent = oldEvent;
    }
}

static BOOL SS06LogOnlyInstallReceiveObserver(void)
{
    static NSInteger lastInstalled = -1;
    BOOL installed = SS06LogOnlyInstallTypedObserver(NSClassFromString(@"SCNGrpcUnaryEventHandlerImpl"),
        sel_registerName("onEvent:status:"), sel_registerName("ss06_logonly_onEvent:status:"),
        (IMP)SS06LogOnlyOnEvent, &SS06LogOnlyOriginalOnEvent, "v@@");
    if (lastInstalled != installed) {
        SS06LogOnlyRecord(@"receive_observer installed=%d expected=1", installed);
        lastInstalled = installed;
    }
    return installed;
}
