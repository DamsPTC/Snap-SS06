// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInteractionHistoryConfig
// Superclass: NSObject
// Address: 0x112cb2798

@interface SCLensInteractionHistoryConfig

// Property: enabled; attributes: TB,R,N,V_enabled
// Property: windowToSendMin; attributes: Tq,R,N,V_windowToSendMin
// Property: eventsTTLMin; attributes: Tq,R,N,V_eventsTTLMin
// Property: eventsLimit; attributes: Tq,R,N,V_eventsLimit

// -[SCLensInteractionHistoryConfig initWithEnabled:windowToSendMin:eventsTTLMin:eventsLimit:]
// Type encoding: @44@0:8B16q20q28q36
// Implementation: 0x1007b30b8

// -[SCLensInteractionHistoryConfig copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b71e9ec

// -[SCLensInteractionHistoryConfig hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b71ea10

// -[SCLensInteractionHistoryConfig isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b71ea84

// -[SCLensInteractionHistoryConfig enabled]
// Type encoding: B16@0:8
// Implementation: 0x1007b311c

// -[SCLensInteractionHistoryConfig windowToSendMin]
// Type encoding: q16@0:8
// Implementation: 0x1007b3668

// -[SCLensInteractionHistoryConfig eventsTTLMin]
// Type encoding: q16@0:8
// Implementation: 0x1007b3670

// -[SCLensInteractionHistoryConfig eventsLimit]
// Type encoding: q16@0:8
// Implementation: 0x1007b3678

// +[SCLensInteractionHistoryConfig defaultConfig]
// Type encoding: @16@0:8
// Implementation: 0x1055ecefc

// +[SCLensInteractionHistoryConfig tweaksConfig]
// Type encoding: @16@0:8
// Implementation: 0x1055ecf2c

// +[SCLensInteractionHistoryConfig configFromProto:]
// Type encoding: @24@0:8@16
// Implementation: 0x1007b3020

@end
