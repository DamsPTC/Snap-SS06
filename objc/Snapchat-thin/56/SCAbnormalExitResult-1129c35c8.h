// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAbnormalExitResult
// Superclass: NSObject
// Address: 0x1129c35c8

@interface SCAbnormalExitResult

// Property: crashType; attributes: Tq,N,R,VcrashType
// Property: previousAppVersion; attributes: T@"NSString",N,R
// Property: previousOSVersion; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAbnormalExitResult crashType]
// Type encoding: q16@0:8
// Implementation: 0x1001f3c48

// -[SCAbnormalExitResult previousAppVersion]
// Type encoding: @16@0:8
// Implementation: 0x1001f4494

// -[SCAbnormalExitResult previousOSVersion]
// Type encoding: @16@0:8
// Implementation: 0x100213434

// -[SCAbnormalExitResult initWithCrashType:previousAppVersion:previousOSVersion:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x1001de3b4

// -[SCAbnormalExitResult hash]
// Type encoding: q16@0:8
// Implementation: 0x1044d9f10

// -[SCAbnormalExitResult isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044da1b4

// -[SCAbnormalExitResult copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1044da234

// -[SCAbnormalExitResult description]
// Type encoding: @16@0:8
// Implementation: 0x1044da238

// -[SCAbnormalExitResult init]
// Type encoding: @16@0:8
// Implementation: 0x1044da254

// -[SCAbnormalExitResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1044da2d0

@end
