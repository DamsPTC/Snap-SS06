// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupMuteConversationAction
// Superclass: NSObject
// Address: 0x112a0b0f8

@interface SCGroupMuteConversationAction

// Property: position; attributes: Tq,R,N,V_position
// Property: actionSheetCell; attributes: T@"UIView",R,N
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupMuteConversationAction initWithGroupId:muteType:expirationDuration:context:groupsDataMutator:notificationServices:accessibilityIdentifier:]
// Type encoding: @72@0:8@16q24Q32@40@48@56@64
// Implementation: 0x104f5bdf0

// -[SCGroupMuteConversationAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f5bf30

// -[SCGroupMuteConversationAction _setPosition]
// Type encoding: v16@0:8
// Implementation: 0x104f5c0f0

// -[SCGroupMuteConversationAction _handleMessageNotificationsTappedWithActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5c114

// -[SCGroupMuteConversationAction _onUpdatedNotificationStatus:notificationOn:actionSheet:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x104f5c544

// -[SCGroupMuteConversationAction _didUpdateNotificationSucceed:notificationOn:actionSheet:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x104f5c5f8

// -[SCGroupMuteConversationAction _presentErrorStatusMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5c694

// -[SCGroupMuteConversationAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f5c730

// -[SCGroupMuteConversationAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f5c738

// -[SCGroupMuteConversationAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f5c740

@end
