// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAlwaysOnLensExternalMediaComponent
// Superclass: NSObject
// Address: 0x112bf2bc8

@interface SCAlwaysOnLensExternalMediaComponent

// Property: shouldReceiveUpdate; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAlwaysOnLensExternalMediaComponent initWithCameraStreamSwitcherDelegate:cameraHardwareResource:cameraHardwareServicesAPI:captureDeviceManager:screenScale:]
// Type encoding: @56@0:8@16@24@32@40d48
// Implementation: 0x1091aa230

// -[SCAlwaysOnLensExternalMediaComponent setShouldReceiveUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091aa330

// -[SCAlwaysOnLensExternalMediaComponent shouldReceiveUpdate]
// Type encoding: B16@0:8
// Implementation: 0x1091aa36c

// -[SCAlwaysOnLensExternalMediaComponent setExternalVideoWithPath:relStartPosition:relEndPosition:volume:rotation:completion:]
// Type encoding: v48@0:8@16f24f28f32i36@?40
// Implementation: 0x1091aa3a0

// -[SCAlwaysOnLensExternalMediaComponent setExternalImageWithPath:faceRect:completion:]
// Type encoding: v64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@?56
// Implementation: 0x1091aa538

// -[SCAlwaysOnLensExternalMediaComponent setExternalImageWithPath:faceRects:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1091aa554

// -[SCAlwaysOnLensExternalMediaComponent setExternalImage:faceRect:completion:]
// Type encoding: v64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@?56
// Implementation: 0x1091aa708

// -[SCAlwaysOnLensExternalMediaComponent unsetExternalMediaWithPath:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1091aa724

// -[SCAlwaysOnLensExternalMediaComponent _activeCaptureDeviceResolutionSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1091aa73c

// -[SCAlwaysOnLensExternalMediaComponent _resizeImageToCameraSize:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091aa7ac

// -[SCAlwaysOnLensExternalMediaComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091aa86c

@end
