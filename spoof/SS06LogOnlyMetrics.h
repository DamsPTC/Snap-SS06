// Passive native gRPC metrics. These are client-reported measurements, not a
// packet capture or a verdict about Snapchat's private server checks.
static IMP SS06LogOnlyOriginalUnaryMetrics;

static NSString *SS06LogOnlyMetricsPath(id value)
{
    if (![value isKindOfClass:[NSString class]] || ![value length] || [value length] > 512) return nil;
    NSString *path = [value hasPrefix:@"/"] ? value : [@"/" stringByAppendingString:value];
    // Exact allowlist: no query stripping, fuzzy matching or other services.
    for (NSUInteger i = 0; i < SS06LogOnlyTargetCount; ++i) {
        SS06LogOnlyTarget *target = &SS06LogOnlyTargets[i];
        if (target->kind == SS06LogOnlyRPC && target->path &&
            [path isEqualToString:[NSString stringWithUTF8String:target->path]]) return path;
    }
    return nil;
}

static void SS06LogOnlyMetricScalar(id object, const char *name, char type, NSMutableDictionary *facts)
{
    NSString *key = [NSString stringWithUTF8String:name];
    NSString *state = [key stringByAppendingString:@"_state"];
    @try {
        Method method = SS06LogOnlyGetter(object, name, type);
        if (!method) { facts[state] = @"getter_unavailable"; return; }
        IMP implementation = method_getImplementation(method);
        SEL selector = sel_registerName(name);
        if (type == 'q') facts[key] = @(((int64_t (*)(id, SEL))implementation)(object, selector));
        else if (type == 'i') facts[key] = @(((int32_t (*)(id, SEL))implementation)(object, selector));
        else if (type == 'B') facts[key] = @(((bool (*)(id, SEL))implementation)(object, selector));
        facts[state] = @"observed";
    } @catch (__unused NSException *exception) { facts[state] = @"observation_failed"; }
}

static void SS06LogOnlyMetricNumber(id object, const char *name, BOOL boolean, NSMutableDictionary *facts)
{
    NSString *key = [NSString stringWithUTF8String:name];
    NSString *state = [key stringByAppendingString:@"_state"];
    @try {
        BOOL available = NO;
        id value = SS06LogOnlyReadObject(object, name, &available);
        if (!available) facts[state] = @"getter_unavailable";
        else if (!value) facts[state] = @"nil";
        else if (![value isKindOfClass:[NSNumber class]]) facts[state] = @"unexpected_type";
        else if (boolean && ![value isEqualToNumber:@0] && ![value isEqualToNumber:@1])
            facts[state] = @"unexpected_boolean_value";
        else if (!boolean && ![value isEqualToNumber:@([value longLongValue])])
            facts[state] = @"unexpected_integer_value";
        else {
            // nil remains absent, and false stays false. No default success.
            facts[key] = boolean ? @([value boolValue]) : @([value longLongValue]);
            facts[state] = @"observed";
        }
    } @catch (__unused NSException *exception) { facts[state] = @"observation_failed"; }
}

static void SS06LogOnlyMetricString(id object, const char *name, BOOL identifier, NSMutableDictionary *facts)
{
    NSString *key = [NSString stringWithUTF8String:name];
    NSString *state = [key stringByAppendingString:@"_state"];
    @try {
        BOOL available = NO;
        id value = SS06LogOnlyReadObject(object, name, &available);
        if (!available) { facts[state] = @"getter_unavailable"; return; }
        if (!value) { facts[state] = @"nil"; return; }
        if (![value isKindOfClass:[NSString class]]) { facts[state] = @"unexpected_type"; return; }
        NSString *string = value;
        if (!string.length) { facts[state] = @"empty"; return; }
        if (string.length > 512) { facts[state] = @"omitted_oversize"; return; }
        if (identifier) {
            NSData *bytes = [string dataUsingEncoding:NSUTF8StringEncoding];
            if (!bytes) { facts[state] = @"encoding_failed"; return; }
            facts[[key stringByAppendingString:@"_sha256"]] = SS06LogOnlySHA256(bytes);
            facts[state] = @"hashed";
        } else {
            NSCharacterSet *allowed = [NSCharacterSet characterSetWithCharactersInString:
                @"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789._:/+-;= "];
            if ([string rangeOfCharacterFromSet:allowed.invertedSet].location != NSNotFound) {
                facts[state] = @"omitted_characters"; return;
            }
            facts[key] = string;
            facts[state] = @"observed";
        }
    } @catch (__unused NSException *exception) { facts[state] = @"observation_failed"; }
}

static void SS06LogOnlyObserveUnaryMetrics(id metrics)
{
    @try {
        Class metricsClass = NSClassFromString(@"SCNGrpcUnaryMetricsInfo");
        Class rpcClass = NSClassFromString(@"SCNGrpcRPCInfo");
        if (!metricsClass || ![metrics isKindOfClass:metricsClass]) return;
        id rpc = SS06LogOnlyReadObject(metrics, "rpcInfo", NULL);
        if (!rpcClass || ![rpc isKindOfClass:rpcClass]) return;
        NSString *path = SS06LogOnlyMetricsPath(SS06LogOnlyReadObject(rpc, "serviceMethodName", NULL));
        if (!path) return;
        NSMutableDictionary *facts = [@{
            @"source": @"SCGrpcEventLogger.logUnaryBlizzard",
            @"scope": @"native_metrics_record",
            @"rpc_link": @"unverified",
            @"network_origin": @"unverified",
            @"server_rule": @"unknown",
            @"auth_argos_semantics": @"native_report_only",
            @"statusCode_semantics": @"native_metrics_not_Janus",
            @"latency_units": @"native_unverified"
        } mutableCopy];
        // Only this synchronous stack can establish this link. Never infer it
        // from the most recent RPC, path similarity, duration or response size.
        if (SS06LogOnlyActiveRPCCall && SS06LogOnlyActiveRPCPath &&
            [path isEqualToString:[NSString stringWithUTF8String:SS06LogOnlyActiveRPCPath]]) {
            facts[@"rpc_link"] = @"same_rpc_stack";
            facts[@"rpc_call"] = @(SS06LogOnlyActiveRPCCall);
        }
        SS06LogOnlyMetricNumber(metrics, "authSuccess", YES, facts);
        SS06LogOnlyMetricNumber(metrics, "argosSuccess", YES, facts);
        const char *integers[] = {"connectionTime", "networkTTFB", "responseTime", "requestSize",
            "responseSize", "authLatency", "argosLatency", "serverLatency", "argosType"};
        for (NSUInteger i = 0; i < sizeof(integers) / sizeof(integers[0]); ++i)
            SS06LogOnlyMetricScalar(metrics, integers[i], 'q', facts);
        SS06LogOnlyMetricScalar(metrics, "statusCode", 'i', facts);
        SS06LogOnlyMetricScalar(metrics, "success", 'B', facts);
        SS06LogOnlyMetricString(metrics, "taskId", YES, facts);
        SS06LogOnlyMetricString(metrics, "requestId", YES, facts);
        SS06LogOnlyMetricString(metrics, "responseContentType", NO, facts);
        SS06LogOnlyMetricString(metrics, "responseContentEncoding", NO, facts);
        NSMutableDictionary *transport = [NSMutableDictionary new];
        SS06LogOnlyMetricString(rpc, "host", NO, transport);
        SS06LogOnlyMetricString(rpc, "protocol", NO, transport);
        SS06LogOnlyMetricScalar(rpc, "channelType", 'q', transport);
        SS06LogOnlyMetricScalar(rpc, "connectionReused", 'B', transport);
        const char *wireIntegers[] = {"dnsResolveInMillis", "connetionSetupInMillis", "sslSetupInMillis",
            "reqWireSize", "responseWireSize"};
        for (NSUInteger i = 0; i < sizeof(wireIntegers) / sizeof(wireIntegers[0]); ++i)
            SS06LogOnlyMetricScalar(rpc, wireIntegers[i], 'i', transport);
        SS06LogOnlyMetricNumber(rpc, "cronetErrorCode", NO, transport);
        facts[@"rpcInfo"] = transport;
        facts[@"origin_stack"] = SS06LogOnlyOriginStack();
        SS06LogOnlyResponseJSON(SS06LogOnlyNextCall(), path, "transport.metrics", facts);
    } @catch (__unused NSException *exception) {
        // No exception contents or unrelated service data in the log.
        SS06LogOnlyRecord(@"stage=transport.metrics observation_failed=YES");
    }
}

static void SS06LogOnlyUnaryMetrics(id receiver, SEL selector, id metrics)
{
    SS06LogOnlyObserveUnaryMetrics(metrics);
    ((void (*)(id, SEL, id))SS06LogOnlyOriginalUnaryMetrics)(receiver, selector, metrics);
}

static BOOL SS06LogOnlyInstallMetricsObserver(void)
{
    static NSInteger lastInstalled = -1;
    BOOL installed = SS06LogOnlyInstallTypedObserver(NSClassFromString(@"SCGrpcEventLogger"),
        sel_registerName("logUnaryBlizzard:"), sel_registerName("ss06_logonly_logUnaryBlizzard:"),
        (IMP)SS06LogOnlyUnaryMetrics, &SS06LogOnlyOriginalUnaryMetrics, "v@");
    if (lastInstalled != installed) {
        SS06LogOnlyRecord(@"metrics_observer installed=%d expected=1 activation=passive", installed);
        lastInstalled = installed;
    }
    return installed;
}
