// Passive Janus response observations, included by SS06LogOnlyTransport.h.
// No request/response serialization, session fields or NSError.userInfo.
// Only the selected error message gets a bounded, pattern-redacted preview.
#import <CommonCrypto/CommonDigest.h>
#include <stdbool.h>
#include <stdint.h>

// Scoped to an actual synchronous call stack, never a global "last request".
static _Thread_local unsigned long long SS06LogOnlyActiveRPCCall;
static _Thread_local const char *SS06LogOnlyActiveRPCPath;
static _Thread_local unsigned long long SS06LogOnlyDeliveryRPC, SS06LogOnlyDeliveryTransport, SS06LogOnlyDeliveryEvent;
static NSArray *SS06LogOnlyOriginStack(void);

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

static BOOL SS06LogOnlyReadBool(id object, const char *name, BOOL *available)
{
    Method method = SS06LogOnlyGetter(object, name, 'B');
    if (method) {
        *available = YES;
        return ((bool (*)(id, SEL))method_getImplementation(method))(object, sel_registerName(name));
    }
    method = SS06LogOnlyGetter(object, name, 'c');
    *available = method != NULL;
    return method && ((signed char (*)(id, SEL))method_getImplementation(method))(object, sel_registerName(name));
}

static BOOL SS06LogOnlyIsProtobuf(id value)
{
    Class protobuf = NSClassFromString(@"GPBMessage");
    return value && protobuf && [value isKindOfClass:protobuf];
}

// Resolve field numbers from the runtime schema, never from a guessed enum value.
static id SS06LogOnlyClassFieldDescriptor(Class cls, NSString *name)
{
    id descriptor = SS06LogOnlyReadObject((id)cls, "descriptor", NULL);
    if (!descriptor) return nil;
    SEL selector = sel_registerName("fieldWithName:");
    Method method = class_getInstanceMethod(object_getClass(descriptor), selector);
    if (!method || method_getNumberOfArguments(method) != 3) return nil;
    char result[128] = {0}, argument[128] = {0};
    method_getReturnType(method, result, sizeof(result));
    method_getArgumentType(method, 2, argument, sizeof(argument));
    if (SS06LogOnlyTypeCode(result) != '@' || SS06LogOnlyTypeCode(argument) != '@') return nil;
    return ((id (*)(id, SEL, id))method_getImplementation(method))(descriptor, selector, name);
}

static id SS06LogOnlyFieldDescriptor(id message, NSString *name)
{
    return SS06LogOnlyClassFieldDescriptor(object_getClass(message), name);
}

static BOOL SS06LogOnlyIsSchemaName(id value)
{
    if (![value isKindOfClass:[NSString class]] || ![value length] || [value length] > 256) return NO;
    NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:
        @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789_"];
    return [value rangeOfCharacterFromSet:allowed.invertedSet].location == NSNotFound;
}

static void SS06LogOnlyStatusName(id response, int32_t value, NSMutableDictionary *facts)
{
    // Optional reflection must not hide an otherwise observable response.
    @try {
        facts[@"status_name_state"] = @"descriptor_unavailable";
        id field = SS06LogOnlyFieldDescriptor(response, @"statusCode");
        id descriptor = SS06LogOnlyReadObject(field, "enumDescriptor", NULL);
        if (!descriptor) return;
        id enumName = SS06LogOnlyReadObject(descriptor, "name", NULL);
        if (SS06LogOnlyIsSchemaName(enumName)) facts[@"status_enum"] = enumName;
        SEL selector = sel_registerName("enumNameForValue:");
        Method method = class_getInstanceMethod(object_getClass(descriptor), selector);
        if (!method || method_getNumberOfArguments(method) != 3) return;
        char result[128] = {0}, argument[128] = {0};
        method_getReturnType(method, result, sizeof(result));
        method_getArgumentType(method, 2, argument, sizeof(argument));
        if (SS06LogOnlyTypeCode(result) != '@' || SS06LogOnlyTypeCode(argument) != 'i') return;
        id name = ((id (*)(id, SEL, int32_t))method_getImplementation(method))(descriptor, selector, value);
        facts[@"status_name_source"] = @"protobuf_enum_descriptor";
        if (SS06LogOnlyIsSchemaName(name)) {
            facts[@"status_name"] = name;
            facts[@"status_name_state"] = @"resolved";
        } else facts[@"status_name_state"] = name ? @"invalid_schema_name" : @"unknown_value";
    } @catch (__unused NSException *exception) {
        facts[@"status_name_state"] = @"observation_failed";
    }
}

static BOOL SS06LogOnlyErrorDataPresent(id response, NSMutableDictionary *facts)
{
    BOOL available = NO;
    BOOL present = SS06LogOnlyReadBool(response, "hasErrorData", &available);
    NSString *source = available ? @"hasErrorData" : @"unavailable";
    if (!available) {
        // LoginWithPassword puts errorData in the payload oneof: no hasErrorData.
        id field = SS06LogOnlyFieldDescriptor(response, @"errorData");
        id oneof = SS06LogOnlyReadObject(field, "containingOneof", NULL);
        id name = SS06LogOnlyReadObject(oneof, "name", NULL);
        Method number = SS06LogOnlyGetter(field, "number", 'I');
        Method active = SS06LogOnlyGetter(response, "payloadOneOfCase", 'i');
        if ([name isKindOfClass:[NSString class]] && [name isEqualToString:@"payload"] && number && active) {
            uint32_t fieldNumber = ((uint32_t (*)(id, SEL))method_getImplementation(number))
                (field, sel_registerName("number"));
            int32_t selected = ((int32_t (*)(id, SEL))method_getImplementation(active))
                (response, sel_registerName("payloadOneOfCase"));
            if (fieldNumber > 0 && fieldNumber <= 0x1fffffff && selected >= 0) {
                available = YES;
                present = (uint32_t)selected == fieldNumber;
                source = @"payloadOneOfCase";
                facts[@"payload_oneof_case"] = @(selected);
                facts[@"error_data_field_number"] = @(fieldNumber);
            }
        }
    }
    facts[@"error_data_presence_available"] = @(available);
    facts[@"error_data_presence_source"] = source;
    if (available) facts[@"error_data_present"] = @(present);
    return available && present;
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
            id container = request;
            NSString *source = @"request";
            NSString *containerFailure = nil;
            if (!SS06LogOnlyGetter(request, "clientAttestationPayload", '@') &&
                !SS06LogOnlyGetter(request, "iosDeviceCheckToken", '@')) {
                BOOL headerPresenceAvailable = NO;
                BOOL headerPresent = SS06LogOnlyReadBool(request, "hasLoginHeader", &headerPresenceAvailable);
                const char *headerGetter = "loginHeader";
                NSString *presenceKey = @"login_header_present";
                if (!headerPresenceAvailable) {
                    headerPresent = SS06LogOnlyReadBool(request, "hasRegistrationHeader", &headerPresenceAvailable);
                    headerGetter = "registrationHeader";
                    presenceKey = @"registration_header_present";
                }
                if (headerPresenceAvailable) {
                    source = [NSString stringWithUTF8String:headerGetter];
                    facts[presenceKey] = @(headerPresent);
                    // Never read an absent protobuf submessage: its getter may create it.
                    container = headerPresent ? SS06LogOnlyReadObject(request, headerGetter, NULL) : nil;
                    if (!headerPresent) containerFailure = @"container_absent";
                    else if (!SS06LogOnlyIsProtobuf(container)) containerFailure = @"container_unavailable";
                }
            }
            facts[@"request_context_source"] = source;
            BOOL available = NO;
            id payload = containerFailure ? nil : SS06LogOnlyReadObject(container, "clientAttestationPayload", &available);
            facts[@"attestation_state"] = containerFailure ?: (!available ? @"getter_unavailable" :
                (!payload ? @"nil" : ([payload isKindOfClass:[NSData class]] ?
                ([(NSData *)payload length] ? @"nonempty" : @"empty") : @"unexpected_type")));
            if ([payload isKindOfClass:[NSData class]]) {
                facts[@"attestation_bytes"] = @([(NSData *)payload length]);
                facts[@"attestation_sha256"] = SS06LogOnlySHA256(payload);
            }
            id token = containerFailure ? nil : SS06LogOnlyReadObject(container, "iosDeviceCheckToken", &available);
            NSString *state = containerFailure ?: (!available ? @"getter_unavailable" : (!token ? @"nil" : @"unexpected_type"));
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
        expression = [NSRegularExpression regularExpressionWithPattern:@"(?<![A-Za-z0-9])SS[0-9]{2}(?![A-Za-z0-9])" options:NSRegularExpressionCaseInsensitive error:NULL];
    });
    NSMutableOrderedSet<NSString *> *codes = [NSMutableOrderedSet new];
    NSRange range = NSMakeRange(0, MIN(message.length, (NSUInteger)4096));
    for (NSTextCheckingResult *match in [expression matchesInString:message options:0 range:range])
        [codes addObject:[[message substringWithRange:match.range] uppercaseString]];
    return codes.array;
}

static void SS06LogOnlyMessagePreview(NSString *message, NSMutableDictionary *facts)
{
    @try {
        facts[@"message_preview_filter"] = @"patterns-v1";
        facts[@"message_preview_state"] = @"omitted_oversize";
        // Process the complete bounded input before truncation, so a cut token
        // or quoted value cannot evade its redaction pattern at the boundary.
        if (message.length > 4096) return;
        static NSArray<NSRegularExpression *> *patterns;
        static NSArray<NSString *> *replacements;
        static dispatch_once_t once;
        dispatch_once(&once, ^{
            NSArray<NSString *> *sources = @[
                @"(?i)\\b(?:bearer|basic)\\s+[A-Za-z0-9._~+/=-]+",
                @"(?i)\\b(password|passwd|pwd|passcode|mot de passe|(?:access|refresh|auth)[_ -]?token|token|authorization|session(?:[_ -]?(?:id|token))?|username|user[_ -]?id|email|e-mail|phone(?:[_ -]?number)?)([\\\"']?\\s*[:=]\\s*)(?:\\\"[^\\\"]*(?:\\\"|$)|'[^']*(?:'|$)|[^\\s,;]+)",
                @"(?i)\\b(?:https?|snapchat)://[^\\s<>\\\"']+",
                @"(?i)(?<![A-Z0-9._%+-])[A-Z0-9._%+-]+@[A-Z0-9.-]+\\.[A-Z]{2,}",
                @"(?i)(?<![A-Z0-9])[0-9a-f]{8}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{4}-[0-9a-f]{12}(?![A-Z0-9])",
                @"(?<![A-Za-z0-9])\\+?\\d(?:[\\s().-]*\\d){6,}(?![A-Za-z0-9])",
                @"(?<![A-Za-z0-9_+/-])[A-Za-z0-9_+/-]{24,}={0,2}(?![A-Za-z0-9_+/-])",
                @"<[^>]*>",
                @"[\\p{Cc}\\p{Cf}]",
                @"\\s+"
            ];
            replacements = @[@"[authorization]", @"$1$2[redacted]", @"[url]", @"[email]",
                @"[identifier]", @"[number]", @"[opaque]", @" ", @" ", @" "];
            NSMutableArray *compiled = [NSMutableArray new];
            for (NSString *source in sources) {
                NSRegularExpression *pattern = [NSRegularExpression regularExpressionWithPattern:source options:0 error:NULL];
                if (!pattern) return;
                [compiled addObject:pattern];
            }
            patterns = [compiled copy];
        });
        if (patterns.count != replacements.count) {
            facts[@"message_preview_state"] = @"filter_unavailable";
            return;
        }
        NSString *filtered = message;
        for (NSUInteger i = 0; i < patterns.count; ++i)
            filtered = [patterns[i] stringByReplacingMatchesInString:filtered options:0
                range:NSMakeRange(0, filtered.length) withTemplate:replacements[i]];
        filtered = [filtered stringByTrimmingCharactersInSet:NSCharacterSet.whitespaceAndNewlineCharacterSet];
        NSUInteger length = MIN(filtered.length, (NSUInteger)1024);
        if (length < filtered.length && length &&
            [filtered characterAtIndex:length - 1] >= 0xd800 && [filtered characterAtIndex:length - 1] <= 0xdbff)
            --length; // Do not split a UTF-16 surrogate pair.
        facts[@"message_preview"] = [filtered substringToIndex:length];
        facts[@"message_preview_state"] = @"available";
        facts[@"message_preview_redacted"] = @(![filtered isEqualToString:message]);
        facts[@"message_preview_truncated"] = @(length < filtered.length);
        facts[@"message_preview_chars"] = @(length);
    } @catch (__unused NSException *exception) {
        [facts removeObjectForKey:@"message_preview"];
        facts[@"message_preview_state"] = @"observation_failed";
    }
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
        facts[@"transport_delivery_link"] = @"not_observed";
        if (call && SS06LogOnlyDeliveryRPC == call) {
            facts[@"transport_delivery_link"] = @"same_onEvent_stack";
            facts[@"transport_call"] = @(SS06LogOnlyDeliveryTransport);
            facts[@"transport_event_call"] = @(SS06LogOnlyDeliveryEvent);
        }
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
            if (status) {
                int32_t value = ((int32_t (*)(id, SEL))method_getImplementation(status))
                    (response, sel_registerName("statusCode"));
                facts[@"status_code"] = @(value);
                SS06LogOnlyStatusName(response, value, facts);
            }
            // Check presence first: absent protobuf submessages must not be autocreated.
            BOOL present = SS06LogOnlyErrorDataPresent(response, facts);
            if (present) {
                id errorData = SS06LogOnlyReadObject(response, "errorData", NULL);
                id message = SS06LogOnlyIsProtobuf(errorData) ?
                    SS06LogOnlyReadObject(errorData, "humanReadableErrorMessage", NULL) : nil;
                if ([message isKindOfClass:[NSString class]]) {
                    facts[@"message_source"] = @"errorData.humanReadableErrorMessage";
                    facts[@"message_chars"] = @([(NSString *)message length]);
                    facts[@"message_scan_truncated"] = @([(NSString *)message length] > 4096);
                    facts[@"support_codes"] = SS06LogOnlySupportCodes(message);
                    SS06LogOnlyMessagePreview(message, facts);
                } else facts[@"message_state"] = @"unavailable";
            }
        }
        facts[@"callback_stack"] = SS06LogOnlyOriginStack();
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
