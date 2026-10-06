// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanThrottledFrameCapturer
// Superclass: SCScanCapturer
// Address: 0x112af4938

@interface SCScanThrottledFrameCapturer

// Property: timeProvider; attributes: T@"<SCTimeProviding>",&,N,V_timeProvider
// Property: sampleBufferConverter; attributes: T@"<SCScanSampleBufferConverting>",&,N,V_sampleBufferConverter
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanThrottledFrameCapturer initWithCameraHardwareServices:deviceMotionManager:fps:limit:pixelBufferEnabled:]
// Type encoding: @52@0:8@16@24d32q40B48
// Implementation: 0x1067428e4

// -[SCScanThrottledFrameCapturer captureSession]
// Type encoding: @16@0:8
// Implementation: 0x106742a80

// -[SCScanThrottledFrameCapturer _isDeviceInMotion]
// Type encoding: B16@0:8
// Implementation: 0x106742e78

// -[SCScanThrottledFrameCapturer _didReceiveEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106742ec0

// -[SCScanThrottledFrameCapturer _resetDataSubject]
// Type encoding: v16@0:8
// Implementation: 0x106743224

// -[SCScanThrottledFrameCapturer startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10674323c

// -[SCScanThrottledFrameCapturer stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1067438a0

// -[SCScanThrottledFrameCapturer timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1067439a0

// -[SCScanThrottledFrameCapturer setTimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1067439b0

// -[SCScanThrottledFrameCapturer sampleBufferConverter]
// Type encoding: @16@0:8
// Implementation: 0x1067439f0

// -[SCScanThrottledFrameCapturer setSampleBufferConverter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106743a00

// -[SCScanThrottledFrameCapturer performer]
// Type encoding: @16@0:8
// Implementation: 0x106743a40

// -[SCScanThrottledFrameCapturer setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106743a50

// -[SCScanThrottledFrameCapturer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106743a90

@end
