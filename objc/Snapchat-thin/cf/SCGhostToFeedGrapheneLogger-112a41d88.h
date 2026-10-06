// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGhostToFeedGrapheneLogger
// Superclass: NSObject
// Address: 0x112a41d88

@interface SCGhostToFeedGrapheneLogger


// -[SCGhostToFeedGrapheneLogger initWithGraphene:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10043ca48

// -[SCGhostToFeedGrapheneLogger configureForWarmStart]
// Type encoding: v16@0:8
// Implementation: 0x1054e8344

// -[SCGhostToFeedGrapheneLogger configureWithSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005060f4

// -[SCGhostToFeedGrapheneLogger logGhostToFeedWithDurationMs:success:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1054e8350

// -[SCGhostToFeedGrapheneLogger logStep:duration:success:updateCount:]
// Type encoding: v44@0:8q16d24B32q36
// Implementation: 0x1054e8494

// -[SCGhostToFeedGrapheneLogger logEntryPointBeginDuration:success:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1054e86f0

// -[SCGhostToFeedGrapheneLogger logBeginObservationTime:success:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1054e8840

// -[SCGhostToFeedGrapheneLogger logSyncFeedSubstep:duration:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x10043ef38

// -[SCGhostToFeedGrapheneLogger logProcessFeedItemsSubstep:duration:entriesFetched:]
// Type encoding: v40@0:8q16d24q32
// Implementation: 0x100bef864

// -[SCGhostToFeedGrapheneLogger logPropagateChangesToUIDispatchLatency:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054e8990

// -[SCGhostToFeedGrapheneLogger logTailEndLatency:lastLoggedStep:success:]
// Type encoding: v36@0:8d16@24B32
// Implementation: 0x1054e8a58

// -[SCGhostToFeedGrapheneLogger logDuplicateStartForSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054e8bf4

// -[SCGhostToFeedGrapheneLogger logDuplicateStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054e8c98

// -[SCGhostToFeedGrapheneLogger logFailureReason:lastLoggedStep:duration:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1054e8d3c

// -[SCGhostToFeedGrapheneLogger logFeedUpdateWithCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100bed6bc

// -[SCGhostToFeedGrapheneLogger logFeedViewAppeared:]
// Type encoding: v20@0:8B16
// Implementation: 0x1054e8ec0

// -[SCGhostToFeedGrapheneLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e8fd0

@end
