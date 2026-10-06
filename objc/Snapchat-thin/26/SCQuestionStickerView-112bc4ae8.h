// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCQuestionStickerView
// Superclass: SCPreviewStickerViewContentView
// Address: 0x112bc4ae8

@interface SCQuestionStickerView

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: infoType; attributes: TQ,R,N
// Property: text; attributes: T@"NSString",&,N,Vtext
// Property: textInputDidChangeBlock; attributes: T@?,C,N,VtextInputDidChangeBlock
// Property: textInputDidReturnBlock; attributes: T@?,C,N,VtextInputDidReturnBlock
// Property: item; attributes: T@"CTPItem",R,N,V_item
// Property: itemInstance; attributes: T@"SCCTPCTItemInstance",R,N,V_itemInstance
// Property: loadedFromCache; attributes: TB,N,V_loadedFromCache
// Property: imageView; attributes: T@"UIImageView",R,N
// Property: imageFuture; attributes: T@"SCFuture",?,R,N

// -[SCQuestionStickerView initForStickerPicker]
// Type encoding: @16@0:8
// Implementation: 0x108e51c10

// -[SCQuestionStickerView initQuestionStickerViewWithPrompt:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e51ce0

// -[SCQuestionStickerView initQuestionStickerViewWithPrompt:response:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e51e10

// -[SCQuestionStickerView initWithItemInstance:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e51f20

// -[SCQuestionStickerView _createContainerView]
// Type encoding: v16@0:8
// Implementation: 0x108e52114

// -[SCQuestionStickerView _createPromptFieldWithPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e521fc

// -[SCQuestionStickerView _createReplyButton]
// Type encoding: v16@0:8
// Implementation: 0x108e523ac

// -[SCQuestionStickerView _createStickerPickerPillView]
// Type encoding: v16@0:8
// Implementation: 0x108e52474

// -[SCQuestionStickerView _createPreviewPillView]
// Type encoding: v16@0:8
// Implementation: 0x108e5254c

// -[SCQuestionStickerView _createPromptHeaderViewWithPrompt:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e52878

// -[SCQuestionStickerView _createResponseLabelWithResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e529b4

// -[SCQuestionStickerView _setupContainerViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e52a88

// -[SCQuestionStickerView _setupPreviewPillViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e52c98

// -[SCQuestionStickerView _setupPromptViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e52efc

// -[SCQuestionStickerView _setupReplyButtonLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e53148

// -[SCQuestionStickerView _setupPromptHeaderViewLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e53328

// -[SCQuestionStickerView _setupResponseLabelLayout]
// Type encoding: v16@0:8
// Implementation: 0x108e53788

// -[SCQuestionStickerView becomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x108e53b90

// -[SCQuestionStickerView textView:shouldChangeTextInRange:replacementText:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x108e53ba0

// -[SCQuestionStickerView textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e53c98

// -[SCQuestionStickerView text]
// Type encoding: @16@0:8
// Implementation: 0x108e53d00

// -[SCQuestionStickerView setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e53d10

// -[SCQuestionStickerView updateWithInfoFromStickerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e53dc0

// -[SCQuestionStickerView shouldReceiveTapsViaStickerContainer]
// Type encoding: B16@0:8
// Implementation: 0x108e53e50

// -[SCQuestionStickerView encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e53e58

// -[SCQuestionStickerView copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108e53e5c

// -[SCQuestionStickerView intrinsicSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x108e53e80

// -[SCQuestionStickerView infoType]
// Type encoding: Q16@0:8
// Implementation: 0x108e53ea8

// -[SCQuestionStickerView loggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108e53eb0

// -[SCQuestionStickerView packId]
// Type encoding: @16@0:8
// Implementation: 0x108e53f28

// -[SCQuestionStickerView shortLoggingName]
// Type encoding: @16@0:8
// Implementation: 0x108e53f34

// -[SCQuestionStickerView stickerId]
// Type encoding: @16@0:8
// Implementation: 0x108e53f40

// -[SCQuestionStickerView toCTPItem]
// Type encoding: @16@0:8
// Implementation: 0x108e53f4c

// -[SCQuestionStickerView toCTItemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e53f54

// -[SCQuestionStickerView type]
// Type encoding: Q16@0:8
// Implementation: 0x108e53f84

// -[SCQuestionStickerView sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x108e53f8c

// -[SCQuestionStickerView tappableElementBounds]
// Type encoding: @16@0:8
// Implementation: 0x108e54084

// -[SCQuestionStickerView _tappableElementBoundsForContainer]
// Type encoding: @16@0:8
// Implementation: 0x108e54110

// -[SCQuestionStickerView scaleLimit]
// Type encoding: q16@0:8
// Implementation: 0x108e541a8

// -[SCQuestionStickerView shouldRespondToLongPress:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e541b0

// -[SCQuestionStickerView imageView]
// Type encoding: @16@0:8
// Implementation: 0x108e541b8

// -[SCQuestionStickerView didEndDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e54250

// -[SCQuestionStickerView willDisplay]
// Type encoding: v16@0:8
// Implementation: 0x108e54254

// -[SCQuestionStickerView _itemInstanceWithPrompt:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e54258

// -[SCQuestionStickerView textInputDidChangeBlock]
// Type encoding: @?16@0:8
// Implementation: 0x108e54388

// -[SCQuestionStickerView setTextInputDidChangeBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e54398

// -[SCQuestionStickerView textInputDidReturnBlock]
// Type encoding: @?16@0:8
// Implementation: 0x108e543a4

// -[SCQuestionStickerView setTextInputDidReturnBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e543b4

// -[SCQuestionStickerView loadedFromCache]
// Type encoding: B16@0:8
// Implementation: 0x108e543c0

// -[SCQuestionStickerView setLoadedFromCache:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e543d0

// -[SCQuestionStickerView item]
// Type encoding: @16@0:8
// Implementation: 0x108e543e0

// -[SCQuestionStickerView itemInstance]
// Type encoding: @16@0:8
// Implementation: 0x108e543f0

// -[SCQuestionStickerView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e54400

// +[SCQuestionStickerView questionStickerSharingNoticeLabel]
// Type encoding: @16@0:8
// Implementation: 0x108e53af8

@end
