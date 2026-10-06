// Inclus seulement par SS06LogOnly.m : observations sans remplacement de valeur.
#include <stdatomic.h>

typedef NS_ENUM(unsigned int, SS06LogOnlyKind) {
    SS06LogOnlyRPC, SS06LogOnlyTransport, SS06LogOnlyDeviceCheck,
    SS06LogOnlyAttestation, SS06LogOnlyAttestationTyped, SS06LogOnlyArgos,
};
typedef struct {
    const char *className, *selectorName;
    SS06LogOnlyKind kind;
    const char *signature, *path;
    IMP original;
    SEL selector;
} SS06LogOnlyTarget;

#define SS06_LOGONLY_TARGET(cls, sel, kind, sig, path) {cls, sel, SS06LogOnly##kind, sig, path, NULL, NULL},
static SS06LogOnlyTarget SS06LogOnlyTargets[] = {
#include "SS06LogOnlyTargets.inc"
};
#undef SS06_LOGONLY_TARGET
static const NSUInteger SS06LogOnlyTargetCount = sizeof(SS06LogOnlyTargets) / sizeof(SS06LogOnlyTargets[0]);
static _Atomic(unsigned long long) SS06LogOnlyCallSequence;

static NSString *SS06LogOnlySafePath(id value)
{
    if (!value) return @"nil";
    if (![value isKindOfClass:[NSString class]]) return @"unknown-type";
    NSString *path = value;
    if (path.length > 512) return @"redacted";
    NSRange suffix = [path rangeOfCharacterFromSet:[NSCharacterSet characterSetWithCharactersInString:@"?#"]];
    if (suffix.location != NSNotFound) path = [path substringToIndex:suffix.location];
    static NSRegularExpression *rpcPath;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        rpcPath = [NSRegularExpression regularExpressionWithPattern:@"^/[A-Za-z_][A-Za-z0-9_.]*/[A-Za-z_][A-Za-z0-9_]*$" options:0 error:NULL];
    });
    return [rpcPath numberOfMatchesInString:path options:0 range:NSMakeRange(0, path.length)] == 1 ? path : @"redacted";
}

static NSString *SS06LogOnlyObjectSummary(id value)
{
    if (!value) return @"class=nil state=nil bytes=0";
    NSString *className = NSStringFromClass(object_getClass(value));
    if ([value isKindOfClass:[NSData class]]) {
        NSUInteger size = [(NSData *)value length];
        return [NSString stringWithFormat:@"class=%@ state=%@ bytes=%lu size_source=NSData.length",
                className, size ? @"nonempty" : @"empty", (unsigned long)size];
    }
    // serializedSize calcule la taille protobuf ; aucun appel supplémentaire à
    // data/description, ni parcours/dump des champs de la requête.
    Class protobuf = NSClassFromString(@"GPBMessage");
    SEL selector = NSSelectorFromString(@"serializedSize");
    Method method = protobuf && [value isKindOfClass:protobuf] ? class_getInstanceMethod(object_getClass(value), selector) : NULL;
    if (method && method_getNumberOfArguments(method) == 2) {
        char type[32] = {0};
        method_getReturnType(method, type, sizeof(type));
        if (SS06LogOnlyTypeCode(type) == 'Q') {
            NSUInteger size = ((NSUInteger (*)(id, SEL))method_getImplementation(method))(value, selector);
            return [NSString stringWithFormat:@"class=%@ serialized_bytes=%lu size_source=GPBMessage.serializedSize",
                    className, (unsigned long)size];
        }
    }
    return [NSString stringWithFormat:@"class=%@ bytes=unknown", className];
}

static const char *SS06LogOnlyStage(SS06LogOnlyTarget *target)
{
    switch (target->kind) {
        case SS06LogOnlyRPC: return "rpc";
        case SS06LogOnlyTransport: return "transport";
        case SS06LogOnlyDeviceCheck: return "devicecheck";
        default: return "attestation";
    }
}

static void SS06LogOnlyTrace(SS06LogOnlyTarget *target, unsigned long long call,
                             const char *event, id path, id value, BOOL measure, int requestType)
{
    @try {
        NSString *summary;
        @try { summary = measure ? SS06LogOnlyObjectSummary(value) : @"not-inspected"; }
        @catch (__unused NSException *exception) { summary = @"measurement-failed"; }
        SS06LogOnlyRecord(@"call=%llu stage=%s.%s class=%s selector=%s requestPath=%@ requestType=%d object={%@}",
                          call, SS06LogOnlyStage(target), event, target->className, target->selectorName,
                          SS06LogOnlySafePath(path), requestType, summary);
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"call=%llu stage=%s.%s metadata=unavailable", call, SS06LogOnlyStage(target), event);
    }
}

static unsigned long long SS06LogOnlyNextCall(void)
{
    return atomic_fetch_add_explicit(&SS06LogOnlyCallSequence, 1, memory_order_relaxed) + 1;
}

static IMP SS06LogOnlyMakeObserver(SS06LogOnlyTarget *target)
{
    // Chaque block capture uniquement sa cible statique. Les arguments, options,
    // handlers et retours originaux sont transmis sans wrapping ni copie.
    switch (target->kind) {
        case SS06LogOnlyRPC:
            return imp_implementationWithBlock(^(id receiver, id request, id options, id handler) {
                unsigned long long call = SS06LogOnlyNextCall();
                NSString *path = [NSString stringWithUTF8String:target->path];
                SS06LogOnlyTrace(target, call, "enter", path, request, YES, -1);
                @try {
                    ((void (*)(id, SEL, id, id, id))target->original)(receiver, target->selector, request, options, handler);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "return", path, nil, NO, -1);
            });
        case SS06LogOnlyTransport:
            return imp_implementationWithBlock(^id(id receiver, id path, id request, id options, id handler) {
                unsigned long long call = SS06LogOnlyNextCall();
                SS06LogOnlyTrace(target, call, "enter", path, request, YES, -1);
                id result;
                @try {
                    result = ((id (*)(id, SEL, id, id, id, id))target->original)(receiver, target->selector, path, request, options, handler);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "return", path, result, NO, -1);
                return result;
            });
        case SS06LogOnlyDeviceCheck:
            return imp_implementationWithBlock(^(id receiver, id handler) {
                unsigned long long call = SS06LogOnlyNextCall();
                SS06LogOnlyTrace(target, call, "enter", nil, nil, NO, -1);
                @try {
                    ((void (*)(id, SEL, id))target->original)(receiver, target->selector, handler);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", nil, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "return", nil, nil, NO, -1);
            });
        case SS06LogOnlyAttestationTyped:
            return imp_implementationWithBlock(^id(id receiver, id token, id path, int requestType) {
                unsigned long long call = SS06LogOnlyNextCall();
                SS06LogOnlyTrace(target, call, "enter", path, nil, NO, requestType);
                id result;
                @try {
                    result = ((id (*)(id, SEL, id, id, int))target->original)(receiver, target->selector, token, path, requestType);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, requestType); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "return", path, result, YES, requestType);
                return result;
            });
        case SS06LogOnlyAttestation:
        case SS06LogOnlyArgos:
            return imp_implementationWithBlock(^id(id receiver, id first, id second) {
                unsigned long long call = SS06LogOnlyNextCall();
                id path = target->kind == SS06LogOnlyArgos ? first : second;
                SS06LogOnlyTrace(target, call, "enter", path, nil, NO, -1);
                id result;
                @try {
                    result = ((id (*)(id, SEL, id, id))target->original)(receiver, target->selector, first, second);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "return", path, result, YES, -1);
                return result;
            });
    }
    return NULL;
}

static BOOL SS06LogOnlyInstallTransportObservers(void)
{
    NSUInteger installed = 0;
    static NSUInteger lastInstalled = NSUIntegerMax;
    for (NSUInteger index = 0; index < SS06LogOnlyTargetCount; ++index) {
        SS06LogOnlyTarget *target = &SS06LogOnlyTargets[index];
        if (!target->original) {
            @try {
                Class cls = objc_getClass(target->className);
                target->selector = sel_registerName(target->selectorName);
                SEL alias = NSSelectorFromString([@"ss06_logonly_transport_" stringByAppendingString:NSStringFromSelector(target->selector)]);
                IMP observer = SS06LogOnlyMakeObserver(target);
                if (!SS06LogOnlyInstallTypedObserver(cls, target->selector, alias, observer, &target->original, target->signature)) {
                    // L'IMP block n'a pas été installé si sa cible est absente/incompatible.
                    // Garder l'IMP si l'alias existe, car le runtime peut le référencer.
                    if (!cls || !class_getInstanceMethod(cls, alias)) imp_removeBlock(observer);
                    SS06LogOnlyRecord(@"transport_observer class=%s selector=%s installed=NO", target->className, target->selectorName);
                }
            } @catch (__unused NSException *exception) {
                SS06LogOnlyRecord(@"transport_observer class=%s selector=%s installation-failed", target->className, target->selectorName);
            }
        }
        if (target->original) ++installed;
    }
    if (installed != lastInstalled) {
        SS06LogOnlyRecord(@"transport_observers installed=%lu expected=%lu", (unsigned long)installed, (unsigned long)SS06LogOnlyTargetCount);
        lastInstalled = installed;
    }
    return installed == SS06LogOnlyTargetCount;
}
