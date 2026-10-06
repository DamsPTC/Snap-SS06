// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedScrollTracker
// Superclass: NSObject
// Address: 0x112b74fe8

@interface SCDiscoverFeedScrollTracker

// Property: delegate; attributes: T@"<SCDiscoverFeedScrollTrackerDelegate>",W,N,V_delegate

// -[SCDiscoverFeedScrollTracker init]
// Type encoding: @16@0:8
// Implementation: 0x107bed44c

// -[SCDiscoverFeedScrollTracker scrollStartedWithIdentifier:scrollAxis:startingContentOffset:startScrollingTimestamp:pageType:pageTypeSpecific:]
// Type encoding: v64@0:8@16q24d32@40q48@56
// Implementation: 0x107bed4b0

// -[SCDiscoverFeedScrollTracker scrollDidEndWithIdentifier:feedType:endingContentOffset:endScrollingTimestamp:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x107bed59c

// -[SCDiscoverFeedScrollTracker _gestForScrollAxis:startingContentOffset:endingContentOffset:]
// Type encoding: q40@0:8q16d24d32
// Implementation: 0x107bed9d4

// -[SCDiscoverFeedScrollTracker delegate]
// Type encoding: @16@0:8
// Implementation: 0x107beda04

// -[SCDiscoverFeedScrollTracker setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107beda1c

// -[SCDiscoverFeedScrollTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107beda28

@end
