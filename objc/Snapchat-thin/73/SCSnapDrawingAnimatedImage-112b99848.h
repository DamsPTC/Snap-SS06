// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDrawingAnimatedImage
// Superclass: NSObject
// Address: 0x112b99848

@interface SCSnapDrawingAnimatedImage

// Property: animatedImage; attributes: T{Ref<snap::drawing::AnimatedImage>=^{AnimatedImage}},R,N,V_animatedImage
// Property: duration; attributes: Td,R,N
// Property: frameRate; attributes: Td,R,N
// Property: size; attributes: T{CGSize=dd},R,N

// -[SCSnapDrawingAnimatedImage initWithImage:]
// Type encoding: @24@0:8{Ref<snap::drawing::AnimatedImage>=^{AnimatedImage}}16
// Implementation: 0x1080da740

// -[SCSnapDrawingAnimatedImage duration]
// Type encoding: d16@0:8
// Implementation: 0x1080da80c

// -[SCSnapDrawingAnimatedImage frameRate]
// Type encoding: d16@0:8
// Implementation: 0x1080da830

// -[SCSnapDrawingAnimatedImage size]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1080da840

// -[SCSnapDrawingAnimatedImage drawInBitmap:bitmapInfo:drawBounds:atTime:]
// Type encoding: v72@0:8^v16r^{SCSnapDrawingBitmapInfo=iiQQ}24{CGRect={CGPoint=dd}{CGSize=dd}}32d64
// Implementation: 0x1080daccc

// -[SCSnapDrawingAnimatedImage animatedImage]
// Type encoding: {Ref<snap::drawing::AnimatedImage>=^{AnimatedImage}}16@0:8
// Implementation: 0x1080daf3c

// -[SCSnapDrawingAnimatedImage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080daf68

// -[SCSnapDrawingAnimatedImage .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1080daf70

// +[SCSnapDrawingAnimatedImage imageWithRuntime:data:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1080da86c

// +[SCSnapDrawingAnimatedImage imageWithFontManager:data:error:]
// Type encoding: @40@0:8@16@24^@32
// Implementation: 0x1080daaf0

// +[SCSnapDrawingAnimatedImage imageWithCppObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080dac04

@end
