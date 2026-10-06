// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadMessageLogAggregator
// Superclass: NSObject
// Address: 0x112a42648

@interface SCLoadMessageLogAggregator


// -[SCLoadMessageLogAggregator initWithMetricsEmitter:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054fc634

// -[SCLoadMessageLogAggregator logLoadMessageTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054fc70c

// -[SCLoadMessageLogAggregator addMetadata:completionStep:shouldListenToFeedUpdates:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1054fc998

// -[SCLoadMessageLogAggregator setMediaSizeBytes:forMediaId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054fca80

// -[SCLoadMessageLogAggregator setLensSizeBytes:forMediaId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054fcac0

// -[SCLoadMessageLogAggregator mediaIdsForConversationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054fcb00

// -[SCLoadMessageLogAggregator _timelineForTimestamp:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054fcb4c

// -[SCLoadMessageLogAggregator _associateMediaId:toConversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054fcc44

// -[SCLoadMessageLogAggregator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054fcd1c

@end
