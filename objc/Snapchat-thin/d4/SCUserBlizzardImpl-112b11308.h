// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserBlizzardImpl
// Superclass: NSObject
// Address: 0x112b11308

@interface SCUserBlizzardImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserBlizzardImpl initWithLogger:userId:grapheneRegistry:experimentProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100286b90

// -[SCUserBlizzardImpl logUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100353ea8

// -[SCUserBlizzardImpl logUserNotTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad27b4

// -[SCUserBlizzardImpl logSerializedEvent_doNotUse:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad27c4

// -[SCUserBlizzardImpl willLogEventsOfType:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad27d4

// -[SCUserBlizzardImpl startFeatureSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad27dc

// -[SCUserBlizzardImpl endFeatureSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad28d0

// -[SCUserBlizzardImpl _setActiveSessions:]
// Type encoding: v24@0:8@16
// Implementation: 0x100353f0c

// -[SCUserBlizzardImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad2950

@end
