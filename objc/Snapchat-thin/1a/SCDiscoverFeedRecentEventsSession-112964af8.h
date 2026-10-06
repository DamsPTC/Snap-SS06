// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedRecentEventsSession
// Superclass: SCDocObject
// Address: 0x112964af8

@interface SCDiscoverFeedRecentEventsSession

// Property: sessionId; attributes: T@"NSString",N,R
// Property: pageSessionId; attributes: T@"NSString",N,R
// Property: sessionType; attributes: Tq,N,R,VsessionType
// Property: sessionStartTs; attributes: Td,N,R,VsessionStartTs
// Property: recentEvents; attributes: T@"NSArray",N,R
// Property: hash; attributes: Tq,N,R

// -[SCDiscoverFeedRecentEventsSession sessionId]
// Type encoding: @16@0:8
// Implementation: 0x103f1027c

// -[SCDiscoverFeedRecentEventsSession pageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x103f10288

// -[SCDiscoverFeedRecentEventsSession sessionType]
// Type encoding: q16@0:8
// Implementation: 0x103f102ec

// -[SCDiscoverFeedRecentEventsSession sessionStartTs]
// Type encoding: d16@0:8
// Implementation: 0x103f102fc

// -[SCDiscoverFeedRecentEventsSession recentEvents]
// Type encoding: @16@0:8
// Implementation: 0x103f1030c

// -[SCDiscoverFeedRecentEventsSession initWithSessionId:pageSessionId:sessionType:sessionStartTs:recentEvents:]
// Type encoding: @56@0:8@16@24q32d40@48
// Implementation: 0x103f10420

// -[SCDiscoverFeedRecentEventsSession hash]
// Type encoding: q16@0:8
// Implementation: 0x103f1052c

// -[SCDiscoverFeedRecentEventsSession isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x103f108ac

// -[SCDiscoverFeedRecentEventsSession copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103f110cc

// -[SCDiscoverFeedRecentEventsSession init]
// Type encoding: @16@0:8
// Implementation: 0x103f10944

// -[SCDiscoverFeedRecentEventsSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f109c0

// +[SCDiscoverFeedRecentEventsSession table]
// Type encoding: r*16@0:8
// Implementation: 0x107c0905c

// +[SCDiscoverFeedRecentEventsSession immutableObjectParse:bufferSize:]
// Type encoding: @32@0:8r^v16Q24
// Implementation: 0x107c09068

// +[SCDiscoverFeedRecentEventsSession objectClassFunctionPointer]
// Type encoding: {SCDocObjectClassFunctionPointer=^?^?}16@0:8
// Implementation: 0x107c09a48

@end
