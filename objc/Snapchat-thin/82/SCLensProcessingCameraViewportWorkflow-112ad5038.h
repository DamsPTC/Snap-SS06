// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingCameraViewportWorkflow
// Superclass: NSObject
// Address: 0x112ad5038

@interface SCLensProcessingCameraViewportWorkflow


// -[SCLensProcessingCameraViewportWorkflow initWithViewportProvider:renderTarget:captureButtonRectProvider:performer:cameraRendereRegionObservable:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1008c91c4

// -[SCLensProcessingCameraViewportWorkflow _setupInitialViewportDataWithRenderTarget:captureButtonRectProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106215274

// -[SCLensProcessingCameraViewportWorkflow _subscribeToCameraRenderRegionObservableWithRenderTarget:captureButtonRectProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106215518

// -[SCLensProcessingCameraViewportWorkflow _keyboardDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062159ec

// -[SCLensProcessingCameraViewportWorkflow _keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106215bd8

// -[SCLensProcessingCameraViewportWorkflow _layerBoundsForRenderTarget:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x1008c9578

// -[SCLensProcessingCameraViewportWorkflow _outputResolutionForRenderTargetBounds:]
// Type encoding: {CGSize=dd}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1008c96b8

// -[SCLensProcessingCameraViewportWorkflow _previewRectWithFullRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106215ca4

// -[SCLensProcessingCameraViewportWorkflow _realRectForCameraRenderRegion:originalRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
// Implementation: 0x106215e04

// -[SCLensProcessingCameraViewportWorkflow _topBarRectForRenderTargetBounds:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106215e18

// -[SCLensProcessingCameraViewportWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106215e54

@end
