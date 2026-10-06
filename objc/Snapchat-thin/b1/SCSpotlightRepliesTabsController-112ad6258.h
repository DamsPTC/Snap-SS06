// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesTabsController
// Superclass: UIViewController
// Address: 0x112ad6258

@interface SCSpotlightRepliesTabsController

// Property: tabsCollectionView; attributes: T@"UIView",R,N
// Property: tabBarsContainerView; attributes: T@"UIView",R,N
// Property: currentTabScrollView; attributes: T@"UIScrollView",R,N
// Property: delegate; attributes: T@"<SCSpotlightRepliesTabsControllerDelegate>",W,N,V_delegate
// Property: presentingTabType; attributes: TQ,N,V_presentingTabType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesTabsController initWithRepliesDataFetcher:actionHandler:isCreatorMode:isCommentAdmin:spotlightRepliesRequestSender:snapInteractionInfo:identifierOfCompositeStoryId:reactionManager:bitmojiSelfieProvider:avatarProvider:repliesViewCountManager:repliesLogger:spotlightRepliesUpdateAnnouncer:spotlightRepliesFeatureSettingsManager:circumstanceEngine:userPreferences:repliesActionConfig:valdiRuntimeProvider:mentionsScopeExposer:snapchatterObservableRepository:snapchattersSynchronousDataFetcher:commentPosterThumbnailFetcher:spotlightRepliesDataMutator:storiesConfigProvider:commentsSnapReplyActionsConfig:commentsStickerPickerExposer:commentsAttachmentFetcher:]
// Type encoding: @224@0:8@16@24B32B36@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216
// Implementation: 0x106249c44

// -[SCSpotlightRepliesTabsController navigateToPendingTab]
// Type encoding: v16@0:8
// Implementation: 0x10624a41c

// -[SCSpotlightRepliesTabsController mentionsScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x10624a508

// -[SCSpotlightRepliesTabsController _navigateToPendingTab]
// Type encoding: v16@0:8
// Implementation: 0x10624a538

// -[SCSpotlightRepliesTabsController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10624a604

// -[SCSpotlightRepliesTabsController _fetchSnapReplies]
// Type encoding: v16@0:8
// Implementation: 0x10624a660

// -[SCSpotlightRepliesTabsController _handleReplyToCommentEventWithExtraData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624a6c0

// -[SCSpotlightRepliesTabsController _populateMentionBarWithThreadedUsersForSpotlightReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624ac80

// -[SCSpotlightRepliesTabsController _processThreadedReplies:forSpotlightReply:isThreadedReply:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10624ade0

// -[SCSpotlightRepliesTabsController currentTabScrollView]
// Type encoding: @16@0:8
// Implementation: 0x10624b5a8

// -[SCSpotlightRepliesTabsController tabsCollectionView]
// Type encoding: @16@0:8
// Implementation: 0x10624b604

// -[SCSpotlightRepliesTabsController tabBarsContainerView]
// Type encoding: @16@0:8
// Implementation: 0x10624b650

// -[SCSpotlightRepliesTabsController fetchDataWithApprovalState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10624b660

// -[SCSpotlightRepliesTabsController showKeyboardInLiveTabWithGestureType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10624b9f8

// -[SCSpotlightRepliesTabsController addReplyAttachmentToLiveTab:gestureType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10624baa4

// -[SCSpotlightRepliesTabsController _setupTabBarsControllerIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10624bb1c

// -[SCSpotlightRepliesTabsController _setupDisplayedTabViews]
// Type encoding: v16@0:8
// Implementation: 0x10624bbdc

// -[SCSpotlightRepliesTabsController _setupCollectionView]
// Type encoding: v16@0:8
// Implementation: 0x10624bf00

// -[SCSpotlightRepliesTabsController numberOfSectionsInCollectionView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10624c0cc

// -[SCSpotlightRepliesTabsController collectionView:numberOfItemsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10624c0d4

// -[SCSpotlightRepliesTabsController collectionView:cellForItemAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10624c0e4

// -[SCSpotlightRepliesTabsController collectionView:layout:sizeForItemAtIndexPath:]
// Type encoding: {CGSize=dd}40@0:8@16@24@32
// Implementation: 0x10624c188

// -[SCSpotlightRepliesTabsController didSelectTab:onTabBarController:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10624c1b0

// -[SCSpotlightRepliesTabsController scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624c2a8

// -[SCSpotlightRepliesTabsController _logSwitchTabToIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624c3c0

// -[SCSpotlightRepliesTabsController repliesTabViewDidScrollToEnd:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624c418

// -[SCSpotlightRepliesTabsController repliesTabViewKeyBoardWillShow]
// Type encoding: v16@0:8
// Implementation: 0x10624c41c

// -[SCSpotlightRepliesTabsController repliesTabViewKeyBoardWillHide]
// Type encoding: v16@0:8
// Implementation: 0x10624c4dc

// -[SCSpotlightRepliesTabsController hideExplainerCopy]
// Type encoding: v16@0:8
// Implementation: 0x10624c500

// -[SCSpotlightRepliesTabsController didRemoveReplyFromPendingSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624c534

// -[SCSpotlightRepliesTabsController didRemoveReplyFromApprovedSection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624c53c

// -[SCSpotlightRepliesTabsController didTapOnCancelReplyButton]
// Type encoding: v16@0:8
// Implementation: 0x10624c544

// -[SCSpotlightRepliesTabsController _mentionsUserNameForUserWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10624c5e4

// -[SCSpotlightRepliesTabsController _isCurrentViewerSnapCreator]
// Type encoding: B16@0:8
// Implementation: 0x10624c684

// -[SCSpotlightRepliesTabsController _updateMentionsObservableWithThreadedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624c6fc

// -[SCSpotlightRepliesTabsController _merlinMentionOnce]
// Type encoding: @16@0:8
// Implementation: 0x10624d370

// -[SCSpotlightRepliesTabsController _hideMentionBarIfVisible]
// Type encoding: v16@0:8
// Implementation: 0x10624d5d0

// -[SCSpotlightRepliesTabsController _reloadMentionBar]
// Type encoding: v16@0:8
// Implementation: 0x10624d660

// -[SCSpotlightRepliesTabsController _showMentionBarWithThreadedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624d7e8

// -[SCSpotlightRepliesTabsController _setUpEmojiBar]
// Type encoding: v16@0:8
// Implementation: 0x10624d80c

// -[SCSpotlightRepliesTabsController _handlePanOnEmojiBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624da14

// -[SCSpotlightRepliesTabsController _fetchRepliesIfNeverFetchedWithIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624dab0

// -[SCSpotlightRepliesTabsController _fetchViewerPendingReplies]
// Type encoding: v16@0:8
// Implementation: 0x10624db0c

// -[SCSpotlightRepliesTabsController _didCompleteFetchViewerPendingRepliesWithSuccess:spotlightReplies:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10624dc50

// -[SCSpotlightRepliesTabsController _sectionDataProviderWithApprovalState:]
// Type encoding: @24@0:8q16
// Implementation: 0x10624dce8

// -[SCSpotlightRepliesTabsController _canTriggerPaginationOnTabBarTabIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624dd40

// -[SCSpotlightRepliesTabsController _didCompleteFetchDataWithApprovalState:success:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10624ddcc

// -[SCSpotlightRepliesTabsController _handleDidCompleteFetchDataInLiveSectionWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10624de6c

// -[SCSpotlightRepliesTabsController _updatePendingCountAfterPendingRequestIsComplete]
// Type encoding: v16@0:8
// Implementation: 0x10624e07c

// -[SCSpotlightRepliesTabsController _updatePendingRepliesCountManagerIfNecessary:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624e1c8

// -[SCSpotlightRepliesTabsController _performPaginationForTabViewMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624e2b8

// -[SCSpotlightRepliesTabsController _didCompletePaginationRequestForState:success:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x10624e520

// -[SCSpotlightRepliesTabsController _dismissLiveTabKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x10624e534

// -[SCSpotlightRepliesTabsController _addMentionPersonToInputBar:replacementRange:replyPosterProfileId:]
// Type encoding: v48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x10624e5a8

// -[SCSpotlightRepliesTabsController didSelectMentionPerson:replacementRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10624e71c

// -[SCSpotlightRepliesTabsController willShowMentionBar]
// Type encoding: v16@0:8
// Implementation: 0x10624e914

// -[SCSpotlightRepliesTabsController didHideMentionBar]
// Type encoding: v16@0:8
// Implementation: 0x10624e95c

// -[SCSpotlightRepliesTabsController didDismissMerlinOnboarding]
// Type encoding: v16@0:8
// Implementation: 0x10624e9a0

// -[SCSpotlightRepliesTabsController spotlightRepliesInputView:didAddReply:replyAttachments:parentCommentId:mentions:replyGesture:parentCommentRequestId:]
// Type encoding: v72@0:8@16@24@32@40@48q56@64
// Implementation: 0x10624ea08

// -[SCSpotlightRepliesTabsController spotlightRepliesInputViewShowCharLimitNotification]
// Type encoding: v16@0:8
// Implementation: 0x10624ee4c

// -[SCSpotlightRepliesTabsController spotlightRepliesInputViewDidTapCameraButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624eeac

// -[SCSpotlightRepliesTabsController didTapOnEmoji:withIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10624ef9c

// -[SCSpotlightRepliesTabsController _hideEmojiBarWithKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x10624f0b4

// -[SCSpotlightRepliesTabsController _showEmojiBarWithKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x10624f168

// -[SCSpotlightRepliesTabsController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10624f210

// -[SCSpotlightRepliesTabsController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10624f230

// -[SCSpotlightRepliesTabsController presentingTabType]
// Type encoding: Q16@0:8
// Implementation: 0x10624f244

// -[SCSpotlightRepliesTabsController setPresentingTabType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10624f254

// -[SCSpotlightRepliesTabsController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10624f264

@end
