// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCall
// Superclass: NSObject
// Address: 0x112c66cf8

@interface SCCall

// Property: conversationId; attributes: T@"NSString",R,C,N,V_conversationId
// Property: localParticipation; attributes: TQ,R,N,V_localParticipation
// Property: callMedia; attributes: TQ,R,N,V_callMedia
// Property: publishedMedia; attributes: TQ,R,N,V_publishedMedia
// Property: isMuted; attributes: TB,R,N,V_isMuted
// Property: remoteParticipants; attributes: T@"NSArray",R,C,N,V_remoteParticipants
// Property: caller; attributes: T@"SCCallParticipant",R,C,N,V_caller

// -[SCCall initWithConversationId:localParticipation:callMedia:publishedMedia:isMuted:remoteParticipants:caller:]
// Type encoding: @68@0:8@16Q24Q32Q40B48@52@60
// Implementation: 0x10b087b3c

// -[SCCall copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b087c40

// -[SCCall hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b087c64

// -[SCCall isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b087cf4

// -[SCCall conversationId]
// Type encoding: @16@0:8
// Implementation: 0x10b087df4

// -[SCCall localParticipation]
// Type encoding: Q16@0:8
// Implementation: 0x10b087dfc

// -[SCCall callMedia]
// Type encoding: Q16@0:8
// Implementation: 0x10b087e04

// -[SCCall publishedMedia]
// Type encoding: Q16@0:8
// Implementation: 0x10b087e0c

// -[SCCall isMuted]
// Type encoding: B16@0:8
// Implementation: 0x10b087e14

// -[SCCall remoteParticipants]
// Type encoding: @16@0:8
// Implementation: 0x10b087e1c

// -[SCCall caller]
// Type encoding: @16@0:8
// Implementation: 0x10b087e24

// -[SCCall .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b087e2c

@end
