// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTDirectChatPresenceController
// Superclass: SCTChatPresenceController
// Address: 0x112ba9388

@interface SCTDirectChatPresenceController


// -[SCTDirectChatPresenceController initWithParticipants:avatarServices:chatServices:talkUIController:plusFeatureLogger:peekAPeekEnabled:presenceRenderGrapheneLogger:]
// Type encoding: @68@0:8@16@24@32@40@48B56@60
// Implementation: 0x1085c195c

// -[SCTDirectChatPresenceController _initView]
// Type encoding: v16@0:8
// Implementation: 0x1085c1c50

// -[SCTDirectChatPresenceController _createPillView]
// Type encoding: @16@0:8
// Implementation: 0x1085c2228

// -[SCTDirectChatPresenceController _presenceAnimationForRemoteParticipantStates:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c2244

// -[SCTDirectChatPresenceController _animatePeekingParticipant:toPeekingState:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1085c2ab8

// -[SCTDirectChatPresenceController _animateParticipant:toPillState:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1085c2c48

// -[SCTDirectChatPresenceController _pillForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085c30a4

// -[SCTDirectChatPresenceController _orderedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x1085c3174

// -[SCTDirectChatPresenceController presenceBar:pointInside:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x1085c31b4

// -[SCTDirectChatPresenceController _createDragContextWithPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x1085c32f4

// -[SCTDirectChatPresenceController _processDragMove]
// Type encoding: v16@0:8
// Implementation: 0x1085c3368

// -[SCTDirectChatPresenceController _processDragEndWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085c3408

// -[SCTDirectChatPresenceController _createParticipantWithState:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085c35a0

// -[SCTDirectChatPresenceController _setInitialStateForParticipant:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085c363c

// -[SCTDirectChatPresenceController _updateInjectedBotLeftConstraint:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085c3794

// -[SCTDirectChatPresenceController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085c3874

@end
