// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTPresenceParticipant
// Superclass: NSObject
// Address: 0x112ba96f8

@interface SCTPresenceParticipant

// Property: username; attributes: T@"NSString",R,N,V_username
// Property: userId; attributes: T@"NSString",R,N,V_userId
// Property: displayName; attributes: T@"NSString",R,N,V_displayName
// Property: uniqueLabel; attributes: T@"NSString",R,N,V_uniqueLabel
// Property: presenceColor; attributes: T@"UIColor",R,N,V_presenceColor
// Property: bitmojiAvatarId; attributes: T@"NSString",R,N,V_bitmojiAvatarId
// Property: selected; attributes: TB,R,N,V_selected
// Property: hasBitmoji; attributes: TB,R,N
// Property: isFetchingBitmoji; attributes: TB,R,N
// Property: petImageURL; attributes: T@"NSURL",R,N,V_petImageURL
// Property: typingBubbleOnly; attributes: TB,R,N,V_typingBubbleOnly
// Property: presenceBitmoji; attributes: T@"<SCTPresenceBitmoji>",R,N,V_presenceBitmoji
// Property: bitmojiFetchState; attributes: Tq,R,N,V_bitmojiFetchState

// -[SCTPresenceParticipant initWithUsername:userId:displayName:uniqueLabel:presenceColor:bitmojiAvatarId:petImageURL:isAiChatbot:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x1085d6e98

// -[SCTPresenceParticipant updateUniqueLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d7038

// -[SCTPresenceParticipant updatePrecenceColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085d7068

// -[SCTPresenceParticipant updateSelection:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085d70b4

// -[SCTPresenceParticipant updateBitmojiFetchState:presenceBitmoji:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1085d70c8

// -[SCTPresenceParticipant hasBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x1085d7130

// -[SCTPresenceParticipant isFetchingBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x1085d7164

// -[SCTPresenceParticipant username]
// Type encoding: @16@0:8
// Implementation: 0x1085d7180

// -[SCTPresenceParticipant userId]
// Type encoding: @16@0:8
// Implementation: 0x1085d7188

// -[SCTPresenceParticipant displayName]
// Type encoding: @16@0:8
// Implementation: 0x1085d7190

// -[SCTPresenceParticipant uniqueLabel]
// Type encoding: @16@0:8
// Implementation: 0x1085d7198

// -[SCTPresenceParticipant presenceColor]
// Type encoding: @16@0:8
// Implementation: 0x1085d71a0

// -[SCTPresenceParticipant bitmojiAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x1085d71a8

// -[SCTPresenceParticipant selected]
// Type encoding: B16@0:8
// Implementation: 0x1085d71b0

// -[SCTPresenceParticipant petImageURL]
// Type encoding: @16@0:8
// Implementation: 0x1085d71b8

// -[SCTPresenceParticipant typingBubbleOnly]
// Type encoding: B16@0:8
// Implementation: 0x1085d71c0

// -[SCTPresenceParticipant presenceBitmoji]
// Type encoding: @16@0:8
// Implementation: 0x1085d71c8

// -[SCTPresenceParticipant bitmojiFetchState]
// Type encoding: q16@0:8
// Implementation: 0x1085d71d0

// -[SCTPresenceParticipant .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085d71d8

@end
