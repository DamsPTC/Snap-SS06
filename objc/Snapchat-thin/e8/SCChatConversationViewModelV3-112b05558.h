// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatConversationViewModelV3
// Superclass: NSObject
// Address: 0x112b05558

@interface SCChatConversationViewModelV3

// Property: lastCommitedMessageId; attributes: T@"NSNumber",R,N,V_lastCommitedMessageId
// Property: hasUnreadMessages; attributes: TB,R,N,V_hasUnreadMessages
// Property: hasUnreadUnopenedMessages; attributes: TB,R,N,V_hasUnreadUnopenedMessages
// Property: feedViewedReadUpToMessageId; attributes: T@"NSString",R,C,N,V_feedViewedReadUpToMessageId
// Property: heightOfContentBelowTheFold; attributes: Td,R,N,V_heightOfContentBelowTheFold
// Property: isInitialLoad; attributes: TB,R,N,V_isInitialLoad
// Property: loggingInfo; attributes: T@"SCChatConversationLoggingViewModel",R,N,V_loggingInfo
// Property: firstBelowTheFoldIndexPath; attributes: T@"NSIndexPath",R,N,V_firstBelowTheFoldIndexPath
// Property: firstUnseenIndexPath; attributes: T@"NSIndexPath",R,N,V_firstUnseenIndexPath
// Property: belowTheFoldOffset; attributes: Td,R,N,V_belowTheFoldOffset
// Property: tableHeight; attributes: Td,R,N,V_tableHeight
// Property: messageViewModels; attributes: T@"NSArray",R,N,V_messageViewModels
// Property: isGroupConversation; attributes: TB,R,N,V_isGroupConversation
// Property: cursorColor; attributes: T@"UIColor",R,N,V_cursorColor
// Property: group; attributes: T@"<SCChatGroup>",R,N,V_group
// Property: messageRetentionInMinutes; attributes: TQ,R,N,V_messageRetentionInMinutes
// Property: chatViewHeaderViewModel; attributes: T@"SCChatViewHeaderViewModel",R,N,V_chatViewHeaderViewModel
// Property: chatDisabledInputFooterViewModel; attributes: T@"SCChatDisabledInputFooterViewModel",R,N,V_chatDisabledInputFooterViewModel
// Property: displayName; attributes: T@"NSString",R,N,V_displayName
// Property: reactionMetadata; attributes: T@"SCChatConversationReactionMetadata",R,N,V_reactionMetadata
// Property: currentUserSnapchatter; attributes: T@"SCSnapchatter",R,N,V_currentUserSnapchatter
// Property: recipientSnapchatter; attributes: T@"SCSnapchatter",R,N,V_recipientSnapchatter
// Property: latestReceivedReactionSeenId; attributes: T@"NSNumber",R,N,V_latestReceivedReactionSeenId
// Property: isNonFriendConversation; attributes: TB,R,N,V_isNonFriendConversation
// Property: conversationSubtype; attributes: Tq,R,N,V_conversationSubtype
// Property: isEligibleForAnchorAboveInputBar; attributes: TB,R,N,V_isEligibleForAnchorAboveInputBar
// Property: hasMessageFromCurrentUser; attributes: TB,R,N,V_hasMessageFromCurrentUser
// Property: hasMerlinMentionResponse; attributes: TB,R,N,V_hasMerlinMentionResponse
// Property: isLockedConversation; attributes: TB,R,N,V_isLockedConversation
// Property: isAckedLockedConversation; attributes: TB,R,N,V_isAckedLockedConversation
// Property: hasChatWallpaper; attributes: TB,R,N,V_hasChatWallpaper
// Property: expiredStreakMetadata; attributes: T@"SCNMessagingExpiredStreakMetadata",R,N,V_expiredStreakMetadata
// Property: convoCreatedAtMs; attributes: T@"NSNumber",R,N,V_convoCreatedAtMs
// Property: initialMutualFriendCount; attributes: T@"NSNumber",R,N,V_initialMutualFriendCount
// Property: conversationSubtypeMetadata; attributes: T@"SCChatConversationSubtypeMetadata",R,N,V_conversationSubtypeMetadata
// Property: debugConversation; attributes: T@"<SCConversation>",R,N,V_debugConversation
// Property: snapshot; attributes: T@"SCChatArroyoConversationSnapshot",R,N,V_snapshot
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatConversationViewModelV3 initWithConversation:group:earlierContentExists:chatViewHeaderViewModel:messageViewModels:reactionMetadata:verticalLayoutProperties:activeChatMetadata:currentUserSnapchatter:recipientSnapchatter:userId:displayName:snapshot:isNonFriendConversation:isLockedConversation:groupsCustomColorsFetcher:campaignAdResponse:isEligibleForAnchorAboveInputBar:openChatToFirstUnreadEligible:]
// Type encoding: @148@0:8@16@24B32@36@44@52@60@68@76@84@92@100@108B116B120@124@132B140B144
// Implementation: 0x1068f5320

// -[SCChatConversationViewModelV3 initLoadingViewModelWithConversationId:loadingSpinnerViewModel:group:isGroup:recipientSnapchatter:recipientUsername:recipientUserId:cursorColor:verticalLayoutProperies:isLockedConversation:isInitialLoad:]
// Type encoding: @92@0:8@16@24@32B40@44@52@60@68@76B84B88
// Implementation: 0x1068f6700

// -[SCChatConversationViewModelV3 conversationId]
// Type encoding: @16@0:8
// Implementation: 0x1068f6bac

// -[SCChatConversationViewModelV3 indexPathForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068f6bd4

// -[SCChatConversationViewModelV3 viewModelAtIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068f6d6c

// -[SCChatConversationViewModelV3 lastIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x1068f6df4

// -[SCChatConversationViewModelV3 canLoadMoreMessagesByRetrying:]
// Type encoding: B20@0:8B16
// Implementation: 0x1068f6e28

// -[SCChatConversationViewModelV3 recipientUsername]
// Type encoding: @16@0:8
// Implementation: 0x1068f6e30

// -[SCChatConversationViewModelV3 recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x1068f6e58

// -[SCChatConversationViewModelV3 messageTrackingIds]
// Type encoding: @16@0:8
// Implementation: 0x1068f6e80

// -[SCChatConversationViewModelV3 firstBelowTheFoldIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x1068f6ed8

// -[SCChatConversationViewModelV3 firstUnseenIndexPath]
// Type encoding: @16@0:8
// Implementation: 0x1068f6ee0

// -[SCChatConversationViewModelV3 belowTheFoldOffset]
// Type encoding: d16@0:8
// Implementation: 0x1068f6ee8

// -[SCChatConversationViewModelV3 messageViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1068f6ef0

// -[SCChatConversationViewModelV3 tableHeight]
// Type encoding: d16@0:8
// Implementation: 0x1068f6ef8

// -[SCChatConversationViewModelV3 heightOfContentBelowTheFold]
// Type encoding: d16@0:8
// Implementation: 0x1068f6f00

// -[SCChatConversationViewModelV3 isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x1068f6f08

// -[SCChatConversationViewModelV3 cursorColor]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f10

// -[SCChatConversationViewModelV3 group]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f18

// -[SCChatConversationViewModelV3 chatViewHeaderViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f20

// -[SCChatConversationViewModelV3 chatDisabledInputFooterViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f28

// -[SCChatConversationViewModelV3 conversationSubtypeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f30

// -[SCChatConversationViewModelV3 messageRetentionInMinutes]
// Type encoding: Q16@0:8
// Implementation: 0x1068f6f38

// -[SCChatConversationViewModelV3 displayName]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f40

// -[SCChatConversationViewModelV3 debugConversation]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f48

// -[SCChatConversationViewModelV3 snapshot]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f50

// -[SCChatConversationViewModelV3 loggingInfo]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f58

// -[SCChatConversationViewModelV3 reactionMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f60

// -[SCChatConversationViewModelV3 currentUserSnapchatter]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f68

// -[SCChatConversationViewModelV3 recipientSnapchatter]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f70

// -[SCChatConversationViewModelV3 latestReceivedReactionSeenId]
// Type encoding: @16@0:8
// Implementation: 0x1068f6f78

// -[SCChatConversationViewModelV3 isNonFriendConversation]
// Type encoding: B16@0:8
// Implementation: 0x1068f6f80

// -[SCChatConversationViewModelV3 conversationSubtype]
// Type encoding: q16@0:8
// Implementation: 0x1068f6f88

// -[SCChatConversationViewModelV3 isEligibleForAnchorAboveInputBar]
// Type encoding: B16@0:8
// Implementation: 0x1068f6f90

// -[SCChatConversationViewModelV3 hasMessageFromCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x1068f6f98

// -[SCChatConversationViewModelV3 hasMerlinMentionResponse]
// Type encoding: B16@0:8
// Implementation: 0x1068f6fa0

// -[SCChatConversationViewModelV3 isLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x1068f6fa8

// -[SCChatConversationViewModelV3 isAckedLockedConversation]
// Type encoding: B16@0:8
// Implementation: 0x1068f6fb0

// -[SCChatConversationViewModelV3 hasChatWallpaper]
// Type encoding: B16@0:8
// Implementation: 0x1068f6fb8

// -[SCChatConversationViewModelV3 expiredStreakMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1068f6fc0

// -[SCChatConversationViewModelV3 convoCreatedAtMs]
// Type encoding: @16@0:8
// Implementation: 0x1068f6fc8

// -[SCChatConversationViewModelV3 initialMutualFriendCount]
// Type encoding: @16@0:8
// Implementation: 0x1068f6fd0

// -[SCChatConversationViewModelV3 lastCommitedMessageId]
// Type encoding: @16@0:8
// Implementation: 0x1068f6fd8

// -[SCChatConversationViewModelV3 hasUnreadMessages]
// Type encoding: B16@0:8
// Implementation: 0x1068f6fe0

// -[SCChatConversationViewModelV3 hasUnreadUnopenedMessages]
// Type encoding: B16@0:8
// Implementation: 0x1068f6fe8

// -[SCChatConversationViewModelV3 feedViewedReadUpToMessageId]
// Type encoding: @16@0:8
// Implementation: 0x1068f6ff0

// -[SCChatConversationViewModelV3 isInitialLoad]
// Type encoding: B16@0:8
// Implementation: 0x1068f6ff8

// -[SCChatConversationViewModelV3 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f7000

@end
