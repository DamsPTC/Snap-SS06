// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputStackView
// Superclass: UIStackView
// Address: 0x112ae5c08

@interface SCChatInputStackView

// Property: inputItems; attributes: T@"NSArray",&,N,V_inputItems
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatInputStackView init]
// Type encoding: @16@0:8
// Implementation: 0x10657964c

// -[SCChatInputStackView _setupDefaultLayoutValues]
// Type encoding: v16@0:8
// Implementation: 0x1065796c0

// -[SCChatInputStackView intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10657971c

// -[SCChatInputStackView inputItems]
// Type encoding: @16@0:8
// Implementation: 0x106579798

// -[SCChatInputStackView addInputItem:animationStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1065797c8

// -[SCChatInputStackView prependInputItem:animationStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106579848

// -[SCChatInputStackView insertPrioritizedInputItem:animationStyle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1065798ac

// -[SCChatInputStackView collapseInputItems:withCollapseAnimation:excludingInputItemWithIdentifier:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x106579920

// -[SCChatInputStackView _insertInputItem:atIndex:animationStyle:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x106579d7c

// -[SCChatInputStackView _indexForNewInputItem:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106579e4c

// -[SCChatInputStackView _circularMaskItem:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106579fb8

// -[SCChatInputStackView _fadeInItem:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10657a114

// -[SCChatInputStackView _fadeOutItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657a1dc

// -[SCChatInputStackView _popInItem:atIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10657a2c4

// -[SCChatInputStackView _popOutItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657a40c

// -[SCChatInputStackView _popOutItem:duration:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x10657a41c

// -[SCChatInputStackView pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x10657a5b4

// -[SCChatInputStackView configureInputItemConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10657a77c

// -[SCChatInputStackView setInputItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657a914

// -[SCChatInputStackView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10657a954

@end
