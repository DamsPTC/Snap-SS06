// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCZoomCaptureControl
// Superclass: NSObject
// Address: 0x112888cc8

@interface SCZoomCaptureControl

// Property: interactionCount; attributes: Tq,N,VinteractionCount
// Property: captureControl; attributes: T@"AVCaptureControl",N,R

// -[SCZoomCaptureControl interactionCount]
// Type encoding: q16@0:8
// Implementation: 0x102b02a70

// -[SCZoomCaptureControl setInteractionCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x102b02ab4

// -[SCZoomCaptureControl captureControl]
// Type encoding: @16@0:8
// Implementation: 0x102b02b04

// -[SCZoomCaptureControl initWithPerformer:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:cameraUserActionLogger:zoomFactorsFeature:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x102b034cc

// -[SCZoomCaptureControl sessionControlsDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x102b03578

// -[SCZoomCaptureControl sessionControlsDidBecomeInactive]
// Type encoding: v16@0:8
// Implementation: 0x102b0360c

// -[SCZoomCaptureControl init]
// Type encoding: @16@0:8
// Implementation: 0x10bd9528c

// -[SCZoomCaptureControl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102b03868

// +[SCZoomCaptureControl SCZoomFactorsUsageMetricZoomCaptureControlInteractionsCountKey]
// Type encoding: @16@0:8
// Implementation: 0x102b02a44

// +[SCZoomCaptureControl getAllDiscreteZoomValuesWithFirstValue:lastValue:]
// Type encoding: @24@0:8f16f20
// Implementation: 0x102b03668

// +[SCZoomCaptureControl logSpaceWithMinValue:maxValue:steps:]
// Type encoding: @32@0:8f16f20q24
// Implementation: 0x102b036a4

@end
