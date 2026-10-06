// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedFeedViewSummary
// Superclass: NSObject
// Address: 0x112b75038

@interface SCDiscoverFeedFeedViewSummary

// Property: closingData; attributes: T@"NSDictionary",C,N,V_closingData
// Property: pageType; attributes: Tq,R,N,V_pageType
// Property: pageTypeSpecific; attributes: T@"NSString",R,N,V_pageTypeSpecific
// Property: viewStartViewstamp; attributes: T@"NSDate",&,N,V_viewStartViewstamp

// -[SCDiscoverFeedFeedViewSummary initWithViewStartViewstamp:sections:pageType:pageTypeSpecific:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x107beda54

// -[SCDiscoverFeedFeedViewSummary activateFeedViewSummaryIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107bedc38

// -[SCDiscoverFeedFeedViewSummary endFeedViewWithPageEndTime:closingData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bedc88

// -[SCDiscoverFeedFeedViewSummary accumulatedTimeViewSecsAtPageEndTime:]
// Type encoding: d24@0:8@16
// Implementation: 0x107bedcfc

// -[SCDiscoverFeedFeedViewSummary isViewingFeed]
// Type encoding: B16@0:8
// Implementation: 0x107bedd2c

// -[SCDiscoverFeedFeedViewSummary sectionFeedView:itemsAvailable:totalSnapsAvailableCount:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x107bedd3c

// -[SCDiscoverFeedFeedViewSummary sectionFeedView:setUncompletedStoryCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107beddac

// -[SCDiscoverFeedFeedViewSummary getFeedViewSectionsSummary]
// Type encoding: @16@0:8
// Implementation: 0x107beddec

// -[SCDiscoverFeedFeedViewSummary _getSectionForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bee37c

// -[SCDiscoverFeedFeedViewSummary getFeedViewSectionsSummaryWithBounceRateDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bee42c

// -[SCDiscoverFeedFeedViewSummary closingData]
// Type encoding: @16@0:8
// Implementation: 0x107bee784

// -[SCDiscoverFeedFeedViewSummary setClosingData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bee78c

// -[SCDiscoverFeedFeedViewSummary pageType]
// Type encoding: q16@0:8
// Implementation: 0x107bee794

// -[SCDiscoverFeedFeedViewSummary pageTypeSpecific]
// Type encoding: @16@0:8
// Implementation: 0x107bee79c

// -[SCDiscoverFeedFeedViewSummary viewStartViewstamp]
// Type encoding: @16@0:8
// Implementation: 0x107bee7a4

// -[SCDiscoverFeedFeedViewSummary setViewStartViewstamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bee7ac

// -[SCDiscoverFeedFeedViewSummary .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bee7dc

@end
