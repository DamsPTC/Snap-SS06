// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingMessage
// Superclass: NSObject
// Address: 0x112c80568

@interface SCNMessagingMessage

// Property: descriptor; attributes: T@"SCNMessagingMessageDescriptor",&,N,V_descriptor
// Property: senderId; attributes: T@"SCNMessagingUUID",&,N,V_senderId
// Property: messageContent; attributes: T@"SCNMessagingMessageContent",&,N,V_messageContent
// Property: metadata; attributes: T@"SCNMessagingMessageMetadata",&,N,V_metadata
// Property: releasePolicy; attributes: Tq,N,V_releasePolicy
// Property: state; attributes: Tq,N,V_state
// Property: messageAnalytics; attributes: T@"SCNMessagingMessageAnalytics",&,N,V_messageAnalytics
// Property: orderKey; attributes: Tq,N,V_orderKey

// -[SCNMessagingMessage isVoiceNote]
// Type encoding: B16@0:8
// Implementation: 0x107d6a170

// -[SCNMessagingMessage voiceNoteDurationMS]
// Type encoding: @16@0:8
// Implementation: 0x107d6a260

// -[SCNMessagingMessage isChatMediaMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69644

// -[SCNMessagingMessage isSingleImageOrVideoChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d696d4

// -[SCNMessagingMessage isSingleImageChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d6970c

// -[SCNMessagingMessage isSingleNonSpectaclesImageChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d697a8

// -[SCNMessagingMessage _isSingleVideoChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d69834

// -[SCNMessagingMessage isOnePersonFriendCameo]
// Type encoding: B16@0:8
// Implementation: 0x107d698d0

// -[SCNMessagingMessage isStatusMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d6999c

// -[SCNMessagingMessage isTextMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d699dc

// -[SCNMessagingMessage isSystemConversationRetentionMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69a1c

// -[SCNMessagingMessage isSpotlightStoryShareMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69af0

// -[SCNMessagingMessage isLensSpotlightStoryShareMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69b68

// -[SCNMessagingMessage isSavedFriendStoryMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69be0

// -[SCNMessagingMessage isSpotlightCommentShareMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69c40

// -[SCNMessagingMessage hasUnknownReleasePolicy]
// Type encoding: B16@0:8
// Implementation: 0x107d69ca0

// -[SCNMessagingMessage isPromptLensResponseMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69cbc

// -[SCNMessagingMessage snapchatterUserId]
// Type encoding: @16@0:8
// Implementation: 0x107d69cfc

// -[SCNMessagingMessage isContentShareMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69dcc

// -[SCNMessagingMessage isTinySnapMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69e48

// -[SCNMessagingMessage isInfiniteMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69e88

// -[SCNMessagingMessage isKickedUserScreenCapture]
// Type encoding: B16@0:8
// Implementation: 0x107d69ea4

// -[SCNMessagingMessage isScreenRecording]
// Type encoding: B16@0:8
// Implementation: 0x107d69f1c

// -[SCNMessagingMessage isErasedSnapStatusMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d69f94

// -[SCNMessagingMessage isBitmojiUserShare]
// Type encoding: B16@0:8
// Implementation: 0x107d6a00c

// -[SCNMessagingMessage isBotWelcomeCardMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d6a080

// -[SCNMessagingMessage _isSpotlightStoryShareSourceFeedLenses]
// Type encoding: B16@0:8
// Implementation: 0x107d6a0f8

// -[SCNMessagingMessage textContent]
// Type encoding: @16@0:8
// Implementation: 0x107d683c0

// -[SCNMessagingMessage text]
// Type encoding: @16@0:8
// Implementation: 0x107d68488

// -[SCNMessagingMessage getUrls]
// Type encoding: @16@0:8
// Implementation: 0x107d684cc

// -[SCNMessagingMessage getAddresses]
// Type encoding: @16@0:8
// Implementation: 0x107d68714

// -[SCNMessagingMessage textFormatAttributes:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d68950

// -[SCNMessagingMessage mentionedNonParticipantsUserIds]
// Type encoding: @16@0:8
// Implementation: 0x107d68e30

// -[SCNMessagingMessage textMediaAttributes]
// Type encoding: @16@0:8
// Implementation: 0x107d69054

// -[SCNMessagingMessage hasMentionForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d69458

// -[SCNMessagingMessage hasCancelledStream]
// Type encoding: B16@0:8
// Implementation: 0x107d68170

// -[SCNMessagingMessage hasSuccessfulStream]
// Type encoding: B16@0:8
// Implementation: 0x107d68228

// -[SCNMessagingMessage isIncompleteBotResponse]
// Type encoding: B16@0:8
// Implementation: 0x107d6832c

// -[SCNMessagingMessage isStoryReplyMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d67de4

// -[SCNMessagingMessage isStoryReplyMediaDeleted]
// Type encoding: B16@0:8
// Implementation: 0x107d67e58

// -[SCNMessagingMessage isStoryReplyMediaPresent]
// Type encoding: B16@0:8
// Implementation: 0x107d67ee0

// -[SCNMessagingMessage storyReplyMediaOwnerId]
// Type encoding: @16@0:8
// Implementation: 0x107d67f68

// -[SCNMessagingMessage storyReplySnapStoryId]
// Type encoding: @16@0:8
// Implementation: 0x107d67fe4

// -[SCNMessagingMessage isExternalMediaStoryReply]
// Type encoding: B16@0:8
// Implementation: 0x107d68028

// -[SCNMessagingMessage storyReplyOriginalSnapId]
// Type encoding: @16@0:8
// Implementation: 0x107d680ec

// -[SCNMessagingMessage isStickerMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d67570

// -[SCNMessagingMessage isStickerReaction]
// Type encoding: B16@0:8
// Implementation: 0x107d67600

// -[SCNMessagingMessage messagingSticker]
// Type encoding: @16@0:8
// Implementation: 0x107d6765c

// -[SCNMessagingMessage _messagingStickerForContents:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d676ac

// -[SCNMessagingMessage ctpItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x107d6777c

// -[SCNMessagingMessage quotedCtpItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x107d67870

// -[SCNMessagingMessage isBloopMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d67928

// -[SCNMessagingMessage cameoStickerId]
// Type encoding: @16@0:8
// Implementation: 0x107d67944

// -[SCNMessagingMessage isBitmojiSticker]
// Type encoding: B16@0:8
// Implementation: 0x107d67a5c

// -[SCNMessagingMessage actionPerformingUserId]
// Type encoding: @16@0:8
// Implementation: 0x107d6744c

// -[SCNMessagingMessage canBeSaved]
// Type encoding: B16@0:8
// Implementation: 0x107d66aa4

// -[SCNMessagingMessage isSaved]
// Type encoding: B16@0:8
// Implementation: 0x107d66b54

// -[SCNMessagingMessage isSavedByParticipant:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d66bb4

// -[SCNMessagingMessage savedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x107d66d14

// -[SCNMessagingMessage canBeErased]
// Type encoding: B16@0:8
// Implementation: 0x107d66d80

// -[SCNMessagingMessage isErased]
// Type encoding: B16@0:8
// Implementation: 0x107d66de8

// -[SCNMessagingMessage isSent]
// Type encoding: B16@0:8
// Implementation: 0x107d66e48

// -[SCNMessagingMessage isSendingOrHasFailed]
// Type encoding: B16@0:8
// Implementation: 0x107d66e64

// -[SCNMessagingMessage failedToSend]
// Type encoding: B16@0:8
// Implementation: 0x107d66e9c

// -[SCNMessagingMessage sending]
// Type encoding: B16@0:8
// Implementation: 0x107d66ec8

// -[SCNMessagingMessage isSentBy:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d66ee8

// -[SCNMessagingMessage isOpenedBy:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d66f64

// -[SCNMessagingMessage isOpenedByOtherThan:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d66ff0

// -[SCNMessagingMessage isReleasedBy:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d6707c

// -[SCNMessagingMessage isReadBy:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d67108

// -[SCNMessagingMessage readByParticipants]
// Type encoding: @16@0:8
// Implementation: 0x107d67168

// -[SCNMessagingMessage isOneTimeOnly]
// Type encoding: B16@0:8
// Implementation: 0x107d671f4

// -[SCNMessagingMessage isSelfDestruct]
// Type encoding: B16@0:8
// Implementation: 0x107d672a8

// -[SCNMessagingMessage hasSelfDestructed]
// Type encoding: B16@0:8
// Implementation: 0x107d67360

// -[SCNMessagingMessage isSponsoredSnap]
// Type encoding: B16@0:8
// Implementation: 0x107d669e8

// -[SCNMessagingMessage sponsoredSnapAdResponse]
// Type encoding: @16@0:8
// Implementation: 0x107d66a28

// -[SCNMessagingMessage isSnapMeReplyMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d6647c

// -[SCNMessagingMessage snapMeReplyOriginalSnapId]
// Type encoding: @16@0:8
// Implementation: 0x107d66600

// -[SCNMessagingMessage isSnapMeReplyToPublicStory]
// Type encoding: B16@0:8
// Implementation: 0x107d66744

// -[SCNMessagingMessage shouldUseSnapMeReplyPluginForCurrentUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d667d4

// -[SCNMessagingMessage isSnapMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d64608

// -[SCNMessagingMessage isOpenedAndViewableSnapForUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d64698

// -[SCNMessagingMessage isOpenedSnapForUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d64714

// -[SCNMessagingMessage isSavedSnapViewedByUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d6476c

// -[SCNMessagingMessage isSavedImageSnapViewedByUser:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d64818

// -[SCNMessagingMessage snapState]
// Type encoding: @16@0:8
// Implementation: 0x107d6484c

// -[SCNMessagingMessage snapMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107d64ac0

// -[SCNMessagingMessage provenance]
// Type encoding: @16@0:8
// Implementation: 0x107d64b3c

// -[SCNMessagingMessage timing]
// Type encoding: @16@0:8
// Implementation: 0x107d64ba0

// -[SCNMessagingMessage playback]
// Type encoding: @16@0:8
// Implementation: 0x107d64c04

// -[SCNMessagingMessage isPlayable]
// Type encoding: B16@0:8
// Implementation: 0x107d64c68

// -[SCNMessagingMessage isDownloadable]
// Type encoding: B16@0:8
// Implementation: 0x107d64d08

// -[SCNMessagingMessage canBeReplayed]
// Type encoding: B16@0:8
// Implementation: 0x107d64da8

// -[SCNMessagingMessage isLoadedReplayableBySelf:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d64de4

// -[SCNMessagingMessage isReplayed]
// Type encoding: B16@0:8
// Implementation: 0x107d64e74

// -[SCNMessagingMessage isViewing]
// Type encoding: B16@0:8
// Implementation: 0x107d64ed4

// -[SCNMessagingMessage isScreenshotted]
// Type encoding: B16@0:8
// Implementation: 0x107d64f14

// -[SCNMessagingMessage replayCountForViewer:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107d64f74

// -[SCNMessagingMessage isSnapSentFromDweb]
// Type encoding: B16@0:8
// Implementation: 0x107d65000

// -[SCNMessagingMessage isViewableAfterOpening]
// Type encoding: B16@0:8
// Implementation: 0x107d65090

// -[SCNMessagingMessage isMultiSnap]
// Type encoding: B16@0:8
// Implementation: 0x107d650f0

// -[SCNMessagingMessage isLastSnapInMultiSnap]
// Type encoding: B16@0:8
// Implementation: 0x107d65164

// -[SCNMessagingMessage isFirstSnapInMultiSnap]
// Type encoding: B16@0:8
// Implementation: 0x107d65208

// -[SCNMessagingMessage isGenAISnap]
// Type encoding: B16@0:8
// Implementation: 0x107d65298

// -[SCNMessagingMessage mediaOrigin]
// Type encoding: @16@0:8
// Implementation: 0x107d656dc

// -[SCNMessagingMessage _mediaOrigin:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d658a4

// -[SCNMessagingMessage replayParticipants]
// Type encoding: @16@0:8
// Implementation: 0x107d65bf8

// -[SCNMessagingMessage replayAgainParticipants]
// Type encoding: @16@0:8
// Implementation: 0x107d65d88

// -[SCNMessagingMessage savedStoryPosterId]
// Type encoding: @16@0:8
// Implementation: 0x107d642f0

// -[SCNMessagingMessage isSavedStoryMediaPresent]
// Type encoding: B16@0:8
// Implementation: 0x107d643a4

// -[SCNMessagingMessage isSavedStoryMediaImage]
// Type encoding: B16@0:8
// Implementation: 0x107d6442c

// -[SCNMessagingMessage reactionsForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d63818

// -[SCNMessagingMessage reactionIdForUserId:reactionContent:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107d639c4

// -[SCNMessagingMessage isReactionReadBySelfFromParticipant:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d63cac

// -[SCNMessagingMessage isReactable]
// Type encoding: B16@0:8
// Implementation: 0x107d63dd4

// -[SCNMessagingMessage reactions]
// Type encoding: @16@0:8
// Implementation: 0x107d63e10

// -[SCNMessagingMessage hasUnreadReactionForLatestSeenReactionId:currentUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d63e54

// -[SCNMessagingMessage numberOfBitmojiReactions]
// Type encoding: Q16@0:8
// Implementation: 0x107d64034

// -[SCNMessagingMessage numberOfEmojiReactions]
// Type encoding: Q16@0:8
// Implementation: 0x107d6418c

// -[SCNMessagingMessage mediaType]
// Type encoding: q16@0:8
// Implementation: 0x107d63440

// -[SCNMessagingMessage media]
// Type encoding: @16@0:8
// Implementation: 0x100bc5844

// -[SCNMessagingMessage mediaForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107d6347c

// -[SCNMessagingMessage medias]
// Type encoding: @16@0:8
// Implementation: 0x100be49b0

// -[SCNMessagingMessage replyMedia]
// Type encoding: @16@0:8
// Implementation: 0x107d63638

// -[SCNMessagingMessage hasSpectaclesMedia]
// Type encoding: B16@0:8
// Implementation: 0x107d637c4

// -[SCNMessagingMessage consistentId]
// Type encoding: @16@0:8
// Implementation: 0x107d632e4

// -[SCNMessagingMessage analyticsMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107d6335c

// -[SCNMessagingMessage messageSender]
// Type encoding: @16@0:8
// Implementation: 0x100be4d10

// -[SCNMessagingMessage conversationId]
// Type encoding: @16@0:8
// Implementation: 0x107d633a0

// -[SCNMessagingMessage type]
// Type encoding: q16@0:8
// Implementation: 0x107d63404

// -[SCNMessagingMessage messageTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x100be4c94

// -[SCNMessagingMessage contents]
// Type encoding: @16@0:8
// Implementation: 0x100bc5900

// -[SCNMessagingMessage quotedContents]
// Type encoding: @16@0:8
// Implementation: 0x107d63240

// -[SCNMessagingMessage isChatReply]
// Type encoding: B16@0:8
// Implementation: 0x107d62cec

// -[SCNMessagingMessage isQuotedMessageAvailable]
// Type encoding: B16@0:8
// Implementation: 0x107d62d38

// -[SCNMessagingMessage chatReplySenderId]
// Type encoding: @16@0:8
// Implementation: 0x107d62db0

// -[SCNMessagingMessage chatReplyMessageId]
// Type encoding: @16@0:8
// Implementation: 0x107d62e4c

// -[SCNMessagingMessage chatReplyIsOpenedBy:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d62efc

// -[SCNMessagingMessage chatReplyIsSaved]
// Type encoding: B16@0:8
// Implementation: 0x107d62fd8

// -[SCNMessagingMessage chatReplyIsViewableAfterOpening]
// Type encoding: B16@0:8
// Implementation: 0x107d6304c

// -[SCNMessagingMessage hasQuotedSnapMessage]
// Type encoding: B16@0:8
// Implementation: 0x107d630e0

// -[SCNMessagingMessage isQuotedViewableSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x107d631a4

// -[SCNMessagingMessage storyReplyCtItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x107d5effc

// -[SCNMessagingMessage _groupUpdateForGroupCreation:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b43a4

// -[SCNMessagingMessage _groupUpdateForNameChange:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b449c

// -[SCNMessagingMessage _groupUpdateForParticipantChangeStatusMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b4550

// -[SCNMessagingMessage _groupUpdateForGroupInviteLinkStatusMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1070b4828

// -[SCNMessagingMessage groupUpdate]
// Type encoding: @16@0:8
// Implementation: 0x1070b48dc

// -[SCNMessagingMessage mediaSave]
// Type encoding: @16@0:8
// Implementation: 0x1070b4a70

// -[SCNMessagingMessage sendStatus]
// Type encoding: q16@0:8
// Implementation: 0x1070b4d68

// -[SCNMessagingMessage screenCaptureSource]
// Type encoding: q16@0:8
// Implementation: 0x1070b4d9c

// -[SCNMessagingMessage copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1070b4e1c

// -[SCNMessagingMessage _isUnseenByRecipients]
// Type encoding: B16@0:8
// Implementation: 0x1070b4e40

// -[SCNMessagingMessage isUnreadByRecipients]
// Type encoding: B16@0:8
// Implementation: 0x1070b4f48

// -[SCNMessagingMessage isUnseenMessage:]
// Type encoding: B24@0:8@16
// Implementation: 0x1070b4f88

// -[SCNMessagingMessage mentionedUserIds]
// Type encoding: @16@0:8
// Implementation: 0x1070b504c

// -[SCNMessagingMessage isOpenedByAtleastOneRecipient]
// Type encoding: B16@0:8
// Implementation: 0x1070b5274

// -[SCNMessagingMessage screenshotState]
// Type encoding: @16@0:8
// Implementation: 0x1070b5380

// -[SCNMessagingMessage screenRecordingState]
// Type encoding: @16@0:8
// Implementation: 0x1070b54f0

// -[SCNMessagingMessage bloopsStoryShare]
// Type encoding: @16@0:8
// Implementation: 0x1070a6290

// -[SCNMessagingMessage isAttachmentMessage]
// Type encoding: B16@0:8
// Implementation: 0x105098328

// -[SCNMessagingMessage isProfileMediaMessage]
// Type encoding: B16@0:8
// Implementation: 0x1050984ec

// -[SCNMessagingMessage canSnapReply]
// Type encoding: B16@0:8
// Implementation: 0x103b09e4c

// -[SCNMessagingMessage initWithDescriptor:senderId:messageContent:metadata:releasePolicy:state:messageAnalytics:orderKey:]
// Type encoding: @80@0:8@16@24@32@40q48q56@64q72
// Implementation: 0x1006b0ff8

// -[SCNMessagingMessage initWithDescriptor:senderId:metadata:releasePolicy:state:messageAnalytics:orderKey:]
// Type encoding: @72@0:8@16@24@32q40q48@56q64
// Implementation: 0x10b63b450

// -[SCNMessagingMessage descriptor]
// Type encoding: @16@0:8
// Implementation: 0x100bc5610

// -[SCNMessagingMessage setDescriptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b488

// -[SCNMessagingMessage senderId]
// Type encoding: @16@0:8
// Implementation: 0x100be4d54

// -[SCNMessagingMessage setSenderId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b4a8

// -[SCNMessagingMessage messageContent]
// Type encoding: @16@0:8
// Implementation: 0x100bc5a00

// -[SCNMessagingMessage setMessageContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b4c8

// -[SCNMessagingMessage metadata]
// Type encoding: @16@0:8
// Implementation: 0x100be4c7c

// -[SCNMessagingMessage setMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b4e8

// -[SCNMessagingMessage releasePolicy]
// Type encoding: q16@0:8
// Implementation: 0x10b63b508

// -[SCNMessagingMessage setReleasePolicy:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b510

// -[SCNMessagingMessage state]
// Type encoding: q16@0:8
// Implementation: 0x10b63b518

// -[SCNMessagingMessage setState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b520

// -[SCNMessagingMessage messageAnalytics]
// Type encoding: @16@0:8
// Implementation: 0x10b63b528

// -[SCNMessagingMessage setMessageAnalytics:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63b530

// -[SCNMessagingMessage orderKey]
// Type encoding: q16@0:8
// Implementation: 0x10b63b550

// -[SCNMessagingMessage setOrderKey:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63b558

// -[SCNMessagingMessage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63b560

// +[SCNMessagingMessage shouldShowSnapMeReplyAddToStoryForMessageSenderId:conversationId:currentUserId:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107d662ec

@end
