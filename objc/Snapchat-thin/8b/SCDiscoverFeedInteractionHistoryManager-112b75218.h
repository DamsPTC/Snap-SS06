// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedInteractionHistoryManager
// Superclass: NSObject
// Address: 0x112b75218

@interface SCDiscoverFeedInteractionHistoryManager

// Property: qualifiedSections; attributes: T@"NSSet",&,V_qualifiedSections
// Property: spotlightInteractionDelegate; attributes: T@"<SCSpotlightFeedInteractionHistoryUpdateDelegate>",W,N,V_spotlightInteractionDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedInteractionHistoryManager initWithLazyDocObjectContext:circumstanceEngine:storiesConfigProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107bf767c

// -[SCDiscoverFeedInteractionHistoryManager getStoriesInteractionHistoryWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107bf77e8

// -[SCDiscoverFeedInteractionHistoryManager getStoriesInteractionHistoryForAllowanceType:completionQueue:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x107bf77f0

// -[SCDiscoverFeedInteractionHistoryManager updateImpressionViewItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf77f8

// -[SCDiscoverFeedInteractionHistoryManager _updateImpressionViewItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf7904

// -[SCDiscoverFeedInteractionHistoryManager updateQualifiedSectionsWithSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf7af0

// -[SCDiscoverFeedInteractionHistoryManager clearQualifiedSections]
// Type encoding: v16@0:8
// Implementation: 0x107bf7b98

// -[SCDiscoverFeedInteractionHistoryManager updateHidden:feedType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bf7bd4

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateHidden:feedType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bf7d08

// -[SCDiscoverFeedInteractionHistoryManager updateSubscription:subscribed:feedType:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107bf7d10

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateSubscription:subscribed:feedType:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107bf7e58

// -[SCDiscoverFeedInteractionHistoryManager updateShortImpression:rankingStoryInfo:numSnapsInVersion:date:feedType:]
// Type encoding: v52@0:8@16@24I32@36@44
// Implementation: 0x107bf7e60

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateShortImpression:rankingStoryInfo:numSnapsInVersion:date:feedType:]
// Type encoding: v52@0:8@16@24I32@36@44
// Implementation: 0x107bf8004

// -[SCDiscoverFeedInteractionHistoryManager updateLongImpression:rankingStoryInfo:feedType:impressionTime:numberOfSnapsInVersion:totalDuration:date:thumbnailId:]
// Type encoding: v76@0:8@16@24@32d40I48d52@60@68
// Implementation: 0x107bf800c

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateLongImpression:rankingStoryInfo:feedType:impressionTime:numberOfSnapsInVersion:totalDuration:date:thumbnailId:qualifiedSections:]
// Type encoding: v84@0:8@16@24@32d40I48d52@60@68@76
// Implementation: 0x107bf8250

// -[SCDiscoverFeedInteractionHistoryManager updateStoryView:pageSessionId:pageSessionStartTs:sectionIdentifier:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:viewTime:totalDuration:entranceIntent:exitIntent:totalWatchTimeMsecs:sliEntryEvent:sliExitIntent:date:sectionPos:maxViewedSnapIndex:viewedSnapIds:feedType:]
// Type encoding: v132@0:8@16@24d32@40I48I52I56d60d68I76I80I84I88I92@96@104I112@116@124
// Implementation: 0x107bf8258

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateStoryView:pageSessionId:pageSessionStartTs:sectionIdentifier:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:viewTime:totalDuration:entranceIntent:exitIntent:totalWatchTimeMsecs:sliEntryEvent:sliExitIntent:date:sectionPos:maxViewedSnapIndex:viewedSnapIds:feedType:]
// Type encoding: v132@0:8@16@24d32@40I48I52I56d60d68I76I80I84I88I92@96@104I112@116@124
// Implementation: 0x107bf850c

// -[SCDiscoverFeedInteractionHistoryManager _updateSpotlightDelegateViewStateUpdateWithInteractionHistory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf8850

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateShortView:date:pageSessionId:compositeStoryId:feedType:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107bf8898

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateLongView:date:pageSessionId:compositeStoryId:feedType:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107bf88a0

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateViewInfo:version:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:tapStoryKey:viewTime:totalDuration:totalWatchTimeMsecs:entranceIntent:exitIntent:sliEntryEvent:sliExitIntent:date:storyType:completion:]
// Type encoding: v112@0:8@16Q24I32I36I40Q44d52d60I68I72I76I80I84@88q96@?104
// Implementation: 0x107bf8998

// -[SCDiscoverFeedInteractionHistoryManager updateStoryViewState:isFullyViewed:version:totalSnapNum:compositeStoryId:]
// Type encoding: v52@0:8@16B24Q28Q36@44
// Implementation: 0x107bf89a0

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateStoryViewState:isFullyViewed:version:totalSnapNum:compositeStoryId:]
// Type encoding: v52@0:8@16B24Q28Q36@44
// Implementation: 0x107bf8b00

// -[SCDiscoverFeedInteractionHistoryManager updateFeedActionWithIHMetadata:feedActionType:pageSessionId:compositeStoryId:extraData:feedType:]
// Type encoding: v64@0:8@16q24@32@40@48@56
// Implementation: 0x107bf8b08

// -[SCDiscoverFeedInteractionHistoryManager _syncUpdateFeedActionWithIHMetadata:feedActionType:pageSessionId:compositeStoryId:extraData:feedType:]
// Type encoding: v64@0:8@16q24@32@40@48@56
// Implementation: 0x107bf8cd8

// -[SCDiscoverFeedInteractionHistoryManager updateVersion:version:numSnapsInVersion:]
// Type encoding: v36@0:8@16Q24I32
// Implementation: 0x107bf8ce0

// -[SCDiscoverFeedInteractionHistoryManager _updateVersion:version:numSnapsInVersion:]
// Type encoding: v36@0:8@16Q24I32
// Implementation: 0x107bf8e0c

// -[SCDiscoverFeedInteractionHistoryManager purgeStoriesInteractionHistoryIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107bf8e14

// -[SCDiscoverFeedInteractionHistoryManager _purgeStoriesInteractionHistoryIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107bf8ee8

// -[SCDiscoverFeedInteractionHistoryManager spotlightInteractionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107bf8ef0

// -[SCDiscoverFeedInteractionHistoryManager setSpotlightInteractionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf8f08

// -[SCDiscoverFeedInteractionHistoryManager qualifiedSections]
// Type encoding: @16@0:8
// Implementation: 0x107bf8f14

// -[SCDiscoverFeedInteractionHistoryManager setQualifiedSections:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bf8f20

// -[SCDiscoverFeedInteractionHistoryManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bf8f28

@end
