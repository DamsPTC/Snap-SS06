// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionItem
// Superclass: NSObject
// Address: 0x112c606c8

@interface SCSelectionItem

// Property: SIGSelectBarItemTitle; attributes: T@"NSString",R,N
// Property: SIGSelectBarItemType; attributes: TQ,R,N
// Property: accessibilityIdentifier; attributes: T@"NSString",R,C,N
// Property: customIcon; attributes: T@"UIImage",?,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: recipient; attributes: T@"SCSelectionParticipant",R,C,N,V_recipient
// Property: participants; attributes: T@"NSOrderedSet",R,C,N,V_participants

// -[SCSelectionItem SIGSelectBarItemTitle]
// Type encoding: @16@0:8
// Implementation: 0x108f869e4

// -[SCSelectionItem SIGSelectBarItemType]
// Type encoding: Q16@0:8
// Implementation: 0x108f86a28

// -[SCSelectionItem isSelectBarItemEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f86c18

// -[SCSelectionItem selectBarItemHash]
// Type encoding: Q16@0:8
// Implementation: 0x108f86d10

// -[SCSelectionItem accessibilityIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108f86d6c

// -[SCSelectionItem customIcon]
// Type encoding: @16@0:8
// Implementation: 0x108f86d9c

// -[SCSelectionItem toChatIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1065f6db4

// -[SCSelectionItem initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b04b438

// -[SCSelectionItem initWithRecipient:participants:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10b04b4e8

// -[SCSelectionItem copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b04b594

// -[SCSelectionItem encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b04b5b8

// -[SCSelectionItem hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b04b618

// -[SCSelectionItem isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b04b68c

// -[SCSelectionItem recipient]
// Type encoding: @16@0:8
// Implementation: 0x10b04b734

// -[SCSelectionItem participants]
// Type encoding: @16@0:8
// Implementation: 0x10b04b73c

// -[SCSelectionItem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b04b744

@end
