// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogger
// Superclass: NSObject
// Address: 0x112c6f308

@interface SCLogger

// Property: blizzardLogger; attributes: T@"<SCLoggerAmplitudeProtocol>",&,N,V_blizzardLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLogger streamEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002cefa4

// -[SCLogger streamEvent:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0ec8e0

// -[SCLogger logSerializedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ec858

// -[SCLogger initWithLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x100281158

// -[SCLogger startServicesWithBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ec978

// -[SCLogger logUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100281fac

// -[SCLogger logUserNotTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ec97c

// -[SCLogger willLogEventsOfType:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0ec9cc

// -[SCLogger startBlizzardSession]
// Type encoding: v16@0:8
// Implementation: 0x100c755dc

// -[SCLogger sessionId]
// Type encoding: @16@0:8
// Implementation: 0x10b0eca30

// -[SCLogger logUserExternallyTrackedEvent:userGuid:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b0eca74

// -[SCLogger logUserExternallyTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0ecacc

// -[SCLogger startFeatureSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0ecad8

// -[SCLogger endFeatureSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0ecb10

// -[SCLogger blizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x100281ffc

// -[SCLogger setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002811f4

// -[SCLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0ecb48

@end
