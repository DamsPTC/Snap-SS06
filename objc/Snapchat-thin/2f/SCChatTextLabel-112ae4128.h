// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatTextLabel
// Superclass: TTTAttributedLabel
// Address: 0x112ae4128

@interface SCChatTextLabel

// Property: mentionSelectedDelegate; attributes: T@"<SCChatMentionSelectedDelegate>",W,N,V_mentionSelectedDelegate
// Property: mediaCardSelectedDelegate; attributes: T@"<SCChatMediaCardSelectedDelegate>",W,N,V_mediaCardSelectedDelegate
// Property: suppressNoOpTraitChanges; attributes: TB,N,V_suppressNoOpTraitChanges
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatTextLabel init]
// Type encoding: @16@0:8
// Implementation: 0x10650b5f4

// -[SCChatTextLabel rerenderWithBoundingSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10650b800

// -[SCChatTextLabel setViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650b8cc

// -[SCChatTextLabel mentionAtCharacterIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10650b9c4

// -[SCChatTextLabel mentionAtPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x10650ba60

// -[SCChatTextLabel mediaCardAtCharacterIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10650bab4

// -[SCChatTextLabel mediaCardAtPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x10650bb50

// -[SCChatTextLabel gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10650bba4

// -[SCChatTextLabel onTextTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650bc58

// -[SCChatTextLabel resetWithOriginalSettings]
// Type encoding: v16@0:8
// Implementation: 0x10650bd1c

// -[SCChatTextLabel traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650bd84

// -[SCChatTextLabel mentionSelectedDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10650bf0c

// -[SCChatTextLabel setMentionSelectedDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650bf2c

// -[SCChatTextLabel mediaCardSelectedDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10650bf40

// -[SCChatTextLabel setMediaCardSelectedDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650bf60

// -[SCChatTextLabel suppressNoOpTraitChanges]
// Type encoding: B16@0:8
// Implementation: 0x10650bf74

// -[SCChatTextLabel setSuppressNoOpTraitChanges:]
// Type encoding: v20@0:8B16
// Implementation: 0x10650bf84

// -[SCChatTextLabel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10650bf94

// +[SCChatTextLabel linkColor]
// Type encoding: @16@0:8
// Implementation: 0x10650beec

// +[SCChatTextLabel selectedLinkColor]
// Type encoding: @16@0:8
// Implementation: 0x10650befc

@end
