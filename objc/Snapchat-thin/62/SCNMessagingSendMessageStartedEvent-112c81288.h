// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingSendMessageStartedEvent
// Superclass: NSObject
// Address: 0x112c81288

@interface SCNMessagingSendMessageStartedEvent

// Property: content; attributes: T@"SCNMessagingLocalMessageContent",&,N,V_content
// Property: userActionTimestamp; attributes: Tq,N,V_userActionTimestamp
// Property: sendMessageAttemptType; attributes: Tq,N,V_sendMessageAttemptType
// Property: userActionId; attributes: T@"SCNMessagingUUID",&,N,V_userActionId
// Property: inBackground; attributes: T@"NSNumber",&,N,V_inBackground

// -[SCNMessagingSendMessageStartedEvent initWithContent:userActionTimestamp:sendMessageAttemptType:userActionId:inBackground:]
// Type encoding: @56@0:8@16q24q32@40@48
// Implementation: 0x10b640d00

// -[SCNMessagingSendMessageStartedEvent initWithContent:userActionTimestamp:sendMessageAttemptType:userActionId:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x10b640e04

// -[SCNMessagingSendMessageStartedEvent content]
// Type encoding: @16@0:8
// Implementation: 0x10b640e0c

// -[SCNMessagingSendMessageStartedEvent setContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640e14

// -[SCNMessagingSendMessageStartedEvent userActionTimestamp]
// Type encoding: q16@0:8
// Implementation: 0x10b640e34

// -[SCNMessagingSendMessageStartedEvent setUserActionTimestamp:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b640e3c

// -[SCNMessagingSendMessageStartedEvent sendMessageAttemptType]
// Type encoding: q16@0:8
// Implementation: 0x10b640e44

// -[SCNMessagingSendMessageStartedEvent setSendMessageAttemptType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b640e4c

// -[SCNMessagingSendMessageStartedEvent userActionId]
// Type encoding: @16@0:8
// Implementation: 0x10b640e54

// -[SCNMessagingSendMessageStartedEvent setUserActionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640e5c

// -[SCNMessagingSendMessageStartedEvent inBackground]
// Type encoding: @16@0:8
// Implementation: 0x10b640e7c

// -[SCNMessagingSendMessageStartedEvent setInBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b640e84

// -[SCNMessagingSendMessageStartedEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b640ea4

@end
