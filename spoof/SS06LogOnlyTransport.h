// Inclus seulement par SS06LogOnly.m : observations sans remplacement de valeur,
// sauf fenêtre d'attestation selfblock qui fait échouer le self-mmap.
#include <stdatomic.h>

#ifndef SS06_SELFREAD_BLOCK
#define SS06_SELFREAD_BLOCK 0
#endif
#if SS06_SELFREAD_BLOCK
// Définies dans SS06SelfRead.h ; lien externe pour le test hôte macOS.
static void SS06LogOnlyWindowOpen(void) { SS06SelfReadAttestationWindowOpen(); }
static void SS06LogOnlyWindowClose(void) { SS06SelfReadAttestationWindowClose(); }
#else
static void SS06LogOnlyWindowOpen(void) {}
static void SS06LogOnlyWindowClose(void) {}
#endif

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

#import "SS06LogOnlyResponses.h"
#import "SS06LogOnlyOrigin.h"

static void SS06LogOnlyDumpPayload(id value, id path, int requestType, unsigned long long call)
{
    @try {
        if ([value isKindOfClass:[NSData class]]) {
            // Aucune taille fixée à 1421 : capture de tous les octets retournés.
            NSData *data = value;
            NSString *base64 = [data base64EncodedStringWithOptions:0];
            SS06LogOnlyRecord(@"dump=attestation_payload call=%llu requestPath=%@ pathSource=argument requestType=%d bytes=%lu base64=%@",
                              call, SS06LogOnlySafePath(path), requestType, (unsigned long)data.length, base64);
            SS06LogOnlyRecord(@"call=%llu stage=attestation.fingerprint requestPath=%@ bytes=%lu sha256=%@",
                              call, SS06LogOnlySafePath(path), (unsigned long)data.length, SS06LogOnlySHA256(data));
        } else {
            SS06LogOnlyRecord(@"dump=attestation_payload call=%llu requestPath=%@ requestType=%d state=%@",
                              call, SS06LogOnlySafePath(path), requestType, value ? @"unexpected-type" : @"nil");
        }
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"dump=attestation_payload call=%llu requestPath=unknown pathSource=unavailable state=capture-failed", call);
    }
}

static void SS06LogOnlyDumpToken(id value, NSString *source, id path, unsigned long long call)
{
    @try {
        if (!call) call = SS06LogOnlyNextCall();
        NSString *requestPath = path ? SS06LogOnlySafePath(path) : @"unknown";
        if ([value isKindOfClass:[NSString class]]) {
            // JSON garde l'intégralité de la chaîne tout en échappant les retours
            // à la ligne. Un dump reste une ligne complète dans l'historique.
            NSData *encoded = [NSJSONSerialization dataWithJSONObject:@{@"token": value} options:0 error:NULL];
            NSString *json = [[NSString alloc] initWithData:encoded encoding:NSUTF8StringEncoding];
            if (!json) {
                SS06LogOnlyRecord(@"dump=devicecheck_token source=%@ call=%llu requestPath=%@ state=capture-failed", source, call, requestPath);
                return;
            }
            SS06LogOnlyRecord(@"dump=devicecheck_token source=%@ call=%llu requestPath=%@ pathSource=%@ chars=%lu value=%@",
                              source, call, requestPath, path ? @"argument" : @"unavailable",
                              (unsigned long)[(NSString *)value length], json);
        } else {
            SS06LogOnlyRecord(@"dump=devicecheck_token source=%@ call=%llu requestPath=%@ state=%@",
                              source, call, requestPath, value ? @"unexpected-type" : @"nil");
        }
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"dump=devicecheck_token source=%@ call=%llu requestPath=unknown pathSource=unavailable state=capture-failed", source, call);
    }
}

static IMP SS06LogOnlyMakeObserver(SS06LogOnlyTarget *target)
{
    // Chaque block capture uniquement sa cible statique. Les arguments, options,
    // retours originaux sont transmis intacts. Les callbacks RPC compatibles et
    // DeviceCheck sont enveloppés, puis transmis une fois par invocation.
    // Les cibles d'attestation ouvrent la fenêtre selfblock pendant l'appel
    // original : le self-mmap du principal échoue alors volontairement.
    switch (target->kind) {
        case SS06LogOnlyRPC:
            return imp_implementationWithBlock(^(id receiver, id request, id options, id handler) {
                unsigned long long call = SS06LogOnlyNextCall();
                NSString *path = [NSString stringWithUTF8String:target->path];
                SS06LogOnlyTrace(target, call, "enter", path, request, YES, -1);
                SS06LogOnlyRequestFacts(call, path, request);
                id forwarded = SS06LogOnlyWrapRPCHandler(call, path, handler);
                unsigned long long previousCall = SS06LogOnlyActiveRPCCall;
                const char *previousPath = SS06LogOnlyActiveRPCPath;
                SS06LogOnlyActiveRPCCall = call;
                SS06LogOnlyActiveRPCPath = target->path;
                @try {
                    ((void (*)(id, SEL, id, id, id))target->original)(receiver, target->selector, request, options, forwarded);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, -1); @throw exception;
                } @finally {
                    SS06LogOnlyActiveRPCCall = previousCall;
                    SS06LogOnlyActiveRPCPath = previousPath;
                }
                SS06LogOnlyTrace(target, call, "local_return", path, nil, NO, -1);
            });
        case SS06LogOnlyTransport:
            return imp_implementationWithBlock(^id(id receiver, id path, id request, id options, id handler) {
                unsigned long long call = SS06LogOnlyNextCall();
                SS06LogOnlyTrace(target, call, "enter", path, request, YES, -1);
                SS06LogOnlyBindTransportHandler(handler, call, path);
                id result;
                @try {
                    result = ((id (*)(id, SEL, id, id, id, id))target->original)(receiver, target->selector, path, request, options, handler);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "local_return", path, result, NO, -1);
                return result;
            });
        case SS06LogOnlyDeviceCheck:
            return imp_implementationWithBlock(^(id receiver, id handler) {
                unsigned long long call = SS06LogOnlyNextCall();
                SS06LogOnlyTrace(target, call, "enter", nil, nil, NO, -1);
                void (^originalCompletion)(id) = handler;
                id forwarded = handler;
                if (originalCompletion) {
                    forwarded = [^(id token) {
                        SS06LogOnlyDumpToken(token, @"devicecheck.callback", nil, call);
                        // Même objet, même file, une transmission par invocation.
                        originalCompletion(token);
                    } copy];
                }
                @try {
                    ((void (*)(id, SEL, id))target->original)(receiver, target->selector, forwarded);
                } @catch (NSException *exception) {
                    SS06LogOnlyTrace(target, call, "throw", nil, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyTrace(target, call, "return", nil, nil, NO, -1);
            });
        case SS06LogOnlyAttestationTyped:
            return imp_implementationWithBlock(^id(id receiver, id token, id path, int requestType) {
                unsigned long long call = SS06LogOnlyNextCall();
                SS06LogOnlyTrace(target, call, "enter", path, nil, NO, requestType);
                SS06LogOnlyWindowOpen();
                id result;
                @try {
                    result = ((id (*)(id, SEL, id, id, int))target->original)(receiver, target->selector, token, path, requestType);
                } @catch (NSException *exception) {
                    SS06LogOnlyWindowClose();
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, requestType); @throw exception;
                }
                SS06LogOnlyWindowClose();
                SS06LogOnlyTrace(target, call, "return", path, result, YES, requestType);
                if (strcmp(target->selectorName, "_getAttestationPayload:path:requestType:") == 0)
                    SS06LogOnlyDumpPayload(result, path, requestType, call);
                return result;
            });
        case SS06LogOnlyAttestation:
        case SS06LogOnlyArgos:
            return imp_implementationWithBlock(^id(id receiver, id first, id second) {
                unsigned long long call = SS06LogOnlyNextCall();
                id path = target->kind == SS06LogOnlyArgos ? first : second;
                SS06LogOnlyTrace(target, call, "enter", path, nil, NO, -1);
                SS06LogOnlyWindowOpen();
                id result;
                @try {
                    result = ((id (*)(id, SEL, id, id))target->original)(receiver, target->selector, first, second);
                } @catch (NSException *exception) {
                    SS06LogOnlyWindowClose();
                    SS06LogOnlyTrace(target, call, "throw", path, nil, NO, -1); @throw exception;
                }
                SS06LogOnlyWindowClose();
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
