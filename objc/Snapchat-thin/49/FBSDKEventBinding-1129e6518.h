// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKEventBinding
// Superclass: NSObject
// Address: 0x1129e6518

@interface FBSDKEventBinding

// Property: eventLogger; attributes: T@"<FBSDKEventLogging>",&,N,V_eventLogger
// Property: eventName; attributes: T@"NSString",R,C,N,V_eventName
// Property: eventType; attributes: T@"NSString",R,C,N,V_eventType
// Property: appVersion; attributes: T@"NSString",R,C,N,V_appVersion
// Property: path; attributes: T@"NSArray",R,N,V_path
// Property: pathType; attributes: T@"NSString",R,C,N,V_pathType
// Property: parameters; attributes: T@"NSArray",R,N,V_parameters

// -[FBSDKEventBinding initWithJSON:eventLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10495a9d4

// -[FBSDKEventBinding trackEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495adc4

// -[FBSDKEventBinding isEqualToBinding:]
// Type encoding: B24@0:8@16
// Implementation: 0x10495bd88

// -[FBSDKEventBinding eventName]
// Type encoding: @16@0:8
// Implementation: 0x10495c1f0

// -[FBSDKEventBinding eventType]
// Type encoding: @16@0:8
// Implementation: 0x10495c1f8

// -[FBSDKEventBinding appVersion]
// Type encoding: @16@0:8
// Implementation: 0x10495c200

// -[FBSDKEventBinding path]
// Type encoding: @16@0:8
// Implementation: 0x10495c208

// -[FBSDKEventBinding pathType]
// Type encoding: @16@0:8
// Implementation: 0x10495c210

// -[FBSDKEventBinding parameters]
// Type encoding: @16@0:8
// Implementation: 0x10495c218

// -[FBSDKEventBinding eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10495c220

// -[FBSDKEventBinding setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495c228

// -[FBSDKEventBinding .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10495c234

// +[FBSDKEventBinding numberParser]
// Type encoding: @16@0:8
// Implementation: 0x10495a954

// +[FBSDKEventBinding setNumberParser:]
// Type encoding: v24@0:8@16
// Implementation: 0x10495a960

// +[FBSDKEventBinding initialize]
// Type encoding: v16@0:8
// Implementation: 0x10495a970

// +[FBSDKEventBinding matchAnyView:pathComponent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10495b118

// +[FBSDKEventBinding match:pathComponent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10495b258

// +[FBSDKEventBinding isPath:matchViewPath:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10495b574

// +[FBSDKEventBinding findViewByPath:parent:level:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x10495b978

// +[FBSDKEventBinding findParameterOfPath:pathType:sourceView:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10495c0f0

@end
