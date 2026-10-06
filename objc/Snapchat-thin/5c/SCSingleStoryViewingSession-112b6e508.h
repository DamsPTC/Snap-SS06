// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleStoryViewingSession
// Superclass: NSObject
// Address: 0x112b6e508

@interface SCSingleStoryViewingSession

// Property: storiesPlaybackSequence; attributes: T@"SCStoriesOperaPlaybackSequence",R,N,V_storiesPlaybackSequence
// Property: firstStorySnap; attributes: T@"SCStoriesSnapPlaybackMetadata",R,N,V_firstStorySnap
// Property: currentStorySnap; attributes: T@"SCStoriesSnapPlaybackMetadata",R,N,V_currentStorySnap
// Property: didSwipeUp; attributes: TB,R,N,V_didSwipeUp
// Property: storyViewingActionContext; attributes: TQ,R,N,V_storyViewingActionContext
// Property: currentStoryDidShowLoadingScreen; attributes: TB,R,N,V_currentStoryDidShowLoadingScreen
// Property: isFullyViewed; attributes: TB,R,N,V_isFullyViewed
// Property: totalViewedSnapsCount; attributes: TQ,R,N,V_totalViewedSnapsCount
// Property: totalOpenedSnapsCount; attributes: TQ,R,N,V_totalOpenedSnapsCount
// Property: currentStoryHasPlayed; attributes: TB,R,N,V_currentStoryHasPlayed
// Property: friendStoryViewingSession; attributes: T@"SCStoriesViewingSession",R,W,N,V_friendStoryViewingSession
// Property: entryInteraction; attributes: T@"SCOperaViewInteractionData",R,N,V_entryInteraction
// Property: storyViewId; attributes: T@"NSString",R,C,N,V_storyViewId
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleStoryViewingSession initWithFirstStorySnap:storiesPlaybackSequence:userSession:storyPlayMode:viewingType:storyViewingActionContext:viewLocation:viewLocationPos:didEnterFromInterstitial:friendStoryViewingSession:storiesBlizzardLogger:unlockableBlizzardLogger:loggingInfo:storiesPlaybackDataProvider:unlockableViewTracker:snapchatterFetcher:snapchatterPublicInfoFetcher:readReceiptCoordinator:entryInteraction:grapheneMetricsEmitter:circumstanceEngine:storiesConfigProvider:storyViewId:discoverFeedEventsController:operaSessionId:pageType:triggeringSection:movedToDifferentStory:operaAnalyticsEventObservable:contentSharerUserId:contentSharerMischiefId:contentShareId:searchSessionId:searchQueryId:searchActionId:searchResultRankingId:]
// Type encoding: @296@0:8@16@24@32q40q48Q56q64q72B80@84@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204q212q220B228@232@240@248@256@264q272@280@288
// Implementation: 0x107a933a0

// -[SCSingleStoryViewingSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107a93cd4

// -[SCSingleStoryViewingSession startViewingSessionIsViewingLongform:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a93d08

// -[SCSingleStoryViewingSession resumeViewingSession]
// Type encoding: v16@0:8
// Implementation: 0x107a93d40

// -[SCSingleStoryViewingSession _updateRequestManagerContexts]
// Type encoding: v16@0:8
// Implementation: 0x107a93d70

// -[SCSingleStoryViewingSession _requestContextsByAddingStorySnapViewingSessionIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a93f88

// -[SCSingleStoryViewingSession didOpenFriendStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a9405c

// -[SCSingleStoryViewingSession startShowingLoadingStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a9406c

// -[SCSingleStoryViewingSession startShowingLoadedStorySnap:isViewingLongform:isStreaming:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107a940c8

// -[SCSingleStoryViewingSession _isLastStorySnapInStoriesPlaybackSequence:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a9412c

// -[SCSingleStoryViewingSession _updateCurrentStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a941e8

// -[SCSingleStoryViewingSession startPlayingStorySnap:lastInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a9426c

// -[SCSingleStoryViewingSession skipShowingStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a94420

// -[SCSingleStoryViewingSession stopShowingStorySnap:page:params:lastInteraction:isShowingStoryInterstitial:includeOperaPauseTime:isPresentingOverOpera:]
// Type encoding: v60@0:8@16@24@32@40B48B52B56
// Implementation: 0x107a94488

// -[SCSingleStoryViewingSession _pauseShowingStorySnap:page:params:lastInteraction:isShowingStoryInterstitial:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x107a94880

// -[SCSingleStoryViewingSession didDismissOptOutInterstitial]
// Type encoding: v16@0:8
// Implementation: 0x107a9498c

// -[SCSingleStoryViewingSession pauseShowingCurrentFriendStoriesWithIsShowingStoryInterstitial:lastInteraction:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107a94990

// -[SCSingleStoryViewingSession stopShowingFriendStoriesAndCancelRequests:isShowingStoryInterstitial:isPresentingOverOpera:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x107a94a50

// -[SCSingleStoryViewingSession stopShowingFriendStoriesAndCancelRequests:isShowingStoryInterstitial:isPresentingOverOpera:isMidrollAd:]
// Type encoding: v32@0:8B16B20B24B28
// Implementation: 0x107a94a58

// -[SCSingleStoryViewingSession didPassVideoSeekPointWithStorySnap:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a94b48

// -[SCSingleStoryViewingSession entryEvent]
// Type encoding: q16@0:8
// Implementation: 0x107a94edc

// -[SCSingleStoryViewingSession _entryIntent]
// Type encoding: q16@0:8
// Implementation: 0x107a94fb0

// -[SCSingleStoryViewingSession _exitIntent]
// Type encoding: q16@0:8
// Implementation: 0x107a9505c

// -[SCSingleStoryViewingSession didTakeScreenshotOnCurrentStorySnapWithOperaPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a950e0

// -[SCSingleStoryViewingSession _reportStorySnapScreenshotWithStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a953a4

// -[SCSingleStoryViewingSession didSwipeUpOnStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a956e4

// -[SCSingleStoryViewingSession _clearCurrentStoryStatus]
// Type encoding: v16@0:8
// Implementation: 0x107a956f0

// -[SCSingleStoryViewingSession didChangePanelForStorySnap:storiesPlaybackSequence:toPanelIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x107a95738

// -[SCSingleStoryViewingSession _isStorySnapFullyViewed:currentProgress:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x107a95748

// -[SCSingleStoryViewingSession _sendReadReceiptWithStorySnap:currentProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107a95848

// -[SCSingleStoryViewingSession _markStoryAsViewedWithStorySnap:currentProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107a95bd0

// -[SCSingleStoryViewingSession didLongPressForStorySnap:storiesPlaybackSequence:isTopSnap:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107a95d24

// -[SCSingleStoryViewingSession willAdvanceToNextStorySnap:storiesPlaybackSequence:lastInteraction:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a95d28

// -[SCSingleStoryViewingSession videoDidStartLoopAfterFullyViewedForStorySnap:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a95d2c

// -[SCSingleStoryViewingSession didUpdateIsFullScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a95d30

// -[SCSingleStoryViewingSession extraPropertiesForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a95d38

// -[SCSingleStoryViewingSession setSkipSnapWithoutViewing:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a95d40

// -[SCSingleStoryViewingSession uniqueViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107a95d48

// -[SCSingleStoryViewingSession _snapTimeViewedSec]
// Type encoding: d16@0:8
// Implementation: 0x107a95d50

// -[SCSingleStoryViewingSession updateShareCountWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a95d58

// -[SCSingleStoryViewingSession _viewedStoryTime]
// Type encoding: d16@0:8
// Implementation: 0x107a95e9c

// -[SCSingleStoryViewingSession _totalSnapCount]
// Type encoding: Q16@0:8
// Implementation: 0x107a95ea4

// -[SCSingleStoryViewingSession _totalStoryTime]
// Type encoding: d16@0:8
// Implementation: 0x107a95efc

// -[SCSingleStoryViewingSession _storyAccessTypeForSnapchatter:isFromFanPass:]
// Type encoding: q28@0:8@16B24
// Implementation: 0x107a95f70

// -[SCSingleStoryViewingSession _storyAccessTypeForStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a95fec

// -[SCSingleStoryViewingSession _storyAccessTypeForStoriesPlaybackSequence:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a96294

// -[SCSingleStoryViewingSession _isFullyViewedForStoriesPlaybackSequence:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a964e0

// -[SCSingleStoryViewingSession _containsGeofilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a9660c

// -[SCSingleStoryViewingSession _storyTypeToLogWithSnaps:]
// Type encoding: q24@0:8@16
// Implementation: 0x107a9679c

// -[SCSingleStoryViewingSession _storyTypeVariantToLogWithSnaps:]
// Type encoding: q24@0:8@16
// Implementation: 0x107a96ae0

// -[SCSingleStoryViewingSession _storyIdToLog]
// Type encoding: @16@0:8
// Implementation: 0x107a96bf4

// -[SCSingleStoryViewingSession _storyTypeSpecificToLogWithSnap:]
// Type encoding: q24@0:8@16
// Implementation: 0x107a96ed8

// -[SCSingleStoryViewingSession _snapTypesToLogWithSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a9730c

// -[SCSingleStoryViewingSession _buildStoryStoryViewLogParametersWithCompletion:isPresentingOverOpera:]
// Type encoding: v28@0:8@?16B24
// Implementation: 0x107a97494

// -[SCSingleStoryViewingSession _reportStorySnapViewWithStorySnap:fullyViewed:isPresentingOverOpera:isMusicTrackBlocked:contextSnapViewMetrics:stalledTimeMs:isViewed:seekPointIndex:pageId:pageProperties:]
// Type encoding: v80@0:8@16B24B28B32@36q44B52@56@64@72
// Implementation: 0x107a98240

// -[SCSingleStoryViewingSession _reportGeofilterStorySnapViewWithStorySnap:snappableInviteAction:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107a9a114

// -[SCSingleStoryViewingSession _subscribeToOperaAnalyticsEvents]
// Type encoding: v16@0:8
// Implementation: 0x107a9a6d0

// -[SCSingleStoryViewingSession _handleOperaPlaybackEventPageId:isPlaying:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a9a8c8

// -[SCSingleStoryViewingSession _totalViewTimeForPageId:]
// Type encoding: d24@0:8@16
// Implementation: 0x107a9a990

// -[SCSingleStoryViewingSession _isManagedSavedStory]
// Type encoding: B16@0:8
// Implementation: 0x107a9ab4c

// -[SCSingleStoryViewingSession _logCreatorSubscribeEntryPointImpressionIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a9ac84

// -[SCSingleStoryViewingSession storiesPlaybackSequence]
// Type encoding: @16@0:8
// Implementation: 0x107a9afb4

// -[SCSingleStoryViewingSession firstStorySnap]
// Type encoding: @16@0:8
// Implementation: 0x107a9afbc

// -[SCSingleStoryViewingSession currentStorySnap]
// Type encoding: @16@0:8
// Implementation: 0x107a9afc4

// -[SCSingleStoryViewingSession didSwipeUp]
// Type encoding: B16@0:8
// Implementation: 0x107a9afcc

// -[SCSingleStoryViewingSession storyViewingActionContext]
// Type encoding: Q16@0:8
// Implementation: 0x107a9afd4

// -[SCSingleStoryViewingSession currentStoryDidShowLoadingScreen]
// Type encoding: B16@0:8
// Implementation: 0x107a9afdc

// -[SCSingleStoryViewingSession isFullyViewed]
// Type encoding: B16@0:8
// Implementation: 0x107a9afe4

// -[SCSingleStoryViewingSession totalViewedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107a9afec

// -[SCSingleStoryViewingSession totalOpenedSnapsCount]
// Type encoding: Q16@0:8
// Implementation: 0x107a9aff4

// -[SCSingleStoryViewingSession currentStoryHasPlayed]
// Type encoding: B16@0:8
// Implementation: 0x107a9affc

// -[SCSingleStoryViewingSession friendStoryViewingSession]
// Type encoding: @16@0:8
// Implementation: 0x107a9b004

// -[SCSingleStoryViewingSession entryInteraction]
// Type encoding: @16@0:8
// Implementation: 0x107a9b01c

// -[SCSingleStoryViewingSession storyViewId]
// Type encoding: @16@0:8
// Implementation: 0x107a9b024

// -[SCSingleStoryViewingSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x107a9b02c

// -[SCSingleStoryViewingSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a9b044

// -[SCSingleStoryViewingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a9b050

@end
