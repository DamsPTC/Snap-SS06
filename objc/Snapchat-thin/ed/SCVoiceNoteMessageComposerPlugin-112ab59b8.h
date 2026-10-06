// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceNoteMessageComposerPlugin
// Superclass: NSObject
// Address: 0x112ab59b8

@interface SCVoiceNoteMessageComposerPlugin

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: uiContainer; attributes: T@"<SCUIContainer>",?,W,N,V_uiContainer
// Property: activeConversationIdObservable; attributes: T@"SCObservable",&,N,V_activeConversationIdObservable
// Property: activeConversationInformationObservable; attributes: T@"SCObservable",&,N,V_activeConversationInformationObservable
// Property: renderingContextProvider; attributes: T@"<SCMessagePluginRenderingContextProviding>",?,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: chatScrollHandler; attributes: T@"<SCCChatScrollHandling>",W,N,V_chatScrollHandler
// Property: messageViewEvents; attributes: T@"SCObservable",&,N,V_messageViewEvents
// Property: visibleMessageIds; attributes: T@"SCObservable",?,&,N
// Property: messageListScrollObservable; attributes: T@"SCObservable",?,&,N
// Property: messageVisibilityFractionProvider; attributes: T@"<SCMessageVisibilityFractionProviding>",?,W,N
// Property: multiDirectionUIContainer; attributes: T@"<SCUIContainer>",?,W,N

// -[SCVoiceNoteMessageComposerPlugin initWithChatNoteAnimationThumbnailFetcher:chatMediaFetcher:audioNotePlayer:composerBlizzardLogger:userTrackedLogger:messagingExperimentService:currentUserId:conversationUpdatesPublisher:notificationPool:drawerMediaSender:conversationActionHandler:voiceNoteTranscriptionService:chatMessageDisplayStateLogger:grpcServiceFactory:messagingMessageProvider:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x105fbaab0

// -[SCVoiceNoteMessageComposerPlugin initWithChatNoteAnimationThumbnailFetcher:chatMediaFetcher:audioNotePlayer:composerBlizzardLogger:userTrackedLogger:messagingExperimentService:currentUserId:conversationUpdatesPublisher:autoPlayPublisher:notificationPool:drawerMediaSender:conversationActionHandler:voiceNoteTranscriptionService:chatMessageDisplayStateLogger:grpcServiceFactory:messagingMessageProvider:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x105fbacc4

// -[SCVoiceNoteMessageComposerPlugin valdiContextParamsForMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fbb0cc

// -[SCVoiceNoteMessageComposerPlugin _isTranscribableWithLocale:participants:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fbb4f0

// -[SCVoiceNoteMessageComposerPlugin setActiveConversationIdObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbb570

// -[SCVoiceNoteMessageComposerPlugin valdiContextParamsForQuotedMessage:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fbb6d4

// -[SCVoiceNoteMessageComposerPlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105fbb810

// -[SCVoiceNoteMessageComposerPlugin quotedRenderingStyleForMessage:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105fbb8d0

// -[SCVoiceNoteMessageComposerPlugin identifier]
// Type encoding: @16@0:8
// Implementation: 0x105fbb8d8

// -[SCVoiceNoteMessageComposerPlugin pluginType]
// Type encoding: Q16@0:8
// Implementation: 0x105fbb908

// -[SCVoiceNoteMessageComposerPlugin dismissPresentedView]
// Type encoding: v16@0:8
// Implementation: 0x105fbb910

// -[SCVoiceNoteMessageComposerPlugin canForwardMessageFromActionMenu:focusedMessageContent:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105fbb914

// -[SCVoiceNoteMessageComposerPlugin canForwardMessageFromCTA:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fbb97c

// -[SCVoiceNoteMessageComposerPlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fbb984

// -[SCVoiceNoteMessageComposerPlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:]
// Type encoding: v56@0:8@16@24@32Q40@?48
// Implementation: 0x105fbbe04

// -[SCVoiceNoteMessageComposerPlugin _uploadAndSendMediaFromMessage:conversations:platformAnalytics:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105fbc000

// -[SCVoiceNoteMessageComposerPlugin _uploadAndSendAudioNote:message:conversations:platformAnalytics:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105fbc288

// -[SCVoiceNoteMessageComposerPlugin _valdiContextParamsForQuotedMessageContents:messageSenderUserId:conversationParticipants:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105fbc5b8

// -[SCVoiceNoteMessageComposerPlugin _isSupportedMessageContents:]
// Type encoding: B24@0:8@16
// Implementation: 0x105fbc7f8

// -[SCVoiceNoteMessageComposerPlugin _voiceNoteDurationMSForContents:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fbc8e8

// -[SCVoiceNoteMessageComposerPlugin _getOrCreateContextForMessage:isCurrentUserSender:isGroupConversation:isTranscribable:]
// Type encoding: @36@0:8@16B24B28B32
// Implementation: 0x105fbca8c

// -[SCVoiceNoteMessageComposerPlugin _getOrCreateSavedSubjectForMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fbdd5c

// -[SCVoiceNoteMessageComposerPlugin _handlePlaybackFinishedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbde18

// -[SCVoiceNoteMessageComposerPlugin _markVoiceNoteAsConsumed:messageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105fbe004

// -[SCVoiceNoteMessageComposerPlugin _removeCachedContextForMessages:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbe00c

// -[SCVoiceNoteMessageComposerPlugin _handleConversationChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbe1ac

// -[SCVoiceNoteMessageComposerPlugin _getOrCreateMessageSubjectForMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105fbe4ec

// -[SCVoiceNoteMessageComposerPlugin activeConversationIdObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fbe56c

// -[SCVoiceNoteMessageComposerPlugin uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x105fbe574

// -[SCVoiceNoteMessageComposerPlugin setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbe58c

// -[SCVoiceNoteMessageComposerPlugin activeConversationInformationObservable]
// Type encoding: @16@0:8
// Implementation: 0x105fbe598

// -[SCVoiceNoteMessageComposerPlugin setActiveConversationInformationObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbe5a0

// -[SCVoiceNoteMessageComposerPlugin messageViewEvents]
// Type encoding: @16@0:8
// Implementation: 0x105fbe5d0

// -[SCVoiceNoteMessageComposerPlugin setMessageViewEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbe5d8

// -[SCVoiceNoteMessageComposerPlugin chatScrollHandler]
// Type encoding: @16@0:8
// Implementation: 0x105fbe608

// -[SCVoiceNoteMessageComposerPlugin setChatScrollHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fbe620

// -[SCVoiceNoteMessageComposerPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fbe62c

@end
