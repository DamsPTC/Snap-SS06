// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCExtendedHitButton
// Superclass: UIButton
// Address: 0x112c73b88

@interface SCExtendedHitButton

// Property: hitEdgeInsets; attributes: T{UIEdgeInsets=dddd},N,V_hitEdgeInsets

// -[SCExtendedHitButton initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b29d87c

// -[SCExtendedHitButton initWithFrame:hitEdgeInsets:]
// Type encoding: @80@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16{UIEdgeInsets=dddd}48
// Implementation: 0x10b29d8dc

// -[SCExtendedHitButton pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x10b29d95c

// -[SCExtendedHitButton hitEdgeInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10b29d9e0

// -[SCExtendedHitButton setHitEdgeInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b29d9f8

// +[SCExtendedHitButton SCExtendedHitButtonWithHitEdgeInsets:]
// Type encoding: @48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b29d810

@end
