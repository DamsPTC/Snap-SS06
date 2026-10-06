// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNoDepBlizzardImpl
// Superclass: NSObject
// Address: 0x112b11128

@interface SCNoDepBlizzardImpl

// Property: logger; attributes: T@"SCLogger",C,N,V_logger
// Property: userSession; attributes: T@"SCUserSession",C,N,V_userSession
// Property: userNotTrackedAndNotAddedEvents; attributes: T@"NSMutableArray",R,N,V_userNotTrackedAndNotAddedEvents
// Property: userTrackedAndNotAddedEvents; attributes: T@"NSMutableArray",R,N,V_userTrackedAndNotAddedEvents
// Property: userAddedEvents; attributes: T@"NSMutableArray",R,N,V_userAddedEvents
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNoDepBlizzardImpl init]
// Type encoding: @16@0:8
// Implementation: 0x1000c4b84

// -[SCNoDepBlizzardImpl setLoggerAndSendQueuedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100281e28

// -[SCNoDepBlizzardImpl setUserSessionAndSendQueuedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100351fe4

// -[SCNoDepBlizzardImpl _addEventToQueue:eventToAdd:queueName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100119a18

// -[SCNoDepBlizzardImpl logUserAddedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100116308

// -[SCNoDepBlizzardImpl _logUserAddedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100119984

// -[SCNoDepBlizzardImpl logUserAddedBestEffortEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002130ac

// -[SCNoDepBlizzardImpl logUserNotAddedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad1c64

// -[SCNoDepBlizzardImpl logUserExternallyTrackedEvent:userGuid:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ad1d18

// -[SCNoDepBlizzardImpl _logUserTrackedAndNotAddedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100213108

// -[SCNoDepBlizzardImpl _drainUserAddedEventsQueue]
// Type encoding: v16@0:8
// Implementation: 0x100352060

// -[SCNoDepBlizzardImpl _drainUserNotAddedEventsQueue]
// Type encoding: v16@0:8
// Implementation: 0x100281ed0

// -[SCNoDepBlizzardImpl _incrementNumEventsSentPerQueue:numEvents:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1002864dc

// -[SCNoDepBlizzardImpl logger]
// Type encoding: @16@0:8
// Implementation: 0x106ad1da0

// -[SCNoDepBlizzardImpl setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad1da8

// -[SCNoDepBlizzardImpl userSession]
// Type encoding: @16@0:8
// Implementation: 0x106ad1db0

// -[SCNoDepBlizzardImpl setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad1db8

// -[SCNoDepBlizzardImpl userNotTrackedAndNotAddedEvents]
// Type encoding: @16@0:8
// Implementation: 0x106ad1dc0

// -[SCNoDepBlizzardImpl userTrackedAndNotAddedEvents]
// Type encoding: @16@0:8
// Implementation: 0x106ad1dc8

// -[SCNoDepBlizzardImpl userAddedEvents]
// Type encoding: @16@0:8
// Implementation: 0x106ad1dd0

// -[SCNoDepBlizzardImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad1dd8

@end
