// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightRepliesShareManager
// Superclass: NSObject
// Address: 0x112ad5fd8

@interface SCSpotlightRepliesShareManager

// Property: delegate; attributes: T@"<SCSpotlightRepliesShareManagerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightRepliesShareManager initWithSpotlightShareSender:conversationDestinationParser:sendToScopeExposer:sendToScopeServices:notificationPool:offPlatformLinkGenerationService:spotlightPlatformAnalyticsCreator:spotlightRepliesUpdateAnnouncer:discoverFeedDataFetcher:circumstanceEngine:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x10623e260

// -[SCSpotlightRepliesShareManager shareReplyWithPresentingViewController:spotlightReply:avatarImage:attachmentImage:compositeStoryId:mediaPlaybackSessionId:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10623e430

// -[SCSpotlightRepliesShareManager shareContentWithPresentingViewController:compositeStoryId:snapCreatorUserId:snapId:mediaPlaybackSessionId:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10623e750

// -[SCSpotlightRepliesShareManager _sendToPreviewConfigurationWithDiscoverFeedStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10623ea20

// -[SCSpotlightRepliesShareManager _generateShareableMediaWithStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10623ec70

// -[SCSpotlightRepliesShareManager _shareSheetConfigurationWithAttribution:posterId:snapId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10623ef08

// -[SCSpotlightRepliesShareManager _sendToPreviewConfigurationWithSpotlightReply:avatarImage:attachmentImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10623f158

// -[SCSpotlightRepliesShareManager _getPreviewImageWithSpotlightReply:avatarImage:attachmentImage:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10623f390

// -[SCSpotlightRepliesShareManager didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10623f4a0

// -[SCSpotlightRepliesShareManager didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10623f5e0

// -[SCSpotlightRepliesShareManager removeSendToScope]
// Type encoding: v16@0:8
// Implementation: 0x10623f5e4

// -[SCSpotlightRepliesShareManager detachSendToIfPresented]
// Type encoding: v16@0:8
// Implementation: 0x10623f648

// -[SCSpotlightRepliesShareManager _detachUI]
// Type encoding: v16@0:8
// Implementation: 0x10623f6c4

// -[SCSpotlightRepliesShareManager _sendResultShareToSelectedItems:additionalText:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10623f6f4

// -[SCSpotlightRepliesShareManager _sendReplyShareToConversations:additionalText:numOfRecipients:error:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x10623fac4

// -[SCSpotlightRepliesShareManager _sendSpotlightShareToConversations:additionalText:numOfRecipients:error:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x10623fddc

// -[SCSpotlightRepliesShareManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x1062400b4

// -[SCSpotlightRepliesShareManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1062400cc

// -[SCSpotlightRepliesShareManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1062400d8

@end
