// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TTTAttributedLabel
// Superclass: UILabel
// Address: 0x112c74f88

@interface TTTAttributedLabel

// Property: inactiveAttributedText; attributes: T@"NSAttributedString",C,N,V_inactiveAttributedText
// Property: renderedAttributedText; attributes: T@"NSAttributedString",C,N,V_renderedAttributedText
// Property: dataDetector; attributes: T@"NSDataDetector",&,N,V_dataDetector
// Property: links; attributes: T@"NSArray",&,N,V_links
// Property: activeLink; attributes: T@"NSTextCheckingResult",&,N,V_activeLink
// Property: delegate; attributes: T@"<TTTAttributedLabelDelegate>",N,V_delegate
// Property: dataDetectorTypes; attributes: TQ,N
// Property: enabledTextCheckingTypes; attributes: TQ,N,V_enabledTextCheckingTypes
// Property: linkAttributes; attributes: T@"NSDictionary",&,N,V_linkAttributes
// Property: activeLinkAttributes; attributes: T@"NSDictionary",&,N,V_activeLinkAttributes
// Property: inactiveLinkAttributes; attributes: T@"NSDictionary",&,N,V_inactiveLinkAttributes
// Property: shadowRadius; attributes: Td,N,V_shadowRadius
// Property: highlightedShadowRadius; attributes: Td,N,V_highlightedShadowRadius
// Property: highlightedShadowOffset; attributes: T{CGSize=dd},N,V_highlightedShadowOffset
// Property: highlightedShadowColor; attributes: T@"UIColor",&,N,V_highlightedShadowColor
// Property: kern; attributes: Td,N,V_kern
// Property: removeDescenderOffset; attributes: TB,N,V_removeDescenderOffset
// Property: firstLineIndent; attributes: Td,N,V_firstLineIndent
// Property: leading; attributes: Td,N,V_leading
// Property: minimumLineHeight; attributes: Td,N,V_minimumLineHeight
// Property: maximumLineHeight; attributes: Td,N,V_maximumLineHeight
// Property: lineHeightMultiple; attributes: Td,N,V_lineHeightMultiple
// Property: textInsets; attributes: T{UIEdgeInsets=dddd},N,V_textInsets
// Property: verticalAlignment; attributes: Tq,N,V_verticalAlignment
// Property: truncationTokenString; attributes: T@"NSString",&,N,V_truncationTokenString
// Property: truncationTokenStringAttributes; attributes: T@"NSDictionary",&,N,V_truncationTokenStringAttributes
// Property: attributedText; attributes: T@"NSAttributedString",C,N,V_attributedText
// Property: text; attributes: T@,C,D,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[TTTAttributedLabel linkfy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2c6878

// -[TTTAttributedLabel initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2caa94

// -[TTTAttributedLabel commonInit]
// Type encoding: v16@0:8
// Implementation: 0x10b2caaf4

// -[TTTAttributedLabel dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10b2caf58

// -[TTTAttributedLabel setAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cb3d0

// -[TTTAttributedLabel setNeedsFramesetter]
// Type encoding: v16@0:8
// Implementation: 0x10b2cb460

// -[TTTAttributedLabel framesetter]
// Type encoding: ^{__CTFramesetter=}16@0:8
// Implementation: 0x10b2cb494

// -[TTTAttributedLabel setFramesetter:]
// Type encoding: v24@0:8^{__CTFramesetter=}16
// Implementation: 0x10b2cb558

// -[TTTAttributedLabel highlightFramesetter]
// Type encoding: ^{__CTFramesetter=}16@0:8
// Implementation: 0x10b2cb5a4

// -[TTTAttributedLabel setHighlightFramesetter:]
// Type encoding: v24@0:8^{__CTFramesetter=}16
// Implementation: 0x10b2cb5b4

// -[TTTAttributedLabel renderedAttributedText]
// Type encoding: @16@0:8
// Implementation: 0x10b2cb600

// -[TTTAttributedLabel dataDetectorTypes]
// Type encoding: Q16@0:8
// Implementation: 0x10b2cb778

// -[TTTAttributedLabel setDataDetectorTypes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b2cb77c

// -[TTTAttributedLabel setEnabledTextCheckingTypes:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b2cb780

// -[TTTAttributedLabel addLinkWithTextCheckingResult:attributes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2cb800

// -[TTTAttributedLabel addLinksWithTextCheckingResults:attributes:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2cb870

// -[TTTAttributedLabel addLinkWithTextCheckingResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cba70

// -[TTTAttributedLabel addLinkToURL:withRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10b2cbad0

// -[TTTAttributedLabel addLinkToAddress:withRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10b2cbb24

// -[TTTAttributedLabel addLinkToPhoneNumber:withRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10b2cbb78

// -[TTTAttributedLabel addLinkToDate:withRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10b2cbbcc

// -[TTTAttributedLabel addLinkToDate:timeZone:duration:withRange:]
// Type encoding: v56@0:8@16@24d32{_NSRange=QQ}40
// Implementation: 0x10b2cbc20

// -[TTTAttributedLabel addLinkToTransitInformation:withRange:]
// Type encoding: v40@0:8@16{_NSRange=QQ}24
// Implementation: 0x10b2cbc7c

// -[TTTAttributedLabel linkAtCharacterIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x10b2cbcd0

// -[TTTAttributedLabel linkAtPoint:]
// Type encoding: @32@0:8{CGPoint=dd}16
// Implementation: 0x10b2cbd78

// -[TTTAttributedLabel characterIndexAtPoint:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x10b2cbda0

// -[TTTAttributedLabel drawFramesetter:attributedString:textRange:inRect:context:]
// Type encoding: v88@0:8^{__CTFramesetter=}16@24{?=qq}32{CGRect={CGPoint=dd}{CGSize=dd}}48^{CGContext=}80
// Implementation: 0x10b2cc058

// -[TTTAttributedLabel drawBackground:inRect:context:]
// Type encoding: v64@0:8^{__CTFrame=}16{CGRect={CGPoint=dd}{CGSize=dd}}24^{CGContext=}56
// Implementation: 0x10b2cc5f4

// -[TTTAttributedLabel drawStrike:inRect:context:]
// Type encoding: v64@0:8^{__CTFrame=}16{CGRect={CGPoint=dd}{CGSize=dd}}24^{CGContext=}56
// Implementation: 0x10b2ccb84

// -[TTTAttributedLabel setText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cd0c0

// -[TTTAttributedLabel setText:afterInheritingLabelAttributesAndConfiguringWithBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b2cd5e4

// -[TTTAttributedLabel setActiveLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cdcc4

// -[TTTAttributedLabel setHighlighted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2cdf18

// -[TTTAttributedLabel textColor]
// Type encoding: @16@0:8
// Implementation: 0x10b2cdf60

// -[TTTAttributedLabel setTextColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cdfb4

// -[TTTAttributedLabel textRectForBounds:limitedToNumberOfLines:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16q48
// Implementation: 0x10b2ce048

// -[TTTAttributedLabel drawTextInRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10b2ce1e8

// -[TTTAttributedLabel sizeThatFits:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x10b2ce770

// -[TTTAttributedLabel intrinsicContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2ce884

// -[TTTAttributedLabel tintColorDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10b2ce8cc

// -[TTTAttributedLabel hitTest:withEvent:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x10b2ceb48

// -[TTTAttributedLabel canBecomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x10b2cec48

// -[TTTAttributedLabel canPerformAction:withSender:]
// Type encoding: B32@0:8:16@24
// Implementation: 0x10b2cec50

// -[TTTAttributedLabel touchesBegan:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2cec64

// -[TTTAttributedLabel touchesMoved:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2ced4c

// -[TTTAttributedLabel touchesEnded:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2cee60

// -[TTTAttributedLabel touchesCancelled:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b2cf298

// -[TTTAttributedLabel copy:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cf33c

// -[TTTAttributedLabel encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2cf39c

// -[TTTAttributedLabel initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b2cf9c8

// -[TTTAttributedLabel attributedText]
// Type encoding: @16@0:8
// Implementation: 0x10b2d03f8

// -[TTTAttributedLabel delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0408

// -[TTTAttributedLabel setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0418

// -[TTTAttributedLabel enabledTextCheckingTypes]
// Type encoding: Q16@0:8
// Implementation: 0x10b2d0428

// -[TTTAttributedLabel links]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0438

// -[TTTAttributedLabel setLinks:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0448

// -[TTTAttributedLabel linkAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0488

// -[TTTAttributedLabel setLinkAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0498

// -[TTTAttributedLabel activeLinkAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10b2d04d8

// -[TTTAttributedLabel setActiveLinkAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d04e8

// -[TTTAttributedLabel inactiveLinkAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0528

// -[TTTAttributedLabel setInactiveLinkAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0538

// -[TTTAttributedLabel shadowRadius]
// Type encoding: d16@0:8
// Implementation: 0x10b2d0578

// -[TTTAttributedLabel setShadowRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d0588

// -[TTTAttributedLabel highlightedShadowRadius]
// Type encoding: d16@0:8
// Implementation: 0x10b2d0598

// -[TTTAttributedLabel setHighlightedShadowRadius:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d05a8

// -[TTTAttributedLabel highlightedShadowOffset]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10b2d05b8

// -[TTTAttributedLabel setHighlightedShadowOffset:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10b2d05cc

// -[TTTAttributedLabel highlightedShadowColor]
// Type encoding: @16@0:8
// Implementation: 0x10b2d05e0

// -[TTTAttributedLabel setHighlightedShadowColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d05f0

// -[TTTAttributedLabel kern]
// Type encoding: d16@0:8
// Implementation: 0x10b2d0630

// -[TTTAttributedLabel setKern:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d0640

// -[TTTAttributedLabel removeDescenderOffset]
// Type encoding: B16@0:8
// Implementation: 0x10b2d0650

// -[TTTAttributedLabel setRemoveDescenderOffset:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b2d0660

// -[TTTAttributedLabel firstLineIndent]
// Type encoding: d16@0:8
// Implementation: 0x10b2d0670

// -[TTTAttributedLabel setFirstLineIndent:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d0680

// -[TTTAttributedLabel leading]
// Type encoding: d16@0:8
// Implementation: 0x10b2d0690

// -[TTTAttributedLabel setLeading:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d06a0

// -[TTTAttributedLabel minimumLineHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b2d06b0

// -[TTTAttributedLabel setMinimumLineHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d06c0

// -[TTTAttributedLabel maximumLineHeight]
// Type encoding: d16@0:8
// Implementation: 0x10b2d06d0

// -[TTTAttributedLabel setMaximumLineHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d06e0

// -[TTTAttributedLabel lineHeightMultiple]
// Type encoding: d16@0:8
// Implementation: 0x10b2d06f0

// -[TTTAttributedLabel setLineHeightMultiple:]
// Type encoding: v24@0:8d16
// Implementation: 0x10b2d0700

// -[TTTAttributedLabel textInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10b2d0710

// -[TTTAttributedLabel setTextInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x10b2d0728

// -[TTTAttributedLabel verticalAlignment]
// Type encoding: q16@0:8
// Implementation: 0x10b2d0740

// -[TTTAttributedLabel setVerticalAlignment:]
// Type encoding: v24@0:8q16
// Implementation: 0x10b2d0750

// -[TTTAttributedLabel truncationTokenString]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0760

// -[TTTAttributedLabel setTruncationTokenString:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0770

// -[TTTAttributedLabel truncationTokenStringAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10b2d07b0

// -[TTTAttributedLabel setTruncationTokenStringAttributes:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d07c0

// -[TTTAttributedLabel inactiveAttributedText]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0800

// -[TTTAttributedLabel setInactiveAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0810

// -[TTTAttributedLabel setRenderedAttributedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d081c

// -[TTTAttributedLabel dataDetector]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0828

// -[TTTAttributedLabel setDataDetector:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b2d0838

// -[TTTAttributedLabel activeLink]
// Type encoding: @16@0:8
// Implementation: 0x10b2d0878

// -[TTTAttributedLabel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b2d0888

// +[TTTAttributedLabel sizeThatFitsAttributedString:withConstraints:limitedToNumberOfLines:]
// Type encoding: {CGSize=dd}48@0:8@16{CGSize=dd}24Q40
// Implementation: 0x10b2cafc0

// +[TTTAttributedLabel sizeCache]
// Type encoding: @16@0:8
// Implementation: 0x10b2cb1a0

// +[TTTAttributedLabel _sizeThatFitsAttributedString:withConstraints:limitedToNumberOfLines:]
// Type encoding: {CGSize=dd}48@0:8@16{CGSize=dd}24Q40
// Implementation: 0x10b2cb220

@end
