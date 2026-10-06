// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKInternalUtility
// Superclass: NSObject
// Address: 0x1129e6b30

@interface FBSDKInternalUtility

// Property: loggerFactory; attributes: T@"<__FBSDKLoggerCreating>",&,N,V_loggerFactory
// Property: isConfigured; attributes: TB,N,V_isConfigured
// Property: infoDictionaryProvider; attributes: T@"<FBSDKInfoDictionaryProviding>",&,N,V_infoDictionaryProvider
// Property: settings; attributes: T@"<FBSDKSettings>",&,N,V_settings
// Property: errorFactory; attributes: T@"<FBSDKErrorCreating>",&,N,V_errorFactory
// Property: bundleForStrings; attributes: T@"NSBundle",R,N
// Property: isMessengerAppInstalled; attributes: TB,R,N
// Property: isFacebookAppInstalled; attributes: TB,R,N
// Property: appURLScheme; attributes: T@"NSString",R,C,N
// Property: isUnity; attributes: TB,R,N

// -[FBSDKInternalUtility configureWithInfoDictionaryProvider:loggerFactory:settings:errorFactory:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10496c1e0

// -[FBSDKInternalUtility appURLScheme]
// Type encoding: @16@0:8
// Implementation: 0x10496c28c

// -[FBSDKInternalUtility appURLWithHost:path:queryParameters:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10496c380

// -[FBSDKInternalUtility parametersFromFBURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10496c43c

// -[FBSDKInternalUtility bundleForStrings]
// Type encoding: @16@0:8
// Implementation: 0x10496c560

// -[FBSDKInternalUtility currentTimeInMilliseconds]
// Type encoding: Q16@0:8
// Implementation: 0x10496c6a0

// -[FBSDKInternalUtility extractPermissionsFromResponse:grantedPermissions:declinedPermissions:expiredPermissions:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10496c6f0

// -[FBSDKInternalUtility facebookURLWithHostPrefix:path:queryParameters:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10496c978

// -[FBSDKInternalUtility facebookURLWithHostPrefix:path:queryParameters:defaultVersion:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x10496c988

// -[FBSDKInternalUtility unversionedFacebookURLWithHostPrefix:path:queryParameters:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10496cac8

// -[FBSDKInternalUtility _facebookURLWithHostPrefix:path:queryParameters:defaultVersion:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x10496cad8

// -[FBSDKInternalUtility isBrowserURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496ceec

// -[FBSDKInternalUtility isFacebookBundleIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496cf74

// -[FBSDKInternalUtility isSafariBundleIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496cfd0

// -[FBSDKInternalUtility object:isEqualToObject:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10496d02c

// -[FBSDKInternalUtility operatingSystemVersion]
// Type encoding: {?=qqq}16@0:8
// Implementation: 0x10496d0a8

// -[FBSDKInternalUtility URLWithScheme:host:path:queryParameters:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x10496d168

// -[FBSDKInternalUtility deleteFacebookCookies]
// Type encoding: v16@0:8
// Implementation: 0x10496d428

// -[FBSDKInternalUtility registerTransientObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496d598

// -[FBSDKInternalUtility unregisterTransientObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496d650

// -[FBSDKInternalUtility viewControllerForView:]
// Type encoding: @24@0:8@16
// Implementation: 0x10496d80c

// -[FBSDKInternalUtility isFacebookAppInstalled]
// Type encoding: B16@0:8
// Implementation: 0x10496d888

// -[FBSDKInternalUtility isMessengerAppInstalled]
// Type encoding: B16@0:8
// Implementation: 0x10496d928

// -[FBSDKInternalUtility _canOpenURLScheme:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496d9c8

// -[FBSDKInternalUtility validateAppID]
// Type encoding: v16@0:8
// Implementation: 0x10496db68

// -[FBSDKInternalUtility validateRequiredClientAccessToken]
// Type encoding: @16@0:8
// Implementation: 0x10496dbec

// -[FBSDKInternalUtility validateURLSchemes]
// Type encoding: v16@0:8
// Implementation: 0x10496dd1c

// -[FBSDKInternalUtility validateFacebookReservedURLSchemes]
// Type encoding: v16@0:8
// Implementation: 0x10496de58

// -[FBSDKInternalUtility validateDomainConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10496dfe4

// -[FBSDKInternalUtility extendDictionaryWithDataProcessingOptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496e4b0

// -[FBSDKInternalUtility findWindow]
// Type encoding: @16@0:8
// Implementation: 0x10496e644

// -[FBSDKInternalUtility topMostViewController]
// Type encoding: @16@0:8
// Implementation: 0x10496eb1c

// -[FBSDKInternalUtility statusBarOrientation]
// Type encoding: q16@0:8
// Implementation: 0x10496ec84

// -[FBSDKInternalUtility hexadecimalStringFromData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10496ed08

// -[FBSDKInternalUtility isRegisteredURLScheme:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496edc0

// -[FBSDKInternalUtility checkRegisteredCanOpenURLScheme:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496efe4

// -[FBSDKInternalUtility isRegisteredCanOpenURLScheme:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496f158

// -[FBSDKInternalUtility isPublishPermission:]
// Type encoding: B24@0:8@16
// Implementation: 0x10496f268

// -[FBSDKInternalUtility isUnity]
// Type encoding: B16@0:8
// Implementation: 0x10496f300

// -[FBSDKInternalUtility validateConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x10496f378

// -[FBSDKInternalUtility loggerFactory]
// Type encoding: @16@0:8
// Implementation: 0x10496f37c

// -[FBSDKInternalUtility setLoggerFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496f384

// -[FBSDKInternalUtility isConfigured]
// Type encoding: B16@0:8
// Implementation: 0x10496f390

// -[FBSDKInternalUtility setIsConfigured:]
// Type encoding: v20@0:8B16
// Implementation: 0x10496f398

// -[FBSDKInternalUtility infoDictionaryProvider]
// Type encoding: @16@0:8
// Implementation: 0x10496f3a0

// -[FBSDKInternalUtility setInfoDictionaryProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496f3a8

// -[FBSDKInternalUtility settings]
// Type encoding: @16@0:8
// Implementation: 0x10496f3b4

// -[FBSDKInternalUtility setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496f3bc

// -[FBSDKInternalUtility errorFactory]
// Type encoding: @16@0:8
// Implementation: 0x10496f3c8

// -[FBSDKInternalUtility setErrorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10496f3d0

// -[FBSDKInternalUtility .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10496f3dc

// +[FBSDKInternalUtility sharedUtility]
// Type encoding: @16@0:8
// Implementation: 0x10496c170

@end
