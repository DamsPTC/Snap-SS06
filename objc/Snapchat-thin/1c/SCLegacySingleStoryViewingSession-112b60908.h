// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacySingleStoryViewingSession
// Superclass: NSObject
// Address: 0x112b60908

@interface SCLegacySingleStoryViewingSession

// Property: friendStories; attributes: T@"FriendStories",R,N,V_friendStories
// Property: firstStory; attributes: T@"<SCLegacyStory>",R,N,V_firstStory
// Property: currentStory; attributes: T@"<SCLegacyStory>",R,N,V_currentStory
// Property: didSwipeUp; attributes: TB,R,N,V_didSwipeUp
// Property: currentStoryDidShowLoadingScreen; attributes: TB,R,N,V_currentStoryDidShowLoadingScreen
// Property: isFullyViewed; attributes: TB,R,N,V_isFullyViewed
// Property: wasInitialyFullyViewed; attributes: TB,R,N,V_wasInitialyFullyViewed
// Property: totalViewedSnapsCount; attributes: TQ,R,N,V_totalViewedSnapsCount
// Property: totalOpenedSnapsCount; attributes: TQ,R,N,V_totalOpenedSnapsCount
// Property: currentStoryHasPlayed; attributes: TB,R,N,V_currentStoryHasPlayed
// Property: mediaLoadContext; attributes: Tq,R,N,V_mediaLoadContext
// Property: viewLocation; attributes: Tq,R,N,V_viewLocation
// Property: storiesViewingSession; attributes: T@"<SCLegacyStoriesViewingSessionProtocol>",R,W,N,V_storiesViewingSession
// Property: entryInteraction; attributes: T@"SCOperaViewInteractionData",R,N,V_entryInteraction
// Property: totalSnapCount; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacySingleStoryViewingSession initWithFirstStory:friendStories:operaPageProvider:viewingType:viewLocation:didEnterFromInterstitial:storiesViewingSession:readReceiptCoordinator:operaAnalyticsEventObservable:storiesUsageLogger:]
// Type encoding: @92@0:8@16@24@32q40q48B56@60@68@76@84
// Implementation: 0x107205ff0

// -[SCLegacySingleStoryViewingSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1072062bc

// -[SCLegacySingleStoryViewingSession startViewingSessionIsViewingLongform:]
// Type encoding: v20@0:8B16
// Implementation: 0x1072062f0

// -[SCLegacySingleStoryViewingSession resumeViewingSession]
// Type encoding: v16@0:8
// Implementation: 0x1072063a0

// -[SCLegacySingleStoryViewingSession _updateRequestManagerContexts]
// Type encoding: v16@0:8
// Implementation: 0x1072063c4

// -[SCLegacySingleStoryViewingSession didOpenFriendStoriesSnap]
// Type encoding: v16@0:8
// Implementation: 0x1072064fc

// -[SCLegacySingleStoryViewingSession startShowingLoadingStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10720650c

// -[SCLegacySingleStoryViewingSession startShowingLoadedStory:isViewingLongform:isStreaming:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x10720659c

// -[SCLegacySingleStoryViewingSession _isLastStorySnapInFriendStories:]
// Type encoding: B24@0:8@16
// Implementation: 0x107206638

// -[SCLegacySingleStoryViewingSession startPlayingStory:lastInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107206694

// -[SCLegacySingleStoryViewingSession skipShowingStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107206770

// -[SCLegacySingleStoryViewingSession stopShowingStory:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1072067ec

// -[SCLegacySingleStoryViewingSession _reportSnapReadReceiptIfNecessaryForStory:action:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107206f10

// -[SCLegacySingleStoryViewingSession pauseShowingStory:page:params:lastInteraction:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107207044

// -[SCLegacySingleStoryViewingSession pauseShowingCurrentFriendStoriesWithIsShowingStoryInterstitial:lastInteraction:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1072070d8

// -[SCLegacySingleStoryViewingSession stopShowingFriendStoriesAndCancelRequests:isShowingStoryInterstitial:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107207178

// -[SCLegacySingleStoryViewingSession entryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107207208

// -[SCLegacySingleStoryViewingSession entryIntent]
// Type encoding: q16@0:8
// Implementation: 0x10720728c

// -[SCLegacySingleStoryViewingSession exitIntent]
// Type encoding: q16@0:8
// Implementation: 0x107207324

// -[SCLegacySingleStoryViewingSession didTakeScreenshotOnCurrentStory]
// Type encoding: v16@0:8
// Implementation: 0x1072073a8

// -[SCLegacySingleStoryViewingSession didSwipeUpOnStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107207418

// -[SCLegacySingleStoryViewingSession _clearCurrentStoryStatus]
// Type encoding: v16@0:8
// Implementation: 0x107207424

// -[SCLegacySingleStoryViewingSession didChangePanelForStory:friendStories:toPanelIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10720746c

// -[SCLegacySingleStoryViewingSession _markStoryAsViewedWithStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107207470

// -[SCLegacySingleStoryViewingSession _markAllStoriesViewedForDOCIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107207544

// -[SCLegacySingleStoryViewingSession _markPlaybackInfoAsReadIfNeeded:viewStateMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10720777c

// -[SCLegacySingleStoryViewingSession uniqueViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107207960

// -[SCLegacySingleStoryViewingSession snapTimeViewedSec]
// Type encoding: d16@0:8
// Implementation: 0x107207968

// -[SCLegacySingleStoryViewingSession posterId]
// Type encoding: @16@0:8
// Implementation: 0x107207970

// -[SCLegacySingleStoryViewingSession viewedStoryTime]
// Type encoding: d16@0:8
// Implementation: 0x1072079e0

// -[SCLegacySingleStoryViewingSession totalSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x1072079e8

// -[SCLegacySingleStoryViewingSession totalStoryTime]
// Type encoding: d16@0:8
// Implementation: 0x107207a98

// -[SCLegacySingleStoryViewingSession friendStories]
// Type encoding: @16@0:8
// Implementation: 0x107207b10

// -[SCLegacySingleStoryViewingSession firstStory]
// Type encoding: @16@0:8
// Implementation: 0x107207b18

// -[SCLegacySingleStoryViewingSession currentStory]
// Type encoding: @16@0:8
// Implementation: 0x107207b20

// -[SCLegacySingleStoryViewingSession didSwipeUp]
// Type encoding: B16@0:8
// Implementation: 0x107207b28

// -[SCLegacySingleStoryViewingSession currentStoryDidShowLoadingScreen]
// Type encoding: B16@0:8
// Implementation: 0x107207b30

// -[SCLegacySingleStoryViewingSession isFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107207b38

// -[SCLegacySingleStoryViewingSession wasInitialyFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107207b40

// -[SCLegacySingleStoryViewingSession totalViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107207b48

// -[SCLegacySingleStoryViewingSession totalOpenedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107207b50

// -[SCLegacySingleStoryViewingSession currentStoryHasPlayed]
// Type encoding: B16@0:8
// Implementation: 0x107207b58

// -[SCLegacySingleStoryViewingSession mediaLoadContext]
// Type encoding: q16@0:8
// Implementation: 0x107207b60

// -[SCLegacySingleStoryViewingSession viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107207b68

// -[SCLegacySingleStoryViewingSession storiesViewingSession]
// Type encoding: @16@0:8
// Implementation: 0x107207b70

// -[SCLegacySingleStoryViewingSession entryInteraction]
// Type encoding: @16@0:8
// Implementation: 0x107207b88

// -[SCLegacySingleStoryViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107207b90

@end
