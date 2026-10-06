// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBackgroundTaskResultsListenerAnnouncer
// Superclass: NSObject
// Address: 0x112c765e0

@interface SCBackgroundTaskResultsListenerAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBackgroundTaskResultsListenerAnnouncer description]
// Type encoding: @16@0:8
// Implementation: 0x10b5df780

// -[SCBackgroundTaskResultsListenerAnnouncer addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b5df95c

// -[SCBackgroundTaskResultsListenerAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b5dfd90

// -[SCBackgroundTaskResultsListenerAnnouncer didUpdateTaskResultForRequestKey:withTaskResult:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b5dffc0

// -[SCBackgroundTaskResultsListenerAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5e00b4

// -[SCBackgroundTaskResultsListenerAnnouncer .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x100b848e0

@end
