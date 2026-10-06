// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingFeedEntry
// Superclass: NSObject
// Address: 0x112c7fa28

@interface SCNMessagingFeedEntry

// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: lastEventUpdateTimestamp; attributes: Tq,N,V_lastEventUpdateTimestamp
// Property: participants; attributes: T@"NSArray",C,N,V_participants
// Property: conversationTitle; attributes: T@"NSString",C,N,V_conversationTitle
// Property: conversationType; attributes: Tq,N,V_conversationType
// Property: conversationSubType; attributes: T@"NSNumber",&,N,V_conversationSubType
// Property: displayInfo; attributes: T@"SCNMessagingFeedEntryDisplayInfo",&,N,V_displayInfo
// Property: interactionInfo; attributes: T@"SCNMessagingInteractionInfo",&,N,V_interactionInfo
// Property: streakMetadata; attributes: T@"SCNMessagingStreakMetadata",&,N,V_streakMetadata
// Property: notificationSettings; attributes: T@"SCNMessagingNotificationSettings",&,N,V_notificationSettings
// Property: pinnedTimestampMs; attributes: T@"NSNumber",&,N,V_pinnedTimestampMs
// Property: categoryType; attributes: Tq,N,V_categoryType
// Property: categoryId; attributes: T@"SCNMessagingUUID",&,N,V_categoryId
// Property: sequenceId; attributes: T@"NSNumber",&,N,V_sequenceId
// Property: conversationSubTypeMetadata; attributes: T@"SCNMessagingConversationSubTypeMetadata",&,N,V_conversationSubTypeMetadata
// Property: conversationInvitationMetadata; attributes: T@"SCNMessagingConversationInvitationMetadata",&,N,V_conversationInvitationMetadata

// -[SCNMessagingFeedEntry initWithConversationId:lastEventUpdateTimestamp:participants:conversationTitle:conversationType:conversationSubType:displayInfo:interactionInfo:streakMetadata:notificationSettings:pinnedTimestampMs:categoryType:categoryId:sequenceId:conversationSubTypeMetadata:conversationInvitationMetadata:]
// Type encoding: @144@0:8@16q24@32@40q48@56@64@72@80@88@96q104@112@120@128@136
// Implementation: 0x1006a9334

// -[SCNMessagingFeedEntry initWithConversationId:lastEventUpdateTimestamp:participants:conversationType:displayInfo:interactionInfo:notificationSettings:categoryType:]
// Type encoding: @80@0:8@16q24@32q40@48@56@64q72
// Implementation: 0x10b638378

// -[SCNMessagingFeedEntry conversationId]
// Type encoding: @16@0:8
// Implementation: 0x1006bc848

// -[SCNMessagingFeedEntry setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6383bc

// -[SCNMessagingFeedEntry lastEventUpdateTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x1006b11e8

// -[SCNMessagingFeedEntry setLastEventUpdateTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6383dc

// -[SCNMessagingFeedEntry participants]
// Type encoding: @16@0:8
// Implementation: 0x100bc264c

// -[SCNMessagingFeedEntry setParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6383e4

// -[SCNMessagingFeedEntry conversationTitle]
// Type encoding: @16@0:8
// Implementation: 0x10b6383ec

// -[SCNMessagingFeedEntry setConversationTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6383f4

// -[SCNMessagingFeedEntry conversationType]
// Type encoding: q16@0:8
// Implementation: 0x1006bd2a4

// -[SCNMessagingFeedEntry setConversationType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6383fc

// -[SCNMessagingFeedEntry conversationSubType]
// Type encoding: @16@0:8
// Implementation: 0x10b638404

// -[SCNMessagingFeedEntry setConversationSubType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63840c

// -[SCNMessagingFeedEntry displayInfo]
// Type encoding: @16@0:8
// Implementation: 0x100bc47cc

// -[SCNMessagingFeedEntry setDisplayInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63842c

// -[SCNMessagingFeedEntry interactionInfo]
// Type encoding: @16@0:8
// Implementation: 0x100bc47d4

// -[SCNMessagingFeedEntry setInteractionInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63844c

// -[SCNMessagingFeedEntry streakMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100bc4a64

// -[SCNMessagingFeedEntry setStreakMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63846c

// -[SCNMessagingFeedEntry notificationSettings]
// Type encoding: @16@0:8
// Implementation: 0x100bc4c5c

// -[SCNMessagingFeedEntry setNotificationSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63848c

// -[SCNMessagingFeedEntry pinnedTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x10b6384ac

// -[SCNMessagingFeedEntry setPinnedTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6384b4

// -[SCNMessagingFeedEntry categoryType]
// Type encoding: q16@0:8
// Implementation: 0x10b6384d4

// -[SCNMessagingFeedEntry setCategoryType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6384dc

// -[SCNMessagingFeedEntry categoryId]
// Type encoding: @16@0:8
// Implementation: 0x10b6384e4

// -[SCNMessagingFeedEntry setCategoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6384ec

// -[SCNMessagingFeedEntry sequenceId]
// Type encoding: @16@0:8
// Implementation: 0x1006bc840

// -[SCNMessagingFeedEntry setSequenceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63850c

// -[SCNMessagingFeedEntry conversationSubTypeMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100bc4e54

// -[SCNMessagingFeedEntry setConversationSubTypeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63852c

// -[SCNMessagingFeedEntry conversationInvitationMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100bc4a6c

// -[SCNMessagingFeedEntry setConversationInvitationMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63854c

// -[SCNMessagingFeedEntry .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63856c

@end
