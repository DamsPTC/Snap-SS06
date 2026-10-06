// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CTPFeed
// Superclass: NSObject
// Address: 0x112cb5f38

@interface CTPFeed

// Property: feedId; attributes: T@"CTPFeedIdentifiers",R,C,N,V_feedId
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: mediaContent; attributes: T@"CTPMediaContent",R,C,N,V_mediaContent
// Property: childFeeds; attributes: T@"NSArray",R,C,N,V_childFeeds
// Property: source; attributes: T@"CTPFeedSource",R,C,N,V_source
// Property: spanCount; attributes: Tq,R,N,V_spanCount

// -[CTPFeed initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7453a0

// -[CTPFeed initWithFeedId:name:mediaContent:childFeeds:source:spanCount:]
// Type encoding: @64@0:8@16@24@32@40@48q56
// Implementation: 0x10b7454dc

// -[CTPFeed copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b745624

// -[CTPFeed encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b745648

// -[CTPFeed hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b7456f8

// -[CTPFeed isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b74579c

// -[CTPFeed feedId]
// Type encoding: @16@0:8
// Implementation: 0x10b74589c

// -[CTPFeed name]
// Type encoding: @16@0:8
// Implementation: 0x10b7458a4

// -[CTPFeed mediaContent]
// Type encoding: @16@0:8
// Implementation: 0x10b7458ac

// -[CTPFeed childFeeds]
// Type encoding: @16@0:8
// Implementation: 0x10b7458b4

// -[CTPFeed source]
// Type encoding: @16@0:8
// Implementation: 0x10b7458bc

// -[CTPFeed spanCount]
// Type encoding: q16@0:8
// Implementation: 0x10b7458c4

// -[CTPFeed .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7458cc

@end
