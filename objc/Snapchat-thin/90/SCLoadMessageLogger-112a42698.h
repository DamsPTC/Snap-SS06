// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadMessageLogger
// Superclass: NSObject
// Address: 0x112a42698

@interface SCLoadMessageLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLoadMessageLogger initWithMetricsEmitter:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054fcd64

// -[SCLoadMessageLogger dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1054fce38

// -[SCLoadMessageLogger logStepWithMediaId:loadStep:startTimestampSeconds:endTimestampSeconds:result:]
// Type encoding: v56@0:8@16q24d32d40q48
// Implementation: 0x1054fce80

// -[SCLoadMessageLogger logDiscreteStepWithMediaId:loadStep:timestampInSeconds:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x1054fcf5c

// -[SCLoadMessageLogger _logDiscreteStepWithMediaId:loadStep:timestampInSeconds:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x1054fd01c

// -[SCLoadMessageLogger logTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fd030

// -[SCLoadMessageLogger setMetadataForMessageId:mediaId:conversationId:isGroupConversation:messageBodyType:mediaType:mediaDurationSec:multiSnapBundleId:multiSnapSegmentIndex:multiSnapSegmentCount:]
// Type encoding: v92@0:8@16@24@32B40q44q52d60@68@76@84
// Implementation: 0x1054fd0cc

// -[SCLoadMessageLogger setMediaSizeBytes:forMediaId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054fd360

// -[SCLoadMessageLogger setLensSizeBytes:forMediaId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054fd414

// -[SCLoadMessageLogger subscribe:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fd4c8

// -[SCLoadMessageLogger _handleLogItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fd5ec

// -[SCLoadMessageLogger _logStepWithMediaId:timestampType:loadStep:startTimestampSeconds:endTimestampSeconds:result:]
// Type encoding: v64@0:8@16q24q32d40d48q56
// Implementation: 0x1054fd8b4

// -[SCLoadMessageLogger didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054fd950

// -[SCLoadMessageLogger _handleExtraDataForFeedItemStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fd9e4

// -[SCLoadMessageLogger _handleExtraDataForFeedVisibleStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fdb50

// -[SCLoadMessageLogger _handleSnapLoadingTrackingData:atTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1054fde00

// -[SCLoadMessageLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054fdec8

@end
