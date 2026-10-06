// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKViewImpressionLogger
// Superclass: NSObject
// Address: 0x1129e99f0

@interface FBSDKViewImpressionLogger

// Property: eventName; attributes: T@"NSString",N,R,VeventName
// Property: trackedImpressions; attributes: T@"NSSet",N,C

// -[FBSDKViewImpressionLogger eventName]
// Type encoding: @16@0:8
// Implementation: 0x104a04010

// -[FBSDKViewImpressionLogger trackedImpressions]
// Type encoding: @16@0:8
// Implementation: 0x104a04030

// -[FBSDKViewImpressionLogger setTrackedImpressions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a040f4

// -[FBSDKViewImpressionLogger initWithEventName:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a04378

// -[FBSDKViewImpressionLogger applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a0443c

// -[FBSDKViewImpressionLogger logImpressionWithIdentifier:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104a04980

// -[FBSDKViewImpressionLogger init]
// Type encoding: @16@0:8
// Implementation: 0x104a04a8c

// -[FBSDKViewImpressionLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104a04aec

// +[FBSDKViewImpressionLogger impressionTrackers]
// Type encoding: @16@0:8
// Implementation: 0x104a03cb4

// +[FBSDKViewImpressionLogger setImpressionTrackers:]
// Type encoding: v24@0:8@16
// Implementation: 0x104a03df4

// +[FBSDKViewImpressionLogger retrieveLoggerWith:]
// Type encoding: @24@0:8@16
// Implementation: 0x104a043a4

@end
