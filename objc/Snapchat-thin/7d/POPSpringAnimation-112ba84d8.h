// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: POPSpringAnimation
// Superclass: POPPropertyAnimation
// Address: 0x112ba84d8

@interface POPSpringAnimation

// Property: velocity; attributes: T@,C,N
// Property: springBounciness; attributes: Td,N
// Property: springSpeed; attributes: Td,N
// Property: dynamicsTension; attributes: Td,N
// Property: dynamicsFriction; attributes: Td,N
// Property: dynamicsMass; attributes: Td,N

// -[POPSpringAnimation copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1085a19e0

// -[POPSpringAnimation _initState]
// Type encoding: v16@0:8
// Implementation: 0x1085a10cc

// -[POPSpringAnimation init]
// Type encoding: @16@0:8
// Implementation: 0x1085a1190

// -[POPSpringAnimation dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085a12a8

// -[POPSpringAnimation velocity]
// Type encoding: @16@0:8
// Implementation: 0x1085a1304

// -[POPSpringAnimation setVelocity:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085a13bc

// -[POPSpringAnimation dynamicsTension]
// Type encoding: d16@0:8
// Implementation: 0x1085a1620

// -[POPSpringAnimation setDynamicsTension:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085a162c

// -[POPSpringAnimation dynamicsFriction]
// Type encoding: d16@0:8
// Implementation: 0x1085a1648

// -[POPSpringAnimation setDynamicsFriction:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085a1654

// -[POPSpringAnimation dynamicsMass]
// Type encoding: d16@0:8
// Implementation: 0x1085a1670

// -[POPSpringAnimation setDynamicsMass:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085a167c

// -[POPSpringAnimation springSpeed]
// Type encoding: d16@0:8
// Implementation: 0x1085a1698

// -[POPSpringAnimation setSpringSpeed:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085a16a4

// -[POPSpringAnimation springBounciness]
// Type encoding: d16@0:8
// Implementation: 0x1085a1714

// -[POPSpringAnimation setSpringBounciness:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085a1720

// -[POPSpringAnimation solver]
// Type encoding: ^v16@0:8
// Implementation: 0x1085a1790

// -[POPSpringAnimation setSolver:]
// Type encoding: v24@0:8^v16
// Implementation: 0x1085a179c

// -[POPSpringAnimation _updatedDynamicsTension]
// Type encoding: v16@0:8
// Implementation: 0x1085a17dc

// -[POPSpringAnimation _updatedDynamicsFriction]
// Type encoding: v16@0:8
// Implementation: 0x1085a1844

// -[POPSpringAnimation _updatedDynamicsMass]
// Type encoding: v16@0:8
// Implementation: 0x1085a18ac

// -[POPSpringAnimation _appendDescription:debug:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1085a1914

// +[POPSpringAnimation convertBounciness:speed:toTension:friction:mass:]
// Type encoding: v56@0:8d16d24^d32^d40^d48
// Implementation: 0x108597810

// +[POPSpringAnimation convertTension:friction:toBounciness:speed:]
// Type encoding: v48@0:8d16d24^d32^d40
// Implementation: 0x10859791c

// +[POPSpringAnimation animation]
// Type encoding: @16@0:8
// Implementation: 0x1085a1000

// +[POPSpringAnimation animationWithPropertyNamed:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085a1014

@end
