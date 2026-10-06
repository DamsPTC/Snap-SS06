// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMotionValue
// Superclass: NSObject
// Address: 0x112b84218

@interface SCMotionValue

// Property: rotation; attributes: Td,R,N,V_rotation
// Property: translation; attributes: T{CGVector=dd},R,N,V_translation
// Property: gravity; attributes: Td,R,N,V_gravity

// -[SCMotionValue initWithRotation:translation:gravity:]
// Type encoding: @48@0:8d16{CGVector=dd}24d40
// Implementation: 0x107dfad2c

// -[SCMotionValue copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107dfad8c

// -[SCMotionValue rotation]
// Type encoding: d16@0:8
// Implementation: 0x107dfadb0

// -[SCMotionValue translation]
// Type encoding: {CGVector=dd}16@0:8
// Implementation: 0x107dfadb8

// -[SCMotionValue gravity]
// Type encoding: d16@0:8
// Implementation: 0x107dfadc0

@end
