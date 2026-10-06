// Diagnostic local : longueurs et captures explicites d'attestation/DeviceCheck.
// Compilé séparément de SS06Spoof.m. UIKit sert uniquement au presse-papiers.
#import <Foundation/Foundation.h>
#ifndef SS06_LOGONLY_TESTING
#import <UIKit/UIKit.h>
#endif
#import <objc/runtime.h>
#import <dispatch/dispatch.h>
#include <stdarg.h>
#include <string.h>

#ifndef SS06_SELFREAD
#define SS06_SELFREAD 0
#endif
static void SS06LogOnlyRecord(NSString *format, ...) NS_FORMAT_FUNCTION(1, 2);
#if SS06_SELFREAD
#import "SS06SelfRead.h"
#endif

#if SS06_ENABLE_KEYCHAIN_INTERPOSE || SS06_DISABLE_DEVICECHECK || SS06_DISABLE_LOGIN_ATTESTATION
#error "logonly ne doit inclure aucun remplacement de valeur"
#endif

static IMP SS06LogOnlyOriginalPayload;
static IMP SS06LogOnlyOriginalTokenSetter;
static BOOL SS06LogOnlyInstallObservers(void);
static void SS06LogOnlyDumpToken(id value, NSString *source, id path, unsigned long long call);

// Historique complet du processus ; valeurs capturées localement, sans fichier.
// Le verrou protège aussi le formateur de date et le compteur de révision.
static NSMutableString *SS06LogOnlyHistory;
static NSDateFormatter *SS06LogOnlyTimestampFormatter;
static NSUInteger SS06LogOnlyHistoryRevision;
static NSUInteger SS06LogOnlyPublishedRevision; // File principale uniquement.

#ifdef SS06_LOGONLY_TESTING
// Le test hôte remplace seulement les accès UIKit ; aucun presse-papiers réel.
static BOOL SS06LogOnlyAppIsActive(void);
static void SS06LogOnlyWriteClipboard(NSString *snapshot);
static NSString * const SS06LogOnlyActiveNotification = @"SS06LogOnlyTestDidBecomeActive";
#else
static BOOL SS06LogOnlyAppIsActive(void)
{
    return [UIApplication sharedApplication].applicationState == UIApplicationStateActive;
}

static void SS06LogOnlyWriteClipboard(NSString *snapshot)
{
    [[UIPasteboard generalPasteboard]
        setItems:@[@{@"public.utf8-plain-text": snapshot}]
        options:@{UIPasteboardOptionLocalOnly: @YES}];
}
#endif

static void SS06LogOnlyPrepareHistory(void)
{
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        SS06LogOnlyHistory = [NSMutableString new];
        SS06LogOnlyTimestampFormatter = [NSDateFormatter new];
        SS06LogOnlyTimestampFormatter.locale = [[NSLocale alloc] initWithLocaleIdentifier:@"en_US_POSIX"];
        SS06LogOnlyTimestampFormatter.timeZone = [NSTimeZone timeZoneForSecondsFromGMT:0];
        SS06LogOnlyTimestampFormatter.dateFormat = @"yyyy-MM-dd'T'HH:mm:ss.SSS'Z'";
    });
}

static void SS06LogOnlyPublishClipboard(void)
{
#if SS06_SELFREAD
    unsigned int depth = SS06SelfReadDepth++;
    int entryErrno = errno;
#endif
    @try {
        // L'init peut précéder l'activation d'UIApplication. Les lignes restent
        // en mémoire et seront publiées à UIApplicationDidBecomeActiveNotification.
        if (!SS06LogOnlyAppIsActive()) return;
        SS06LogOnlyPrepareHistory();
        NSString *snapshot;
        NSUInteger revision;
        @synchronized (SS06LogOnlyHistory) {
            revision = SS06LogOnlyHistoryRevision;
            if (revision <= SS06LogOnlyPublishedRevision) return;
            snapshot = [SS06LogOnlyHistory copy];
        }
        // Snapshot pris au moment de l'exécution, jamais capturé dans une tâche
        // ancienne : une copie retardée ne peut pas rétablir un historique périmé.
        SS06LogOnlyWriteClipboard(snapshot);
        SS06LogOnlyPublishedRevision = revision;
    } @catch (__unused NSException *exception) {
        // Laisse la révision en attente pour la prochaine mesure/activation.
        // Ne pas journaliser ici : cela réenclencherait la copie en boucle.
    }
#if SS06_SELFREAD
    @finally { SS06SelfReadDepth = depth; errno = entryErrno; }
#endif
}

static void SS06LogOnlyRecord(NSString *format, ...)
{
#if SS06_SELFREAD
    unsigned int depth = SS06SelfReadDepth++;
    int entryErrno = errno;
#endif
    va_list arguments;
    va_start(arguments, format);
    @try {
        NSString *message = [[NSString alloc] initWithFormat:format arguments:arguments];
        SS06LogOnlyPrepareHistory();
        NSString *line;
        @synchronized (SS06LogOnlyHistory) {
            NSString *timestamp = [SS06LogOnlyTimestampFormatter stringFromDate:[NSDate date]];
            line = [NSString stringWithFormat:@"[SS06LogOnly] %@ %@", timestamp, message];
            [SS06LogOnlyHistory appendFormat:@"%@\n", line];
            ++SS06LogOnlyHistoryRevision;
        }
        // Aucun accès UIKit ni attente de la file principale dans l'observateur.
#if SS06_SELFREAD
        // A page scan may produce thousands of lines. Keep only one pending
        // clipboard task; its snapshot contains every accumulated line.
        if (!atomic_exchange_explicit(&SS06SelfReadClipboardPending, true, memory_order_relaxed)) {
            dispatch_async(dispatch_get_main_queue(), ^{
                atomic_store_explicit(&SS06SelfReadClipboardPending, false, memory_order_relaxed);
                SS06LogOnlyPublishClipboard();
            });
        }
#else
        dispatch_async(dispatch_get_main_queue(), ^{ SS06LogOnlyPublishClipboard(); });
#endif
        NSLog(@"%@", line);
    } @catch (__unused NSException *exception) {
        // Le diagnostic ne doit pas modifier le résultat de la méthode observée.
    } @finally {
        va_end(arguments);
#if SS06_SELFREAD
        SS06SelfReadDepth = depth;
        errno = entryErrno;
#endif
    }
}

static void SS06LogOnlyObserveActivation(void)
{
    static dispatch_once_t once;
    static id activationObserver;
    dispatch_once(&once, ^{
        activationObserver = [[NSNotificationCenter defaultCenter]
#ifdef SS06_LOGONLY_TESTING
            addObserverForName:SS06LogOnlyActiveNotification
#else
            addObserverForName:UIApplicationDidBecomeActiveNotification
#endif
            object:nil queue:[NSOperationQueue mainQueue]
            usingBlock:^(__unused NSNotification *notification) {
                SS06LogOnlyInstallObservers(); // Reprise des seules cibles encore absentes.
                SS06LogOnlyPublishClipboard();
            }];
    });
    (void)activationObserver; // Conservé pendant toute la vie du processus.
    SS06LogOnlyPublishClipboard();
}

static void SS06LogOnlyMeasurePayload(id value)
{
    @try {
        if (!value) {
            SS06LogOnlyRecord(@"clientAttestationPayload state=nil bytes=0");
        } else if ([value isKindOfClass:[NSData class]]) {
            NSUInteger length = [(NSData *)value length];
            SS06LogOnlyRecord(@"clientAttestationPayload state=%@ bytes=%lu",
                  length ? @"nonempty" : @"empty", (unsigned long)length);
        } else {
            SS06LogOnlyRecord(@"clientAttestationPayload state=unexpected-type bytes=unknown");
        }
    } @catch (__unused NSException *exception) {
        // Une exception de mesure ne remplace pas le résultat de l'application.
        SS06LogOnlyRecord(@"clientAttestationPayload state=measurement-failed");
    }
}

static void SS06LogOnlyMeasureToken(id value)
{
    @try {
        if (!value) {
            SS06LogOnlyRecord(@"iosDeviceCheckToken state=nil chars=0 utf8_bytes=0");
        } else if ([value isKindOfClass:[NSString class]]) {
            NSUInteger chars = [(NSString *)value length];
            NSUInteger bytes = [(NSString *)value lengthOfBytesUsingEncoding:NSUTF8StringEncoding];
            SS06LogOnlyRecord(@"iosDeviceCheckToken state=%@ chars=%lu utf8_bytes=%lu",
                  chars ? @"nonempty" : @"empty", (unsigned long)chars, (unsigned long)bytes);
        } else {
            SS06LogOnlyRecord(@"iosDeviceCheckToken state=unexpected-type length=unknown");
        }
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"iosDeviceCheckToken state=measurement-failed");
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
    SS06LogOnlyDumpToken(value, @"request.iosDeviceCheckToken", nil, 0);
}

static char SS06LogOnlyTypeCode(const char *encoding)
{
    while (*encoding && strchr("rnNoORV", *encoding)) ++encoding;
    return *encoding;
}

static BOOL SS06LogOnlyInstallTypedObserver(Class cls, SEL selector, SEL alias,
                                          IMP observer, IMP *originalSlot, const char *signature)
{
    if (*originalSlot) return YES; // Une seconde tentative ne ré-échange pas.
    if (!cls) {
        SS06LogOnlyRecord(@"observer %@ unavailable=class", NSStringFromSelector(selector));
        return NO;
    }

    @try {
        // class_getInstanceMethod consulte aussi la résolution dynamique :
        // les setters GPBMessage peuvent être générés à la première recherche.
        Method original = class_getInstanceMethod(cls, selector);
        char returnType[32] = {0}, argumentType[32] = {0};
        size_t signatureLength = strlen(signature); // Retour, puis arguments explicites.
        if (!original || method_getNumberOfArguments(original) != signatureLength + 1) {
            SS06LogOnlyRecord(@"observer %@ unavailable=method", NSStringFromSelector(selector));
            return NO;
        }
        method_getReturnType(original, returnType, sizeof(returnType));
        BOOL valid = SS06LogOnlyTypeCode(returnType) == signature[0];
        for (size_t index = 1; index < signatureLength; ++index) {
            method_getArgumentType(original, (unsigned int)index + 1, argumentType, sizeof(argumentType));
            valid = valid && SS06LogOnlyTypeCode(argumentType) == signature[index];
        }
        if (!valid) {
            SS06LogOnlyRecord(@"observer %@ unavailable=signature", NSStringFromSelector(selector));
            return NO;
        }

        IMP implementation = method_getImplementation(original);
        const char *encoding = method_getTypeEncoding(original);
        if (!class_addMethod(cls, alias, observer, encoding)) {
            SS06LogOnlyRecord(@"observer %@ unavailable=alias", NSStringFromSelector(selector));
            return NO;
        }
        // Une méthode héritée est localisée sur la classe ciblée : la classe
        // de base et les autres messages protobuf ne sont pas modifiés.
        class_addMethod(cls, selector, implementation, encoding);
        original = class_getInstanceMethod(cls, selector);
        *originalSlot = implementation;
        method_exchangeImplementations(original, class_getInstanceMethod(cls, alias));
        SS06LogOnlyRecord(@"observer %@ installed class=%@", NSStringFromSelector(selector), NSStringFromClass(cls));
        return YES;
    } @catch (__unused NSException *exception) {
        SS06LogOnlyRecord(@"observer %@ unavailable=initialization", NSStringFromSelector(selector));
        return NO;
    }
}

#import "SS06LogOnlyTransport.h"

static BOOL SS06LogOnlyInstallObservers(void)
{
    BOOL payload = SS06LogOnlyInstallTypedObserver(
        NSClassFromString(@"SCLoginJanusService"),
        NSSelectorFromString(@"_appLoginClientAttestationPayload"),
        NSSelectorFromString(@"ss06_logonly_appLoginClientAttestationPayload"),
        (IMP)SS06LogOnly_appLoginClientAttestationPayload, &SS06LogOnlyOriginalPayload, "@");
    BOOL token = SS06LogOnlyInstallTypedObserver(
        NSClassFromString(@"SCJanusAppLoginRequest"),
        NSSelectorFromString(@"setIosDeviceCheckToken:"),
        NSSelectorFromString(@"ss06_logonly_setIosDeviceCheckToken:"),
        (IMP)SS06LogOnly_setIosDeviceCheckToken, &SS06LogOnlyOriginalTokenSetter, "v@");
    BOOL transport = SS06LogOnlyInstallTransportObservers();
    return payload && token && transport;
}

static void SS06LogOnlyStart(void)
{
    @autoreleasepool {
        dispatch_async(dispatch_get_main_queue(), ^{ SS06LogOnlyObserveActivation(); });
#if SS06_SELFREAD
        SS06LogOnlyRecord(@"init logonly active; trace=selfread-v1; base=values-v3; local attestation/token dumps; original values preserved; clipboard=automatic");
        SS06SelfReadStart();
#else
        SS06LogOnlyRecord(@"init logonly active; trace=values-v3; local attestation/token dumps; original values preserved; clipboard=automatic");
#endif
        if (!SS06LogOnlyInstallObservers()) {
            // Une seule reprise, sans attente bloquante, après l'initialisation
            // du processus. Une classe toujours absente reste explicitement signalée.
            dispatch_async(dispatch_get_main_queue(), ^{
                @autoreleasepool { SS06LogOnlyInstallObservers(); }
            });
        }
    }
}

#ifndef SS06_LOGONLY_TESTING
__attribute__((constructor))
static void SS06LogOnlyInit(void)
{
    SS06LogOnlyStart();
}
#endif
