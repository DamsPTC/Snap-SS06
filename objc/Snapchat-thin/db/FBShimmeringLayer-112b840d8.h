// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBShimmeringLayer
// Superclass: CALayer
// Address: 0x112b840d8

@interface FBShimmeringLayer

// Property: maskLayer; attributes: T@"FBShimmeringMaskLayer",&,N,V_maskLayer
// Property: contentLayer; attributes: T@"CALayer",&,N,V_contentLayer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: shimmering; attributes: TB,N,GisShimmering,V_shimmering
// Property: shimmeringPauseDuration; attributes: Td,N,V_shimmeringPauseDuration
// Property: shimmeringAnimationOpacity; attributes: Td,N,V_shimmeringAnimationOpacity
// Property: shimmeringOpacity; attributes: Td,N,V_shimmeringOpacity
// Property: shimmeringSpeed; attributes: Td,N,V_shimmeringSpeed
// Property: shimmeringHighlightLength; attributes: Td,N,V_shimmeringHighlightLength
// Property: shimmeringHighlightWidth; attributes: Td,D,N,GshimmeringHighlightLength,SsetShimmeringHighlightLength:
// Property: shimmeringDirection; attributes: Tq,N,V_shimmeringDirection
// Property: shimmeringBeginFadeDuration; attributes: Td,N,V_shimmeringBeginFadeDuration
// Property: shimmeringEndFadeDuration; attributes: Td,N,V_shimmeringEndFadeDuration
// Property: shimmeringFadeTime; attributes: Td,R,N,V_shimmeringFadeTime
// Property: shimmeringBeginTime; attributes: Td,N,V_shimmeringBeginTime

// -[FBShimmeringLayer init]
// Type encoding: @16@0:8
// Implementation: 0x107df8c8c

// -[FBShimmeringLayer setContentLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df8d48

// -[FBShimmeringLayer setShimmering:]
// Type encoding: v20@0:8B16
// Implementation: 0x107df8e30

// -[FBShimmeringLayer setShimmeringSpeed:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df8e50

// -[FBShimmeringLayer setShimmeringHighlightLength:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df8e70

// -[FBShimmeringLayer setShimmeringDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x107df8e90

// -[FBShimmeringLayer setShimmeringPauseDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df8eb0

// -[FBShimmeringLayer setShimmeringAnimationOpacity:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df8ed0

// -[FBShimmeringLayer setShimmeringOpacity:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df8ef0

// -[FBShimmeringLayer setShimmeringBeginTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df8f10

// -[FBShimmeringLayer layoutSublayers]
// Type encoding: v16@0:8
// Implementation: 0x107df8f30

// -[FBShimmeringLayer setBounds:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x107df902c

// -[FBShimmeringLayer _clearMask]
// Type encoding: v16@0:8
// Implementation: 0x107df90f0

// -[FBShimmeringLayer _createMaskIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107df916c

// -[FBShimmeringLayer _updateMaskColors]
// Type encoding: v16@0:8
// Implementation: 0x107df9208

// -[FBShimmeringLayer _updateMaskLayout]
// Type encoding: v16@0:8
// Implementation: 0x107df9338

// -[FBShimmeringLayer _updateShimmering]
// Type encoding: v16@0:8
// Implementation: 0x107df958c

// -[FBShimmeringLayer actionForLayer:forKey:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107df9bc8

// -[FBShimmeringLayer animationDidStop:finished:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107df9bf8

// -[FBShimmeringLayer isShimmering]
// Type encoding: B16@0:8
// Implementation: 0x107df9c98

// -[FBShimmeringLayer shimmeringPauseDuration]
// Type encoding: d16@0:8
// Implementation: 0x107df9ca8

// -[FBShimmeringLayer shimmeringAnimationOpacity]
// Type encoding: d16@0:8
// Implementation: 0x107df9cb8

// -[FBShimmeringLayer shimmeringOpacity]
// Type encoding: d16@0:8
// Implementation: 0x107df9cc8

// -[FBShimmeringLayer shimmeringSpeed]
// Type encoding: d16@0:8
// Implementation: 0x107df9cd8

// -[FBShimmeringLayer shimmeringHighlightLength]
// Type encoding: d16@0:8
// Implementation: 0x107df9ce8

// -[FBShimmeringLayer shimmeringDirection]
// Type encoding: q16@0:8
// Implementation: 0x107df9cf8

// -[FBShimmeringLayer shimmeringFadeTime]
// Type encoding: d16@0:8
// Implementation: 0x107df9d08

// -[FBShimmeringLayer shimmeringBeginFadeDuration]
// Type encoding: d16@0:8
// Implementation: 0x107df9d18

// -[FBShimmeringLayer setShimmeringBeginFadeDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df9d28

// -[FBShimmeringLayer shimmeringEndFadeDuration]
// Type encoding: d16@0:8
// Implementation: 0x107df9d38

// -[FBShimmeringLayer setShimmeringEndFadeDuration:]
// Type encoding: v24@0:8d16
// Implementation: 0x107df9d48

// -[FBShimmeringLayer shimmeringBeginTime]
// Type encoding: d16@0:8
// Implementation: 0x107df9d58

// -[FBShimmeringLayer contentLayer]
// Type encoding: @16@0:8
// Implementation: 0x107df9d68

// -[FBShimmeringLayer maskLayer]
// Type encoding: @16@0:8
// Implementation: 0x107df9d78

// -[FBShimmeringLayer setMaskLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107df9d88

// -[FBShimmeringLayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107df9dc8

@end
