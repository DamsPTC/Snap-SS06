// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTransform
// Superclass: NSObject
// Address: 0x112ca7848

@interface SCTransform

// Property: scale; attributes: Td,R,N,V_scale
// Property: center; attributes: T{CGPoint=dd},R,N,V_center
// Property: rotationRadians; attributes: Td,R,N,V_rotationRadians
// Property: timestampMs; attributes: TQ,R,N,V_timestampMs

// -[SCTransform initWithScale:center:rotationRadians:timestampMs:]
// Type encoding: @56@0:8d16{CGPoint=dd}24d40Q48
// Implementation: 0x10b7060c8

// -[SCTransform copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b706138

// -[SCTransform hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b70615c

// -[SCTransform isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b706238

// -[SCTransform scale]
// Type encoding: d16@0:8
// Implementation: 0x10b70634c

// -[SCTransform center]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10b706354

// -[SCTransform rotationRadians]
// Type encoding: d16@0:8
// Implementation: 0x10b70635c

// -[SCTransform timestampMs]
// Type encoding: Q16@0:8
// Implementation: 0x10b706364

@end
