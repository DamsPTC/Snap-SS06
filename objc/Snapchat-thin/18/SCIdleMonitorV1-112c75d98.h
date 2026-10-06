// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCIdleMonitorV1
// Superclass: NSObject
// Address: 0x112c75d98

@interface SCIdleMonitorV1

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCIdleMonitorV1 init]
// Type encoding: @16@0:8
// Implementation: 0x100078d5c

// -[SCIdleMonitorV1 initWithBackgroundTaskWrapperEnabled:]
// Type encoding: @20@0:8B16
// Implementation: 0x100078d64

// -[SCIdleMonitorV1 configureWithMainActorThrottlerServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x100a1452c

// -[SCIdleMonitorV1 _scheduleWithSnapTaskForAttributedTask:queuePriority:priority:callbackQueue:callbackBlock:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x10b5d92a4

// -[SCIdleMonitorV1 waitUntilIdleForTag:callbackQueue:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10011d784

// -[SCIdleMonitorV1 waitUntilIdleForAttributedTask:priority:callbackQueue:block:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10011d3d0

// -[SCIdleMonitorV1 waitUntilStartCompleteForAttributedTask:priority:callbackQueue:block:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10011d998

// -[SCIdleMonitorV1 waitUntilStartCompleteForTag:callbackQueue:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10011ddfc

// -[SCIdleMonitorV1 waitUntilStartCompleteButBlockSwipeForTag:callbackQueue:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1005a5294

// -[SCIdleMonitorV1 waitUntilStartCompleteButBlockSwipeForAttributedTask:priority:callbackQueue:block:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x1005a50e4

// -[SCIdleMonitorV1 waitUntilStartCompleteOrBackgroundLaunchIdleForAttributedTask:priority:callbackQueue:block:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x10007963c

// -[SCIdleMonitorV1 waitUntilStartCompleteOrBackgroundLaunchIdleForTag:callbackQueue:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10007d998

// -[SCIdleMonitorV1 beginObservingCriticalSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x100114670

// -[SCIdleMonitorV1 beginObservingUIEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x100114748

// -[SCIdleMonitorV1 receiveTouchEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b5d96fc

// -[SCIdleMonitorV1 markScopeGraphLaunched]
// Type encoding: v16@0:8
// Implementation: 0x100c16674

// -[SCIdleMonitorV1 markStartComplete]
// Type encoding: v16@0:8
// Implementation: 0x100c87210

// -[SCIdleMonitorV1 markEndOfBackgroundLaunch:]
// Type encoding: v20@0:8B16
// Implementation: 0x100a02aac

// -[SCIdleMonitorV1 markForegroundLaunchStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b5d99dc

// -[SCIdleMonitorV1 unmarkStartComplete]
// Type encoding: v16@0:8
// Implementation: 0x10b5d9b24

// -[SCIdleMonitorV1 isTaskEnabledForWorkScheduler:]
// Type encoding: B24@0:8@16
// Implementation: 0x100811ba0

// -[SCIdleMonitorV1 _shouldSuspendDuringCriticalSection]
// Type encoding: B16@0:8
// Implementation: 0x10b5d9c04

// -[SCIdleMonitorV1 _shouldContinueScheduleHeadlessIdle]
// Type encoding: B16@0:8
// Implementation: 0x10b5d9c54

// -[SCIdleMonitorV1 _scheduleHeadlessIdleFinished]
// Type encoding: B16@0:8
// Implementation: 0x10b5d9c88

// -[SCIdleMonitorV1 _cancelScheduledHeadlessIdle]
// Type encoding: v16@0:8
// Implementation: 0x10b5d9cc4

// -[SCIdleMonitorV1 _scheduleHeadlessIdle]
// Type encoding: v16@0:8
// Implementation: 0x10b5d9d78

// -[SCIdleMonitorV1 _pushForFutureHeadlessIdleRequest]
// Type encoding: v16@0:8
// Implementation: 0x10b5d9ef4

// -[SCIdleMonitorV1 _waitUntilStartCompleteWithQueue:requestQueueType:tag:callbackQueue:block:executionRequestMade:]
// Type encoding: v64@0:8@16Q24@32@40@?48@?56
// Implementation: 0x10007daec

// -[SCIdleMonitorV1 _pushForFuturePrioritizedStart]
// Type encoding: v16@0:8
// Implementation: 0x10b5da0cc

// -[SCIdleMonitorV1 _completePrioritizedStart]
// Type encoding: v16@0:8
// Implementation: 0x10b5da2a0

// -[SCIdleMonitorV1 _cancelFuturePrioritizedStart]
// Type encoding: v16@0:8
// Implementation: 0x10b5da2e4

// -[SCIdleMonitorV1 _cancelFutureAttempt]
// Type encoding: v16@0:8
// Implementation: 0x1003e4ccc

// -[SCIdleMonitorV1 _pushForFutureAttemptWithInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x1003e4bac

// -[SCIdleMonitorV1 _attemptExecuteOps]
// Type encoding: v16@0:8
// Implementation: 0x10b5da34c

// -[SCIdleMonitorV1 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5da434

@end
