// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapReadReceiptCoordinator
// Superclass: NSObject
// Address: 0x112b069f8

@interface SCStoriesSnapReadReceiptCoordinator


// -[SCStoriesSnapReadReceiptCoordinator initWithDocObjectContext:lazySnapReadReceiptLogger:lazyMixerNetworkRequester:currentUserId:connectivityMonitor:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100939f18

// -[SCStoriesSnapReadReceiptCoordinator hasCompletedInitialFetching]
// Type encoding: B16@0:8
// Implementation: 0x106921ce8

// -[SCStoriesSnapReadReceiptCoordinator isPremiumReadRequestFromServer]
// Type encoding: B16@0:8
// Implementation: 0x106921d20

// -[SCStoriesSnapReadReceiptCoordinator fetchViewHistoryFromPullToRefresh:]
// Type encoding: v20@0:8B16
// Implementation: 0x106921d28

// -[SCStoriesSnapReadReceiptCoordinator readReceiptViewStatesByIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106921e38

// -[SCStoriesSnapReadReceiptCoordinator storiesReadReceiptViewStatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x106921e40

// -[SCStoriesSnapReadReceiptCoordinator currentStoriesReadReceiptViewStates]
// Type encoding: @16@0:8
// Implementation: 0x106921e48

// -[SCStoriesSnapReadReceiptCoordinator logStoriesSnapViewStateNotReadyWhenProvidingMedatadataType:]
// Type encoding: v24@0:8@16
// Implementation: 0x106921e50

// -[SCStoriesSnapReadReceiptCoordinator premiumWatchStatesByStoryIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106921ea0

// -[SCStoriesSnapReadReceiptCoordinator removePremiumWatchStatesByStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x106921ea8

// -[SCStoriesSnapReadReceiptCoordinator addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10093a478

// -[SCStoriesSnapReadReceiptCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106921f48

// -[SCStoriesSnapReadReceiptCoordinator resetReadReceiptRecordsForUploading]
// Type encoding: v16@0:8
// Implementation: 0x106921f50

// -[SCStoriesSnapReadReceiptCoordinator deleteExpiredViewStatesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106921fdc

// -[SCStoriesSnapReadReceiptCoordinator insertReadReceiptForSnapIds:action:expirationTimestamp:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x1069222b4

// -[SCStoriesSnapReadReceiptCoordinator saveReadReceiptForSnapIds:action:expirationTimestamp:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x106922574

// -[SCStoriesSnapReadReceiptCoordinator savePremiumReadReceipt:storyDedupFp:snapIds:action:expirationTimestamp:]
// Type encoding: v56@0:8@16Q24@32q40d48
// Implementation: 0x1069227a4

// -[SCStoriesSnapReadReceiptCoordinator updatePremiumReadReceiptWatchStates:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106922afc

// -[SCStoriesSnapReadReceiptCoordinator saveSnapReadReceipt:publicationId:isPrivateStorySnap:storyDedupFp:shouldFlush:]
// Type encoding: v48@0:8@16@24B32Q36B44
// Implementation: 0x106922bc0

// -[SCStoriesSnapReadReceiptCoordinator saveSnapReadReceipt:publicationId:isPrivateStorySnap:storyDedupFp:storyId:shouldFlush:]
// Type encoding: v56@0:8@16@24B32Q36@44B52
// Implementation: 0x106922bcc

// -[SCStoriesSnapReadReceiptCoordinator flushPremiumReadReceipts]
// Type encoding: v16@0:8
// Implementation: 0x106923080

// -[SCStoriesSnapReadReceiptCoordinator flushSnapReadReceipts]
// Type encoding: v16@0:8
// Implementation: 0x106923088

// -[SCStoriesSnapReadReceiptCoordinator cleanCustomStoryViewedTimestampList]
// Type encoding: v16@0:8
// Implementation: 0x106923090

// -[SCStoriesSnapReadReceiptCoordinator _didCompleteSaveSnapReadReceiptWithStoryOwnerId:publicationId:isPrivateStorySnap:storyDedupFp:storyId:shouldFlush:]
// Type encoding: v56@0:8@16@24B32Q36@44B52
// Implementation: 0x106923178

// -[SCStoriesSnapReadReceiptCoordinator _didCompleteSavePremiumReadReceiptWithStoryDedupFp:editionId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1069232b0

// -[SCStoriesSnapReadReceiptCoordinator _syncPremiumReadReceiptsToServerShouldFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x106923300

// -[SCStoriesSnapReadReceiptCoordinator _syncSnapReadReceiptsToServerShouldFlush:]
// Type encoding: v20@0:8B16
// Implementation: 0x106923308

// -[SCStoriesSnapReadReceiptCoordinator _fetchViewHistory]
// Type encoding: v16@0:8
// Implementation: 0x106923310

// -[SCStoriesSnapReadReceiptCoordinator _fetchViewHistoryDidFailWithStatusCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x106923488

// -[SCStoriesSnapReadReceiptCoordinator _didCompleteFetchViewHistoryResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069234ec

// -[SCStoriesSnapReadReceiptCoordinator _persistViewReportsToDocObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069235bc

// -[SCStoriesSnapReadReceiptCoordinator announceReadReceiptsDidUpdateWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106923694

// -[SCStoriesSnapReadReceiptCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069236a4

@end
