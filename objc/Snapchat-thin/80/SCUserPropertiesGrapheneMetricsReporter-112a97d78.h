// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPropertiesGrapheneMetricsReporter
// Superclass: NSObject
// Address: 0x112a97d78

@interface SCUserPropertiesGrapheneMetricsReporter


// -[SCUserPropertiesGrapheneMetricsReporter initWithGraphene:]
// Type encoding: @24@0:8@16
// Implementation: 0x105c7a4ac

// -[SCUserPropertiesGrapheneMetricsReporter initWithGraphene:config:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003dbba8

// -[SCUserPropertiesGrapheneMetricsReporter reportPutVersionMismatchFailureForItemKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c7a4b4

// -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobIterationCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x105c7a598

// -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobPendingQueueSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c7a5ec

// -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobRetryAttemptCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x105c7a640

// -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobPutTerminalFailureForItemKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c7a694

// -[SCUserPropertiesGrapheneMetricsReporter reportStatusAlreadyInPendingStateForItemKind:]
// Type encoding: v24@0:8@16
// Implementation: 0x105c7a720

// -[SCUserPropertiesGrapheneMetricsReporter reportWrongTypeWriteWithDataType:itemId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105c7a7ac

// -[SCUserPropertiesGrapheneMetricsReporter reportSpeculativeJobDequeueLatency:milliSeconds:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105c7a8ac

// -[SCUserPropertiesGrapheneMetricsReporter reportSyncGetForItemId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1004fc2a8

// -[SCUserPropertiesGrapheneMetricsReporter reportObserveForItemId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100503e24

// -[SCUserPropertiesGrapheneMetricsReporter reportWriteForItemId:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105c7a948

// -[SCUserPropertiesGrapheneMetricsReporter _metric:itemKind:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105c7a9a0

// -[SCUserPropertiesGrapheneMetricsReporter _reportUsageCount:itemId:callsite:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1004fc52c

// -[SCUserPropertiesGrapheneMetricsReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105c7aa2c

@end
