// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedEventsAnnouncer
// Superclass: NSObject
// Address: 0x112b04b58

@interface SCDiscoverFeedEventsAnnouncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedEventsAnnouncer init]
// Type encoding: @16@0:8
// Implementation: 0x100442414

// -[SCDiscoverFeedEventsAnnouncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068c9de8

// -[SCDiscoverFeedEventsAnnouncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068c9df0

// -[SCDiscoverFeedEventsAnnouncer didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068c9df8

// -[SCDiscoverFeedEventsAnnouncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068c9e00

// +[SCDiscoverFeedEventsAnnouncer announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1068c9ddc

@end
