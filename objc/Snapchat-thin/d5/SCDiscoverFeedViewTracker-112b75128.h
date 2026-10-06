// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedViewTracker
// Superclass: NSObject
// Address: 0x112b75128

@interface SCDiscoverFeedViewTracker


// -[SCDiscoverFeedViewTracker init]
// Type encoding: @16@0:8
// Implementation: 0x107beff84

// -[SCDiscoverFeedViewTracker createFeedViewSummaryWithTimestamp:sections:pageType:pageTypeSpecific:pageSessionId:]
// Type encoding: @56@0:8@16@24q32@40@48
// Implementation: 0x107beffe8

// -[SCDiscoverFeedViewTracker feedViewDidEndWithPageSessionId:data:pageType:pageEndTime:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x107bf00b8

// -[SCDiscoverFeedViewTracker feedViewSummaryForPageSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bf0144

// -[SCDiscoverFeedViewTracker hasActiveFeedViewSummaryForPageSessionId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bf014c

// -[SCDiscoverFeedViewTracker activateFeedViewSummaryForPageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf01a0

// -[SCDiscoverFeedViewTracker hasViewSummaryForPageSessionId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bf01d4

// -[SCDiscoverFeedViewTracker accumulatedTimeViewSecsForPageSessionId:atPageEndTime:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x107bf020c

// -[SCDiscoverFeedViewTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bf0280

@end
