// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedPublicProfileStoryStateLoader
// Superclass: NSObject
// Address: 0x112ae9998

@interface SCUnifiedPublicProfileStoryStateLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedPublicProfileStoryStateLoader initWithStoriesDataCoordinator:snapchattersSynchronousDataFetcher:storiesReadReceiptCoordinator:remoteStoriesDataProvider:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106601ba0

// -[SCUnifiedPublicProfileStoryStateLoader dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106601ce0

// -[SCUnifiedPublicProfileStoryStateLoader storySummaryInfoObservableForUserWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106601d2c

// -[SCUnifiedPublicProfileStoryStateLoader _didReceivestoryStoriesSummary:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106601e24

// -[SCUnifiedPublicProfileStoryStateLoader _buildStorySummaryInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x106601fd0

// -[SCUnifiedPublicProfileStoryStateLoader _runNetworkRequestForUserWithId:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106602444

// -[SCUnifiedPublicProfileStoryStateLoader _tryToFetchPublicStoriesSummaryInfo:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066024ec

// -[SCUnifiedPublicProfileStoryStateLoader _tryToFetchFriendStoriesSummaryInfo:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066026c4

// -[SCUnifiedPublicProfileStoryStateLoader _proceedWithStoriesSummaryInfo:observer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106602960

// -[SCUnifiedPublicProfileStoryStateLoader _fetchAndTriggerSaveState]
// Type encoding: v16@0:8
// Implementation: 0x106602a74

// -[SCUnifiedPublicProfileStoryStateLoader _fetchFriendStoriesRemotelyWithUserId:storyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106602b18

// -[SCUnifiedPublicProfileStoryStateLoader _fetchNonFriendStoriesRemotelyWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106602e18

// -[SCUnifiedPublicProfileStoryStateLoader _fetchActualStoryDataForUserWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106603110

// -[SCUnifiedPublicProfileStoryStateLoader didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10660319c

// -[SCUnifiedPublicProfileStoryStateLoader _completeStoryObserverWithInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106603268

// -[SCUnifiedPublicProfileStoryStateLoader _completeStoryObserver]
// Type encoding: v16@0:8
// Implementation: 0x1066032c0

// -[SCUnifiedPublicProfileStoryStateLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106603308

@end
