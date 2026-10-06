// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingGroupRecipient
// Superclass: NSObject
// Address: 0x112c7ff28

@interface SCNMessagingGroupRecipient

// Property: displayName; attributes: T@"NSString",C,N,V_displayName
// Property: participantInfo; attributes: T@"SCNMessagingGroupParticipantStringInfo",&,N,V_participantInfo
// Property: topGroupRank; attributes: T@"NSNumber",&,N,V_topGroupRank
// Property: feedType; attributes: Tq,N,V_feedType

// -[SCNMessagingGroupRecipient initWithDisplayName:participantInfo:topGroupRank:feedType:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x10b6399e0

// -[SCNMessagingGroupRecipient initWithParticipantInfo:feedType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10b639af4

// -[SCNMessagingGroupRecipient displayName]
// Type encoding: @16@0:8
// Implementation: 0x10b639b08

// -[SCNMessagingGroupRecipient setDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639b10

// -[SCNMessagingGroupRecipient participantInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b639b18

// -[SCNMessagingGroupRecipient setParticipantInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639b20

// -[SCNMessagingGroupRecipient topGroupRank]
// Type encoding: @16@0:8
// Implementation: 0x10b639b44

// -[SCNMessagingGroupRecipient setTopGroupRank:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b639b4c

// -[SCNMessagingGroupRecipient feedType]
// Type encoding: q16@0:8
// Implementation: 0x10b639b70

// -[SCNMessagingGroupRecipient setFeedType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b639b78

// -[SCNMessagingGroupRecipient .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b639b80

@end
