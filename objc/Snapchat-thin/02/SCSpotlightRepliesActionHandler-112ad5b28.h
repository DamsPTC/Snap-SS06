// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesActionHandler
// Superclass: NSObject
// Address: 0x112ad5b28

@interface SCSpotlightRepliesActionHandler

// Property: creatorApprovalDelegate; attributes: T@"<SCSpotlightRepliesCreatorApprovalDelegate>",W,N,V_creatorApprovalDelegate
// Property: presentingDelegate; attributes: T@"<SCSpotlightRepliesPresenting>",W,N,V_presentingDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesActionHandler initWithRepliesMutator:isCreatorMode:isCommentAdmin:notificationPool:spotlightRepliesRequestSender:reactionManager:userId:snapCreatorUserId:snapCreatorProfileId:safetyReportScopeExposer:spotlightRepliesViewCountManager:snapID:repliesLogger:repliesFetcher:unifiedPublicProfilesPresenterScopeLauncher:spotlightRepliesSettingPageScopeExposer:spotlightRepliesUpdateAnnouncer:friendProfileScopeExposer:repliesActionConfig:bitmojiSelfieFetcher:chatCameraScopeExposer:chatCameraScopeServices:repliesShareManager:compositeStoryId:communitiesReportStoryCommentService:communityMetadata:circumstanceEngine:storyType:snapchattersSynchronousDataFetcher:quotingCameraPresenter:contentViewSource:contentBlocker:snapchattersDataTracker:commentsSnapRepliesAntionHandler:repliesDelegate:searchScopeExposer:searchScopeServices:commentsAttachmentFetcher:mediaPlaybackSessionId:]
// Type encoding: @320@0:8@16B24B28@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216q224@232@240q248@256@264@272@280@288@296@304@312
// Implementation: 0x10621edb0

// -[SCSpotlightRepliesActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10621f558

// -[SCSpotlightRepliesActionHandler _modalPresentationOnCommentsTrayDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106220390

// -[SCSpotlightRepliesActionHandler _modalDismissalOnCommentsTrayDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x1062203c8

// -[SCSpotlightRepliesActionHandler _launchSearchWithQuery:interactionContext:spotlightReply:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106220400

// -[SCSpotlightRepliesActionHandler _searchContextFromInteractionContext:]
// Type encoding: q24@0:8q16
// Implementation: 0x106220648

// -[SCSpotlightRepliesActionHandler _logLaunchSuggestedSearchWithSearchQueryText:interactionContext:spotlightReply:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106220664

// -[SCSpotlightRepliesActionHandler _handleCameraButtonTappedWithInteractionContext:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062207e0

// -[SCSpotlightRepliesActionHandler _lookupReplyWithReplyIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622084c

// -[SCSpotlightRepliesActionHandler _launchProfileForMentionedUser:spotlightReply:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106220a28

// -[SCSpotlightRepliesActionHandler _logLaunchProfileForMentionedUserWithSpotlightReply:isFriendProfile:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106220b68

// -[SCSpotlightRepliesActionHandler _removeThreadedRepliesUnderTopLevelComment:]
// Type encoding: v24@0:8@16
// Implementation: 0x106220fe0

// -[SCSpotlightRepliesActionHandler _fetchPaginatedThreadedRepliesWithLastThreadedReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062213b8

// -[SCSpotlightRepliesActionHandler _expandFirstPageOfThreadedRepliesUnderParentReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062218f4

// -[SCSpotlightRepliesActionHandler _shouldStartFetchingWithFetchState:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106221fdc

// -[SCSpotlightRepliesActionHandler _replyToCommentWithReply:interactionContext:parentCommentRequestId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106221fec

// -[SCSpotlightRepliesActionHandler _shareReplyWithSpotlightReply:avatarImage:attachmentImage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106222064

// -[SCSpotlightRepliesActionHandler _shareContentFromTray]
// Type encoding: v16@0:8
// Implementation: 0x1062225a8

// -[SCSpotlightRepliesActionHandler _launchRepliesSettingPage]
// Type encoding: v16@0:8
// Implementation: 0x106222638

// -[SCSpotlightRepliesActionHandler _showNotificationWithText:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1062227b8

// -[SCSpotlightRepliesActionHandler _fetchReplyWithApprovalState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1062229b4

// -[SCSpotlightRepliesActionHandler _showCharLimitNotification]
// Type encoding: v16@0:8
// Implementation: 0x1062229ec

// -[SCSpotlightRepliesActionHandler _resetIsShowingCharLimitNotification]
// Type encoding: v16@0:8
// Implementation: 0x106222bd8

// -[SCSpotlightRepliesActionHandler _resetIsShowingPendingReviewNotification]
// Type encoding: v16@0:8
// Implementation: 0x106222be0

// -[SCSpotlightRepliesActionHandler _shouldQuotingSpotlightReplyFeatureBeAvailable:]
// Type encoding: B24@0:8@16
// Implementation: 0x106222be8

// -[SCSpotlightRepliesActionHandler _showActionMenuWithSpotlightReply:avatarImage:attachmentImage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106222cd4

// -[SCSpotlightRepliesActionHandler _showDialogWithTitle:dialogText:actionTitle:cancelTitle:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1062244ec

// -[SCSpotlightRepliesActionHandler _completionOfTopReplyOptionWithSpotlightReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106224734

// -[SCSpotlightRepliesActionHandler _reactWithReply:reactionTypeId:gesture:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x106224944

// -[SCSpotlightRepliesActionHandler _postReply:gesture:parentCommentRequestId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106224f80

// -[SCSpotlightRepliesActionHandler _postResolvedReply:optimisticReply:gesture:parentCommentRequestId:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x106225230

// -[SCSpotlightRepliesActionHandler _reportReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106225e68

// -[SCSpotlightRepliesActionHandler _reportWithReportParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622649c

// -[SCSpotlightRepliesActionHandler _approveReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106226590

// -[SCSpotlightRepliesActionHandler _rejectReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106226cec

// -[SCSpotlightRepliesActionHandler _blockUserWithUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106227440

// -[SCSpotlightRepliesActionHandler _deleteReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106227618

// -[SCSpotlightRepliesActionHandler _fetchAttachmentImageForReply:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106227eb8

// -[SCSpotlightRepliesActionHandler _quoteCommunityReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106227fb4

// -[SCSpotlightRepliesActionHandler _quoteSpotlightReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106228704

// -[SCSpotlightRepliesActionHandler _makeTopReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x106228e78

// -[SCSpotlightRepliesActionHandler _replaceTopReplyIfExistingWithReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062294e4

// -[SCSpotlightRepliesActionHandler _removeTopReplyBadge:]
// Type encoding: v24@0:8@16
// Implementation: 0x106229550

// -[SCSpotlightRepliesActionHandler _approveAllSpotlightReplies:]
// Type encoding: v24@0:8@16
// Implementation: 0x106229b94

// -[SCSpotlightRepliesActionHandler _rejectAllSpotlightReplies:]
// Type encoding: v24@0:8@16
// Implementation: 0x106229e28

// -[SCSpotlightRepliesActionHandler _updateReplyPostingState:serverGeneratedReplyId:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10622a0b4

// -[SCSpotlightRepliesActionHandler _updateToApprovedStatusWithReply:serverGeneratedReplyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10622a134

// -[SCSpotlightRepliesActionHandler _handleTapOnDisplayNameWithSpotlightReply:]
// Type encoding: B24@0:8@16
// Implementation: 0x10622a3d0

// -[SCSpotlightRepliesActionHandler _logLaunchPublicProfileWithSpotlightReply:isFriendProfile:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10622a49c

// -[SCSpotlightRepliesActionHandler _launchPublicProfileWithBusinessProfileId:spotlightReply:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10622a8f4

// -[SCSpotlightRepliesActionHandler _launchUnifiedUserProfile:spotlightReply:isFriendProfile:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10622aa9c

// -[SCSpotlightRepliesActionHandler _reactReply:reactionTypeId:reactOption:isCommentAdmin:]
// Type encoding: v44@0:8@16Q24q32B40
// Implementation: 0x10622abec

// -[SCSpotlightRepliesActionHandler _moveReplies:toApprovalState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10622abf4

// -[SCSpotlightRepliesActionHandler _replaceTopReplyIfExistingWithNewReplyInDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622abfc

// -[SCSpotlightRepliesActionHandler _updateReply:postingState:serverGeneratedReplyId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10622ad0c

// -[SCSpotlightRepliesActionHandler _addReplies:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622ad14

// -[SCSpotlightRepliesActionHandler _appendThreadedReplies:afterParentCommentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10622ad20

// -[SCSpotlightRepliesActionHandler _setReactionTypeWithReplyId:reactionTypeId:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10622ad28

// -[SCSpotlightRepliesActionHandler _incrementReplyCount]
// Type encoding: v16@0:8
// Implementation: 0x10622ad30

// -[SCSpotlightRepliesActionHandler _didRemoveReplyFromPendingSectionWithApproveAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x10622ad40

// -[SCSpotlightRepliesActionHandler _didRemoveAllRepliesFromPendingSectionWithApproveAction:]
// Type encoding: v20@0:8B16
// Implementation: 0x10622ad94

// -[SCSpotlightRepliesActionHandler _didRemoveReplyFromApprovedSection]
// Type encoding: v16@0:8
// Implementation: 0x10622adfc

// -[SCSpotlightRepliesActionHandler _presentCameraScopeWithStickerImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622ae40

// -[SCSpotlightRepliesActionHandler _presentQuotingCameraScopeWithStickerImage:spotlightReply:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10622af6c

// -[SCSpotlightRepliesActionHandler reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10622b1a0

// -[SCSpotlightRepliesActionHandler reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10622b1f8

// -[SCSpotlightRepliesActionHandler unifiedPublicProfilesPresenterScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10622b394

// -[SCSpotlightRepliesActionHandler presentingViewControllerForUnifiedPublicProfilesPresenterScope]
// Type encoding: @16@0:8
// Implementation: 0x10622b3e0

// -[SCSpotlightRepliesActionHandler detachPresentedUIIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10622b424

// -[SCSpotlightRepliesActionHandler searchWorkflowDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x10622b468

// -[SCSpotlightRepliesActionHandler didCompleteSpotlightRepliesSettingPageScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622b4c0

// -[SCSpotlightRepliesActionHandler friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622b518

// -[SCSpotlightRepliesActionHandler dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622b548

// -[SCSpotlightRepliesActionHandler _dismissChatCameraIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10622b54c

// -[SCSpotlightRepliesActionHandler captureWorkflowWillDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10622b594

// -[SCSpotlightRepliesActionHandler captureWorkflowDidDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10622b598

// -[SCSpotlightRepliesActionHandler didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622b59c

// -[SCSpotlightRepliesActionHandler didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10622b5a0

// -[SCSpotlightRepliesActionHandler didDismissSendToPage]
// Type encoding: v16@0:8
// Implementation: 0x10622b69c

// -[SCSpotlightRepliesActionHandler commentsSnapReplyPlaybackPresenterDidStart]
// Type encoding: v16@0:8
// Implementation: 0x10622b6a0

// -[SCSpotlightRepliesActionHandler commentsSnapReplyPlaybackPresenterDidTearDown]
// Type encoding: v16@0:8
// Implementation: 0x10622b6c4

// -[SCSpotlightRepliesActionHandler commentsSnapReplyCameraDidPresent]
// Type encoding: v16@0:8
// Implementation: 0x10622b6e8

// -[SCSpotlightRepliesActionHandler commentsSnapReplyCameraDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10622b6ec

// -[SCSpotlightRepliesActionHandler creatorApprovalDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10622b6f0

// -[SCSpotlightRepliesActionHandler setCreatorApprovalDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622b708

// -[SCSpotlightRepliesActionHandler presentingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10622b714

// -[SCSpotlightRepliesActionHandler setPresentingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10622b72c

// -[SCSpotlightRepliesActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10622b738

@end
