// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewCroppingStateImpl
// Superclass: NSObject
// Address: 0x112bcb3e8

@interface SCPreviewCroppingStateImpl

// Property: rotation; attributes: Td,N,V_rotation
// Property: scale; attributes: Td,N,V_scale
// Property: translationX; attributes: Td,N,V_translationX
// Property: translationY; attributes: Td,N,V_translationY
// Property: boundsSize; attributes: T{CGSize=dd},N,V_boundsSize
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewCroppingStateImpl initWithRotation:scale:translationX:translationY:boundsSize:]
// Type encoding: @64@0:8d16d24d32d40{CGSize=dd}48
// Implementation: 0x108edfc90

// -[SCPreviewCroppingStateImpl copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108edfd48

// -[SCPreviewCroppingStateImpl initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x108edfdd8

// -[SCPreviewCroppingStateImpl encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108edfeac

// -[SCPreviewCroppingStateImpl calculateNormalTransform]
// Type encoding: {CGAffineTransform=dddddd}16@0:8
// Implementation: 0x108edff58

// -[SCPreviewCroppingStateImpl calculateViewportTransform:]
// Type encoding: {CGAffineTransform=dddddd}20@0:8B16
// Implementation: 0x108ee0038

// -[SCPreviewCroppingStateImpl calculateViewportTransform:withCroppingAspectRatio:renderBoundsSize:outputBoundsSize:]
// Type encoding: {CGAffineTransform=dddddd}60@0:8B16d20{CGSize=dd}28{CGSize=dd}44
// Implementation: 0x108ee0110

// -[SCPreviewCroppingStateImpl calculateCPUBufferTransformWithCroppingAspectRatio:renderBoundsSize:outputBoundsSize:pixelBufferSize:pixelBufferOrientation:]
// Type encoding: {CGAffineTransform=dddddd}80@0:8d16{CGSize=dd}24{CGSize=dd}40{CGSize=dd}56q72
// Implementation: 0x108ee01f4

// -[SCPreviewCroppingStateImpl copyState]
// Type encoding: @16@0:8
// Implementation: 0x108ee0590

// -[SCPreviewCroppingStateImpl isEqualToState:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ee0594

// -[SCPreviewCroppingStateImpl _getTransformAwareStateWithCroppingAspectRatio:renderBoundsSize:outputBoundsSize:]
// Type encoding: @56@0:8d16{CGSize=dd}24{CGSize=dd}40
// Implementation: 0x108ee06d8

// -[SCPreviewCroppingStateImpl rotation]
// Type encoding: d16@0:8
// Implementation: 0x108ee0c5c

// -[SCPreviewCroppingStateImpl setRotation:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ee0c64

// -[SCPreviewCroppingStateImpl scale]
// Type encoding: d16@0:8
// Implementation: 0x108ee0c6c

// -[SCPreviewCroppingStateImpl setScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ee0c74

// -[SCPreviewCroppingStateImpl translationX]
// Type encoding: d16@0:8
// Implementation: 0x108ee0c7c

// -[SCPreviewCroppingStateImpl setTranslationX:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ee0c84

// -[SCPreviewCroppingStateImpl translationY]
// Type encoding: d16@0:8
// Implementation: 0x108ee0c8c

// -[SCPreviewCroppingStateImpl setTranslationY:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ee0c94

// -[SCPreviewCroppingStateImpl boundsSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108ee0c9c

// -[SCPreviewCroppingStateImpl setBoundsSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x108ee0ca4

// +[SCPreviewCroppingStateImpl _calculateViewportTransform:withBoundsSize:rotation:scale:translationX:translationY:]
// Type encoding: {CGAffineTransform=dddddd}68@0:8B16{CGSize=dd}20d36d44d52d60
// Implementation: 0x108ee0a90

@end
