// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecipientPickerActionButtonProvider
// Superclass: NSObject
// Address: 0x112a8b9d8

@interface SCRecipientPickerActionButtonProvider

// Property: actionButton; attributes: T@"SIGActionButton",R,N,V_actionButton
// Property: userEnteredTitle; attributes: T@"NSString",C,N,V_userEnteredTitle
// Property: headerModel; attributes: T@"SCRecipientPickerHeaderModel",R,N,V_headerModel
// Property: delegate; attributes: T@"<SCRecipientPickerActionButtonDelegate>",W,N,V_delegate

// -[SCRecipientPickerActionButtonProvider initWithConfirmationModelGenerator:eventTracker:headerModelGenerator:selectionTracker:]
// Type encoding: @48@0:8@?16@24@?32@40
// Implementation: 0x105b1bb1c

// -[SCRecipientPickerActionButtonProvider setUserEnteredTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b1bed8

// -[SCRecipientPickerActionButtonProvider setConfirmationModelGenerator:headerModelGenerator:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x105b1bf3c

// -[SCRecipientPickerActionButtonProvider _onHeaderUpdateWithSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b1bfc0

// -[SCRecipientPickerActionButtonProvider _onSelectionUpdate]
// Type encoding: v16@0:8
// Implementation: 0x105b1c060

// -[SCRecipientPickerActionButtonProvider _onUpdateWithSelectedItems:title:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105b1c0d8

// -[SCRecipientPickerActionButtonProvider _actionButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x105b1c2a0

// -[SCRecipientPickerActionButtonProvider actionButton]
// Type encoding: @16@0:8
// Implementation: 0x105b1c3a4

// -[SCRecipientPickerActionButtonProvider userEnteredTitle]
// Type encoding: @16@0:8
// Implementation: 0x105b1c3ac

// -[SCRecipientPickerActionButtonProvider headerModel]
// Type encoding: @16@0:8
// Implementation: 0x105b1c3b4

// -[SCRecipientPickerActionButtonProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x105b1c3bc

// -[SCRecipientPickerActionButtonProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105b1c3d4

// -[SCRecipientPickerActionButtonProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105b1c3e0

@end
