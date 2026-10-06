// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingGroup
// Superclass: NSObject
// Address: 0x112c7fde8

@interface SCNMessagingGroup

// Property: groupId; attributes: T@"SCNMessagingUUID",&,N,V_groupId
// Property: name; attributes: T@"NSString",C,N,V_name
// Property: participants; attributes: T@"NSArray",C,N,V_participants
// Property: lastInteractionTimestampMs; attributes: Tq,N,V_lastInteractionTimestampMs
// Property: pinnedTimestampMs; attributes: T@"NSNumber",&,N,V_pinnedTimestampMs
// Property: type; attributes: Tq,N,V_type
// Property: publicGroupMetadata; attributes: T@"SCNMessagingPublicGroupConversationMetadata",&,N,V_publicGroupMetadata

// -[SCNMessagingGroup initWithGroupId:name:participants:lastInteractionTimestampMs:pinnedTimestampMs:type:publicGroupMetadata:]
// Type encoding: @72@0:8@16@24@32q40@48q56@64
// Implementation: 0x10b6393c8

// -[SCNMessagingGroup initWithGroupId:participants:lastInteractionTimestampMs:type:]
// Type encoding: @48@0:8@16@24q32q40
// Implementation: 0x10b63955c

// -[SCNMessagingGroup groupId]
// Type encoding: @16@0:8
// Implementation: 0x10b639590

// -[SCNMessagingGroup setGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639598

// -[SCNMessagingGroup name]
// Type encoding: @16@0:8
// Implementation: 0x10b6395b8

// -[SCNMessagingGroup setName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6395c0

// -[SCNMessagingGroup participants]
// Type encoding: @16@0:8
// Implementation: 0x10b6395c8

// -[SCNMessagingGroup setParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6395d0

// -[SCNMessagingGroup lastInteractionTimestampMs]
// Type encoding: q16@0:8
// Implementation: 0x10b6395d8

// -[SCNMessagingGroup setLastInteractionTimestampMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b6395e0

// -[SCNMessagingGroup pinnedTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x10b6395e8

// -[SCNMessagingGroup setPinnedTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b6395f0

// -[SCNMessagingGroup type]
// Type encoding: q16@0:8
// Implementation: 0x10b639610

// -[SCNMessagingGroup setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b639618

// -[SCNMessagingGroup publicGroupMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b639620

// -[SCNMessagingGroup setPublicGroupMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639628

// -[SCNMessagingGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b639648

@end
