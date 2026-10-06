// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLocationAccessRequester
// Superclass: NSObject
// Address: 0x112b5f030

@interface SCLocationAccessRequester

// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: shouldFilterDataProviderRequestToUseLocation; attributes: TB,R,N,V_shouldFilterDataProviderRequestToUseLocation
// Property: requestCompletionHandler; attributes: T@?,R,N,V_requestCompletionHandler
// Property: viewController; attributes: T@"UIViewController",R,W,N,V_viewController
// Property: pageViewName; attributes: T@"NSString",R,N,V_pageViewName
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLocationAccessRequester _initWithUserSession:pageViewName:viewController:shouldFilterDataProviderRequestToUseLocation:userLocationPermissionsManager:requestCompletionHandler:]
// Type encoding: @60@0:8@16@24@32B40@44@?52
// Implementation: 0x10716c06c

// -[SCLocationAccessRequester shouldRequestToUseLocation]
// Type encoding: B16@0:8
// Implementation: 0x10716c1ec

// -[SCLocationAccessRequester _userPostponedLocationPermissions]
// Type encoding: v16@0:8
// Implementation: 0x10716c290

// -[SCLocationAccessRequester requestToUseUserLocationWithPreRequestBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10716c314

// -[SCLocationAccessRequester hasPostponedLocationPermissions]
// Type encoding: B16@0:8
// Implementation: 0x10716c4d4

// -[SCLocationAccessRequester permissionsManagerWantsToPresentPermissionsPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x10716c534

// -[SCLocationAccessRequester userSession]
// Type encoding: @16@0:8
// Implementation: 0x10716c584

// -[SCLocationAccessRequester shouldFilterDataProviderRequestToUseLocation]
// Type encoding: B16@0:8
// Implementation: 0x10716c59c

// -[SCLocationAccessRequester requestCompletionHandler]
// Type encoding: @?16@0:8
// Implementation: 0x10716c5a4

// -[SCLocationAccessRequester viewController]
// Type encoding: @16@0:8
// Implementation: 0x10716c5ac

// -[SCLocationAccessRequester pageViewName]
// Type encoding: @16@0:8
// Implementation: 0x10716c5c4

// -[SCLocationAccessRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10716c5cc

// +[SCLocationAccessRequester createLocationAccessRequesterWithUserSession:pageViewName:viewController:shouldFilterDataProviderRequestToUseLocation:userLocationPermissionsManager:requestCompletionHandler:]
// Type encoding: @60@0:8@16@24@32B40@44@?52
// Implementation: 0x10716bfac

@end
