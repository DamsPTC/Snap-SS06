// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputBar
// Superclass: UIView
// Address: 0x112ae5898

@interface SCChatInputBar

// Property: inputController; attributes: T@"SCChatInputViewController",W,N,V_inputController
// Property: textViewPasteDelegate; attributes: T@"<SCChatInputTextViewPasteDelegate>",W,N
// Property: inputTextViewContainer; attributes: T@"SCChatInputTextViewContainer",R,N,V_inputTextViewContainer
// Property: inputTextView; attributes: T@"SCChatInputTextView",R,N
// Property: leadingStackView; attributes: T@"SCChatInputStackView",R,N,V_leadingStackView
// Property: trailingStackView; attributes: T@"SCChatInputStackView",R,N,V_trailingStackView
// Property: internalStackView; attributes: T@"SCChatInputStackView",R,N
// Property: submenuView; attributes: T@"SCChatInputSubmenuView",R,N,V_submenuView
// Property: inputItems; attributes: T@"NSArray",R,N
// Property: ignoresSafeAreaLayoutGuides; attributes: TB,N,V_ignoresSafeAreaLayoutGuides
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: style; attributes: TQ,N,V_style

// -[SCChatInputBar initWithSizeEventPublisher:interactiveDrawerEventPublisher:submenuView:circumstanceEngine:displaySnapchatPlusBorder:messagingExperimentService:]
// Type encoding: @60@0:8@16@24@32@40B48@52
// Implementation: 0x10656e78c

// -[SCChatInputBar _createConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10656e980

// -[SCChatInputBar _initializeViews]
// Type encoding: v16@0:8
// Implementation: 0x10656e9bc

// -[SCChatInputBar _initializeLeftStackView]
// Type encoding: v16@0:8
// Implementation: 0x10656e9f8

// -[SCChatInputBar _initializeTextViewContainer]
// Type encoding: v16@0:8
// Implementation: 0x10656ea4c

// -[SCChatInputBar _initializeRightStackView]
// Type encoding: v16@0:8
// Implementation: 0x10656ead4

// -[SCChatInputBar _initializeSeparator]
// Type encoding: v16@0:8
// Implementation: 0x10656eb28

// -[SCChatInputBar _initializeInputBarHint]
// Type encoding: v16@0:8
// Implementation: 0x10656ebb4

// -[SCChatInputBar _createLeftStackViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10656ec70

// -[SCChatInputBar _createRightStackViewConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10656ee00

// -[SCChatInputBar _createTextViewContainerConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10656eff0

// -[SCChatInputBar _createSeparatorConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10656f0e4

// -[SCChatInputBar _createInputBarHintConstraints]
// Type encoding: v16@0:8
// Implementation: 0x10656f274

// -[SCChatInputBar setTextViewPasteDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656f41c

// -[SCChatInputBar textViewPasteDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10656f46c

// -[SCChatInputBar inputTextView]
// Type encoding: @16@0:8
// Implementation: 0x10656f4b0

// -[SCChatInputBar internalStackView]
// Type encoding: @16@0:8
// Implementation: 0x10656f4c0

// -[SCChatInputBar inputItems]
// Type encoding: @16@0:8
// Implementation: 0x10656f4d0

// -[SCChatInputBar setIgnoresSafeAreaLayoutGuides:]
// Type encoding: v20@0:8B16
// Implementation: 0x10656f5f8

// -[SCChatInputBar inputBarStateManager:didUpdateInputBarState:allowedInputModalities:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x10656f65c

// -[SCChatInputBar stateManagerTextView]
// Type encoding: @16@0:8
// Implementation: 0x10656fb28

// -[SCChatInputBar activeInputModes]
// Type encoding: @16@0:8
// Implementation: 0x10656fb2c

// -[SCChatInputBar updateVisibleItemsForState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10656fb38

// -[SCChatInputBar updateAllowedModalities:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10656fb48

// -[SCChatInputBar updateVisibleItemsWithCurrentState]
// Type encoding: v16@0:8
// Implementation: 0x10656fb58

// -[SCChatInputBar setStyle:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10656fb74

// -[SCChatInputBar addInputItem:atPosition:animationStyle:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x10656fcf4

// -[SCChatInputBar prependInputItem:position:animationStyle:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x10656fd5c

// -[SCChatInputBar insertPrioritizedInputItem:position:animationStyle:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x10656fdc4

// -[SCChatInputBar collapseInputItemsInContainingStackView:withCollapseAnimation:excludingInputItemWithIdentifier:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x10656fe2c

// -[SCChatInputBar scaleFont:isEdit:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10656fecc

// -[SCChatInputBar showInputBarHintWithText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10656fff0

// -[SCChatInputBar hideInputBarHint]
// Type encoding: v16@0:8
// Implementation: 0x1065700d0

// -[SCChatInputBar inputViewController:textViewDidChange:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106570128

// -[SCChatInputBar inputViewController:textViewWillBeginEditing:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106570194

// -[SCChatInputBar inputViewController:textViewWillEndEditing:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065701d0

// -[SCChatInputBar inputViewController:textView:willChangeTextInRange:replacementText:]
// Type encoding: v56@0:8@16@24{_NSRange=QQ}32@48
// Implementation: 0x1065701d8

// -[SCChatInputBar _newItemAnimator]
// Type encoding: @16@0:8
// Implementation: 0x1065701f4

// -[SCChatInputBar _updateItems:withStateVisibility:updatedInputItems:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x106570258

// -[SCChatInputBar _updateItemsInteractionState:userInteractionEnabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106570568

// -[SCChatInputBar _updateBottomConstraint]
// Type encoding: v16@0:8
// Implementation: 0x106570660

// -[SCChatInputBar _updateTextViewHeightConstraint]
// Type encoding: v16@0:8
// Implementation: 0x106570800

// -[SCChatInputBar _announceInputItemCollapseStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065709c8

// -[SCChatInputBar _announceSizeUpdateWithHeightChange:]
// Type encoding: v24@0:8d16
// Implementation: 0x106570af8

// -[SCChatInputBar _stackViewAtPosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106570c28

// -[SCChatInputBar _positionForStackViewContainingInputItemIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106570ca8

// -[SCChatInputBar becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x106570fb8

// -[SCChatInputBar resignFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x106570ff4

// -[SCChatInputBar isFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x106571030

// -[SCChatInputBar style]
// Type encoding: Q16@0:8
// Implementation: 0x10657106c

// -[SCChatInputBar inputController]
// Type encoding: @16@0:8
// Implementation: 0x10657107c

// -[SCChatInputBar setInputController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10657109c

// -[SCChatInputBar inputTextViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x1065710b0

// -[SCChatInputBar leadingStackView]
// Type encoding: @16@0:8
// Implementation: 0x1065710c0

// -[SCChatInputBar trailingStackView]
// Type encoding: @16@0:8
// Implementation: 0x1065710d0

// -[SCChatInputBar submenuView]
// Type encoding: @16@0:8
// Implementation: 0x1065710e0

// -[SCChatInputBar ignoresSafeAreaLayoutGuides]
// Type encoding: B16@0:8
// Implementation: 0x1065710f0

// -[SCChatInputBar .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106571100

@end
