// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKBridgeAPIRequest
// Superclass: NSObject
// Address: 0x1129e5e88

@interface FBSDKBridgeAPIRequest

// Property: protocol; attributes: T@"<FBSDKBridgeAPIProtocol>",&,N,V_protocol
// Property: actionID; attributes: T@"NSString",R,C,N,V_actionID
// Property: methodName; attributes: T@"NSString",R,C,N,V_methodName
// Property: parameters; attributes: T@"NSDictionary",R,C,N,V_parameters
// Property: protocolType; attributes: TQ,R,N,V_protocolType
// Property: scheme; attributes: T@"NSString",R,C,N,V_scheme
// Property: userInfo; attributes: T@"NSDictionary",R,C,N,V_userInfo
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKBridgeAPIRequest initWithProtocol:protocolType:scheme:methodName:parameters:userInfo:]
// Type encoding: @64@0:8@16Q24@32@40@48@56
// Implementation: 0x10494f004

// -[FBSDKBridgeAPIRequest requestURL:]
// Type encoding: @24@0:8^@16
// Implementation: 0x10494f1b4

// -[FBSDKBridgeAPIRequest copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10494f488

// -[FBSDKBridgeAPIRequest actionID]
// Type encoding: @16@0:8
// Implementation: 0x10494f604

// -[FBSDKBridgeAPIRequest methodName]
// Type encoding: @16@0:8
// Implementation: 0x10494f60c

// -[FBSDKBridgeAPIRequest parameters]
// Type encoding: @16@0:8
// Implementation: 0x10494f614

// -[FBSDKBridgeAPIRequest protocolType]
// Type encoding: Q16@0:8
// Implementation: 0x10494f61c

// -[FBSDKBridgeAPIRequest scheme]
// Type encoding: @16@0:8
// Implementation: 0x10494f624

// -[FBSDKBridgeAPIRequest userInfo]
// Type encoding: @16@0:8
// Implementation: 0x10494f62c

// -[FBSDKBridgeAPIRequest protocol]
// Type encoding: @16@0:8
// Implementation: 0x10494f634

// -[FBSDKBridgeAPIRequest setProtocol:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494f63c

// -[FBSDKBridgeAPIRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10494f648

// +[FBSDKBridgeAPIRequest hasBeenConfigured]
// Type encoding: B16@0:8
// Implementation: 0x10494ebf8

// +[FBSDKBridgeAPIRequest setHasBeenConfigured:]
// Type encoding: v20@0:8B16
// Implementation: 0x10494ec04

// +[FBSDKBridgeAPIRequest internalURLOpener]
// Type encoding: @16@0:8
// Implementation: 0x10494ec10

// +[FBSDKBridgeAPIRequest setInternalURLOpener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494ec1c

// +[FBSDKBridgeAPIRequest internalUtility]
// Type encoding: @16@0:8
// Implementation: 0x10494ec2c

// +[FBSDKBridgeAPIRequest setInternalUtility:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494ec38

// +[FBSDKBridgeAPIRequest settings]
// Type encoding: @16@0:8
// Implementation: 0x10494ec48

// +[FBSDKBridgeAPIRequest setSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10494ec54

// +[FBSDKBridgeAPIRequest configureWithInternalURLOpener:internalUtility:settings:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10494ec64

// +[FBSDKBridgeAPIRequest bridgeAPIRequestWithProtocolType:scheme:methodName:parameters:userInfo:]
// Type encoding: @56@0:8Q16@24@32@40@48
// Implementation: 0x10494ed04

// +[FBSDKBridgeAPIRequest protocolMap]
// Type encoding: @16@0:8
// Implementation: 0x10494edf0

// +[FBSDKBridgeAPIRequest _protocolForType:scheme:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x10494f48c

@end
