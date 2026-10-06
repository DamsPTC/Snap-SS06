// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedCaptureDeviceLogger
// Superclass: NSObject
// Address: 0x112b5b1d8

@interface SCManagedCaptureDeviceLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCManagedCaptureDeviceLogger initWithBlizzardLogger:userPreferences:appLifecycleManager:captureFormatSelectionFrameworkConfiguration:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100294880

// -[SCManagedCaptureDeviceLogger logCameraDeviceConfigurationForFormats:deviceType:devicePosition:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x100294b5c

// -[SCManagedCaptureDeviceLogger logCameraDecisionEventWithFeatureNames:format:deviceType:devicePosition:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10035d6fc

// -[SCManagedCaptureDeviceLogger logCameraDecisionEventWithFeatureNames:sessionPreset:deviceType:devicePosition:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10703d2a8

// -[SCManagedCaptureDeviceLogger logDiscoverySessionFailureWithDevicePosition:sessionId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10703d420

// -[SCManagedCaptureDeviceLogger logDiscoverySessionRetryWithDevicePosition:sessionId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10703d430

// -[SCManagedCaptureDeviceLogger logDiscoverySessionRetrySuccessWithDevicePosition:sessionId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10703d440

// -[SCManagedCaptureDeviceLogger _logCameraDeviceConfigurationForFormats:deviceType:devicePosition:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10703d450

// -[SCManagedCaptureDeviceLogger _logDiscoverySessionEventWithType:devicePosition:sessionId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x10703d5f0

// -[SCManagedCaptureDeviceLogger _SCACameraDeviceTypeFromAVCaptureDeviceType:]
// Type encoding: q24@0:8@16
// Implementation: 0x10703d6a4

// -[SCManagedCaptureDeviceLogger _SCACameraDirectionFromAVCaptureDevicePosition:]
// Type encoding: q24@0:8q16
// Implementation: 0x10703d7d0

// -[SCManagedCaptureDeviceLogger _hasReportedCameraDeviceConfigurationKeyWithDeviceType:devicePosition:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10703d7e8

// -[SCManagedCaptureDeviceLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10703d884

@end
