// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTChatPresenceParticipant
// Superclass: SCTPresenceParticipant
// Address: 0x112ba91f8

@interface SCTChatPresenceParticipant

// Property: media; attributes: TQ,N,V_media
// Property: typingState; attributes: TQ,N,V_typingState
// Property: platform; attributes: Tq,N,V_platform
// Property: usingReplyCamera; attributes: TB,N,GisUsingReplyCamera,V_usingReplyCamera
// Property: viewingChatMedia; attributes: TB,N,GisViewingChatMedia,V_viewingChatMedia
// Property: inGame; attributes: TB,N,GisInGame,V_inGame
// Property: actionPose; attributes: TB,R,N,GisActionPose
// Property: pill; attributes: T@"SCTChatPresencePill",R,N,V_pill
// Property: birthdayVariant; attributes: TQ,R,N,V_birthdayVariant
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCTChatPresenceParticipant initWithUsername:userId:displayName:uniqueLabel:presenceColor:bitmojiAvatarId:petImageURL:birthdayVariant:isAiChatbot:pill:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64Q72B80@84
// Implementation: 0x1085be5a8

// -[SCTChatPresenceParticipant initWithUsername:displayName:presenceColor:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1085be6b0

// -[SCTChatPresenceParticipant _commonInit]
// Type encoding: v16@0:8
// Implementation: 0x1085be71c

// -[SCTChatPresenceParticipant updateUniqueLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085be738

// -[SCTChatPresenceParticipant isActionPose]
// Type encoding: B16@0:8
// Implementation: 0x1085be788

// -[SCTChatPresenceParticipant updatePresenceState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085be798

// -[SCTChatPresenceParticipant labelTextForPresencePill:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085be84c

// -[SCTChatPresenceParticipant colorForPresencePill:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085be890

// -[SCTChatPresenceParticipant bitmojiForPresencePill:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085be894

// -[SCTChatPresenceParticipant typingBubbleOnlyForPresencePill:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085be898

// -[SCTChatPresenceParticipant media]
// Type encoding: Q16@0:8
// Implementation: 0x1085be89c

// -[SCTChatPresenceParticipant setMedia:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085be8ac

// -[SCTChatPresenceParticipant typingState]
// Type encoding: Q16@0:8
// Implementation: 0x1085be8bc

// -[SCTChatPresenceParticipant setTypingState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1085be8cc

// -[SCTChatPresenceParticipant platform]
// Type encoding: q16@0:8
// Implementation: 0x1085be8dc

// -[SCTChatPresenceParticipant setPlatform:]
// Type encoding: v24@0:8q16
// Implementation: 0x1085be8ec

// -[SCTChatPresenceParticipant isUsingReplyCamera]
// Type encoding: B16@0:8
// Implementation: 0x1085be8fc

// -[SCTChatPresenceParticipant setUsingReplyCamera:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085be90c

// -[SCTChatPresenceParticipant isViewingChatMedia]
// Type encoding: B16@0:8
// Implementation: 0x1085be91c

// -[SCTChatPresenceParticipant setViewingChatMedia:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085be92c

// -[SCTChatPresenceParticipant isInGame]
// Type encoding: B16@0:8
// Implementation: 0x1085be93c

// -[SCTChatPresenceParticipant setInGame:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085be94c

// -[SCTChatPresenceParticipant pill]
// Type encoding: @16@0:8
// Implementation: 0x1085be95c

// -[SCTChatPresenceParticipant birthdayVariant]
// Type encoding: Q16@0:8
// Implementation: 0x1085be96c

// -[SCTChatPresenceParticipant .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085be97c

@end
