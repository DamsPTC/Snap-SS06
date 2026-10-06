// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraCaptureHandlerImpl
// Superclass: NSObject
// Address: 0x112ad4b38

@interface SCCameraCaptureHandlerImpl

// Property: captureHandlerDelegate; attributes: T@"<SCCaptureHandlerDelegate>",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraCaptureHandlerImpl initWithCameraCaptureRequestHandler:cameraConfigurationServices:audioSessionServices:userSession:context:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10621010c

// -[SCCameraCaptureHandlerImpl basicCaptureConfigurationForQualityLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106210218

// -[SCCameraCaptureHandlerImpl captureImageWithQualityLevel:]
// Type encoding: @24@0:8q16
// Implementation: 0x106210318

// -[SCCameraCaptureHandlerImpl captureImageWithConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x106210368

// -[SCCameraCaptureHandlerImpl startVideoCaptureWithConfiguration:stopRecordingPromise:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10621055c

// -[SCCameraCaptureHandlerImpl startVideoCaptureWithConfiguration:outputSettings:audioConfiguration:stopRecordingPromise:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106210614

// -[SCCameraCaptureHandlerImpl _defaultOutputSettingsForConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x106210b68

// -[SCCameraCaptureHandlerImpl _defaultAudioConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x106210c44

// -[SCCameraCaptureHandlerImpl _generateVideoFileURL]
// Type encoding: @16@0:8
// Implementation: 0x106210cc0

// -[SCCameraCaptureHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106210d98

@end
