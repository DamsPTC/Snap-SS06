// Passive Janus response observations, included by SS06LogOnlyTransport.h.
// No request/response serialization, session fields, NSError.userInfo or text dump.
#import <CommonCrypto/CommonDigest.h>
#include <stdbool.h>
#include <stdint.h>

static NSString *SS06LogOnlySHA256(NSData *data)
{
    if (data.length > UINT32_MAX) return @"unavailable";
    unsigned char digest[CC_SHA256_DIGEST_LENGTH];
    CC_SHA256(data.bytes, (CC_LONG)data.length, digest);
    char hex[CC_SHA256_DIGEST_LENGTH * 2 + 1];
    static const char alphabet[] = "0123456789abcdef";
    for (NSUInteger i = 0; i < sizeof(digest); ++i) {
        hex[2 * i] = alphabet[digest[i] >> 4];
        hex[2 * i + 1] = alphabet[digest[i] & 15];
    }
    hex[sizeof(hex) - 1] = 0;
    return [NSString stringWithUTF8String:hex];
}

static Method SS06LogOnlyGetter(id object, const char *name, char type)
{
    if (!object) return NULL;
    SEL selector = sel_registerName(name);
    Method method = class_getInstanceMethod(object_getClass(object), selector);
    if (!method || method_getNumberOfArguments(method) != 2) return NULL;
    char encoding[128] = {0};
    method_getReturnType(method, encoding, sizeof(encoding));
    return SS06LogOnlyTypeCode(encoding) == type ? method : NULL;
}

static id SS06LogOnlyReadObject(id object, const char *name, BOOL *available)
{
    Method method = SS06LogOnlyGetter(object, name, '@');
    if (available) *available = method != NULL;
    if (!method) return nil;
    return ((id (*)(id, SEL))method_getImplementation(method))(object, sel_registerName(name));
}

static BOOL SS06LogOnlyHasErrorData(id object, BOOL *available)
{
    Method method = SS06LogOnlyGetter(object, "hasErrorData", 'B');
    if (method) {
        *available = YES;
        return ((bool (*)(id, SEL))method_getImplementation(method))(object, sel_registerName("hasErrorData"));
    }
    method = SS06LogOnlyGetter(object, "hasErrorData", 'c');
    *available = method != NULL;
    return method && ((signed char (*)(id, SEL))method_getImplementation(method))(object, sel_registerName("hasErrorData"));
}

static BOOL SS06LogOnlyIsProtobuf(id value)
{
    Class protobuf = NSClassFromString(@"GPBMessage");
    return value && protobuf && [value isKindOfClass:protobuf];
}

static void SS06LogOnlyResponseJSON(unsigned long long call, NSString *path,
                                    const char *stage, NSDictionary *facts)
{
    NSData *json = [NSJSONSerialization dataWithJSONObject:facts options:NSJSONWritingSortedKeys error:NULL];
    NSString *encoded = json ? [[NSString alloc] initWithData:json encoding:NSUTF8StringEncoding] : nil;
    SS06LogOnlyRecord(@"call=%llu stage=%s requestPath=%@ facts=%@", call, stage,
                      SS06LogOnlySafePath(path), encoded ?: @"{\"observation_failed\":true}");
}

static void SS06LogOnlyRequestFacts(unsigned long long call, NSString *path, id request)
{
    @try {
        NSMutableDictionary *facts = [@{@"scope": @"one_rpc", @"protobuf": @(SS06LogOnlyIsProtobuf(request))} mutableCopy];
        if (SS06LogOnlyIsProtobuf(request)) {
            BOOL available = NO;
            id payload = SS06LogOnlyReadObject(request, "clientAttestationPayload", &available);
            facts[@"attestation_state"] = !available ? @"getter_unavailable" :
                (!payload ? @"nil" : ([payload isKindOfClass:[NSData class]] ?
                ([(NSData *)payload length] ? @"nonempty" : @"empty") : @"unexpected_type"));
            if ([payload isKindOfClass:[NSData class]]) {
                facts[@"attestation_bytes"] = @([(NSData *)payload length]);
                facts[@"attestation_sha256"] = SS06LogOnlySHA256(payload);
            }
            id token = SS06LogOnlyReadObject(request, "iosDeviceCheckToken", &available);
            NSString *state = !available ? @"getter_unavailable" : (!token ? @"nil" : @"unexpected_type");
            if ([token isKindOfClass:[NSString class]]) {
                NSString *string = token;
                state = !string.length ? @"empty" :
                    (([string isEqualToString:@"DEVICE_CHECK_NOT_SUPPORTED_GTE_IOS11"] ||
                      [string isEqualToString:@"DEVICE_CHECK_TOKEN_NOT_AVAILABLE_GTE_IOS11"]) ?
                        @"unavailability_sentinel" : @"nonempty");
                facts[@"devicecheck_chars"] = @(string.length);
            }
            facts[@"devicecheck_state"] = state;
        }
        SS06LogOnlyResponseJSON(call, path, "rpc.request", facts);
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"call=%llu stage=rpc.request requestPath=%@ observation_failed=YES",
                          call, SS06LogOnlySafePath(path));
    }
}

static NSArray<NSString *> *SS06LogOnlySupportCodes(NSString *message)
{
    static NSRegularExpression *expression;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        expression = [NSRegularExpression regularExpressionWithPattern:@"(?<![A-Za-z0-9])SS[0-9]{2}(?![A-Za-z0-9])" options:0 error:NULL];
    });
    NSMutableOrderedSet<NSString *> *codes = [NSMutableOrderedSet new];
    NSRange range = NSMakeRange(0, MIN(message.length, (NSUInteger)4096));
    for (NSTextCheckingResult *match in [expression matchesInString:message options:0 range:range])
        [codes addObject:[message substringWithRange:match.range]];
    return codes.array;
}

static void SS06LogOnlyRPCResponse(unsigned long long call, NSString *path, id response, id error)
{
    @try {
        NSMutableDictionary *facts = [@{
            @"source": @"janus_decoded_callback",
            @"response_present": @(response != nil),
            @"protobuf": @(SS06LogOnlyIsProtobuf(response)),
            @"transport_error_present": @(error != nil),
            @"server_rule": @"unknown"
        } mutableCopy];
        if (response) facts[@"response_class"] = NSStringFromClass(object_getClass(response));
        if ([error isKindOfClass:[NSError class]]) {
            NSError *failure = error;
            NSString *domain = failure.domain;
            NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:
                @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._-"];
            facts[@"error_domain"] = domain.length <= 128 &&
                [domain rangeOfCharacterFromSet:allowed.invertedSet].location == NSNotFound ? domain : @"redacted";
            facts[@"error_code"] = @(failure.code);
        } else if (error) facts[@"error_state"] = @"unexpected_type";
        if (SS06LogOnlyIsProtobuf(response)) {
            Method status = SS06LogOnlyGetter(response, "statusCode", 'i');
            facts[@"status_available"] = @(status != NULL);
            if (status) facts[@"status_code"] = @(((int (*)(id, SEL))method_getImplementation(status))
                (response, sel_registerName("statusCode")));
            // Check presence first: absent protobuf submessages must not be autocreated.
            BOOL presenceAvailable = NO;
            BOOL present = SS06LogOnlyHasErrorData(response, &presenceAvailable);
            facts[@"error_data_presence_available"] = @(presenceAvailable);
            if (presenceAvailable) facts[@"error_data_present"] = @(present);
            if (present) {
                id errorData = SS06LogOnlyReadObject(response, "errorData", NULL);
                id message = SS06LogOnlyIsProtobuf(errorData) ?
                    SS06LogOnlyReadObject(errorData, "humanReadableErrorMessage", NULL) : nil;
                if ([message isKindOfClass:[NSString class]]) {
                    facts[@"message_source"] = @"errorData.humanReadableErrorMessage";
                    facts[@"message_chars"] = @([(NSString *)message length]);
                    facts[@"message_scan_truncated"] = @([(NSString *)message length] > 4096);
                    facts[@"support_codes"] = SS06LogOnlySupportCodes(message);
                } else facts[@"message_state"] = @"unavailable";
            }
        }
        SS06LogOnlyResponseJSON(call, path, "rpc.response", facts);
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"call=%llu stage=rpc.response requestPath=%@ observation_failed=YES",
                          call, SS06LogOnlySafePath(path));
    }
}

// Apple Blocks ABI: https://clang.llvm.org/docs/Block-ABI-Apple.html
// The common SCNGrpcUnaryEventHandlerImpl invokes handler(response, NSError).
// Validate the runtime signature as well; unknown handlers are forwarded intact.
static BOOL SS06LogOnlyHasResponseBlockSignature(id handler)
{
    Class blockClass = NSClassFromString(@"NSBlock");
    if (!handler || !blockClass || ![handler isKindOfClass:blockClass]) return NO;
    struct SS06BlockLiteral {
        const void *isa;
        int flags, reserved;
        const void *invoke;
        const unsigned long *descriptor;
    };
    const struct SS06BlockLiteral *literal = (__bridge const void *)handler;
    if (!(literal->flags & (1 << 30)) || (literal->flags & (1 << 29)) || !literal->descriptor) return NO;
    const uint8_t *cursor = (const uint8_t *)literal->descriptor + 2 * sizeof(unsigned long);
    if (literal->flags & (1 << 25)) cursor += 2 * sizeof(void *);
    const char *encoding = NULL;
    memcpy(&encoding, cursor, sizeof(encoding));
    if (!encoding) return NO;
    NSMethodSignature *signature = [NSMethodSignature signatureWithObjCTypes:encoding];
    return signature.numberOfArguments == 3 && SS06LogOnlyTypeCode(signature.methodReturnType) == 'v' &&
        strncmp([signature getArgumentTypeAtIndex:0], "@?", 2) == 0 &&
        SS06LogOnlyTypeCode([signature getArgumentTypeAtIndex:1]) == '@' &&
        SS06LogOnlyTypeCode([signature getArgumentTypeAtIndex:2]) == '@';
}

static id SS06LogOnlyWrapRPCHandler(unsigned long long call, NSString *path, id handler)
{
    @try {
        if (!SS06LogOnlyHasResponseBlockSignature(handler)) {
            SS06LogOnlyRecord(@"call=%llu stage=rpc.callback_observer requestPath=%@ state=%s",
                              call, SS06LogOnlySafePath(path), handler ? "unsupported_signature" : "nil_handler");
            return handler;
        }
        void (^original)(id, id) = handler;
        id forwarded = [^(id response, id error) {
            SS06LogOnlyRPCResponse(call, path, response, error);
            // Same arguments, calling queue and one forwarding per invocation.
            // An exception from the original completion is never caught here.
            original(response, error);
        } copy];
        SS06LogOnlyRecord(@"call=%llu stage=rpc.callback_observer requestPath=%@ state=wrapped",
                          call, SS06LogOnlySafePath(path));
        return forwarded;
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"call=%llu stage=rpc.callback_observer requestPath=%@ state=unavailable",
                          call, SS06LogOnlySafePath(path));
        return handler;
    }
}
