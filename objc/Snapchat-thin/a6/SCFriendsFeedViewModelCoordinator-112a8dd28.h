// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedViewModelCoordinator
// Superclass: NSObject
// Address: 0x112a8dd28

@interface SCFriendsFeedViewModelCoordinator

// Property: delegate; attributes: T@"<SCFriendsFeedViewModelCoordinatorDelegate>",W,N,V_delegate

// -[SCFriendsFeedViewModelCoordinator initWithPerformer:currentUserId:friendmojiDataProvider:friendmojiPresenter:conversationManager:circumstanceEngine:sponsoredSnapAdResponseParser:friendsFeedActionTextGenerator:friendsFeedIconGenerator:messagingExperimentService:storiesConfigProvider:rightButtonViewModelCoordinator:supportsGreyFilteredCells:featureSettingsService:plusFeatureGating:creatorSubscriptionsInfoProvider:fanPassBadgeEnabled:friendsFeedTracker:friendsFeedGrapheneV2:simpleSnapchatExperimentConfigProvider:platformUIExperimentsService:suggestionInFriendsFeedEnabled:myAIInGroupChatEnabled:renderStyleProvider:animationTriggerGatingEnabled:snapCountdownProviderEnabled:]
// Type encoding: @212@0:8@16@24@32@40@48@56@64@72@80@88@96@104B112@116@124@132@140@148@156@164@172@180@188@196B204B208
// Implementation: 0x105b5db7c

// -[SCFriendsFeedViewModelCoordinator _subscribeToLastSnapObservable]
// Type encoding: v16@0:8
// Implementation: 0x105b5e97c

// -[SCFriendsFeedViewModelCoordinator _subscribeToLastFinishedSnapObservable]
// Type encoding: v16@0:8
// Implementation: 0x105b5eae4

// -[SCFriendsFeedViewModelCoordinator _subscribeToRenderStyleObservable]
// Type encoding: v16@0:8
// Implementation: 0x105b5ec4c

// -[SCFriendsFeedViewModelCoordinator _subscribeToLastSentSnapObservable]
// Type encoding: v16@0:8
// Implementation: 0x105b5ee0c

// -[SCFriendsFeedViewModelCoordinator viewModelForFriendsFeedItems:currentUserBirthday:currentContextualLensSuggestions:lastInteractionStates:currentlySelectedShortcutType:currentShortcutRecipientIds:displayedSubstituteAnimationIdentifiers:currentlyReplayingSnapConversationIds:currentlyPeekingFeedIds:activeSnapCountdowns:playedStoryIds:sharedLocationUserIds:currentMapContexts:currentSaturnEmojis:friendshipFlashbacksByConversationId:recentlyActiveUserIds:streaks:hiddenState:feedIsActive:viewHasChanged:completion:]
// Type encoding: v176@0:8@16@24@32@40Q48@56@64@72@80@88@96@104@112@120@128@136@144q152B160B164@?168
// Implementation: 0x105b5efb0

// -[SCFriendsFeedViewModelCoordinator resetLastPlayedSnap]
// Type encoding: v16@0:8
// Implementation: 0x105b5f290

// -[SCFriendsFeedViewModelCoordinator resetLastFinishedViewingSnap]
// Type encoding: v16@0:8
// Implementation: 0x105b5f364

// -[SCFriendsFeedViewModelCoordinator resetLastSentSnapWithConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b5f438

// -[SCFriendsFeedViewModelCoordinator _performResetLastPlayedSnap]
// Type encoding: v16@0:8
// Implementation: 0x105b5f544

// -[SCFriendsFeedViewModelCoordinator _performResetLastFinishedViewingSnap]
// Type encoding: v16@0:8
// Implementation: 0x105b5f554

// -[SCFriendsFeedViewModelCoordinator _performResetLastSentSnapWithConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b5f5ac

// -[SCFriendsFeedViewModelCoordinator _viewModelsByDiffUpdateWithInfo:currentlySelectedShortcutType:currentUserBirthday:hiddenState:viewHasChanged:]
// Type encoding: @52@0:8@16Q24@32q40B48
// Implementation: 0x105b5f614

// -[SCFriendsFeedViewModelCoordinator _viewModelInfoForFeedItems:currentContextualLensSuggestions:lastInteractionStates:currentShortcutRecipientIds:displayedSubstituteAnimationIdentifiers:currentlyReplayingSnapConversationIds:currentlyPeekingFeedIds:activeSnapCountdowns:feedIsActive:playedStoryIds:sharedLocationUserIds:currentMapContexts:currentSaturnEmojis:friendshipFlashbacksByConversationId:recentlyActiveUserIds:streaks:]
// Type encoding: @140@0:8@16@24@32@40@48@56@64@72B80@84@92@100@108@116@124@132
// Implementation: 0x105b5fdc8

// -[SCFriendsFeedViewModelCoordinator _timeIntervalWithDisplayTimestamp:]
// Type encoding: @24@0:8@16
// Implementation: 0x105b608a4

// -[SCFriendsFeedViewModelCoordinator _viewModelForFriendsFeedItemInfo:currentUserBirthday:identifier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105b60914

// -[SCFriendsFeedViewModelCoordinator _componentViewModelForFriendsFeedItemInfo:currentUserBirthday:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105b60b84

// -[SCFriendsFeedViewModelCoordinator _getAdSlugVariant:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105b61718

// -[SCFriendsFeedViewModelCoordinator _friendsFeedDisplayNameForFeedItem:rightButtonViewModel:adSlugVariant:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105b617e4

// -[SCFriendsFeedViewModelCoordinator _friendsFeedIconForFeedItem:staleContent:currentUserBirthday:hasConsumableContent:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x105b61aec

// -[SCFriendsFeedViewModelCoordinator _staleContentsByConversationIdForFriendsFeedItems:currentMapContexts:friendshipFlashbacksByConversationId:recentlyActiveUserIds:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x105b61ee8

// -[SCFriendsFeedViewModelCoordinator _avatarIconInfosByConversationIdForFriendsFeedItems:currentMapContexts:currentSaturnEmojis:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105b621d8

// -[SCFriendsFeedViewModelCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x105b62380

// -[SCFriendsFeedViewModelCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b62398

// -[SCFriendsFeedViewModelCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b623a4

@end
