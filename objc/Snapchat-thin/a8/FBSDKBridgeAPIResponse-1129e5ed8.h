// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKBridgeAPIResponse
// Superclass: NSObject
// Address: 0x1129e5ed8

@interface FBSDKBridgeAPIResponse

// Property: cancelled; attributes: TB,R,N,GisCancelled,V_cancelled
// Property: error; attributes: T@"NSError",R,C,N,V_error
// Property: request; attributes: T@"NSObject<FBSDKBridgeAPIRequest>",R,C,N,V_request
// Property: responseParameters; attributes: T@"NSDictionary",R,C,N,V_responseParameters
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKBridgeAPIResponse initWithRequest:responseParameters:cancelled:error:]
// Type encoding: @44@0:8@16@24B32@36
// Implementation: 0x10494fae8

// -[FBSDKBridgeAPIResponse copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10494fbd8

// -[FBSDKBridgeAPIResponse isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x10494fbdc

// -[FBSDKBridgeAPIResponse error]
// Type encoding: @16@0:8
// Implementation: 0x10494fbe4

// -[FBSDKBridgeAPIResponse request]
// Type encoding: @16@0:8
// Implementation: 0x10494fbec

// -[FBSDKBridgeAPIResponse responseParameters]
// Type encoding: @16@0:8
// Implementation: 0x10494fbf4

// -[FBSDKBridgeAPIResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10494fbfc

// +[FBSDKBridgeAPIResponse bridgeAPIResponseWithRequest:error:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10494f6a8

// +[FBSDKBridgeAPIResponse bridgeAPIResponseWithRequest:responseURL:sourceApplication:error:]
// Type encoding: @48@0:8@16@24@32^@40
// Implementation: 0x10494f71c

// +[FBSDKBridgeAPIResponse bridgeAPIResponseWithRequest:responseURL:sourceApplication:osVersionComparer:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x10494f7e0

// +[FBSDKBridgeAPIResponse bridgeAPIResponseCancelledWithRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x10494fa94

@end
