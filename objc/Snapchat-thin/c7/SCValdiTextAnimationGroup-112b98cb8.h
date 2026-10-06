// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiTextAnimationGroup
// Superclass: SCValdiView
// Address: 0x112b98cb8

@interface SCValdiTextAnimationGroup

// Property: participants; attributes: T@"NSHashTable",&,N,V_participants
// Property: orderedParticipants; attributes: T@"NSMutableArray",&,N,V_orderedParticipants
// Property: textAnimationCoordinator; attributes: T@"SCValdiTextAnimationCoordinator",&,N,V_textAnimationCoordinator
// Property: displayLink; attributes: T@"CADisplayLink",&,N,V_displayLink

// -[SCValdiTextAnimationGroup initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080aeb54

// -[SCValdiTextAnimationGroup dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1080aebe8

// -[SCValdiTextAnimationGroup willEnqueueIntoValdiPool]
// Type encoding: B16@0:8
// Implementation: 0x1080aec24

// -[SCValdiTextAnimationGroup layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1080aed5c

// -[SCValdiTextAnimationGroup registerTextAnimationParticipant:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080aed9c

// -[SCValdiTextAnimationGroup unregisterTextAnimationParticipant:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080aee18

// -[SCValdiTextAnimationGroup startTextAnimationFrameLoopIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1080aee74

// -[SCValdiTextAnimationGroup _stopTextAnimationFrameLoop]
// Type encoding: v16@0:8
// Implementation: 0x1080aef60

// -[SCValdiTextAnimationGroup _textAnimationDisplayLinkDidFire:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080aef9c

// -[SCValdiTextAnimationGroup _rebuildOrderedParticipantsAndApplyBaseIndexes]
// Type encoding: v16@0:8
// Implementation: 0x1080af118

// -[SCValdiTextAnimationGroup _collectParticipantsInView:output:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1080af2dc

// -[SCValdiTextAnimationGroup textAnimationCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1080af424

// -[SCValdiTextAnimationGroup setTextAnimationCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080af430

// -[SCValdiTextAnimationGroup participants]
// Type encoding: @16@0:8
// Implementation: 0x1080af45c

// -[SCValdiTextAnimationGroup setParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080af468

// -[SCValdiTextAnimationGroup orderedParticipants]
// Type encoding: @16@0:8
// Implementation: 0x1080af494

// -[SCValdiTextAnimationGroup setOrderedParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080af4a0

// -[SCValdiTextAnimationGroup displayLink]
// Type encoding: @16@0:8
// Implementation: 0x1080af4cc

// -[SCValdiTextAnimationGroup setDisplayLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080af4d8

// -[SCValdiTextAnimationGroup .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080af504

@end
