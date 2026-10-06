// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCofSyncEventLoggerImpl
// Superclass: NSObject
// Address: 0x1127db990

@interface SCCofSyncEventLoggerImpl


// -[SCCofSyncEventLoggerImpl initWithAuthentication:initTimestamp:spectrum:appStartExperimentReader:]
// Type encoding: @48@0:8@16d24@32@40
// Implementation: 0x1014df7b0

// -[SCCofSyncEventLoggerImpl logSyncEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1014dfa2c

// -[SCCofSyncEventLoggerImpl logPreResponseSyncEventWithTriggerEventType:isColdStart:previousEtag:eventStatus:]
// Type encoding: v36@0:8i16B20@24i32
// Implementation: 0x1009a4be8

// -[SCCofSyncEventLoggerImpl logPostResponseSyncEventWithTriggerEventType:isColdStart:eventStatus:configTargetingResponse:previousEtag:callSite:operationLatencySeconds:]
// Type encoding: v56@0:8i16B20i24@28@36i44d48
// Implementation: 0x1014dfee0

// -[SCCofSyncEventLoggerImpl isAppStateForeground:]
// Type encoding: B20@0:8i16
// Implementation: 0x1014dffa8

// -[SCCofSyncEventLoggerImpl logSyncEventClientErrorWithAppState:previousEtag:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x1014e0094

// -[SCCofSyncEventLoggerImpl createBaseSyncEventWithEventStatus:isColdStart:previousEtag:newEtag:cofTriggerEventType:]
// Type encoding: @44@0:8i16B20@24@32i40
// Implementation: 0x1014e02b0

// -[SCCofSyncEventLoggerImpl init]
// Type encoding: @16@0:8
// Implementation: 0x1014e0380

// -[SCCofSyncEventLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1014e03dc

@end
