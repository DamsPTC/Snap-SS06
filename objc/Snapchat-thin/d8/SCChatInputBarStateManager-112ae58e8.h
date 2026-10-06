// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatInputBarStateManager
// Superclass: NSObject
// Address: 0x112ae58e8

@interface SCChatInputBarStateManager

// Property: cachedInputMode; attributes: T@"UITextInputMode",&,N,V_cachedInputMode
// Property: isCurrentInputModeEmoji; attributes: TB,N,V_isCurrentInputModeEmoji
// Property: state; attributes: TQ,N,V_state
// Property: allowedInputModalities; attributes: TQ,N,V_allowedInputModalities
// Property: transitionToExpandedWidth; attributes: Td,N,V_transitionToExpandedWidth
// Property: transitionToNormalWidth; attributes: Td,N,V_transitionToNormalWidth
// Property: delegate; attributes: T@"<SCChatInputBarStateManagerDelegate>",W,N,V_delegate
// Property: datasource; attributes: T@"<SCChatInputBarStateManagerDatasource>",W,N,V_datasource

// -[SCChatInputBarStateManager init]
// Type encoding: @16@0:8
// Implementation: 0x10657133c

// -[SCChatInputBarStateManager setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1065713c8

// -[SCChatInputBarStateManager setAllowedInputModalities:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106571424

// -[SCChatInputBarStateManager setCachedInputMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106571470

// -[SCChatInputBarStateManager updateWithReplacementText:range:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x1065714f4

// -[SCChatInputBarStateManager resetInputMode]
// Type encoding: v16@0:8
// Implementation: 0x10657151c

// -[SCChatInputBarStateManager isCurrentInputModeEmoji]
// Type encoding: B16@0:8
// Implementation: 0x10657152c

// -[SCChatInputBarStateManager _stateForReplacementText:range:]
// Type encoding: Q40@0:8@16{_NSRange=QQ}24
// Implementation: 0x106571640

// -[SCChatInputBarStateManager _registerNotifications]
// Type encoding: v16@0:8
// Implementation: 0x106571910

// -[SCChatInputBarStateManager _currentInputModeDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106571968

// -[SCChatInputBarStateManager state]
// Type encoding: Q16@0:8
// Implementation: 0x106571a94

// -[SCChatInputBarStateManager allowedInputModalities]
// Type encoding: Q16@0:8
// Implementation: 0x106571a9c

// -[SCChatInputBarStateManager transitionToExpandedWidth]
// Type encoding: d16@0:8
// Implementation: 0x106571aa4

// -[SCChatInputBarStateManager setTransitionToExpandedWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x106571aac

// -[SCChatInputBarStateManager transitionToNormalWidth]
// Type encoding: d16@0:8
// Implementation: 0x106571ab4

// -[SCChatInputBarStateManager setTransitionToNormalWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x106571abc

// -[SCChatInputBarStateManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x106571ac4

// -[SCChatInputBarStateManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106571adc

// -[SCChatInputBarStateManager datasource]
// Type encoding: @16@0:8
// Implementation: 0x106571ae8

// -[SCChatInputBarStateManager setDatasource:]
// Type encoding: v24@0:8@16
// Implementation: 0x106571b00

// -[SCChatInputBarStateManager cachedInputMode]
// Type encoding: @16@0:8
// Implementation: 0x106571b0c

// -[SCChatInputBarStateManager setIsCurrentInputModeEmoji:]
// Type encoding: v20@0:8B16
// Implementation: 0x106571b14

// -[SCChatInputBarStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106571b1c

@end
