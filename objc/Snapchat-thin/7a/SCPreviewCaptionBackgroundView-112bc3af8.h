// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewCaptionBackgroundView
// Superclass: UIView
// Address: 0x112bc3af8

@interface SCPreviewCaptionBackgroundView

// Property: textBackgroundColor; attributes: T@"UIColor",C,N,V_textBackgroundColor
// Property: textBackgroundCornerRadius; attributes: Td,N,V_textBackgroundCornerRadius
// Property: textRect; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N,V_textRect

// -[SCPreviewCaptionBackgroundView initWithCaptionTextView:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e28594

// -[SCPreviewCaptionBackgroundView initWithCaptionTextView:resourceDelegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e2866c

// -[SCPreviewCaptionBackgroundView initWithCaptionTextView:backgroundImage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108e286d4

// -[SCPreviewCaptionBackgroundView updateFrame]
// Type encoding: v16@0:8
// Implementation: 0x108e28744

// -[SCPreviewCaptionBackgroundView backgroundOverflowInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x108e28784

// -[SCPreviewCaptionBackgroundView backgroundOverflowOffSet]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x108e288e4

// -[SCPreviewCaptionBackgroundView drawRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e289b4

// -[SCPreviewCaptionBackgroundView _updateBackgroundLayers]
// Type encoding: v16@0:8
// Implementation: 0x108e28a54

// -[SCPreviewCaptionBackgroundView _applyCustomBackgroundStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e28b54

// -[SCPreviewCaptionBackgroundView _applyLineBackgroundStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e28c58

// -[SCPreviewCaptionBackgroundView _applyWordBackgroundStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e28cbc

// -[SCPreviewCaptionBackgroundView _applyEntireBackgroundStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e28d20

// -[SCPreviewCaptionBackgroundView _applyBubbleWrapBackgroundStyle]
// Type encoding: v16@0:8
// Implementation: 0x108e28e40

// -[SCPreviewCaptionBackgroundView _addBackgroundForTextRange:textPadding:isLastLine:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108e28e44

// -[SCPreviewCaptionBackgroundView _adjustTextRect:withTextPadding:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x108e29008

// -[SCPreviewCaptionBackgroundView _applyBrushBackgroundStyleWithTextRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e29104

// -[SCPreviewCaptionBackgroundView _applyRainbowBackgroundStyleWithTextRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e2940c

// -[SCPreviewCaptionBackgroundView _applyGlowBackgroundStyleWithTextRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e297ec

// -[SCPreviewCaptionBackgroundView _applyBubbleWrapBackgroundStyleWithTextRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e29bf8

// -[SCPreviewCaptionBackgroundView shouldAdjustBubbleWrapLineRects:cornerRadius:]
// Type encoding: B32@0:8@16d24
// Implementation: 0x108e2a9a8

// -[SCPreviewCaptionBackgroundView adjustBubbleWrapLineRects:cornerRadius:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x108e2ab68

// -[SCPreviewCaptionBackgroundView _removeBackgroundAndBoxShadowLayers]
// Type encoding: v16@0:8
// Implementation: 0x108e2ae70

// -[SCPreviewCaptionBackgroundView _addBackgroundAndBoxShadowLayers:imageURL:]
// Type encoding: v56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x108e2b03c

// -[SCPreviewCaptionBackgroundView _updateBackgroundImageView:image:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e2b9fc

// -[SCPreviewCaptionBackgroundView _getWordBackgroundRects:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e2ba94

// -[SCPreviewCaptionBackgroundView _getLineBackgroundRects:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108e2bf44

// -[SCPreviewCaptionBackgroundView textBackgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x108e2c260

// -[SCPreviewCaptionBackgroundView setTextBackgroundColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e2c270

// -[SCPreviewCaptionBackgroundView textBackgroundCornerRadius]
// Type encoding: d16@0:8
// Implementation: 0x108e2c27c

// -[SCPreviewCaptionBackgroundView setTextBackgroundCornerRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e2c28c

// -[SCPreviewCaptionBackgroundView textRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x108e2c29c

// -[SCPreviewCaptionBackgroundView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e2c2b4

@end
