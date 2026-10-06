// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureCameraSnapDoc
// Superclass: SCFeature
// Address: 0x112ace968

@interface SCFeatureCameraSnapDoc


// -[SCFeatureCameraSnapDoc initWithCameraSnapModelServices:cameraUIServices:cameraPreviewPresenterServices:cameraHardwareResource:previewABServices:userPreferenceTimeProviderServices:afterCaptureActionTracker:directorModePresenting:captureComponent:batchCapture:lensPlusSnapDocRecordProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100c63c38

// -[SCFeatureCameraSnapDoc dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061915c8

// -[SCFeatureCameraSnapDoc startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100c6427c

// -[SCFeatureCameraSnapDoc stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106191654

// -[SCFeatureCameraSnapDoc _didChangeCaptureDevicePosition:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c80db8

// -[SCFeatureCameraSnapDoc beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106191688

// -[SCFeatureCameraSnapDoc _recoverFromSnapSessionContext:contentLossReason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106191bdc

// -[SCFeatureCameraSnapDoc _resetSnapDoc]
// Type encoding: v16@0:8
// Implementation: 0x1061928a8

// -[SCFeatureCameraSnapDoc _updateSnapDocWithImage:contentAspectRatio:isGenAI:isGreenScreen:appliedLensId:]
// Type encoding: v48@0:8@16d24B32B36@40
// Implementation: 0x1061929b8

// -[SCFeatureCameraSnapDoc _updateSnapDocWithVideo:contentAspectRatio:isGenAI:isGreenScreen:appliedLensId:]
// Type encoding: v48@0:8@16d24B32B36@40
// Implementation: 0x106192b44

// -[SCFeatureCameraSnapDoc _updateSnapDocWithBaseMediaInput:playbackCharacteristics:contentAspectRatio:isGenAI:isGreenScreen:appliedLensId:]
// Type encoding: v56@0:8@16@24d32B40B44@48
// Implementation: 0x106192c90

// -[SCFeatureCameraSnapDoc .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106193294

@end
