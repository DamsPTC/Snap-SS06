// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTimeProvider
// Superclass: NSObject
// Address: 0x112d32fb0

@interface SCTimeProvider

// Property: epochDate; attributes: T@"NSDate",R,C,N
// Property: currentDate; attributes: T@"NSDate",R,C,N
// Property: absoluteSeconds; attributes: Td,R,N
// Property: currentRelativeSeconds; attributes: Td,R,N
// Property: currentDeviceUpTimeInSeconds; attributes: Td,R,N
// Property: traceEventCurrentTime; attributes: TQ,R,N

// -[SCTimeProvider epochDate]
// Type encoding: @16@0:8
// Implementation: 0x10bd55fac

// -[SCTimeProvider currentDate]
// Type encoding: @16@0:8
// Implementation: 0x1000bbcbc

// -[SCTimeProvider absoluteSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1002c4a38

// -[SCTimeProvider currentRelativeSeconds]
// Type encoding: d16@0:8
// Implementation: 0x1000bbcb8

// -[SCTimeProvider currentDeviceUpTimeInSeconds]
// Type encoding: d16@0:8
// Implementation: 0x10bd55fbc

// -[SCTimeProvider traceEventCurrentTime]
// Type encoding: Q16@0:8
// Implementation: 0x10bd55fc0

@end
