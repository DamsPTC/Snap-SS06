// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiProcessedText
// Superclass: NSObject
// Address: 0x112b985d8

@interface SCValdiProcessedText

// Property: attributedString; attributes: T@"NSAttributedString",R,N,V_attributedString
// Property: hasAnimationTransform; attributes: TB,R,N
// Property: hasInlineViewAttachment; attributes: TB,R,N
// Property: hasOnTap; attributes: TB,R,N
// Property: hasOnLayout; attributes: TB,R,N
// Property: hasOuterOutline; attributes: TB,R,N
// Property: hasCustomUnderline; attributes: TB,R,N
// Property: animationTransformsCount; attributes: TQ,R,N
// Property: customUnderlineSourceString; attributes: T@"NSAttributedString",R,N,V_customUnderlineSourceString
// Property: customUnderlineCharacterRanges; attributes: T@"NSArray",R,N,V_customUnderlineCharacterRanges

// -[SCValdiProcessedText initWithString:onTapItems:onLayoutItems:inlineAttachmentItems:animationItems:outlineItems:customUnderlineSourceString:customUnderlineCharacterRanges:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1080a4644

// -[SCValdiProcessedText _updateInlineAttachmentItemsOrderedByChildIndex]
// Type encoding: v16@0:8
// Implementation: 0x1080a4798

// -[SCValdiProcessedText hasAnimationTransform]
// Type encoding: B16@0:8
// Implementation: 0x1080a49b4

// -[SCValdiProcessedText hasInlineViewAttachment]
// Type encoding: B16@0:8
// Implementation: 0x1080a49d0

// -[SCValdiProcessedText hasInlineViewAttachmentForIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1080a49ec

// -[SCValdiProcessedText hasOnTap]
// Type encoding: B16@0:8
// Implementation: 0x1080a4a24

// -[SCValdiProcessedText hasOnLayout]
// Type encoding: B16@0:8
// Implementation: 0x1080a4a40

// -[SCValdiProcessedText hasOuterOutline]
// Type encoding: B16@0:8
// Implementation: 0x1080a4a5c

// -[SCValdiProcessedText hasCustomUnderline]
// Type encoding: B16@0:8
// Implementation: 0x1080a4a78

// -[SCValdiProcessedText animationTransformsCount]
// Type encoding: Q16@0:8
// Implementation: 0x1080a4a94

// -[SCValdiProcessedText onTapAtIndex:effectiveRange:]
// Type encoding: @32@0:8Q16^{_NSRange=QQ}24
// Implementation: 0x1080a4a9c

// -[SCValdiProcessedText onLayoutAtIndex:effectiveRange:]
// Type encoding: @32@0:8Q16^{_NSRange=QQ}24
// Implementation: 0x1080a4b5c

// -[SCValdiProcessedText inlineViewAttachmentAtIndex:effectiveRange:]
// Type encoding: @32@0:8Q16^{_NSRange=QQ}24
// Implementation: 0x1080a4c1c

// -[SCValdiProcessedText inlineViewAttachmentForViewIndex:effectiveRange:]
// Type encoding: @32@0:8Q16^{_NSRange=QQ}24
// Implementation: 0x1080a4cdc

// -[SCValdiProcessedText rectForInlineViewAttachment:layoutManager:textContainer:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}40@0:8@16@24@32
// Implementation: 0x1080a4dc0

// -[SCValdiProcessedText clampToCharacterLimit:ignoreNewlines:didChange:]
// Type encoding: v36@0:8q16B24^B28
// Implementation: 0x1080a5000

// -[SCValdiProcessedText enumerateOnLayoutCallbacksUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080a5790

// -[SCValdiProcessedText enumerateInlineViewAttachmentsUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080a5844

// -[SCValdiProcessedText enumerateAnimationTransformsUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080a58f8

// -[SCValdiProcessedText enumerateOuterOutlinesUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080a59ac

// -[SCValdiProcessedText updateInlineAttachments]
// Type encoding: B16@0:8
// Implementation: 0x1080a5a90

// -[SCValdiProcessedText attributedString]
// Type encoding: @16@0:8
// Implementation: 0x1080a5c28

// -[SCValdiProcessedText customUnderlineSourceString]
// Type encoding: @16@0:8
// Implementation: 0x1080a5c30

// -[SCValdiProcessedText customUnderlineCharacterRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080a5c38

// -[SCValdiProcessedText .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080a5c40

// +[SCValdiProcessedText processedTextWithString:onTapItems:onLayoutItems:inlineAttachmentItems:animationItems:outlineItems:configuration:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1080a34d8

// +[SCValdiProcessedText processedTextWithAttributeValue:attributes:isRightToLeft:fontManager:traitCollection:configuration:]
// Type encoding: @60@0:8@16@24B32@36@44@52
// Implementation: 0x1080a3910

@end
