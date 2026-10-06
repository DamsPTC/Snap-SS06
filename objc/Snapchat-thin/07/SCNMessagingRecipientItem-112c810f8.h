// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingRecipientItem
// Superclass: NSObject
// Address: 0x112c810f8

@interface SCNMessagingRecipientItem

// Property: conversationId; attributes: T@"SCNMessagingUUID",&,N,V_conversationId
// Property: lastEventUpdateTimestamp; attributes: Tq,N,V_lastEventUpdateTimestamp
// Property: maybeRepliableSnapHasAudio; attributes: T@"NSNumber",&,N,V_maybeRepliableSnapHasAudio
// Property: recipientInfo; attributes: T@"SCNMessagingRecipientInfo",&,N,V_recipientInfo
// Property: pinnedTimestampMs; attributes: T@"NSNumber",&,N,V_pinnedTimestampMs
// Property: conversationSubType; attributes: T@"NSNumber",&,N,V_conversationSubType

// -[SCNMessagingRecipientItem initWithConversationId:lastEventUpdateTimestamp:maybeRepliableSnapHasAudio:recipientInfo:pinnedTimestampMs:conversationSubType:]
// Type encoding: @64@0:8@16q24@32@40@48@56
// Implementation: 0x10b63fb1c

// -[SCNMessagingRecipientItem initWithConversationId:lastEventUpdateTimestamp:recipientInfo:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x10b63fc84

// -[SCNMessagingRecipientItem conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b63fc98

// -[SCNMessagingRecipientItem setConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63fca0

// -[SCNMessagingRecipientItem lastEventUpdateTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b63fcc0

// -[SCNMessagingRecipientItem setLastEventUpdateTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b63fcc8

// -[SCNMessagingRecipientItem maybeRepliableSnapHasAudio]
// Type encoding: @16@0:8
// Implementation: 0x10b63fcd0

// -[SCNMessagingRecipientItem setMaybeRepliableSnapHasAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63fcd8

// -[SCNMessagingRecipientItem recipientInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b63fcf8

// -[SCNMessagingRecipientItem setRecipientInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63fd00

// -[SCNMessagingRecipientItem pinnedTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x10b63fd20

// -[SCNMessagingRecipientItem setPinnedTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63fd28

// -[SCNMessagingRecipientItem conversationSubType]
// Type encoding: @16@0:8
// Implementation: 0x10b63fd48

// -[SCNMessagingRecipientItem setConversationSubType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b63fd50

// -[SCNMessagingRecipientItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b63fd70

@end
