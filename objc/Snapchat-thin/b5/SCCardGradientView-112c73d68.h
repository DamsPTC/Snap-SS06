// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCardGradientView
// Superclass: UIView
// Address: 0x112c73d68

@interface SCCardGradientView

// Property: defaultGradientColors; attributes: T@"NSArray",&,N,V_defaultGradientColors
// Property: animatingDisco; attributes: TB,N,GisAnimatingDisco,V_animatingDisco
// Property: animatingActivity; attributes: TB,N,GisAnimatingActivity,V_animatingActivity
// Property: topLeftCorner; attributes: T@"UIImageView",&,N,V_topLeftCorner
// Property: topRightCorner; attributes: T@"UIImageView",&,N,V_topRightCorner
// Property: gradientLayer; attributes: T@"CAGradientLayer",R,N
// Property: gradientColors; attributes: T@"NSArray",&,N,V_gradientColors

// -[SCCardGradientView initWithFrame:showsTopCorners:]
// Type encoding: @52@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16B48
// Implementation: 0x10b29fdb4

// -[SCCardGradientView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0128

// -[SCCardGradientView gradientLayer]
// Type encoding: @16@0:8
// Implementation: 0x10b2a01b4

// -[SCCardGradientView setGradientColors:animated:duration:completion:]
// Type encoding: v44@0:8@16B24d28@?36
// Implementation: 0x10b2a01b8

// -[SCCardGradientView setGradientColors:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10b2a0500

// -[SCCardGradientView setGradientColors:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b2a0580

// -[SCCardGradientView setGradientColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2a0600

// -[SCCardGradientView startPointAnimationWithDuration:useCustomTiming:repeatCount:]
// Type encoding: @36@0:8d16B24d28
// Implementation: 0x10b2a0608

// -[SCCardGradientView endPointAnimationWithDuration:useCustomTiming:repeatCount:]
// Type encoding: @36@0:8d16B24d28
// Implementation: 0x10b2a0754

// -[SCCardGradientView stopActivityAnimationForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2a089c

// -[SCCardGradientView activityAnimationForKey:animationDuration:useCustomTiming:repeatCount:]
// Type encoding: @44@0:8@16d24B32d36
// Implementation: 0x10b2a0990

// -[SCCardGradientView addActivityAnimationForKey:animationDuration:useCustomTiming:repeatCount:]
// Type encoding: v44@0:8@16d24B32d36
// Implementation: 0x10b2a0a48

// -[SCCardGradientView startActivityAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0b48

// -[SCCardGradientView stopActivityAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0bd4

// -[SCCardGradientView animateActivityOnce]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0c2c

// -[SCCardGradientView startDiscoAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0e74

// -[SCCardGradientView stopDiscoAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0edc

// -[SCCardGradientView changeGradientColors]
// Type encoding: v16@0:8
// Implementation: 0x10b2a0f34

// -[SCCardGradientView gradientColors]
// Type encoding: @16@0:8
// Implementation: 0x10b2a1230

// -[SCCardGradientView defaultGradientColors]
// Type encoding: @16@0:8
// Implementation: 0x10b2a1240

// -[SCCardGradientView setDefaultGradientColors:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2a1250

// -[SCCardGradientView isAnimatingDisco]
// Type encoding: B16@0:8
// Implementation: 0x10b2a1290

// -[SCCardGradientView setAnimatingDisco:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2a12a0

// -[SCCardGradientView isAnimatingActivity]
// Type encoding: B16@0:8
// Implementation: 0x10b2a12b0

// -[SCCardGradientView setAnimatingActivity:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2a12c0

// -[SCCardGradientView topLeftCorner]
// Type encoding: @16@0:8
// Implementation: 0x10b2a12d0

// -[SCCardGradientView setTopLeftCorner:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2a12e0

// -[SCCardGradientView topRightCorner]
// Type encoding: @16@0:8
// Implementation: 0x10b2a1320

// -[SCCardGradientView setTopRightCorner:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2a1330

// -[SCCardGradientView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2a1370

// +[SCCardGradientView layerClass]
// Type encoding: #16@0:8
// Implementation: 0x10b29fda8

// +[SCCardGradientView randomColorIndexExcludingIndex:]
// Type encoding: q24@0:8q16
// Implementation: 0x10b2a1118

// +[SCCardGradientView colorAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b2a1148

@end
