// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAvatarBuilderMirrorFaceDetector
// Superclass: NSObject
// Address: 0x112a5c9f8

@interface SCAvatarBuilderMirrorFaceDetector


// -[SCAvatarBuilderMirrorFaceDetector initWithFaceDetector:]
// Type encoding: @24@0:8@16
// Implementation: 0x105701aec

// -[SCAvatarBuilderMirrorFaceDetector detectMostProminentFace:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x105701b58

// -[SCAvatarBuilderMirrorFaceDetector detectMostProminentFace:imageCI:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16@24
// Implementation: 0x105701bcc

// -[SCAvatarBuilderMirrorFaceDetector enlargeBounds:boundingBox:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x105701d3c

// -[SCAvatarBuilderMirrorFaceDetector enlargeBounds:boundingBox:imageCI:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}64@0:8@16{CGRect={CGPoint=dd}{CGSize=dd}}24@56
// Implementation: 0x105701db8

// -[SCAvatarBuilderMirrorFaceDetector _getExifOrientation:]
// Type encoding: @24@0:8@16
// Implementation: 0x105701fe8

// -[SCAvatarBuilderMirrorFaceDetector _getLargestAreaFace:]
// Type encoding: @24@0:8@16
// Implementation: 0x105702028

// -[SCAvatarBuilderMirrorFaceDetector _CIToUICoordinateSpace:extent:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48
// Implementation: 0x105702180

// -[SCAvatarBuilderMirrorFaceDetector _enlargeBounds:extent:orientation:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}88@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{CGRect={CGPoint=dd}{CGSize=dd}}48q80
// Implementation: 0x105702214

// -[SCAvatarBuilderMirrorFaceDetector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105702298

// +[SCAvatarBuilderMirrorFaceDetector transformRectInImageToUpOrientation:imageOrientation:imageWidth:imageHeight:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}72@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48d56d64
// Implementation: 0x105701e6c

@end
