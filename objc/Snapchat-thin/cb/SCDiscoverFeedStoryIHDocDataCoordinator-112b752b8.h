// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStoryIHDocDataCoordinator
// Superclass: NSObject
// Address: 0x112b752b8

@interface SCDiscoverFeedStoryIHDocDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedStoryIHDocDataCoordinator initWithLazyDocObjectContext:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107bfa5c8

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateInteractionHistory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107bfa66c

// -[SCDiscoverFeedStoryIHDocDataCoordinator getStoriesInteractionHistoryWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107bfa89c

// -[SCDiscoverFeedStoryIHDocDataCoordinator getStoriesInteractionHistoryForAllowanceType:completionQueue:completion:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x107bfaae0

// -[SCDiscoverFeedStoryIHDocDataCoordinator purgeInteractionHistoryIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107bfadcc

// -[SCDiscoverFeedStoryIHDocDataCoordinator _purgeInteractionHistoryIfNecessaryWithExpirationTimestamp:itemsLimit:completion:]
// Type encoding: v40@0:8d16Q24@?32
// Implementation: 0x107bfae50

// -[SCDiscoverFeedStoryIHDocDataCoordinator _purgeInteractionHistoryWithDefaultAllowanceCount:transactionContext:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107bfb058

// -[SCDiscoverFeedStoryIHDocDataCoordinator docObjectContext]
// Type encoding: @16@0:8
// Implementation: 0x107bfb0bc

// -[SCDiscoverFeedStoryIHDocDataCoordinator _interactionHistoryFromTransactionContext:storyDedupeFp:storyAllowanceType:uniqueAllowanceTypes:storyIHMustBeUniqueForAllowanceType:]
// Type encoding: @52@0:8@16Q24q32@40B48
// Implementation: 0x107bfb0c4

// -[SCDiscoverFeedStoryIHDocDataCoordinator _builderWithInteractionHistory:storyDedupeFp:storyAllowanceType:]
// Type encoding: @40@0:8@16Q24q32
// Implementation: 0x107bfb12c

// -[SCDiscoverFeedStoryIHDocDataCoordinator _updateStoryInTransactionContext:interactionHistory:uniqueAllowanceTypes:storyIHMustBeUniqueForAllowanceType:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x107bfb1a8

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateHidden:feedType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bfb250

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateSubscription:subscribed:feedType:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107bfb4e0

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateShortImpression:rankingStoryInfo:numSnapsInVersion:date:feedType:]
// Type encoding: v52@0:8@16@24I32@36@44
// Implementation: 0x107bfb780

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateLongImpression:rankingStoryInfo:feedType:impressionTime:numberOfSnapsInVersion:totalDuration:date:thumbnailId:qualifiedSections:]
// Type encoding: v84@0:8@16@24@32d40I48d52@60@68@76
// Implementation: 0x107bfbb80

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateStoryViewState:isFullyViewed:version:totalSnapNum:compositeStoryId:]
// Type encoding: v52@0:8@16B24Q28Q36@44
// Implementation: 0x107bfc230

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateFeedActionWithIHMetadata:feedActionType:pageSessionId:compositeStoryId:extraData:feedType:]
// Type encoding: v64@0:8@16q24@32@40@48@56
// Implementation: 0x107bfc564

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateShortView:date:pageSessionId:compositeStoryId:feedType:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x107bfcbb0

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateLongView:date:pageSessionId:compositeStoryId:thumbnailId:feedType:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x107bfcf0c

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateViewInfo:version:numberOfSnapsViewed:snapCompletionPercent:numberOfSnapsInVersion:tapStoryKey:viewTime:totalDuration:totalWatchTimeMsecs:entranceIntent:exitIntent:sliEntryEvent:sliExitIntent:date:storyType:completion:]
// Type encoding: v112@0:8@16Q24I32I36I40Q44d52d60I68I72I76I80I84@88q96@?104
// Implementation: 0x107bfd2a0

// -[SCDiscoverFeedStoryIHDocDataCoordinator updateVersion:version:numSnapsInVersion:]
// Type encoding: v36@0:8@16Q24I32
// Implementation: 0x107bfda0c

// -[SCDiscoverFeedStoryIHDocDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bfdc64

@end
