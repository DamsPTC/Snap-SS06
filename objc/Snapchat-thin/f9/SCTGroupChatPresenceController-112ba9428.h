// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTGroupChatPresenceController
// Superclass: SCTChatPresenceController
// Address: 0x112ba9428

@interface SCTGroupChatPresenceController


// -[SCTGroupChatPresenceController initWithParticipants:avatarServices:chatServices:talkUIController:plusFeatureLogger:peekAPeekEnabled:presenceRenderGrapheneLogger:]
// Type encoding: @68@0:8@16@24@32@40@48B56@60
// Implementation: 0x1085c7fb0

// -[SCTGroupChatPresenceController _initView]
// Type encoding: v16@0:8
// Implementation: 0x1085c8260

// -[SCTGroupChatPresenceController _createPillView]
// Type encoding: @16@0:8
// Implementation: 0x1085c8578

// -[SCTGroupChatPresenceController _presenceAnimationForRemoteParticipantStates:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c8594

// -[SCTGroupChatPresenceController _getPeekingPillHeight]
// Type encoding: d16@0:8
// Implementation: 0x1085c91dc

// -[SCTGroupChatPresenceController _getPeekingParticipant:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085c9268

// -[SCTGroupChatPresenceController _getOrCreatePeekingParticipant:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085c92dc

// -[SCTGroupChatPresenceController _animatePeekingUpdate:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c9724

// -[SCTGroupChatPresenceController _logPeekingEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085c9918

// -[SCTGroupChatPresenceController _startPeeking:tasks:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085c99b8

// -[SCTGroupChatPresenceController _stopPeekingForParticipant:tasks:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085c9b80

// -[SCTGroupChatPresenceController _pillForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085c9ca8

// -[SCTGroupChatPresenceController _orderedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x1085c9cb8

// -[SCTGroupChatPresenceController presenceBar:pointInside:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x1085c9cd8

// -[SCTGroupChatPresenceController _animateAvatarUpdateForParticipants:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c9f74

// -[SCTGroupChatPresenceController _animatePresenceChangeWithOrderChanged:previousOrder:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1085ca168

// -[SCTGroupChatPresenceController _createDragContextWithPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x1085cafe8

// -[SCTGroupChatPresenceController _processDragMove]
// Type encoding: v16@0:8
// Implementation: 0x1085cb020

// -[SCTGroupChatPresenceController _processDragEndWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085cb160

// -[SCTGroupChatPresenceController _tallestPillHeightForState:]
// Type encoding: d24@0:8@16
// Implementation: 0x1085cb390

// -[SCTGroupChatPresenceController _updateParticipantsWithRemoteParticipantStates:remoteStateDictionaryKeyedByUserId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085cb4f0

// -[SCTGroupChatPresenceController _updateBottomConstraintOfPills]
// Type encoding: v16@0:8
// Implementation: 0x1085cba74

// -[SCTGroupChatPresenceController _updateLeftConstraintOfPills]
// Type encoding: v16@0:8
// Implementation: 0x1085cbb98

// -[SCTGroupChatPresenceController _reorderingAnimationforParticipants:withPreviousOrder:]
// Type encoding: @?32@0:8@16@24
// Implementation: 0x1085cbde4

// -[SCTGroupChatPresenceController _getLeftOffsetForParticipants:withPreviousOrder:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1085cc0b0

// -[SCTGroupChatPresenceController _setupPillConstraintsToFinalOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085cc2a0

// -[SCTGroupChatPresenceController _setupPillConstraintsForSlideDownAnimation:withPreviousOrder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1085cc3e0

// -[SCTGroupChatPresenceController _removeVerticalPillConstraintsForParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085cc788

// -[SCTGroupChatPresenceController _reorderPills]
// Type encoding: v16@0:8
// Implementation: 0x1085cca88

// -[SCTGroupChatPresenceController _updateScrollViewContentSize]
// Type encoding: v16@0:8
// Implementation: 0x1085ccaac

// -[SCTGroupChatPresenceController _updateBottomConstraintOfPill:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085ccbf0

// -[SCTGroupChatPresenceController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085ccdc4

// +[SCTGroupChatPresenceController _pillLabelsForParticipantStates:]
// Type encoding: @24@0:8@16
// Implementation: 0x1085ccc50

@end
