// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAGLView
// Superclass: UIView
// Address: 0x112bfa648

@interface LSAGLView

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: fillMode; attributes: Tq,N,V_fillMode
// Property: rotationMode; attributes: Tq,N,V_rotationMode

// -[LSAGLView renderInContext:]
// Type encoding: v24@0:8^{CGContext=}16
// Implementation: 0x10ade3758

// -[LSAGLView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10ade391c

// -[LSAGLView initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10ade3988

// -[LSAGLView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10ade3a20

// -[LSAGLView commonInit]
// Type encoding: v16@0:8
// Implementation: 0x10ade3b0c

// -[LSAGLView didEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade3cb0

// -[LSAGLView willEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade3d54

// -[LSAGLView didBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade3d68

// -[LSAGLView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10ade3d7c

// -[LSAGLView _createGLBuffers]
// Type encoding: v16@0:8
// Implementation: 0x10ade3e6c

// -[LSAGLView _deleteGLBuffers]
// Type encoding: v16@0:8
// Implementation: 0x10ade405c

// -[LSAGLView _createDrawTexture]
// Type encoding: v16@0:8
// Implementation: 0x10ade40d0

// -[LSAGLView _deleteDrawTexture]
// Type encoding: v16@0:8
// Implementation: 0x10ade425c

// -[LSAGLView _prepareFramebuffer]
// Type encoding: v16@0:8
// Implementation: 0x10ade42ac

// -[LSAGLView _presentFramebuffer]
// Type encoding: v16@0:8
// Implementation: 0x10ade431c

// -[LSAGLView _drawRawTexture:withTextureTransform:]
// Type encoding: v28@0:8I16r^v20
// Implementation: 0x10ade435c

// -[LSAGLView _drawRawTexture:withTransformArray:]
// Type encoding: v28@0:8I16r^v20
// Implementation: 0x10ade46b4

// -[LSAGLView drawTexture:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10ade472c

// -[LSAGLView drawTexture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ade4b90

// -[LSAGLView clearWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ade4b98

// -[LSAGLView setFillMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ade5068

// -[LSAGLView _drawTexture]
// Type encoding: v16@0:8
// Implementation: 0x10ade5078

// -[LSAGLView _correctTextureCoordsForBytesPerRow:]
// Type encoding: v24@0:8^f16
// Implementation: 0x10ade5424

// -[LSAGLView _recalculateViewGeometry]
// Type encoding: v16@0:8
// Implementation: 0x10ade54bc

// -[LSAGLView _setInputSize:bytesPerRow:]
// Type encoding: v40@0:8{CGSize=dd}16q32
// Implementation: 0x10ade5604

// -[LSAGLView displayHDRPixelBuffer:]
// Type encoding: v24@0:8^{__CVBuffer=}16
// Implementation: 0x10ade568c

// -[LSAGLView _aspectFitRect:inSize:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGSize=dd}16{CGSize=dd}32
// Implementation: 0x10ade5a08

// -[LSAGLView fillMode]
// Type encoding: q16@0:8
// Implementation: 0x10ade5a60

// -[LSAGLView rotationMode]
// Type encoding: q16@0:8
// Implementation: 0x10ade5a70

// -[LSAGLView setRotationMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ade5a80

// -[LSAGLView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ade5a90

// +[LSAGLView layerClass]
// Type encoding: #16@0:8
// Implementation: 0x10ade374c

@end
