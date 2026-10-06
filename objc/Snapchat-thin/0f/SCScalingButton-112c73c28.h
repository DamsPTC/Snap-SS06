// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScalingButton
// Superclass: UIView
// Address: 0x112c73c28

@interface SCScalingButton

// Property: action; attributes: T:,N,V_action
// Property: longPressGesture; attributes: T@"UILongPressGestureRecognizer",&,N,V_longPressGesture
// Property: target; attributes: T@,W,N,V_target
// Property: image; attributes: T@"UIImage",&,N,V_image
// Property: imageView; attributes: T@"UIImageView",R,N,V_imageView
// Property: imageInsetAnchor; attributes: Tq,N,V_imageInsetAnchor
// Property: imageInset; attributes: T{CGSize=dd},N,V_imageInset
// Property: pressDownScale; attributes: Td,N,V_pressDownScale
// Property: pressDownAdditionalScale; attributes: Td,N,V_pressDownAdditionalScale
// Property: pressUpScale; attributes: Td,N,V_pressUpScale
// Property: recognizesGesturesSimultaneously; attributes: TB,N,V_recognizesGesturesSimultaneously
// Property: useConstraintsForImage; attributes: TB,N,V_useConstraintsForImage
// Property: imageViewContentMode; attributes: Tq,N,V_imageViewContentMode
// Property: onlyScaleImage; attributes: TB,N,V_onlyScaleImage
// Property: pressed; attributes: TB,N,GisPressed,V_pressed
// Property: extraAnimationView; attributes: T@"UIView",&,N,V_extraAnimationView
// Property: enabled; attributes: TB,N,GisEnabled,V_enabled
// Property: imageName; attributes: T@"NSString",&,N,V_imageName
// Property: touchTargetInsets; attributes: T{UIEdgeInsets=dddd},N,V_touchTargetInsets
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScalingButton initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10085ab30

// -[SCScalingButton pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x10b29da30

// -[SCScalingButton sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10b29dab4

// -[SCScalingButton setImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089fba0

// -[SCScalingButton setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10085b004

// -[SCScalingButton layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x100860408

// -[SCScalingButton press:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b29db44

// -[SCScalingButton setPressed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b29dd30

// -[SCScalingButton animateButtonSizeScale:alpha:completion:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x10b29dd48

// -[SCScalingButton _pressDownAnimate]
// Type encoding: v16@0:8
// Implementation: 0x10b29e018

// -[SCScalingButton _pressUpAnimate]
// Type encoding: v16@0:8
// Implementation: 0x10b29e100

// -[SCScalingButton animate]
// Type encoding: v16@0:8
// Implementation: 0x10b29e1c4

// -[SCScalingButton addTarget:action:]
// Type encoding: v32@0:8@16:24
// Implementation: 0x10085bc84

// -[SCScalingButton gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10b29e23c

// -[SCScalingButton cancelExistingTransformAnimationsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10b29e2d8

// -[SCScalingButton interruptGestures]
// Type encoding: v16@0:8
// Implementation: 0x10b29e568

// -[SCScalingButton isAccessibilityElement]
// Type encoding: B16@0:8
// Implementation: 0x10b29e5c4

// -[SCScalingButton accessibilityTraits]
// Type encoding: Q16@0:8
// Implementation: 0x10b29e5cc

// -[SCScalingButton image]
// Type encoding: @16@0:8
// Implementation: 0x1008adf14

// -[SCScalingButton imageView]
// Type encoding: @16@0:8
// Implementation: 0x10085afa4

// -[SCScalingButton imageInsetAnchor]
// Type encoding: q16@0:8
// Implementation: 0x1008adf24

// -[SCScalingButton setImageInsetAnchor:]
// Type encoding: v24@0:8q16
// Implementation: 0x10085af64

// -[SCScalingButton imageInset]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x100861df0

// -[SCScalingButton setImageInset:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10085b3b4

// -[SCScalingButton pressDownScale]
// Type encoding: d16@0:8
// Implementation: 0x10b29e610

// -[SCScalingButton setPressDownScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x10085af74

// -[SCScalingButton pressDownAdditionalScale]
// Type encoding: d16@0:8
// Implementation: 0x10b29e620

// -[SCScalingButton setPressDownAdditionalScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x10085af94

// -[SCScalingButton pressUpScale]
// Type encoding: d16@0:8
// Implementation: 0x10b29e630

// -[SCScalingButton setPressUpScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x10085af84

// -[SCScalingButton recognizesGesturesSimultaneously]
// Type encoding: B16@0:8
// Implementation: 0x10b29e640

// -[SCScalingButton setRecognizesGesturesSimultaneously:]
// Type encoding: v20@0:8B16
// Implementation: 0x10085af54

// -[SCScalingButton useConstraintsForImage]
// Type encoding: B16@0:8
// Implementation: 0x10086070c

// -[SCScalingButton setUseConstraintsForImage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10085b3a4

// -[SCScalingButton imageViewContentMode]
// Type encoding: q16@0:8
// Implementation: 0x10086071c

// -[SCScalingButton setImageViewContentMode:]
// Type encoding: v24@0:8q16
// Implementation: 0x10085ad1c

// -[SCScalingButton onlyScaleImage]
// Type encoding: B16@0:8
// Implementation: 0x10b29e650

// -[SCScalingButton setOnlyScaleImage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10089fee0

// -[SCScalingButton isPressed]
// Type encoding: B16@0:8
// Implementation: 0x10b29e660

// -[SCScalingButton extraAnimationView]
// Type encoding: @16@0:8
// Implementation: 0x10b29e670

// -[SCScalingButton setExtraAnimationView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b29e680

// -[SCScalingButton isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b29e6c0

// -[SCScalingButton imageName]
// Type encoding: @16@0:8
// Implementation: 0x10b29e6d0

// -[SCScalingButton setImageName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085b044

// -[SCScalingButton touchTargetInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10b29e6e0

// -[SCScalingButton setTouchTargetInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b29e6f8

// -[SCScalingButton action]
// Type encoding: :16@0:8
// Implementation: 0x10b29e710

// -[SCScalingButton setAction:]
// Type encoding: v24@0:8:16
// Implementation: 0x10085bcc4

// -[SCScalingButton longPressGesture]
// Type encoding: @16@0:8
// Implementation: 0x10085aff4

// -[SCScalingButton setLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085afb4

// -[SCScalingButton target]
// Type encoding: @16@0:8
// Implementation: 0x10b29e720

// -[SCScalingButton setTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x10085bcb0

// -[SCScalingButton .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b29e740

@end
