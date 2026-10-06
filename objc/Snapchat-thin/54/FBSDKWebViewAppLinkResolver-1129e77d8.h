// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKWebViewAppLinkResolver
// Superclass: NSObject
// Address: 0x1129e77d8

@interface FBSDKWebViewAppLinkResolver

// Property: sessionProvider; attributes: T@"<FBSDKURLSessionProviding>",&,N,V_sessionProvider
// Property: errorFactory; attributes: T@"<FBSDKErrorCreating>",&,N,V_errorFactory
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKWebViewAppLinkResolver init]
// Type encoding: @16@0:8
// Implementation: 0x104991a30

// -[FBSDKWebViewAppLinkResolver initWithSessionProvider:errorFactory:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104991aa4

// -[FBSDKWebViewAppLinkResolver followRedirects:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104991be4

// -[FBSDKWebViewAppLinkResolver appLinkFromURL:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104991f88

// -[FBSDKWebViewAppLinkResolver parseALData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049925f8

// -[FBSDKWebViewAppLinkResolver getALDataFromLoadedPage:handler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104992988

// -[FBSDKWebViewAppLinkResolver appLinkFromALData:destination:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104992b20

// -[FBSDKWebViewAppLinkResolver sessionProvider]
// Type encoding: @16@0:8
// Implementation: 0x104993288

// -[FBSDKWebViewAppLinkResolver setSessionProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104993290

// -[FBSDKWebViewAppLinkResolver errorFactory]
// Type encoding: @16@0:8
// Implementation: 0x10499329c

// -[FBSDKWebViewAppLinkResolver setErrorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049932a4

// -[FBSDKWebViewAppLinkResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049932b0

// +[FBSDKWebViewAppLinkResolver sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x104991b48

@end
