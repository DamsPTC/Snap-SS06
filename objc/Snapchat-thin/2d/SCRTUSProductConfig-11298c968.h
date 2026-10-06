// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSProductConfig
// Superclass: NSObject
// Address: 0x11298c968

@interface SCRTUSProductConfig

// Property: eventTTLSeconds; attributes: Tq,N,R,VeventTTLSeconds
// Property: diskQuotaBytes; attributes: Tq,N,R,VdiskQuotaBytes
// Property: eventCountLimit; attributes: Tq,N,R,VeventCountLimit
// Property: purgeEventsEnabled; attributes: TB,N,R,VpurgeEventsEnabled
// Property: eventPayloadIdToEventFieldsMap; attributes: T@"NSDictionary",N,R
// Property: eventPayloadIdToEventFilterParseTreeMap; attributes: T@"NSDictionary",N,R

// -[SCRTUSProductConfig eventTTLSeconds]
// Type encoding: q16@0:8
// Implementation: 0x1040b0824

// -[SCRTUSProductConfig diskQuotaBytes]
// Type encoding: q16@0:8
// Implementation: 0x1040b0834

// -[SCRTUSProductConfig eventCountLimit]
// Type encoding: q16@0:8
// Implementation: 0x1040b0844

// -[SCRTUSProductConfig purgeEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1040b0854

// -[SCRTUSProductConfig eventPayloadIdToEventFieldsMap]
// Type encoding: @16@0:8
// Implementation: 0x1004c2a80

// -[SCRTUSProductConfig eventPayloadIdToEventFilterParseTreeMap]
// Type encoding: @16@0:8
// Implementation: 0x1040b0864

// -[SCRTUSProductConfig initWithEventTTLSeconds:diskQuotaBytes:eventCountLimit:purgeEventsEnabled:eventPayloadIdToEventFieldsMap:eventPayloadIdToEventFilterParseTreeMap:]
// Type encoding: @60@0:8q16q24q32B40@44@52
// Implementation: 0x1004c00a0

// -[SCRTUSProductConfig init]
// Type encoding: @16@0:8
// Implementation: 0x1040b09b8

// -[SCRTUSProductConfig .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1040b0a14

@end
