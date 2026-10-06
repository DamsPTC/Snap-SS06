// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStartupCaptureHardwareWarmerImpl
// Superclass: NSObject
// Address: 0x112a27fc8

@interface SCStartupCaptureHardwareWarmerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStartupCaptureHardwareWarmerImpl initWithCameraRequestHandler:systemConfiguration:featureStartupEventBus:systemLaunchTabCache:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1000d8018

// -[SCStartupCaptureHardwareWarmerImpl markOptimizedHeadlessColdStart:managedCaptureSession:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1052f3dbc

// -[SCStartupCaptureHardwareWarmerImpl markHeadlessLaunchNotToCameraScreen]
// Type encoding: v16@0:8
// Implementation: 0x1052f3ef4

// -[SCStartupCaptureHardwareWarmerImpl warmupCaptureHardwareForNormalColdStart:managedCaptureSession:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x100150ae8

// -[SCStartupCaptureHardwareWarmerImpl applicationEnterForegroundCheckForCameraWarmupInCaseHeadless]
// Type encoding: v16@0:8
// Implementation: 0x1052f3fbc

// -[SCStartupCaptureHardwareWarmerImpl applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1052f41ec

// -[SCStartupCaptureHardwareWarmerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052f42d4

@end
