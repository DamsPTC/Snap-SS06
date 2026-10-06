// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTPresenceBitmojiView
// Superclass: UIView
// Address: 0x112ba95b8

@interface SCTPresenceBitmojiView

// Property: state; attributes: T{SCTPresenceBitmojiState=dddddddd},N,V_state
// Property: handsHidden; attributes: TB,N
// Property: avatarSize; attributes: T{CGSize=dd},R,N

// -[SCTPresenceBitmojiView initWithBitmoji:petVisible:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1085d2224

// -[SCTPresenceBitmojiView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085d271c

// -[SCTPresenceBitmojiView setState:]
// Type encoding: v80@0:8{SCTPresenceBitmojiState=dddddddd}16
// Implementation: 0x1085d2784

// -[SCTPresenceBitmojiView handsHidden]
// Type encoding: B16@0:8
// Implementation: 0x1085d27b4

// -[SCTPresenceBitmojiView setHandsHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085d27c4

// -[SCTPresenceBitmojiView setPetHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085d2878

// -[SCTPresenceBitmojiView setLaptopHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085d2890

// -[SCTPresenceBitmojiView avatarSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1085d28a8

// -[SCTPresenceBitmojiView updateToState:]
// Type encoding: v80@0:8{SCTPresenceBitmojiState=dddddddd}16
// Implementation: 0x1085d2900

// -[SCTPresenceBitmojiView sizeForState:]
// Type encoding: {CGSize=dd}80@0:8{SCTPresenceBitmojiState=dddddddd}16
// Implementation: 0x1085d2978

// -[SCTPresenceBitmojiView attachBubbleView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d2a58

// -[SCTPresenceBitmojiView detachBubbleView]
// Type encoding: v16@0:8
// Implementation: 0x1085d2adc

// -[SCTPresenceBitmojiView setBodyStyle:]
// Type encoding: v24@0:8q16
// Implementation: 0x1085d2b20

// -[SCTPresenceBitmojiView _calculateWidestAvatarWidthInImages:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d2ce8

// -[SCTPresenceBitmojiView _avatarLeadingOffset]
// Type encoding: d16@0:8
// Implementation: 0x1085d2e04

// -[SCTPresenceBitmojiView _bitmojiTrailingOffsetForState:]
// Type encoding: d80@0:8{SCTPresenceBitmojiState=dddddddd}16
// Implementation: 0x1085d2e1c

// -[SCTPresenceBitmojiView _prepareSubviewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x1085d2e64

// -[SCTPresenceBitmojiView _headOffsetForState:]
// Type encoding: d80@0:8{SCTPresenceBitmojiState=dddddddd}16
// Implementation: 0x1085d4090

// -[SCTPresenceBitmojiView _updateSubviewConstraintsForState:]
// Type encoding: v80@0:8{SCTPresenceBitmojiState=dddddddd}16
// Implementation: 0x1085d40c0

// -[SCTPresenceBitmojiView _updateSubviewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x1085d5380

// -[SCTPresenceBitmojiView _animationCallbackFromState:toState:]
// Type encoding: @?144@0:8{SCTPresenceBitmojiState=dddddddd}16{SCTPresenceBitmojiState=dddddddd}80
// Implementation: 0x1085d53bc

// -[SCTPresenceBitmojiView _prepareAnimationWithAnimator:curve:fromInterval:toInterval:fromState:toState:completion:]
// Type encoding: v184@0:8@16Q24d32d40{SCTPresenceBitmojiState=dddddddd}48{SCTPresenceBitmojiState=dddddddd}112@?176
// Implementation: 0x1085d54b0

// -[SCTPresenceBitmojiView _prepareAnimationWithAnimator:bounceFactor:fromInterval:toInterval:fromState:toState:completion:]
// Type encoding: v184@0:8@16d24d32d40{SCTPresenceBitmojiState=dddddddd}48{SCTPresenceBitmojiState=dddddddd}112@?176
// Implementation: 0x1085d561c

// -[SCTPresenceBitmojiView state]
// Type encoding: {SCTPresenceBitmojiState=dddddddd}16@0:8
// Implementation: 0x1085d5788

// -[SCTPresenceBitmojiView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085d57a8

@end
