// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingMessageMetadata
// Superclass: NSObject
// Address: 0x112c80748

@interface SCNMessagingMessageMetadata

// Property: seenBy; attributes: T@"NSArray",C,N,V_seenBy
// Property: openedBy; attributes: T@"NSArray",C,N,V_openedBy
// Property: savedBy; attributes: T@"NSArray",C,N,V_savedBy
// Property: mentionedUserIds; attributes: T@"NSArray",C,N,V_mentionedUserIds
// Property: screenShottedBy; attributes: T@"NSArray",C,N,V_screenShottedBy
// Property: screenRecordedBy; attributes: T@"NSArray",C,N,V_screenRecordedBy
// Property: reactions; attributes: T@"NSArray",C,N,V_reactions
// Property: tombstone; attributes: TB,N,V_tombstone
// Property: createdAt; attributes: Tq,N,V_createdAt
// Property: readAt; attributes: Tq,N,V_readAt
// Property: playableSnapState; attributes: T@"NSNumber",&,N,V_playableSnapState
// Property: isSaveable; attributes: TB,N,V_isSaveable
// Property: isFriendLinkPending; attributes: TB,N,V_isFriendLinkPending
// Property: isReactable; attributes: TB,N,V_isReactable
// Property: isReplyable; attributes: TB,N,V_isReplyable
// Property: isErasable; attributes: TB,N,V_isErasable
// Property: isEdited; attributes: TB,N,V_isEdited
// Property: isEditable; attributes: TB,N,V_isEditable
// Property: botMentionResponseMetadata; attributes: T@"SCNMessagingBotMentionResponseMetadata",&,N,V_botMentionResponseMetadata
// Property: snapPostOpenViewingState; attributes: T@"NSNumber",&,N,V_snapPostOpenViewingState
// Property: replayedByUsers; attributes: T@"NSArray",C,N,V_replayedByUsers
// Property: bundleMetadata; attributes: T@"SCNMessagingBundleMetadata",&,N,V_bundleMetadata
// Property: savePolicy; attributes: Tq,N,V_savePolicy
// Property: streamingResponseMetadata; attributes: T@"SCNMessagingStreamingResponseMetadata",&,N,V_streamingResponseMetadata
// Property: isPriorityChatNotificationEligible; attributes: TB,N,V_isPriorityChatNotificationEligible
// Property: didSendPriorityChatNotification; attributes: TB,N,V_didSendPriorityChatNotification
// Property: pollMetadata; attributes: T@"SCNMessagingPollMetadata",&,N,V_pollMetadata

// -[SCNMessagingMessageMetadata initWithSeenBy:openedBy:savedBy:mentionedUserIds:screenShottedBy:screenRecordedBy:reactions:tombstone:createdAt:readAt:playableSnapState:isSaveable:isFriendLinkPending:isReactable:isReplyable:isErasable:isEdited:isEditable:botMentionResponseMetadata:snapPostOpenViewingState:replayedByUsers:bundleMetadata:savePolicy:streamingResponseMetadata:isPriorityChatNotificationEligible:didSendPriorityChatNotification:pollMetadata:]
// Type encoding: @192@0:8@16@24@32@40@48@56@64B72q76q84@92B100B104B108B112B116B120B124@128@136@144@152q160@168B176B180@184
// Implementation: 0x1006b03b8

// -[SCNMessagingMessageMetadata initWithSeenBy:openedBy:savedBy:mentionedUserIds:screenShottedBy:screenRecordedBy:reactions:tombstone:createdAt:readAt:isSaveable:isFriendLinkPending:isReactable:isReplyable:isErasable:isEdited:isEditable:replayedByUsers:savePolicy:isPriorityChatNotificationEligible:didSendPriorityChatNotification:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64B72q76q84B92B96B100B104B108B112B116@120q128B136B140
// Implementation: 0x10b63bb4c

// -[SCNMessagingMessageMetadata seenBy]
// Type encoding: @16@0:8
// Implementation: 0x10b63bbf0

// -[SCNMessagingMessageMetadata setSeenBy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bbf8

// -[SCNMessagingMessageMetadata openedBy]
// Type encoding: @16@0:8
// Implementation: 0x10b63bc00

// -[SCNMessagingMessageMetadata setOpenedBy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc08

// -[SCNMessagingMessageMetadata savedBy]
// Type encoding: @16@0:8
// Implementation: 0x100be4d5c

// -[SCNMessagingMessageMetadata setSavedBy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc10

// -[SCNMessagingMessageMetadata mentionedUserIds]
// Type encoding: @16@0:8
// Implementation: 0x10b63bc18

// -[SCNMessagingMessageMetadata setMentionedUserIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc20

// -[SCNMessagingMessageMetadata screenShottedBy]
// Type encoding: @16@0:8
// Implementation: 0x10b63bc28

// -[SCNMessagingMessageMetadata setScreenShottedBy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc30

// -[SCNMessagingMessageMetadata screenRecordedBy]
// Type encoding: @16@0:8
// Implementation: 0x10b63bc38

// -[SCNMessagingMessageMetadata setScreenRecordedBy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc40

// -[SCNMessagingMessageMetadata reactions]
// Type encoding: @16@0:8
// Implementation: 0x10b63bc48

// -[SCNMessagingMessageMetadata setReactions:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc50

// -[SCNMessagingMessageMetadata tombstone]
// Type encoding: B16@0:8
// Implementation: 0x10b63bc58

// -[SCNMessagingMessageMetadata setTombstone:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bc60

// -[SCNMessagingMessageMetadata createdAt]
// Type encoding: q16@0:8
// Implementation: 0x100be4cec

// -[SCNMessagingMessageMetadata setCreatedAt:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63bc68

// -[SCNMessagingMessageMetadata readAt]
// Type encoding: q16@0:8
// Implementation: 0x10b63bc70

// -[SCNMessagingMessageMetadata setReadAt:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63bc78

// -[SCNMessagingMessageMetadata playableSnapState]
// Type encoding: @16@0:8
// Implementation: 0x100be4c84

// -[SCNMessagingMessageMetadata setPlayableSnapState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bc80

// -[SCNMessagingMessageMetadata isSaveable]
// Type encoding: B16@0:8
// Implementation: 0x10b63bca0

// -[SCNMessagingMessageMetadata setIsSaveable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bca8

// -[SCNMessagingMessageMetadata isFriendLinkPending]
// Type encoding: B16@0:8
// Implementation: 0x10b63bcb0

// -[SCNMessagingMessageMetadata setIsFriendLinkPending:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bcb8

// -[SCNMessagingMessageMetadata isReactable]
// Type encoding: B16@0:8
// Implementation: 0x10b63bcc0

// -[SCNMessagingMessageMetadata setIsReactable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bcc8

// -[SCNMessagingMessageMetadata isReplyable]
// Type encoding: B16@0:8
// Implementation: 0x10b63bcd0

// -[SCNMessagingMessageMetadata setIsReplyable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bcd8

// -[SCNMessagingMessageMetadata isErasable]
// Type encoding: B16@0:8
// Implementation: 0x10b63bce0

// -[SCNMessagingMessageMetadata setIsErasable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bce8

// -[SCNMessagingMessageMetadata isEdited]
// Type encoding: B16@0:8
// Implementation: 0x10b63bcf0

// -[SCNMessagingMessageMetadata setIsEdited:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bcf8

// -[SCNMessagingMessageMetadata isEditable]
// Type encoding: B16@0:8
// Implementation: 0x10b63bd00

// -[SCNMessagingMessageMetadata setIsEditable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bd08

// -[SCNMessagingMessageMetadata botMentionResponseMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b63bd10

// -[SCNMessagingMessageMetadata setBotMentionResponseMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bd18

// -[SCNMessagingMessageMetadata snapPostOpenViewingState]
// Type encoding: @16@0:8
// Implementation: 0x10b63bd38

// -[SCNMessagingMessageMetadata setSnapPostOpenViewingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bd40

// -[SCNMessagingMessageMetadata replayedByUsers]
// Type encoding: @16@0:8
// Implementation: 0x10b63bd60

// -[SCNMessagingMessageMetadata setReplayedByUsers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bd68

// -[SCNMessagingMessageMetadata bundleMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b63bd70

// -[SCNMessagingMessageMetadata setBundleMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bd78

// -[SCNMessagingMessageMetadata savePolicy]
// Type encoding: q16@0:8
// Implementation: 0x10b63bd98

// -[SCNMessagingMessageMetadata setSavePolicy:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63bda0

// -[SCNMessagingMessageMetadata streamingResponseMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b63bda8

// -[SCNMessagingMessageMetadata setStreamingResponseMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bdb0

// -[SCNMessagingMessageMetadata isPriorityChatNotificationEligible]
// Type encoding: B16@0:8
// Implementation: 0x10b63bdd0

// -[SCNMessagingMessageMetadata setIsPriorityChatNotificationEligible:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bdd8

// -[SCNMessagingMessageMetadata didSendPriorityChatNotification]
// Type encoding: B16@0:8
// Implementation: 0x10b63bde0

// -[SCNMessagingMessageMetadata setDidSendPriorityChatNotification:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b63bde8

// -[SCNMessagingMessageMetadata pollMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b63bdf0

// -[SCNMessagingMessageMetadata setPollMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63bdf8

// -[SCNMessagingMessageMetadata .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63be18

@end
