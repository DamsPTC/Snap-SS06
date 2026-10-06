// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOffPlatformShareOperationLogger
// Superclass: NSObject
// Address: 0x112b01458

@interface SCOffPlatformShareOperationLogger


// -[SCOffPlatformShareOperationLogger initWithUserTrackedLogger:eventSubject:shareSessionId:shareSource:shareUIType:performerProvider:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32q40q48@56@64
// Implementation: 0x1068349d4

// -[SCOffPlatformShareOperationLogger _respondToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106834d24

// -[SCOffPlatformShareOperationLogger _requestShareSheet]
// Type encoding: v16@0:8
// Implementation: 0x106835384

// -[SCOffPlatformShareOperationLogger _shareSheetRenderComplete]
// Type encoding: v16@0:8
// Implementation: 0x1068353ac

// -[SCOffPlatformShareOperationLogger _selectShare]
// Type encoding: v16@0:8
// Implementation: 0x1068353d4

// -[SCOffPlatformShareOperationLogger _shareLinkGenerationStartWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106835400

// -[SCOffPlatformShareOperationLogger _shareLinkGenerationCompleteWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106835408

// -[SCOffPlatformShareOperationLogger _generateMediaStartWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106835410

// -[SCOffPlatformShareOperationLogger _generateMediaCompleteWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106835418

// -[SCOffPlatformShareOperationLogger _mediaExportStartWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106835420

// -[SCOffPlatformShareOperationLogger _mediaExportCompleteWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106835428

// -[SCOffPlatformShareOperationLogger _completeShareWithDestination:shareResult:textConfiguration:mediaConfiguration:completedTimestamp:]
// Type encoding: v56@0:8q16Q24@32@40d48
// Implementation: 0x106835430

// -[SCOffPlatformShareOperationLogger _addStageWithName:timestamp:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x1068357f0

// -[SCOffPlatformShareOperationLogger _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10683587c

// -[SCOffPlatformShareOperationLogger _getStages]
// Type encoding: @16@0:8
// Implementation: 0x1068358d8

// -[SCOffPlatformShareOperationLogger _resetLoggingParams]
// Type encoding: v16@0:8
// Implementation: 0x106835928

// -[SCOffPlatformShareOperationLogger _logGrapheneExportCompleteLatencyWithTimestamp:deepLinkSourceType:mediaType:]
// Type encoding: v40@0:8d16q24q32
// Implementation: 0x106835988

// -[SCOffPlatformShareOperationLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106835a60

@end
