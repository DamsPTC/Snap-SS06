// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAExternalImageComponent
// Superclass: LSABaseComponent
// Address: 0x112bf8f28

@interface LSAExternalImageComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAExternalImageComponent setExternalVideoWithPath:relStartPosition:relEndPosition:volume:rotation:completion:]
// Type encoding: v48@0:8@16f24f28f32i36@?40
// Implementation: 0x10ad95bdc

// -[LSAExternalImageComponent _setExternalVideoWithErrorCode:mediaFileBlock:completion:]
// Type encoding: v40@0:8q16@?24@?32
// Implementation: 0x10ad95d8c

// -[LSAExternalImageComponent setExternalImageWithPath:faceRect:completion:]
// Type encoding: v64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@?56
// Implementation: 0x10ad960ac

// -[LSAExternalImageComponent setExternalImageWithPath:faceRects:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10ad96208

// -[LSAExternalImageComponent setExternalImage:faceRect:completion:]
// Type encoding: v64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@?56
// Implementation: 0x10ad96464

// -[LSAExternalImageComponent setExternalImage:faceRects:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10ad965c0

// -[LSAExternalImageComponent _setExternalImageWithFaceRects:errorCode:setImageBlock:completion:]
// Type encoding: v48@0:8@16q24@?32@?40
// Implementation: 0x10ad968fc

// -[LSAExternalImageComponent unsetExternalMediaWithPath:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ad96d44

// +[LSAExternalImageComponent _orientationWithUIImageOrientation:]
// Type encoding: i24@0:8q16
// Implementation: 0x10ad968d8

@end
