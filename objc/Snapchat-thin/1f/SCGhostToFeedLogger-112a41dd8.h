// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGhostToFeedLogger
// Superclass: NSObject
// Address: 0x112a41dd8

@interface SCGhostToFeedLogger


// -[SCGhostToFeedLogger initWithLogger:notificationLifeCycleEvents:performer:grapheneRegistry:startupInfoService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10043c7dc

// -[SCGhostToFeedLogger configureForWarmStart]
// Type encoding: v16@0:8
// Implementation: 0x1054e92c0

// -[SCGhostToFeedLogger setEntryPointBeginTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1004fbf84

// -[SCGhostToFeedLogger didBeginLifecycleObservationTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1004fca5c

// -[SCGhostToFeedLogger startLoggingForSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1004ff304

// -[SCGhostToFeedLogger setFetchContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10060dd28

// -[SCGhostToFeedLogger ghostToFeedResult]
// Type encoding: @16@0:8
// Implementation: 0x1054e9330

// -[SCGhostToFeedLogger ghostToFeedLifecycleEvent]
// Type encoding: @16@0:8
// Implementation: 0x1054e9358

// -[SCGhostToFeedLogger _traceLegacyG2FFStepIfNeeded:fetchContext:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x100629cfc

// -[SCGhostToFeedLogger _endTracingLegacyG2FFStepsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1054e9380

// -[SCGhostToFeedLogger logStep:fetchContext:updateCount:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10060df90

// -[SCGhostToFeedLogger logStep:fetchContexts:updateCount:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x100beb598

// -[SCGhostToFeedLogger logSyncFeedSubstep:startTime:fetchContext:]
// Type encoding: v40@0:8q16d24@32
// Implementation: 0x10043d660

// -[SCGhostToFeedLogger logProcessFeedItemsSubstep:entriesFetched:startTime:fetchContexts:]
// Type encoding: v48@0:8q16q24d32@40
// Implementation: 0x100bec660

// -[SCGhostToFeedLogger logPropagateChangesToUIDispatchLatency:fetchContexts:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1054e9384

// -[SCGhostToFeedLogger logFeedUpdate]
// Type encoding: v16@0:8
// Implementation: 0x100bbc320

// -[SCGhostToFeedLogger logFeedViewAppeared:fetchContexts:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1054e9584

// -[SCGhostToFeedLogger logEndWithEndResult:fetchContexts:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054e977c

// -[SCGhostToFeedLogger _logStep:logTime:fetchContext:updateCount:]
// Type encoding: v48@0:8q16d24@32Q40
// Implementation: 0x100629a2c

// -[SCGhostToFeedLogger _logProcessFeedItemsSubstep:entriesFetched:logTime:startTime:fetchContext:]
// Type encoding: v56@0:8q16q24d32d40@48
// Implementation: 0x100bef620

// -[SCGhostToFeedLogger _logPropagateChangesToUIDispatchLatency:fetchContext:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1054e9994

// -[SCGhostToFeedLogger _logEndWithEndResult:fetchContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054e9a50

// -[SCGhostToFeedLogger _logFeedViewAppeared:fetchContext:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1054ea318

// -[SCGhostToFeedLogger markUserEnteredFeedFromSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054ea3d4

// -[SCGhostToFeedLogger markUserExitedFeedFromSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054ea47c

// -[SCGhostToFeedLogger didAppSessionEndWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054ea518

// -[SCGhostToFeedLogger _startObservingNotificationLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x10043d3d0

// -[SCGhostToFeedLogger _updateNotificationType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054ea770

// -[SCGhostToFeedLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054ea818

@end
