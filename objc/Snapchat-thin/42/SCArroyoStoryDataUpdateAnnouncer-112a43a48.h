// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCArroyoStoryDataUpdateAnnouncer
// Superclass: NSObject
// Address: 0x112a43a48

@interface SCArroyoStoryDataUpdateAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCArroyoStoryDataUpdateAnnouncer init]
// Type encoding: @16@0:8
// Implementation: 0x100449ff8

// -[SCArroyoStoryDataUpdateAnnouncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10081e95c

// -[SCArroyoStoryDataUpdateAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105521d28

// -[SCArroyoStoryDataUpdateAnnouncer onStorySendUpdated:storyDestinations:content:state:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x105521d30

// -[SCArroyoStoryDataUpdateAnnouncer onStorySendComplete:content:completedStoryDestinations:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105521d38

// -[SCArroyoStoryDataUpdateAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105521d40

@end
