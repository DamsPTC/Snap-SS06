// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKAEMManager
// Superclass: NSObject
// Address: 0x1129e5960

@interface FBSDKAEMManager

// Property: swizzler; attributes: T#,&,N,V_swizzler
// Property: aemReporter; attributes: T#,&,N,V_aemReporter
// Property: eventLogger; attributes: T@"<FBSDKEventLogging>",&,N,V_eventLogger
// Property: crashHandler; attributes: T@"<FBSDKCrashHandler>",&,N,V_crashHandler
// Property: featureChecker; attributes: T@"<FBSDKFeatureDisabling>",&,N,V_featureChecker
// Property: appEventsUtility; attributes: T@"<FBSDKAppEventsUtility>",&,N,V_appEventsUtility
// Property: originalAppDelegateOpenURLIMP; attributes: T^?,N,V_originalAppDelegateOpenURLIMP
// Property: originalAppDelegateContinueUserActivityIMP; attributes: T^?,N,V_originalAppDelegateContinueUserActivityIMP

// -[FBSDKAEMManager configureWithSwizzler:aemReporter:eventLogger:crashHandler:featureChecker:appEventsUtility:]
// Type encoding: v64@0:8#16#24@32@40@48@56
// Implementation: 0x10493ddb8

// -[FBSDKAEMManager enableAutoSetup:]
// Type encoding: v20@0:8B16
// Implementation: 0x10493de94

// -[FBSDKAEMManager setupWithProxy]
// Type encoding: v16@0:8
// Implementation: 0x10493e098

// -[FBSDKAEMManager setupAppDelegateProxy]
// Type encoding: v16@0:8
// Implementation: 0x10493e0bc

// -[FBSDKAEMManager setupSceneDelegateProxies]
// Type encoding: v16@0:8
// Implementation: 0x10493e468

// -[FBSDKAEMManager setup]
// Type encoding: v16@0:8
// Implementation: 0x10493e67c

// -[FBSDKAEMManager setupScene:]
// Type encoding: v24@0:8#16
// Implementation: 0x10493e8ec

// -[FBSDKAEMManager getSceneDelegates]
// Type encoding: @16@0:8
// Implementation: 0x10493ef48

// -[FBSDKAEMManager logAutoSetupStatus:source:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10493f1dc

// -[FBSDKAEMManager swizzler]
// Type encoding: #16@0:8
// Implementation: 0x10493f2ec

// -[FBSDKAEMManager setSwizzler:]
// Type encoding: v24@0:8#16
// Implementation: 0x10493f2f4

// -[FBSDKAEMManager aemReporter]
// Type encoding: #16@0:8
// Implementation: 0x10493f300

// -[FBSDKAEMManager setAemReporter:]
// Type encoding: v24@0:8#16
// Implementation: 0x10493f308

// -[FBSDKAEMManager eventLogger]
// Type encoding: @16@0:8
// Implementation: 0x10493f314

// -[FBSDKAEMManager setEventLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493f31c

// -[FBSDKAEMManager crashHandler]
// Type encoding: @16@0:8
// Implementation: 0x10493f328

// -[FBSDKAEMManager setCrashHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493f330

// -[FBSDKAEMManager featureChecker]
// Type encoding: @16@0:8
// Implementation: 0x10493f33c

// -[FBSDKAEMManager setFeatureChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493f344

// -[FBSDKAEMManager appEventsUtility]
// Type encoding: @16@0:8
// Implementation: 0x10493f350

// -[FBSDKAEMManager setAppEventsUtility:]
// Type encoding: v24@0:8@16
// Implementation: 0x10493f358

// -[FBSDKAEMManager originalAppDelegateOpenURLIMP]
// Type encoding: ^?16@0:8
// Implementation: 0x10493f364

// -[FBSDKAEMManager setOriginalAppDelegateOpenURLIMP:]
// Type encoding: v24@0:8^?16
// Implementation: 0x10493f36c

// -[FBSDKAEMManager originalAppDelegateContinueUserActivityIMP]
// Type encoding: ^?16@0:8
// Implementation: 0x10493f374

// -[FBSDKAEMManager setOriginalAppDelegateContinueUserActivityIMP:]
// Type encoding: v24@0:8^?16
// Implementation: 0x10493f37c

// -[FBSDKAEMManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10493f384

// +[FBSDKAEMManager shared]
// Type encoding: @16@0:8
// Implementation: 0x10493dd1c

@end
