// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLoadMessageTimestampCollector
// Superclass: NSObject
// Address: 0x1000d4cc8

@interface SCLoadMessageTimestampCollector


// -[SCLoadMessageTimestampCollector initWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000355b0

// -[SCLoadMessageTimestampCollector initWithUserId:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100035634

// -[SCLoadMessageTimestampCollector setMediaId:associatedMediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1000356f4

// -[SCLoadMessageTimestampCollector setMediaId:sharedFile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100035854

// -[SCLoadMessageTimestampCollector recordStep:result:startTime:endTime:]
// Type encoding: v48@0:8q16q24d32d40
// Implementation: 0x100035984

// -[SCLoadMessageTimestampCollector startPrefetchAtTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x100035a58

// -[SCLoadMessageTimestampCollector saveToDisk]
// Type encoding: v16@0:8
// Implementation: 0x100035b30

// -[SCLoadMessageTimestampCollector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100035dc0

@end
