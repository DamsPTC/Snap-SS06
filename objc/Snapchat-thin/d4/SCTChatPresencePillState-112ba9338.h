// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTChatPresencePillState
// Superclass: NSObject
// Address: 0x112ba9338

@interface SCTChatPresencePillState

// Property: selected; attributes: TB,R,N,V_selected
// Property: typingState; attributes: TQ,R,N,V_typingState
// Property: isTypingOrPaused; attributes: TB,R,N
// Property: platform; attributes: Tq,R,N,V_platform
// Property: usingReplyCamera; attributes: TB,R,N,GisUsingReplyCamera,V_usingReplyCamera
// Property: viewingChatMedia; attributes: TB,R,N,GisViewingChatMedia,V_viewingChatMedia
// Property: inGame; attributes: TB,R,N,GisInGame,V_inGame
// Property: actionPose; attributes: TB,R,N,GisActionPose
// Property: birthdayVariant; attributes: TQ,R,N,V_birthdayVariant
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTChatPresencePillState initWithPlatform:selected:typingState:usingReplyCamera:viewingChatMedia:inGame:birthdayVariant:]
// Type encoding: @56@0:8q16B24Q28B36B40B44Q48
// Implementation: 0x1085c14fc

// -[SCTChatPresencePillState isTypingOrPaused]
// Type encoding: B16@0:8
// Implementation: 0x1085c15f8

// -[SCTChatPresencePillState isActionPose]
// Type encoding: B16@0:8
// Implementation: 0x1085c1630

// -[SCTChatPresencePillState stateByReplacingSelected:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085c1640

// -[SCTChatPresencePillState stateByReplacingPlatform:]
// Type encoding: @24@0:8q16
// Implementation: 0x1085c1684

// -[SCTChatPresencePillState stateByReplacingTypingState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1085c16e0

// -[SCTChatPresencePillState stateByReplacingPresenceState:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085c1724

// -[SCTChatPresencePillState isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085c17f4

// -[SCTChatPresencePillState hash]
// Type encoding: Q16@0:8
// Implementation: 0x1085c18a8

// -[SCTChatPresencePillState selected]
// Type encoding: B16@0:8
// Implementation: 0x1085c1924

// -[SCTChatPresencePillState typingState]
// Type encoding: Q16@0:8
// Implementation: 0x1085c192c

// -[SCTChatPresencePillState platform]
// Type encoding: q16@0:8
// Implementation: 0x1085c1934

// -[SCTChatPresencePillState isUsingReplyCamera]
// Type encoding: B16@0:8
// Implementation: 0x1085c193c

// -[SCTChatPresencePillState isViewingChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x1085c1944

// -[SCTChatPresencePillState isInGame]
// Type encoding: B16@0:8
// Implementation: 0x1085c194c

// -[SCTChatPresencePillState birthdayVariant]
// Type encoding: Q16@0:8
// Implementation: 0x1085c1954

// +[SCTChatPresencePillState stateWithPlatform:selected:typingState:usingReplyCamera:viewingChatMedia:inGame:birthdayVariant:]
// Type encoding: @56@0:8q16B24Q28B36B40B44Q48
// Implementation: 0x1085c1580

@end
