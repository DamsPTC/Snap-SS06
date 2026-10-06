// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLastInteractionDataServiceImpl
// Superclass: NSObject
// Address: 0x112a810c8

@interface SCLastInteractionDataServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLastInteractionDataServiceImpl initWithPreferences:performerProvider:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059ca590

// -[SCLastInteractionDataServiceImpl _lastTurnInteractionStatesSubject]
// Type encoding: @16@0:8
// Implementation: 0x1059caa20

// -[SCLastInteractionDataServiceImpl _conversationLastInteractionStatesObservableWithConversationType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059caad4

// -[SCLastInteractionDataServiceImpl saveWithLastInteractionState:conversationType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059cab34

// -[SCLastInteractionDataServiceImpl fetchLastInteractionStateWithRecipientId:conversationType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1059cabac

// -[SCLastInteractionDataServiceImpl lastInteractionStatesObservableWithConversationType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059cac18

// -[SCLastInteractionDataServiceImpl fetchLastInteractionStatesWithConversationType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059cac58

// -[SCLastInteractionDataServiceImpl updateLastTurnInteractionStateWithUpdatedMessages:userUUID:targetId:conversationType:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x1059cad04

// -[SCLastInteractionDataServiceImpl lastTurnInteractionStatesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059cae04

// -[SCLastInteractionDataServiceImpl fetchLastTurnInteractionStates]
// Type encoding: @16@0:8
// Implementation: 0x1059cae4c

// -[SCLastInteractionDataServiceImpl _conversationLastInteractionStatesSubjectWithConversationType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1059caedc

// -[SCLastInteractionDataServiceImpl _saveWithLastInteractionState:conversationType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1059cafec

// -[SCLastInteractionDataServiceImpl _fetchLastInteractionStateWithRecipientId:conversationType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1059cb370

// -[SCLastInteractionDataServiceImpl _fetchLastTurnInteractionStateWithRecipientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059cb468

// -[SCLastInteractionDataServiceImpl _saveLastTurnInteractionStateWithTargetId:oldState:newState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059cb5a0

// -[SCLastInteractionDataServiceImpl _saveAndEmitLastTurnInteractionStateWithTargetId:oldState:newState:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059cb654

// -[SCLastInteractionDataServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059cba18

@end
