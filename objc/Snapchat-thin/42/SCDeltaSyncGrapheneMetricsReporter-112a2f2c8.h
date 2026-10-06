// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeltaSyncGrapheneMetricsReporter
// Superclass: NSObject
// Address: 0x112a2f2c8

@interface SCDeltaSyncGrapheneMetricsReporter


// -[SCDeltaSyncGrapheneMetricsReporter initWithGraphene:timeProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100765cc0

// -[SCDeltaSyncGrapheneMetricsReporter loginProcessingInitiated]
// Type encoding: v16@0:8
// Implementation: 0x1053b344c

// -[SCDeltaSyncGrapheneMetricsReporter loginProcessingScheduledForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b34a0

// -[SCDeltaSyncGrapheneMetricsReporter loginProcessingCompletedForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b35a4

// -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingInitiated]
// Type encoding: v16@0:8
// Implementation: 0x1053b36a8

// -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingScheduledForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b36fc

// -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingCompletedForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b387c

// -[SCDeltaSyncGrapheneMetricsReporter logoutProcessingCompleted]
// Type encoding: v16@0:8
// Implementation: 0x1053b3aa4

// -[SCDeltaSyncGrapheneMetricsReporter clearSyncTokenProcessedForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b3b4c

// -[SCDeltaSyncGrapheneMetricsReporter clearSyncTokenProcessingScheduledForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b3bf8

// -[SCDeltaSyncGrapheneMetricsReporter clearSyncTokenProcessingCompletedForGroupKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b3cdc

// -[SCDeltaSyncGrapheneMetricsReporter syncRequestInitiatedForGroupKey:client:syncToken:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100c19d0c

// -[SCDeltaSyncGrapheneMetricsReporter syncRequestSucceededForGroupKey:client:updates:deletions:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1053b3eec

// -[SCDeltaSyncGrapheneMetricsReporter syncRequestFailedForGroupKey:client:errorStatus:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1053b44dc

// -[SCDeltaSyncGrapheneMetricsReporter syncProcessingInitiatedForGroupKey:client:isInitial:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1053b46f0

// -[SCDeltaSyncGrapheneMetricsReporter syncProcessingCompletedForGroupKey:client:successfully:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1053b4830

// -[SCDeltaSyncGrapheneMetricsReporter putRequestInitiatedForItem:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b4bbc

// -[SCDeltaSyncGrapheneMetricsReporter putRequestSucceededForItem:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b4de0

// -[SCDeltaSyncGrapheneMetricsReporter putRequestFailedForItem:client:errorStatus:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1053b5090

// -[SCDeltaSyncGrapheneMetricsReporter updateRequestInitiatedForItemKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b5238

// -[SCDeltaSyncGrapheneMetricsReporter updateRequestSucceededForItemKey:client:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053b53ac

// -[SCDeltaSyncGrapheneMetricsReporter updateRequestFailedForItemKey:client:errorStatus:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1053b5624

// -[SCDeltaSyncGrapheneMetricsReporter duplexSyncTriggerForType:]
// Type encoding: v20@0:8i16
// Implementation: 0x1053b57b4

// -[SCDeltaSyncGrapheneMetricsReporter _metric:groupKey:client:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c19f6c

// -[SCDeltaSyncGrapheneMetricsReporter _metric:groupKey:client:isInitialSync:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1053b5848

// -[SCDeltaSyncGrapheneMetricsReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053b58f0

@end
