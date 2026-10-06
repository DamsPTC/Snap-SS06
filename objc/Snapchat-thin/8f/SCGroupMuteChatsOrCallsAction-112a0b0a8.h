// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupMuteChatsOrCallsAction
// Superclass: NSObject
// Address: 0x112a0b0a8

@interface SCGroupMuteChatsOrCallsAction

// Property: position; attributes: Tq,R,N,V_position
// Property: actionSheetCell; attributes: T@"UIView",R,N,V_actionSheetCell
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupMuteChatsOrCallsAction initWithGroupId:muteType:context:groupsDataTracker:groupsDataMutator:notificationServices:accessibilityIdentifier:]
// Type encoding: @72@0:8@16q24@32@40@48@56@64
// Implementation: 0x104f5acd0

// -[SCGroupMuteChatsOrCallsAction _cell]
// Type encoding: @16@0:8
// Implementation: 0x104f5aebc

// -[SCGroupMuteChatsOrCallsAction _observeGroup]
// Type encoding: v16@0:8
// Implementation: 0x104f5b068

// -[SCGroupMuteChatsOrCallsAction _updateCellWithGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5b21c

// -[SCGroupMuteChatsOrCallsAction _handleMessageNotificationsTappedWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5b4ec

// -[SCGroupMuteChatsOrCallsAction _didUnmuteWithSuccess:errorMessage:groupId:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x104f5bbfc

// -[SCGroupMuteChatsOrCallsAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5bc94

// -[SCGroupMuteChatsOrCallsAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f5bd30

// -[SCGroupMuteChatsOrCallsAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f5bd38

// -[SCGroupMuteChatsOrCallsAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f5bd40

// -[SCGroupMuteChatsOrCallsAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f5bd48

@end
