// Observation des longueurs uniquement. Aucun remplacement d'identité/token.
// Compilé séparément de SS06Spoof.m, avec Foundation et le runtime Objective-C.
#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <dispatch/dispatch.h>
#include <string.h>

#if SS06_ENABLE_KEYCHAIN_INTERPOSE || SS06_DISABLE_DEVICECHECK || SS06_DISABLE_LOGIN_ATTESTATION
#error "logonly ne doit inclure aucun remplacement de valeur"
#endif

static IMP SS06LogOnlyOriginalPayload;
static IMP SS06LogOnlyOriginalTokenSetter;

static void SS06LogOnlyMeasurePayload(id value)
{
    @try {
        if (!value) {
            NSLog(@"[SS06LogOnly] clientAttestationPayload state=nil bytes=0");
        } else if ([value isKindOfClass:[NSData class]]) {
            NSUInteger length = [(NSData *)value length];
            NSLog(@"[SS06LogOnly] clientAttestationPayload state=%@ bytes=%lu",
                  length ? @"nonempty" : @"empty", (unsigned long)length);
        } else {
            NSLog(@"[SS06LogOnly] clientAttestationPayload state=unexpected-type bytes=unknown");
        }
    } @catch (__unused NSException *exception) {
        // Une exception de mesure ne remplace pas le résultat de l'application.
        NSLog(@"[SS06LogOnly] clientAttestationPayload state=measurement-failed");
    }
}

static void SS06LogOnlyMeasureToken(id value)
{
    @try {
        if (!value) {
            NSLog(@"[SS06LogOnly] iosDeviceCheckToken state=nil chars=0 utf8_bytes=0");
        } else if ([value isKindOfClass:[NSString class]]) {
            NSUInteger chars = [(NSString *)value length];
            NSUInteger bytes = [(NSString *)value lengthOfBytesUsingEncoding:NSUTF8StringEncoding];
            NSLog(@"[SS06LogOnly] iosDeviceCheckToken state=%@ chars=%lu utf8_bytes=%lu",
                  chars ? @"nonempty" : @"empty", (unsigned long)chars, (unsigned long)bytes);
        } else {
            NSLog(@"[SS06LogOnly] iosDeviceCheckToken state=unexpected-type length=unknown");
        }
    } @catch (__unused NSException *exception) {
        NSLog(@"[SS06LogOnly] iosDeviceCheckToken state=measurement-failed");
    }
}

static id SS06LogOnly_appLoginClientAttestationPayload(id self, SEL command)
{
    // Appel unique, même receveur et même _cmd. Une exception de l'original
    // se propage normalement ; aucun appel additionnel au générateur.
    id value = ((id (*)(id, SEL))SS06LogOnlyOriginalPayload)(self, command);
    SS06LogOnlyMeasurePayload(value);
    return value;
}

static void SS06LogOnly_setIosDeviceCheckToken(id self, SEL command, id value)
{
    // Observe l'argument après le retour réussi du setter original.
    // Le même objet (y compris nil) lui est transmis, sans décodage ni copie.
    ((void (*)(id, SEL, id))SS06LogOnlyOriginalTokenSetter)(self, command, value);
    SS06LogOnlyMeasureToken(value);
}

static char SS06LogOnlyTypeCode(const char *encoding)
{
    while (*encoding && strchr("rnNoORV", *encoding)) ++encoding;
    return *encoding;
}

static BOOL SS06LogOnlyInstallObserver(Class cls, SEL selector, SEL alias,
                                     IMP observer, IMP *originalSlot, BOOL setter)
{
    if (*originalSlot) return YES; // Une seconde tentative ne ré-échange pas.
    if (!cls) {
        NSLog(@"[SS06LogOnly] observer %@ unavailable=class", NSStringFromSelector(selector));
        return NO;
    }

    @try {
        // class_getInstanceMethod consulte aussi la résolution dynamique :
        // les setters GPBMessage peuvent être générés à la première recherche.
        Method original = class_getInstanceMethod(cls, selector);
        char returnType[32] = {0}, argumentType[32] = {0};
        if (!original || method_getNumberOfArguments(original) != (setter ? 3u : 2u)) {
            NSLog(@"[SS06LogOnly] observer %@ unavailable=method", NSStringFromSelector(selector));
            return NO;
        }
        method_getReturnType(original, returnType, sizeof(returnType));
        if (setter) method_getArgumentType(original, 2, argumentType, sizeof(argumentType));
        if (SS06LogOnlyTypeCode(returnType) != (setter ? 'v' : '@') ||
            (setter && SS06LogOnlyTypeCode(argumentType) != '@')) {
            NSLog(@"[SS06LogOnly] observer %@ unavailable=signature", NSStringFromSelector(selector));
            return NO;
        }

        IMP implementation = method_getImplementation(original);
        const char *encoding = method_getTypeEncoding(original);
        if (!class_addMethod(cls, alias, observer, encoding)) {
            NSLog(@"[SS06LogOnly] observer %@ unavailable=alias", NSStringFromSelector(selector));
            return NO;
        }
        // Une méthode héritée est localisée sur la classe ciblée : la classe
        // de base et les autres messages protobuf ne sont pas modifiés.
        class_addMethod(cls, selector, implementation, encoding);
        original = class_getInstanceMethod(cls, selector);
        *originalSlot = implementation;
        method_exchangeImplementations(original, class_getInstanceMethod(cls, alias));
        NSLog(@"[SS06LogOnly] observer %@ installed", NSStringFromSelector(selector));
        return YES;
    } @catch (__unused NSException *exception) {
        NSLog(@"[SS06LogOnly] observer %@ unavailable=initialization", NSStringFromSelector(selector));
        return NO;
    }
}

static BOOL SS06LogOnlyInstallObservers(void)
{
    BOOL payload = SS06LogOnlyInstallObserver(
        NSClassFromString(@"SCLoginJanusService"),
        NSSelectorFromString(@"_appLoginClientAttestationPayload"),
        NSSelectorFromString(@"ss06_logonly_appLoginClientAttestationPayload"),
        (IMP)SS06LogOnly_appLoginClientAttestationPayload, &SS06LogOnlyOriginalPayload, NO);
    BOOL token = SS06LogOnlyInstallObserver(
        NSClassFromString(@"SCJanusAppLoginRequest"),
        NSSelectorFromString(@"setIosDeviceCheckToken:"),
        NSSelectorFromString(@"ss06_logonly_setIosDeviceCheckToken:"),
        (IMP)SS06LogOnly_setIosDeviceCheckToken, &SS06LogOnlyOriginalTokenSetter, YES);
    return payload && token;
}

#ifndef SS06_LOGONLY_TESTING
__attribute__((constructor))
static void SS06LogOnlyInit(void)
{
    @autoreleasepool {
        NSLog(@"[SS06LogOnly] logonly active; lengths only; original values preserved");
        if (!SS06LogOnlyInstallObservers()) {
            // Une seule reprise, sans attente bloquante, après l'initialisation
            // du processus. Une classe toujours absente reste explicitement signalée.
            dispatch_async(dispatch_get_main_queue(), ^{
                @autoreleasepool { SS06LogOnlyInstallObservers(); }
            });
        }
    }
}
#endif
