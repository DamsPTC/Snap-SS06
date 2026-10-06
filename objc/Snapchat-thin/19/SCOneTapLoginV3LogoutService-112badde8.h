// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginV3LogoutService
// Superclass: NSObject
// Address: 0x112badde8

@interface SCOneTapLoginV3LogoutService


// -[SCOneTapLoginV3LogoutService initWithNetworkServices:oneTapLoginRegistry:graphene:userTrackedLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108b94188

// -[SCOneTapLoginV3LogoutService performLogoutRequest:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108b94284

// -[SCOneTapLoginV3LogoutService _logoutRequestCompleted:error:authSessionId:requestId:callback:]
// Type encoding: v56@0:8Q16@24@32@40@?48
// Implementation: 0x108b946a0

// -[SCOneTapLoginV3LogoutService _bitmojiFetchingCompleted:authSessionId:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x108b94928

// -[SCOneTapLoginV3LogoutService _v3TokenFetchingCompleted:callback:authSessionId:]
// Type encoding: v36@0:8B16@?20@28
// Implementation: 0x108b94ab0

// -[SCOneTapLoginV3LogoutService _logLogoutEndpointAttempt:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b94b90

// -[SCOneTapLoginV3LogoutService _logLogoutEndpointResponse:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108b94c0c

// -[SCOneTapLoginV3LogoutService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108b94cc0

@end
