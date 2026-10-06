// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLiveMirrorCameraManager
// Superclass: NSObject
// Address: 0x112a5c8b8

@interface SCLiveMirrorCameraManager


// -[SCLiveMirrorCameraManager initWithCameraHardwareServicesAPI:cameraHardwareResource:cameraCaptureRequestHandler:cameraHardwareOwnershipRequester:cameraDeviceSettingsResolver:modelDownloader:builderLogger:isFromCreate:circumstanceEngine:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64B72@76
// Implementation: 0x1056ff898

// -[SCLiveMirrorCameraManager prepareClassifier]
// Type encoding: v16@0:8
// Implementation: 0x1056ffaac

// -[SCLiveMirrorCameraManager startCamera]
// Type encoding: v16@0:8
// Implementation: 0x1056ffb38

// -[SCLiveMirrorCameraManager stopCamera]
// Type encoding: v16@0:8
// Implementation: 0x1056ffe28

// -[SCLiveMirrorCameraManager captureAndDetectTraitsForGender:retryOnFailure:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x1056ffe80

// -[SCLiveMirrorCameraManager _cameraFlipDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10570017c

// -[SCLiveMirrorCameraManager _classifyImage:forGender:withClassifier:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1057001a4

// -[SCLiveMirrorCameraManager _logMirrorClassificationStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x10570046c

// -[SCLiveMirrorCameraManager _captureStillImage]
// Type encoding: @16@0:8
// Implementation: 0x1057004bc

// -[SCLiveMirrorCameraManager _logMirrorImageCaptureWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105700a48

// -[SCLiveMirrorCameraManager _getMirrorClassifier]
// Type encoding: @16@0:8
// Implementation: 0x105700a98

// -[SCLiveMirrorCameraManager _getOrCreateMirrorClassifier]
// Type encoding: @16@0:8
// Implementation: 0x105700bb4

// -[SCLiveMirrorCameraManager _downloadLiveMirrorModelWithObserver:]
// Type encoding: v24@0:8@16
// Implementation: 0x105700cac

// -[SCLiveMirrorCameraManager _handleDownloadLiveMirrorModelResultWithModelData:configData:observer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105700de0

// -[SCLiveMirrorCameraManager _resetMirrorClassifier]
// Type encoding: v16@0:8
// Implementation: 0x105700ec0

// -[SCLiveMirrorCameraManager _setMirrorClassifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x105700f48

// -[SCLiveMirrorCameraManager _handleGetMirrorClassifierSuccessWithClassifier:gender:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105700f68

// -[SCLiveMirrorCameraManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105701240

@end
