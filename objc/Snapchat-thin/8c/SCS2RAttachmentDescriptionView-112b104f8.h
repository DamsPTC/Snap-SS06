// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCS2RAttachmentDescriptionView
// Superclass: UIView
// Address: 0x112b104f8

@interface SCS2RAttachmentDescriptionView

// Property: textView; attributes: T@"SIGTextView",R,N,V_textView
// Property: delegate; attributes: T@"<SCC2RAttachmentDescriptionViewDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCS2RAttachmentDescriptionView initWithFrame:mode:customDescriptionPlaceholder:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48@56
// Implementation: 0x106aae738

// -[SCS2RAttachmentDescriptionView addAttachment:type:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106aae8c8

// -[SCS2RAttachmentDescriptionView updateAttachmentAtIndex:image:type:]
// Type encoding: v40@0:8q16@24Q32
// Implementation: 0x106aae9e4

// -[SCS2RAttachmentDescriptionView deleteAttatchmentAtIndex:]
// Type encoding: v24@0:8q16
// Implementation: 0x106aaea4c

// -[SCS2RAttachmentDescriptionView highlightPlaceHolderText]
// Type encoding: v16@0:8
// Implementation: 0x106aaea84

// -[SCS2RAttachmentDescriptionView resetPlaceHolderText]
// Type encoding: v16@0:8
// Implementation: 0x106aaead8

// -[SCS2RAttachmentDescriptionView _attachmentDidSingleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aaeb68

// -[SCS2RAttachmentDescriptionView _setupTextView]
// Type encoding: @16@0:8
// Implementation: 0x106aaecc0

// -[SCS2RAttachmentDescriptionView _setupAttachmentView]
// Type encoding: @16@0:8
// Implementation: 0x106aaed50

// -[SCS2RAttachmentDescriptionView _updateAttachmentContentView]
// Type encoding: v16@0:8
// Implementation: 0x106aaee1c

// -[SCS2RAttachmentDescriptionView _addAttachmentThumbnails:toView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106aaef3c

// -[SCS2RAttachmentDescriptionView _constraintsForCell:below:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106aaf0f0

// -[SCS2RAttachmentDescriptionView _createAttachmentView:]
// Type encoding: @24@0:8@16
// Implementation: 0x106aaf518

// -[SCS2RAttachmentDescriptionView _updateConstraints]
// Type encoding: v16@0:8
// Implementation: 0x106aaf5cc

// -[SCS2RAttachmentDescriptionView textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x106aafbc4

// -[SCS2RAttachmentDescriptionView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aafca8

// -[SCS2RAttachmentDescriptionView textView]
// Type encoding: @16@0:8
// Implementation: 0x106aafd24

// -[SCS2RAttachmentDescriptionView delegate]
// Type encoding: @16@0:8
// Implementation: 0x106aafd34

// -[SCS2RAttachmentDescriptionView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106aafd54

// -[SCS2RAttachmentDescriptionView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106aafd68

@end
