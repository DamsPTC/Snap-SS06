// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraFeaturePerformanceLogger
// Superclass: NSObject
// Address: 0x112ac3c48

@interface SCCameraFeaturePerformanceLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraFeaturePerformanceLogger initWithCameraUserLoggingServices:cameraType:navigationTypeProvider:cameraHardwareResources:captureDeviceManager:loggableFeature:performer:]
// Type encoding: @72@0:8@16q24@32@40@48@56@64
// Implementation: 0x1008afb9c

// -[SCCameraFeaturePerformanceLogger loadingDidAbort]
// Type encoding: v16@0:8
// Implementation: 0x10608340c

// -[SCCameraFeaturePerformanceLogger _loadingDidAbort]
// Type encoding: v16@0:8
// Implementation: 0x1060834e0

// -[SCCameraFeaturePerformanceLogger loadingDidStart]
// Type encoding: v16@0:8
// Implementation: 0x10608353c

// -[SCCameraFeaturePerformanceLogger _loadingDidStart]
// Type encoding: v16@0:8
// Implementation: 0x106083610

// -[SCCameraFeaturePerformanceLogger loadingDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106083710

// -[SCCameraFeaturePerformanceLogger _loadingDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x1060837e4

// -[SCCameraFeaturePerformanceLogger loadingDidFailWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106083844

// -[SCCameraFeaturePerformanceLogger _loadingDidFailWithReason:isTimeoutError:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106083954

// -[SCCameraFeaturePerformanceLogger _logLoadingDidTimeOut]
// Type encoding: v16@0:8
// Implementation: 0x1060839e0

// -[SCCameraFeaturePerformanceLogger _logLoadingResultWithResult:debugInfo:elapsedTimeMs:]
// Type encoding: v40@0:8q16@24d32
// Implementation: 0x106083b60

// -[SCCameraFeaturePerformanceLogger _logFeatureLoadResultWithElapsedTimeMs:loadResult:timeoutMs:debugInfo:]
// Type encoding: v48@0:8d16q24d32@40
// Implementation: 0x106083bd4

// -[SCCameraFeaturePerformanceLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106083d74

@end
