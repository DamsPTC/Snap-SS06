// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSATouch
// Superclass: NSObject
// Address: 0x112bf9c98

@interface LSATouch

// Property: identifier; attributes: TQ,R,N,V_identifier
// Property: normalizedLocationInView; attributes: T{CGPoint=dd},R,N,V_normalizedLocationInView
// Property: phase; attributes: Tq,R,N,V_phase

// -[LSATouch initWithIdentifier:normalizedLocationInView:phase:]
// Type encoding: @48@0:8Q16{CGPoint=dd}24q40
// Implementation: 0x10adb8eb8

// -[LSATouch initWithTouch:inView:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adb8f18

// -[LSATouch description]
// Type encoding: @16@0:8
// Implementation: 0x10adb9088

// -[LSATouch identifier]
// Type encoding: Q16@0:8
// Implementation: 0x10adb914c

// -[LSATouch normalizedLocationInView]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10adb9154

// -[LSATouch phase]
// Type encoding: q16@0:8
// Implementation: 0x10adb915c

@end
