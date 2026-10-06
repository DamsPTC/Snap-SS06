// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCTChatPresencePill
// Superclass: SCTPresencePill
// Address: 0x112ba92e8

@interface SCTChatPresencePill

// Property: timeIntervalSinceChatVisibleChange; attributes: Td,R,N
// Property: delegate; attributes: T@"<SCTChatPresencePillDelegate>",W,N,V_delegate
// Property: state; attributes: T@"SCTChatPresencePillState",R,N,V_state
// Property: needsAvatarUpdate; attributes: TB,R,N

// -[SCTChatPresencePill init]
// Type encoding: @16@0:8
// Implementation: 0x1085c0240

// -[SCTChatPresencePill needsAvatarUpdate]
// Type encoding: B16@0:8
// Implementation: 0x1085c02ec

// -[SCTChatPresencePill timeIntervalSinceChatVisibleChange]
// Type encoding: d16@0:8
// Implementation: 0x1085c0370

// -[SCTChatPresencePill updateLabelText]
// Type encoding: v16@0:8
// Implementation: 0x1085c03c0

// -[SCTChatPresencePill animateToState:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c0414

// -[SCTChatPresencePill updateToState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085c0604

// -[SCTChatPresencePill animateAvatarUpdateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1085c0744

// -[SCTChatPresencePill widthForState:]
// Type encoding: d24@0:8@16
// Implementation: 0x1085c07a4

// -[SCTChatPresencePill heightForState:]
// Type encoding: d24@0:8@16
// Implementation: 0x1085c07a8

// -[SCTChatPresencePill isNonBitmojiInActionPose:]
// Type encoding: B24@0:8@16
// Implementation: 0x1085c07ac

// -[SCTChatPresencePill _updateUI]
// Type encoding: v16@0:8
// Implementation: 0x1085c0838

// -[SCTChatPresencePill _animateToState:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c088c

// -[SCTChatPresencePill traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085c08f8

// -[SCTChatPresencePill _updateColors]
// Type encoding: v16@0:8
// Implementation: 0x1085c0940

// -[SCTChatPresencePill _updateTypingIndicator]
// Type encoding: v16@0:8
// Implementation: 0x1085c0994

// -[SCTChatPresencePill _didLoadAvatarView]
// Type encoding: v16@0:8
// Implementation: 0x1085c09e8

// -[SCTChatPresencePill _pillWidthForState:]
// Type encoding: d24@0:8@16
// Implementation: 0x1085c0a3c

// -[SCTChatPresencePill _pillHeightForState:]
// Type encoding: d24@0:8@16
// Implementation: 0x1085c0a9c

// -[SCTChatPresencePill _bitmojiStateForState:]
// Type encoding: {SCTPresenceBitmojiState=dddddddd}24@0:8@16
// Implementation: 0x1085c0afc

// -[SCTChatPresencePill _isChatVisibleEmergenceWithOldState:newState:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1085c0b5c

// -[SCTChatPresencePill _shouldLoadAvatarView]
// Type encoding: B16@0:8
// Implementation: 0x1085c0c00

// -[SCTChatPresencePill _loadBitmojiView]
// Type encoding: v16@0:8
// Implementation: 0x1085c0c84

// -[SCTChatPresencePill setHorizontalStretch:]
// Type encoding: v24@0:8d16
// Implementation: 0x1085c0d14

// -[SCTChatPresencePill _colorForPresenceState:]
// Type encoding: @20@0:8B16
// Implementation: 0x1085c0dd0

// -[SCTChatPresencePill _pillSizeForState:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x1085c0e40

// -[SCTChatPresencePill _animateBitmojiToTypingState:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c0ea0

// -[SCTChatPresencePill configBitmojiBodyStyleByState:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085c11b0

// -[SCTChatPresencePill animateBitmojiToState:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1085c12c8

// -[SCTChatPresencePill delegate]
// Type encoding: @16@0:8
// Implementation: 0x1085c146c

// -[SCTChatPresencePill setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085c148c

// -[SCTChatPresencePill state]
// Type encoding: @16@0:8
// Implementation: 0x1085c14a0

// -[SCTChatPresencePill .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085c14b0

@end
