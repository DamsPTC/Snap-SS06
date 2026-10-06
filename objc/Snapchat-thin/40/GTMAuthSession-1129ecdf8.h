// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: GTMAuthSession
// Superclass: NSObject
// Address: 0x1129ecdf8

@interface GTMAuthSession

// Property: authState; attributes: T@"OIDAuthState",N,R,VauthState
// Property: serviceProvider; attributes: T@"NSString",N,R
// Property: userID; attributes: T@"NSString",N,R
// Property: userEmail; attributes: T@"NSString",N,R
// Property: userEmailIsVerified; attributes: TB,N,R
// Property: shouldAuthorizeAllRequests; attributes: TB,N,VshouldAuthorizeAllRequests
// Property: delegate; attributes: T@"<GTMAuthSessionDelegate>",N,W,Vdelegate
// Property: fetcherService; attributes: T@"<GTMSessionFetcherServiceProtocol>",N,W,VfetcherService
// Property: canAuthorize; attributes: TB,N,R

// -[GTMAuthSession authState]
// Type encoding: @16@0:8
// Implementation: 0x104a3f7d8

// -[GTMAuthSession serviceProvider]
// Type encoding: @16@0:8
// Implementation: 0x104a3f7f8

// -[GTMAuthSession userID]
// Type encoding: @16@0:8
// Implementation: 0x104a3f83c

// -[GTMAuthSession userEmail]
// Type encoding: @16@0:8
// Implementation: 0x104a3f880

// -[GTMAuthSession userEmailIsVerified]
// Type encoding: B16@0:8
// Implementation: 0x104a3f91c

// -[GTMAuthSession shouldAuthorizeAllRequests]
// Type encoding: B16@0:8
// Implementation: 0x104a3f9f4

// -[GTMAuthSession setShouldAuthorizeAllRequests:]
// Type encoding: v20@0:8B16
// Implementation: 0x104a3fa78

// -[GTMAuthSession delegate]
// Type encoding: @16@0:8
// Implementation: 0x104a3fb58

// -[GTMAuthSession setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a3fb70

// -[GTMAuthSession fetcherService]
// Type encoding: @16@0:8
// Implementation: 0x104a3fc0c

// -[GTMAuthSession setFetcherService:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a3fca8

// -[GTMAuthSession initWithAuthState:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a3ff04

// -[GTMAuthSession initWithAuthState:serviceProvider:userID:userEmail:userEmailIsVerified:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104a40008

// -[GTMAuthSession encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a40368

// -[GTMAuthSession initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a4073c

// -[GTMAuthSession authorizeRequest:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104a40a94

// -[GTMAuthSession authorizeRequest:delegate:didFinishSelector:]
// Type encoding: v40@0:8@16@24:32
// Implementation: 0x104a40bdc

// -[GTMAuthSession stopAuthorization]
// Type encoding: v16@0:8
// Implementation: 0x104a41ea0

// -[GTMAuthSession stopAuthorizationForRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a42284

// -[GTMAuthSession isAuthorizingRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a426a8

// -[GTMAuthSession isAuthorizedRequest:]
// Type encoding: B24@0:8@16
// Implementation: 0x104a427c8

// -[GTMAuthSession canAuthorize]
// Type encoding: B16@0:8
// Implementation: 0x104a428a8

// -[GTMAuthSession primeForRefresh]
// Type encoding: B16@0:8
// Implementation: 0x104a42950

// -[GTMAuthSession init]
// Type encoding: @16@0:8
// Implementation: 0x104a42a3c

// -[GTMAuthSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a42a9c

// +[GTMAuthSession supportsSecureCoding]
// Type encoding: B16@0:8
// Implementation: 0x104a40138

// +[GTMAuthSession configurationForGoogle]
// Type encoding: @16@0:8
// Implementation: 0x104a429dc

@end
