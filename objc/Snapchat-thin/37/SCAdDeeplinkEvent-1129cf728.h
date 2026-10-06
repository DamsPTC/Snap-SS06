// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdDeeplinkEvent
// Superclass: NSObject
// Address: 0x1129cf728

@interface SCAdDeeplinkEvent

// Property: parserSymbol; attributes: T@"NSString",R,C,N
// Property: deeplinkUrl; attributes: T@"NSString",R,C,N
// Property: deeplinkEventType; attributes: Tq,R,N
// Property: customProductPageEnabled; attributes: TB,R,N
// Property: common; attributes: T@"SCAdTrackCommon",N,R,Vcommon
// Property: type; attributes: T@"SCAdDeeplinkEventType",N,R,Vtype
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdDeeplinkEvent parserSymbol]
// Type encoding: @16@0:8
// Implementation: 0x1084bdfbc

// -[SCAdDeeplinkEvent deeplinkUrl]
// Type encoding: @16@0:8
// Implementation: 0x1084be1d4

// -[SCAdDeeplinkEvent deeplinkEventType]
// Type encoding: q16@0:8
// Implementation: 0x1084be368

// -[SCAdDeeplinkEvent customProductPageEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1084be52c

// -[SCAdDeeplinkEvent common]
// Type encoding: @16@0:8
// Implementation: 0x1046802a0

// -[SCAdDeeplinkEvent type]
// Type encoding: @16@0:8
// Implementation: 0x1046802b0

// -[SCAdDeeplinkEvent initWithCommon:type:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104680324

// -[SCAdDeeplinkEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104680494

// -[SCAdDeeplinkEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104680624

// -[SCAdDeeplinkEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1046806a4

// -[SCAdDeeplinkEvent description]
// Type encoding: @16@0:8
// Implementation: 0x1046806a8

// -[SCAdDeeplinkEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104680738

// -[SCAdDeeplinkEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1046807b4

@end
