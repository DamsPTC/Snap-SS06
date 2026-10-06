// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendMessageSnapstreakReminderAction
// Superclass: NSObject
// Address: 0x112a0ac48

@interface SCFriendMessageSnapstreakReminderAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N,V_actionSheetCell
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendMessageSnapstreakReminderAction initWithConversationId:friendUserId:context:conversationServices:notificationServices:notificationPermissionServices:userTrackedBlizzardLogger:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104f51a7c

// -[SCFriendMessageSnapstreakReminderAction _setupCell]
// Type encoding: v16@0:8
// Implementation: 0x104f51c08

// -[SCFriendMessageSnapstreakReminderAction _fetchAndUpdate]
// Type encoding: v16@0:8
// Implementation: 0x104f51df4

// -[SCFriendMessageSnapstreakReminderAction _updateCellWithStreakReminderEnabled:cell:animated:]
// Type encoding: v32@0:8B16@20B28
// Implementation: 0x104f5200c

// -[SCFriendMessageSnapstreakReminderAction _handleTappedWithActionSheet:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f52060

// -[SCFriendMessageSnapstreakReminderAction _handleModifyResult:enabled:cell:]
// Type encoding: v32@0:8B16B20@24
// Implementation: 0x104f52570

// -[SCFriendMessageSnapstreakReminderAction _logToggleWithEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f525cc

// -[SCFriendMessageSnapstreakReminderAction _presentEnabledToast]
// Type encoding: v16@0:8
// Implementation: 0x104f52678

// -[SCFriendMessageSnapstreakReminderAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f52798

// -[SCFriendMessageSnapstreakReminderAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f527a0

// -[SCFriendMessageSnapstreakReminderAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f527a8

// -[SCFriendMessageSnapstreakReminderAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f527b0

@end
