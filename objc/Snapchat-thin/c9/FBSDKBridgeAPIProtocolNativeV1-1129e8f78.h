// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKBridgeAPIProtocolNativeV1
// Superclass: NSObject
// Address: 0x1129e8f78

@interface FBSDKBridgeAPIProtocolNativeV1

// Property: appScheme; attributes: T@"NSString",N,R
// Property: dataLengthThreshold; attributes: TQ,N,R,VdataLengthThreshold
// Property: shouldIncludeAppIcon; attributes: TB,N,R,VshouldIncludeAppIcon
// Property: pasteboard; attributes: T@"<FBSDKPasteboard>",N,R,Vpasteboard
// Property: appIcon; attributes: T@"UIImage",N,R

// -[FBSDKBridgeAPIProtocolNativeV1 appScheme]
// Type encoding: @16@0:8
// Implementation: 0x1049f8234

// -[FBSDKBridgeAPIProtocolNativeV1 dataLengthThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x1049f82c8

// -[FBSDKBridgeAPIProtocolNativeV1 shouldIncludeAppIcon]
// Type encoding: B16@0:8
// Implementation: 0x1049f82e8

// -[FBSDKBridgeAPIProtocolNativeV1 pasteboard]
// Type encoding: @16@0:8
// Implementation: 0x1049f8308

// -[FBSDKBridgeAPIProtocolNativeV1 appIcon]
// Type encoding: @16@0:8
// Implementation: 0x1049f8354

// -[FBSDKBridgeAPIProtocolNativeV1 initWithAppScheme:]
// Type encoding: @24@0:8@16
// Implementation: 0x1049f87e8

// -[FBSDKBridgeAPIProtocolNativeV1 initWithAppScheme:pasteboard:dataLengthThreshold:includeAppIcon:]
// Type encoding: @44@0:8@16@24Q32B40
// Implementation: 0x1049f89e0

// -[FBSDKBridgeAPIProtocolNativeV1 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1049f8bac

// -[FBSDKBridgeAPIProtocolNativeV1 requestURLWithActionID:scheme:methodName:parameters:error:]
// Type encoding: @56@0:8@16@24@32@40^@48
// Implementation: 0x1049f93d8

// -[FBSDKBridgeAPIProtocolNativeV1 responseParametersForActionID:queryParameters:cancelled:error:]
// Type encoding: @48@0:8@16@24^B32^@40
// Implementation: 0x1049fa018

// -[FBSDKBridgeAPIProtocolNativeV1 init]
// Type encoding: @16@0:8
// Implementation: 0x1049facf0

// -[FBSDKBridgeAPIProtocolNativeV1 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049f8bd0

// +[FBSDKBridgeAPIProtocolNativeV1 defaultMaxBase64DataLengthThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x1049f834c

@end
