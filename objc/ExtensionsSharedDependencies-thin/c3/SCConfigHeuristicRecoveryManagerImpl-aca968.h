// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigHeuristicRecoveryManagerImpl
// Superclass: NSObject
// Address: 0xaca968

@interface SCConfigHeuristicRecoveryManagerImpl


// -[SCConfigHeuristicRecoveryManagerImpl setExperimentLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0xafcb0

// -[SCConfigHeuristicRecoveryManagerImpl isRecoveryNeeded]
// Type encoding: B16@0:8
// Implementation: 0xafe30

// -[SCConfigHeuristicRecoveryManagerImpl isSafeModeNeeded]
// Type encoding: B16@0:8
// Implementation: 0xafe4c

// -[SCConfigHeuristicRecoveryManagerImpl isApprochingRecovery]
// Type encoding: B16@0:8
// Implementation: 0xafe68

// -[SCConfigHeuristicRecoveryManagerImpl getRecoveryPayload:]
// Type encoding: v24@0:8@?16
// Implementation: 0xafec8

// -[SCConfigHeuristicRecoveryManagerImpl markRecoveryComplete]
// Type encoding: v16@0:8
// Implementation: 0xaff34

// -[SCConfigHeuristicRecoveryManagerImpl waitForRecoveryIfNeededWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0xaff94

// -[SCConfigHeuristicRecoveryManagerImpl decrementCrashLoopCountOnBackgroundLaunchWithApplicationState:]
// Type encoding: v24@0:8q16
// Implementation: 0xb04ec

// -[SCConfigHeuristicRecoveryManagerImpl resetRecoveryWithReason:]
// Type encoding: v24@0:8q16
// Implementation: 0xb09e8

// -[SCConfigHeuristicRecoveryManagerImpl updateConstantsWithUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0xb0fe4

// -[SCConfigHeuristicRecoveryManagerImpl init]
// Type encoding: @16@0:8
// Implementation: 0xb12d4

// -[SCConfigHeuristicRecoveryManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0xb1328

// +[SCConfigHeuristicRecoveryManagerImpl shared]
// Type encoding: @16@0:8
// Implementation: 0xafdf0

// +[SCConfigHeuristicRecoveryManagerImpl markSceneConnected]
// Type encoding: v16@0:8
// Implementation: 0xb0ab0

// +[SCConfigHeuristicRecoveryManagerImpl disableHeadlessWakeDecrements]
// Type encoding: v16@0:8
// Implementation: 0xb0bcc

// +[SCConfigHeuristicRecoveryManagerImpl decrementCrashLoopCountForHeadlessWake]
// Type encoding: v16@0:8
// Implementation: 0xb0fc0

@end
