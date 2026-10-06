// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightCommentsSnapRepliesActionHandler
// Superclass: NSObject
// Address: 0x112ad5ad8

@interface SCSpotlightCommentsSnapRepliesActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController
// Property: delegate; attributes: T@"<SCSpotlightCommentsSnapRepliesActionHandlerDelegate>",W,N,V_delegate

// -[SCSpotlightCommentsSnapRepliesActionHandler initWithSpotlightPostingCameraScopeExposer:spotlightPostingCameraScopeServices:myStoriesDataCoordinator:spotlightRepliesMutator:spotlightRepliesFetcher:repliesDelegate:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:safetyReportScopeExposer:snapRepliesInteractionInfo:spotlightRepliesRequestSender:commentsSnapRepliesLogger:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:notificationPool:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x10621c00c

// -[SCSpotlightCommentsSnapRepliesActionHandler dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10621c364

// -[SCSpotlightCommentsSnapRepliesActionHandler launchCameraWithOriginalPostCompositeStoryId:interactionContext:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10621c3a8

// -[SCSpotlightCommentsSnapRepliesActionHandler playSnapReply:baseView:itemPos:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10621c498

// -[SCSpotlightCommentsSnapRepliesActionHandler showActionMenu:itemPos:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621c60c

// -[SCSpotlightCommentsSnapRepliesActionHandler fetchSnapRepliesWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10621ce28

// -[SCSpotlightCommentsSnapRepliesActionHandler scrollSnapRepliesWithGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621cf28

// -[SCSpotlightCommentsSnapRepliesActionHandler dismissPlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10621cf44

// -[SCSpotlightCommentsSnapRepliesActionHandler _fetchLocalSnapRepliesOnOriginalPostWithCompositeStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621cfdc

// -[SCSpotlightCommentsSnapRepliesActionHandler spotlightPostingCameraDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x10621d2f0

// -[SCSpotlightCommentsSnapRepliesActionHandler didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621d2f4

// -[SCSpotlightCommentsSnapRepliesActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621d418

// -[SCSpotlightCommentsSnapRepliesActionHandler didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x10621d460

// -[SCSpotlightCommentsSnapRepliesActionHandler didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621d4a8

// -[SCSpotlightCommentsSnapRepliesActionHandler _deleteSnapWithClientId:serverId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621d4ac

// -[SCSpotlightCommentsSnapRepliesActionHandler _creatorIdFromSnapReply:]
// Type encoding: @24@0:8@16
// Implementation: 0x10621d628

// -[SCSpotlightCommentsSnapRepliesActionHandler _removeSpotlightSubmissionScopeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10621d6f4

// -[SCSpotlightCommentsSnapRepliesActionHandler _startObservingMyStories]
// Type encoding: v16@0:8
// Implementation: 0x10621d764

// -[SCSpotlightCommentsSnapRepliesActionHandler _stopObservingMyStories]
// Type encoding: v16@0:8
// Implementation: 0x10621d7b4

// -[SCSpotlightCommentsSnapRepliesActionHandler _shouldProcessPostedSnap:storyType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10621d810

// -[SCSpotlightCommentsSnapRepliesActionHandler _handlePostedSnapReply:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621d878

// -[SCSpotlightCommentsSnapRepliesActionHandler _fetchStorySnapForClientId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10621d96c

// -[SCSpotlightCommentsSnapRepliesActionHandler _findSnapInStories:clientId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10621db08

// -[SCSpotlightCommentsSnapRepliesActionHandler _createDiscoverMetadataFromPlaybackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10621dd14

// -[SCSpotlightCommentsSnapRepliesActionHandler _addSnapReplyWithSnaps:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621ddd8

// -[SCSpotlightCommentsSnapRepliesActionHandler _playSnapReply:presentingViewController:baseView:itemPos:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10621ded8

// -[SCSpotlightCommentsSnapRepliesActionHandler _reportSnapReply:interactionContext:itemPos:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10621e40c

// -[SCSpotlightCommentsSnapRepliesActionHandler _reportWithReportParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621e55c

// -[SCSpotlightCommentsSnapRepliesActionHandler _hideSnapReply:interactionContext:itemPos:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10621e628

// -[SCSpotlightCommentsSnapRepliesActionHandler _showNotificationWithText:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10621e98c

// -[SCSpotlightCommentsSnapRepliesActionHandler _deleteSnapReply:interactionContext:itemPos:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x10621ea78

// -[SCSpotlightCommentsSnapRepliesActionHandler playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621ec30

// -[SCSpotlightCommentsSnapRepliesActionHandler playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621ec34

// -[SCSpotlightCommentsSnapRepliesActionHandler playbackPresenterDidFailToPresent:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621ec38

// -[SCSpotlightCommentsSnapRepliesActionHandler reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10621ec3c

// -[SCSpotlightCommentsSnapRepliesActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10621ec84

// -[SCSpotlightCommentsSnapRepliesActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621ec9c

// -[SCSpotlightCommentsSnapRepliesActionHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x10621eca8

// -[SCSpotlightCommentsSnapRepliesActionHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621ecc0

// -[SCSpotlightCommentsSnapRepliesActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10621eccc

@end
