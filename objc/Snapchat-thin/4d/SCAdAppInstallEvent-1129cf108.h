// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdAppInstallEvent
// Superclass: NSObject
// Address: 0x1129cf108

@interface SCAdAppInstallEvent

// Property: parserSymbol; attributes: T@"NSString",R,C,N
// Property: eventType; attributes: Tq,R,N
// Property: common; attributes: T@"SCAdTrackCommon",N,R,Vcommon
// Property: type; attributes: T@"SCAdAppInstallEventType",N,R,Vtype
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdAppInstallEvent parserSymbol]
// Type encoding: @16@0:8
// Implementation: 0x1084be630

// -[SCAdAppInstallEvent eventType]
// Type encoding: q16@0:8
// Implementation: 0x1084be80c

// -[SCAdAppInstallEvent common]
// Type encoding: @16@0:8
// Implementation: 0x10467bd20

// -[SCAdAppInstallEvent type]
// Type encoding: @16@0:8
// Implementation: 0x10467bd30

// -[SCAdAppInstallEvent initWithCommon:type:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10467bda4

// -[SCAdAppInstallEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x10467bef4

// -[SCAdAppInstallEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10467c084

// -[SCAdAppInstallEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10467c104

// -[SCAdAppInstallEvent description]
// Type encoding: @16@0:8
// Implementation: 0x10467c108

// -[SCAdAppInstallEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10467c1a8

// -[SCAdAppInstallEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10467c224

@end
