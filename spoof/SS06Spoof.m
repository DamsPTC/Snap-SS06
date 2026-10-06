//
// SS06Spoof.m — instrumentation du client iOS de laboratoire 14.25.0.48.
// Couche 1 : masque les lectures Keychain des identifiants persistants ciblés.
// Couche 2 : IDFV/IDFA remplacés par des UUID stockés dans NSUserDefaults.
// Couche 3 : attributs matériels et système laissés intacts.
//

#import <Foundation/Foundation.h>
#import <objc/runtime.h>
#import <dispatch/dispatch.h>

// 0 : swizzles seuls ; 1 : swizzles et interposition Keychain (défaut).
#ifndef SS06_ENABLE_KEYCHAIN_INTERPOSE
#define SS06_ENABLE_KEYCHAIN_INTERPOSE 1
#endif
#if SS06_ENABLE_KEYCHAIN_INTERPOSE
#import <Security/Security.h>
#import <dlfcn.h>
#endif

#pragma mark - UUID stables

static NSString *SS06StoredUUID(NSString *storageKey)
{
    NSUserDefaults *defaults = [NSUserDefaults standardUserDefaults];
    @synchronized (defaults) {
        NSString *uuid = [defaults stringForKey:storageKey];
        if (uuid.length == 0 || ![[NSUUID alloc] initWithUUIDString:uuid]) {
            uuid = [[NSUUID UUID] UUIDString];
            [defaults setObject:uuid forKey:storageKey];
            [defaults synchronize];
        }
        return uuid;
    }
}

#pragma mark - Swizzles IDFV / IDFA

static id SS06_identifierForVendor(id self, SEL _cmd)
{
    return [[NSUUID alloc] initWithUUIDString:SS06StoredUUID(@"ss06.idfv")];
}

static id SS06_advertisingIdentifier(id self, SEL _cmd)
{
    return [[NSUUID alloc] initWithUUIDString:SS06StoredUUID(@"ss06.idfa")];
}

static void SS06SwizzleInstanceMethod(Class cls, NSString *selector, IMP imp)
{
    if (!cls) return;
    SEL sel = NSSelectorFromString(selector);
    Method original = class_getInstanceMethod(cls, sel);
    if (!original) return;

    SEL spoofSel = NSSelectorFromString([NSString stringWithFormat:@"ss06_%@", selector]);
    BOOL added = class_addMethod(cls, spoofSel, imp, method_getTypeEncoding(original));
    if (!added) return;
    Method spoofed = class_getInstanceMethod(cls, spoofSel);
    method_exchangeImplementations(original, spoofed);
}

#pragma mark - Interposition SecItemCopyMatching

#if SS06_ENABLE_KEYCHAIN_INTERPOSE
static OSStatus (*SS06_orig_SecItemCopyMatching)(CFDictionaryRef query, CFTypeRef *result);

static OSStatus SS06_SecItemCopyMatching(CFDictionaryRef query, CFTypeRef *result)
{
    @autoreleasepool {
        if (query) {
            NSDictionary *q = (__bridge NSDictionary *)query;
            id account = q[(__bridge id)kSecAttrAccount] ?: @"";
            id service = q[(__bridge id)kSecAttrService] ?: @"";

            // Motifs fournis pour le test ; leur présence n'est pas une preuve
            // qu'ils sont tous utilisés comme compte/service dans le Keychain.
            static NSArray<NSString *> *needles;
            static dispatch_once_t needlesOnce;
            dispatch_once(&needlesOnce, ^{
                needles = @[
                    @"device_id",        @"deviceId",        @"DeviceId",
                    @"DeviceToken",       @"device_token",
                    @"fidelius",
                    @"durable_device_id",
                    @"persistent_device_id",
                    @"persistent_attestation_device_id",
                    @"config_device_id",
                    @"SCConfigDeviceId",
                    @"SCDeviceToken",
                ];
            });

            NSString *haystack = [NSString stringWithFormat:@"%@|%@", account, service];
            for (NSString *needle in needles) {
                if ([haystack rangeOfString:needle].location != NSNotFound) {
                    if (result) *result = NULL;
                    return errSecItemNotFound;
                }
            }
        }
    }

    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        SS06_orig_SecItemCopyMatching =
            (OSStatus (*)(CFDictionaryRef, CFTypeRef *))dlsym(RTLD_NEXT, "SecItemCopyMatching");
    });
    // Évite un appel NULL ou une récursion si le résolveur ne fournit pas l'original.
    if (!SS06_orig_SecItemCopyMatching || SS06_orig_SecItemCopyMatching == SS06_SecItemCopyMatching) {
        if (result) *result = NULL;
        return errSecNotAvailable;
    }
    return SS06_orig_SecItemCopyMatching(query, result);
}

__attribute__((used))
static struct SS06InterposeRecord {
    const void *replacement;
    const void *replacee;
} SS06_interpose_SecItemCopyMatching
    __attribute__((section("__DATA,__interpose"))) = {
        (const void *)&SS06_SecItemCopyMatching,
        (const void *)&SecItemCopyMatching,
    };
#endif

#pragma mark - Init

__attribute__((constructor))
static void SS06Init(void)
{
    @autoreleasepool {
        SS06SwizzleInstanceMethod(NSClassFromString(@"UIDevice"),
                                   @"identifierForVendor",
                                   (IMP)SS06_identifierForVendor);
        SS06SwizzleInstanceMethod(NSClassFromString(@"ASIdentifierManager"),
                                   @"advertisingIdentifier",
                                   (IMP)SS06_advertisingIdentifier);
#if SS06_ENABLE_KEYCHAIN_INTERPOSE
        NSLog(@"[SS06Spoof] variante full — interposition déclarée, swizzles tentés");
#else
        NSLog(@"[SS06Spoof] variante swizzle — swizzles tentés, sans interposition Keychain");
#endif
    }
}
