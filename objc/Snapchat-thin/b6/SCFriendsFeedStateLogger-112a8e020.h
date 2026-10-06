// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedStateLogger
// Superclass: NSObject
// Address: 0x112a8e020

@interface SCFriendsFeedStateLogger


// -[SCFriendsFeedStateLogger initWithPerformer:dataCoordinator:userTrackedLogger:nativeSessionManagerFuture:conversationUpdaterEventPublisher:conversationManager:messagingExperimentService:feedInteractionEventObservable:feedCellVisibilityObservable:conversationEventObservable:friendsFeedViewLifecycleListener:sponsoredSnapAdResponseParser:friendsFeedStreakImpressionTracker:friendsFeedSnapchatBotImpressionTracker:chatPeekEvents:feedReadyLogger:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x105b69970

// -[SCFriendsFeedStateLogger didEnterFeedWithSessionId:previousPageName:visibleCellViewModels:friendsFeedViewModelIndexes:visibleSnapchatterCells:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105b69ee8

// -[SCFriendsFeedStateLogger _didEnterFeedWithSessionId:previousPageName:visibleCellViewModels:friendsFeedViewModelIndexes:visibleSnapchatterCells:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x105b6a0ac

// -[SCFriendsFeedStateLogger _startTimer:]
// Type encoding: v24@0:8d16
// Implementation: 0x105b6b3c4

// -[SCFriendsFeedStateLogger pauseTimer]
// Type encoding: v16@0:8
// Implementation: 0x105b6b41c

// -[SCFriendsFeedStateLogger _pauseTimer:]
// Type encoding: v24@0:8d16
// Implementation: 0x105b6b50c

// -[SCFriendsFeedStateLogger didExitFeedWithSessionId:visibleCellViewModels:friendsFeedViewModelIndexes:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105b6b550

// -[SCFriendsFeedStateLogger _emitPageCloseWithSessionId:visibleCellViewModels:friendsFeedViewModelIndexes:currentTime:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x105b6b704

// -[SCFriendsFeedStateLogger _didExitFeedWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6b7c8

// -[SCFriendsFeedStateLogger feedDidAppearWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6b8f0

// -[SCFriendsFeedStateLogger _feedDidAppearWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6ba2c

// -[SCFriendsFeedStateLogger didRenderStoriesCarouselWithVisibleCellCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b6baac

// -[SCFriendsFeedStateLogger _setNumVisibleCellsPostStoriesCarouselRender:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105b6bb98

// -[SCFriendsFeedStateLogger setIsDisplayingBillboard:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b6bba0

// -[SCFriendsFeedStateLogger incrementBillboardTapCount]
// Type encoding: v16@0:8
// Implementation: 0x105b6bc8c

// -[SCFriendsFeedStateLogger incrementBillboardDismissCount]
// Type encoding: v16@0:8
// Implementation: 0x105b6bd60

// -[SCFriendsFeedStateLogger setShortcutSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6be34

// -[SCFriendsFeedStateLogger _setShortcutSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6bf40

// -[SCFriendsFeedStateLogger _friendsFeedSessionMetadata:friendsFeedViewModelIndexes:currentTime:]
// Type encoding: @40@0:8@16@24d32
// Implementation: 0x105b6bf70

// -[SCFriendsFeedStateLogger _totalFeedPageTime:]
// Type encoding: @24@0:8d16
// Implementation: 0x105b6dacc

// -[SCFriendsFeedStateLogger _subscribeToFeedInteractionEvents]
// Type encoding: v16@0:8
// Implementation: 0x105b6dbb0

// -[SCFriendsFeedStateLogger _subscribeToConversationEventObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6ddd8

// -[SCFriendsFeedStateLogger _onConversationEntered:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6e048

// -[SCFriendsFeedStateLogger _onConversationEntered:enterTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105b6e16c

// -[SCFriendsFeedStateLogger _onConversationExited]
// Type encoding: v16@0:8
// Implementation: 0x105b6e1c0

// -[SCFriendsFeedStateLogger _onConversationExitedWithExitTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x105b6e2b0

// -[SCFriendsFeedStateLogger _subscribeToMessageUpdates]
// Type encoding: v16@0:8
// Implementation: 0x105b6e304

// -[SCFriendsFeedStateLogger _onSnapViewed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6e734

// -[SCFriendsFeedStateLogger _onSnapsSent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6e7d0

// -[SCFriendsFeedStateLogger _onChatsSent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6e948

// -[SCFriendsFeedStateLogger _onChatsViewed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6eac0

// -[SCFriendsFeedStateLogger _subscribeToChatPeekEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6ec60

// -[SCFriendsFeedStateLogger _onPeekStarted]
// Type encoding: v16@0:8
// Implementation: 0x105b6ee58

// -[SCFriendsFeedStateLogger _setDidScroll]
// Type encoding: v16@0:8
// Implementation: 0x105b6ee8c

// -[SCFriendsFeedStateLogger _incrementBillboardTapCount]
// Type encoding: v16@0:8
// Implementation: 0x105b6eebc

// -[SCFriendsFeedStateLogger _incrementBillboardDismissCount]
// Type encoding: v16@0:8
// Implementation: 0x105b6eef0

// -[SCFriendsFeedStateLogger _setIsDiplayingBillboard:]
// Type encoding: v20@0:8B16
// Implementation: 0x105b6ef24

// -[SCFriendsFeedStateLogger _subscribeToNativeSessionManager]
// Type encoding: v16@0:8
// Implementation: 0x105b6ef54

// -[SCFriendsFeedStateLogger _subscribeToAdImpressionEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f080

// -[SCFriendsFeedStateLogger _subscribeToSponsoredSnapBannerEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f1ec

// -[SCFriendsFeedStateLogger _updateAdImpressions:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f440

// -[SCFriendsFeedStateLogger _setHasAdBillboard]
// Type encoding: v16@0:8
// Implementation: 0x105b6f484

// -[SCFriendsFeedStateLogger _subscribeToMessageReceivedEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f4b4

// -[SCFriendsFeedStateLogger _updateReceivedMessages:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f608

// -[SCFriendsFeedStateLogger _subscribeToFeedCellVisibilityObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f77c

// -[SCFriendsFeedStateLogger _onUpdateFeedCellVisibility:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b6f8d0

// -[SCFriendsFeedStateLogger _reset]
// Type encoding: v16@0:8
// Implementation: 0x105b6fa98

// -[SCFriendsFeedStateLogger _resetTimers]
// Type encoding: v16@0:8
// Implementation: 0x105b6fb30

// -[SCFriendsFeedStateLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b6fb5c

@end
