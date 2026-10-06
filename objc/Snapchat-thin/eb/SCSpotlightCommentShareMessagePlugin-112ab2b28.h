// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightCommentShareMessagePlugin
// Superclass: NSObject
// Address: 0x112ab2b28

@interface SCSpotlightCommentShareMessagePlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N,V_presentingViewController
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightCommentShareMessagePlugin initWithSpotlightRepliesRequestSender:spotlightFetcher:pageLauncher:spotlightShareSender:circumstanceEngine:discoverFeedDataMutator:snapchattersSynchronousDataFetcher:storiesConfigProvider:currentUserId:messagingMessageProvider:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105f7ffc8

// -[SCSpotlightCommentShareMessagePlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f80218

// -[SCSpotlightCommentShareMessagePlugin _contextForMessage:commentDisplayInfoSubject:spotlightStoryDisplayInfoSubject:enableOnTap:conversationParticipants:]
// Type encoding: @52@0:8@16@24@32B40@44
// Implementation: 0x105f80330

// -[SCSpotlightCommentShareMessagePlugin _fetchRequirementsWithMessage:commentDisplayInfoSubject:spotlightStoryDisplayInfoSubject:conversationParticipants:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105f80700

// -[SCSpotlightCommentShareMessagePlugin _launchSpotlightWithInitialCompositeStoryId:parentCommentId:commentId:senderId:groupId:shareId:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x105f80c20

// -[SCSpotlightCommentShareMessagePlugin _spotlightConfigurationForSharedStory:prependedCommentIds:storyLoggingFieldsOverrideDict:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f81014

// -[SCSpotlightCommentShareMessagePlugin _fetchThumbnailUrlWithCompositeStoryId:spotlightStoryDisplayInfoSubject:senderUserId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105f81168

// -[SCSpotlightCommentShareMessagePlugin _fetchSpotlightCommentWithCommentId:snapId:commentDisplayInfoSubject:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105f812f8

// -[SCSpotlightCommentShareMessagePlugin _saveSpotlightStoryToCacheIfNecessaryWithSpotlightStory:compositeStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f81574

// -[SCSpotlightCommentShareMessagePlugin _saveSpotlightReplyToCacheIfNecessaryWithSpotlightReply:commentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f815ec

// -[SCSpotlightCommentShareMessagePlugin _emitSpotlightStoryDisplayWithSpotlightStoryDisplayInfoSubject:spotlightStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f81664

// -[SCSpotlightCommentShareMessagePlugin _emitCommentDisplayInfoWithCommentDisplayInfoSubject:spotlightReply:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f81998

// -[SCSpotlightCommentShareMessagePlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105f81fd4

// -[SCSpotlightCommentShareMessagePlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105f82004

// -[SCSpotlightCommentShareMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f8200c

// -[SCSpotlightCommentShareMessagePlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f8204c

// -[SCSpotlightCommentShareMessagePlugin isSharingRestrictedForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f8208c

// -[SCSpotlightCommentShareMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f82194

// -[SCSpotlightCommentShareMessagePlugin _forwardingContextForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f82298

// -[SCSpotlightCommentShareMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105f82360

// -[SCSpotlightCommentShareMessagePlugin shouldDisplayContextualHeaderForMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f82740

// -[SCSpotlightCommentShareMessagePlugin contextualHeaderForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105f82780

// -[SCSpotlightCommentShareMessagePlugin presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x105f8281c

// -[SCSpotlightCommentShareMessagePlugin setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f82834

// -[SCSpotlightCommentShareMessagePlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f82840

// -[SCSpotlightCommentShareMessagePlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f82848

// -[SCSpotlightCommentShareMessagePlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f82878

// -[SCSpotlightCommentShareMessagePlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f82880

// -[SCSpotlightCommentShareMessagePlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f828b0

@end
