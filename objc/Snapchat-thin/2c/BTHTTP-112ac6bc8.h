// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: BTHTTP
// Superclass: NSObject
// Address: 0x112ac6bc8

@interface BTHTTP

// Property: baseURL; attributes: T@"NSURL",&,N,V_baseURL
// Property: authorizationFingerprint; attributes: T@"NSString",C,N,V_authorizationFingerprint
// Property: tokenizationKey; attributes: T@"NSString",C,N,V_tokenizationKey
// Property: pinnedCertificates; attributes: T@"NSArray",&,N,V_pinnedCertificates
// Property: session; attributes: T@"NSURLSession",&,N,V_session
// Property: dispatchQueue; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_dispatchQueue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[BTHTTP init]
// Type encoding: @16@0:8
// Implementation: 0x1060f0f94

// -[BTHTTP initWithBaseURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060f0fac

// -[BTHTTP initWithBaseURL:authorizationFingerprint:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060f1018

// -[BTHTTP initWithBaseURL:tokenizationKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060f115c

// -[BTHTTP initWithClientToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x1060f12a0

// -[BTHTTP copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1060f1368

// -[BTHTTP setSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f1450

// -[BTHTTP GET:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1060f148c

// -[BTHTTP GET:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060f1498

// -[BTHTTP POST:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1060f14b0

// -[BTHTTP POST:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060f14bc

// -[BTHTTP PUT:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1060f14d4

// -[BTHTTP PUT:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060f14e0

// -[BTHTTP DELETE:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1060f14f8

// -[BTHTTP DELETE:parameters:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060f1504

// -[BTHTTP httpRequest:path:parameters:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1060f151c

// -[BTHTTP handleRequestCompletion:response:error:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1060f1c48

// -[BTHTTP callCompletionBlock:body:response:error:]
// Type encoding: v48@0:8@?16@24@32@40
// Implementation: 0x1060f2234

// -[BTHTTP dispatchQueue]
// Type encoding: @16@0:8
// Implementation: 0x1060f2374

// -[BTHTTP defaultHeaders]
// Type encoding: @16@0:8
// Implementation: 0x1060f23a8

// -[BTHTTP userAgentString]
// Type encoding: @16@0:8
// Implementation: 0x1060f24a8

// -[BTHTTP platformString]
// Type encoding: @16@0:8
// Implementation: 0x1060f24e0

// -[BTHTTP architectureString]
// Type encoding: @16@0:8
// Implementation: 0x1060f2570

// -[BTHTTP acceptString]
// Type encoding: @16@0:8
// Implementation: 0x1060f2600

// -[BTHTTP acceptLanguageString]
// Type encoding: @16@0:8
// Implementation: 0x1060f260c

// -[BTHTTP pinnedCertificateData]
// Type encoding: @16@0:8
// Implementation: 0x1060f26cc

// -[BTHTTP URLSession:didReceiveChallenge:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1060f2804

// -[BTHTTP isEqualToHTTP:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f2a3c

// -[BTHTTP isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1060f2b18

// -[BTHTTP pinnedCertificates]
// Type encoding: @16@0:8
// Implementation: 0x1060f2b90

// -[BTHTTP setPinnedCertificates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f2b98

// -[BTHTTP session]
// Type encoding: @16@0:8
// Implementation: 0x1060f2bc8

// -[BTHTTP baseURL]
// Type encoding: @16@0:8
// Implementation: 0x1060f2bd0

// -[BTHTTP setBaseURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f2bd8

// -[BTHTTP setDispatchQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f2c08

// -[BTHTTP authorizationFingerprint]
// Type encoding: @16@0:8
// Implementation: 0x1060f2c38

// -[BTHTTP setAuthorizationFingerprint:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f2c40

// -[BTHTTP tokenizationKey]
// Type encoding: @16@0:8
// Implementation: 0x1060f2c48

// -[BTHTTP setTokenizationKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060f2c50

// -[BTHTTP .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060f2c58

@end
