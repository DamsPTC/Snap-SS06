// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiTextViewEffectsLayoutManager
// Superclass: NSLayoutManager
// Address: 0x112b991b8

@interface SCValdiTextViewEffectsLayoutManager

// Property: animationEntries; attributes: T@"NSArray",&,N,V_animationEntries
// Property: cachedAnimationRanges; attributes: T@"NSArray",&,N,V_cachedAnimationRanges
// Property: cachedVisibleAnimationRanges; attributes: T@"NSArray",&,N,V_cachedVisibleAnimationRanges
// Property: cachedOutlineRanges; attributes: T@"NSArray",&,N,V_cachedOutlineRanges
// Property: cachedCustomUnderlineRanges; attributes: T@"NSArray",&,N,V_cachedCustomUnderlineRanges
// Property: animationStartTimes; attributes: T@"NSMutableDictionary",&,N,V_animationStartTimes
// Property: storedAnimationProgress; attributes: T@"SCValdiTextAnimationStoredProgress",&,N,V_storedAnimationProgress
// Property: hasActiveAnimationRanges; attributes: TB,N,V_hasActiveAnimationRanges
// Property: effects; attributes: T@"SCValdiTextViewBackgroundEffects",&,N,V_effects
// Property: customUnderlineStyle; attributes: T@"SCValdiCustomUnderlineStyle",&,N,V_customUnderlineStyle
// Property: customUnderlineSourceAttributedString; attributes: T@"NSAttributedString",&,N,V_customUnderlineSourceAttributedString
// Property: customUnderlineCharacterRanges; attributes: T@"NSArray",C,N,V_customUnderlineCharacterRanges
// Property: customUnderlineFallbackColor; attributes: T@"UIColor",&,N,V_customUnderlineFallbackColor
// Property: processedText; attributes: T@"SCValdiProcessedText",&,N,V_processedText
// Property: backgroundColor; attributes: T@"UIColor",R,N
// Property: backgroundBorderRadius; attributes: Td,R,N
// Property: backgroundPadding; attributes: Td,R,N
// Property: textAnimationCoordinator; attributes: T@"SCValdiTextAnimationCoordinator",W,N,V_textAnimationCoordinator
// Property: textAnimationBasePartIndex; attributes: TQ,N,V_textAnimationBasePartIndex
// Property: valdiViewNode; attributes: T@"<SCValdiViewNodeProtocol>",W,N,V_valdiViewNode

// -[SCValdiTextViewEffectsLayoutManager backgroundColor]
// Type encoding: @16@0:8
// Implementation: 0x1080bd33c

// -[SCValdiTextViewEffectsLayoutManager backgroundBorderRadius]
// Type encoding: d16@0:8
// Implementation: 0x1080bd3a8

// -[SCValdiTextViewEffectsLayoutManager backgroundPadding]
// Type encoding: d16@0:8
// Implementation: 0x1080bd3e4

// -[SCValdiTextViewEffectsLayoutManager invalidateAnimatedTextProgress]
// Type encoding: B16@0:8
// Implementation: 0x1080bd420

// -[SCValdiTextViewEffectsLayoutManager opacityForAnimationRange:]
// Type encoding: d32@0:8{_NSRange=QQ}16
// Implementation: 0x1080bd478

// -[SCValdiTextViewEffectsLayoutManager presentationForAnimationRange:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x1080bd4c4

// -[SCValdiTextViewEffectsLayoutManager setProcessedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bd5e4

// -[SCValdiTextViewEffectsLayoutManager setTextAnimationCoordinator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bd650

// -[SCValdiTextViewEffectsLayoutManager setTextAnimationBasePartIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1080bd698

// -[SCValdiTextViewEffectsLayoutManager setValdiViewNode:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bd6b8

// -[SCValdiTextViewEffectsLayoutManager prepareGroupedAnimatedTextProgress]
// Type encoding: v16@0:8
// Implementation: 0x1080bd724

// -[SCValdiTextViewEffectsLayoutManager saveAnimatedTextProgress]
// Type encoding: v16@0:8
// Implementation: 0x1080bd858

// -[SCValdiTextViewEffectsLayoutManager clearAnimatedTextProgress]
// Type encoding: v16@0:8
// Implementation: 0x1080bd9b4

// -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bda00

// -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineSourceAttributedString:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bda58

// -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineCharacterRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bdab0

// -[SCValdiTextViewEffectsLayoutManager setCustomUnderlineFallbackColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080bdb2c

// -[SCValdiTextViewEffectsLayoutManager drawGlyphsForGlyphRange:atPoint:]
// Type encoding: v48@0:8{_NSRange=QQ}16{CGPoint=dd}32
// Implementation: 0x1080bdb84

// -[SCValdiTextViewEffectsLayoutManager processEditingForTextStorage:edited:range:changeInLength:invalidatedRange:]
// Type encoding: v72@0:8@16Q24{_NSRange=QQ}32q48{_NSRange=QQ}56
// Implementation: 0x1080bde20

// -[SCValdiTextViewEffectsLayoutManager usedRectForTextContainer:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8@16
// Implementation: 0x1080bde8c

// -[SCValdiTextViewEffectsLayoutManager _maximumDrawnOuterOutlineSize]
// Type encoding: d16@0:8
// Implementation: 0x1080bdefc

// -[SCValdiTextViewEffectsLayoutManager _getAdjustedOriginForPoint:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x1080bdff8

// -[SCValdiTextViewEffectsLayoutManager _drawOutline:attributedString:glyphsOrigin:context:]
// Type encoding: v56@0:8@16@24{CGPoint=dd}32^{CGContext=}48
// Implementation: 0x1080be0e4

// -[SCValdiTextViewEffectsLayoutManager _invalidateAnimationRangeCaches]
// Type encoding: v16@0:8
// Implementation: 0x1080be470

// -[SCValdiTextViewEffectsLayoutManager _invalidateAnimationEntries]
// Type encoding: v16@0:8
// Implementation: 0x1080be498

// -[SCValdiTextViewEffectsLayoutManager _animationEntries]
// Type encoding: @16@0:8
// Implementation: 0x1080be4c0

// -[SCValdiTextViewEffectsLayoutManager _animationRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080beb20

// -[SCValdiTextViewEffectsLayoutManager _storedAnimationProgressCreatingIfNeeded]
// Type encoding: @16@0:8
// Implementation: 0x1080bf138

// -[SCValdiTextViewEffectsLayoutManager _storedAnimationProgressInViewNode:createIfNeeded:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1080bf1ac

// -[SCValdiTextViewEffectsLayoutManager _storedAnimationStartTimeForRangeKey:inStoredProgress:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1080bf25c

// -[SCValdiTextViewEffectsLayoutManager _storeAnimationStartTime:forRangeKey:inStoredProgress:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x1080bf2dc

// -[SCValdiTextViewEffectsLayoutManager _visibleAnimationRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080bf378

// -[SCValdiTextViewEffectsLayoutManager _outlineRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080bf4e8

// -[SCValdiTextViewEffectsLayoutManager _outlineRangesInRange:]
// Type encoding: @32@0:8{_NSRange=QQ}16
// Implementation: 0x1080bf878

// -[SCValdiTextViewEffectsLayoutManager _customUnderlineRangesForAttributedString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080bf9b4

// -[SCValdiTextViewEffectsLayoutManager _drawStaticGlyphsForGlyphRange:atPoint:animationRanges:]
// Type encoding: v56@0:8{_NSRange=QQ}16{CGPoint=dd}32@48
// Implementation: 0x1080bfd44

// -[SCValdiTextViewEffectsLayoutManager _drawCustomUnderlineRange:color:glyphsToShow:glyphsOrigin:context:]
// Type encoding: v80@0:8{_NSRange=QQ}16@32{_NSRange=QQ}40{CGPoint=dd}56^{CGContext=}72
// Implementation: 0x1080bff60

// -[SCValdiTextViewEffectsLayoutManager _drawStaticCustomUnderline:animationRanges:glyphsToShow:glyphsOrigin:context:]
// Type encoding: v72@0:8@16@24{_NSRange=QQ}32{CGPoint=dd}48^{CGContext=}64
// Implementation: 0x1080c0058

// -[SCValdiTextViewEffectsLayoutManager _drawStaticCustomUnderlines:animationRanges:glyphsToShow:glyphsOrigin:context:]
// Type encoding: v72@0:8@16@24{_NSRange=QQ}32{CGPoint=dd}48^{CGContext=}64
// Implementation: 0x1080c02d0

// -[SCValdiTextViewEffectsLayoutManager _drawCustomUnderlinesInRange:glyphsToShow:glyphsOrigin:context:]
// Type encoding: v72@0:8{_NSRange=QQ}16{_NSRange=QQ}32{CGPoint=dd}48^{CGContext=}64
// Implementation: 0x1080c0438

// -[SCValdiTextViewEffectsLayoutManager _drawAnimatedRange:glyphsOrigin:context:]
// Type encoding: v48@0:8@16{CGPoint=dd}24^{CGContext=}40
// Implementation: 0x1080c0654

// -[SCValdiTextViewEffectsLayoutManager drawBackgroundForGlyphRange:atPoint:]
// Type encoding: v48@0:8{_NSRange=QQ}16{CGPoint=dd}32
// Implementation: 0x1080c09c4

// -[SCValdiTextViewEffectsLayoutManager _addVerticalPaddingTo:padding:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16d48
// Implementation: 0x1080c0cac

// -[SCValdiTextViewEffectsLayoutManager _processLineRects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c0cbc

// -[SCValdiTextViewEffectsLayoutManager _processLineRectAtIndex:maxIndex:lineRects:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x1080c0d14

// -[SCValdiTextViewEffectsLayoutManager _drawLineRects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c0fd8

// -[SCValdiTextViewEffectsLayoutManager effects]
// Type encoding: @16@0:8
// Implementation: 0x1080c17a0

// -[SCValdiTextViewEffectsLayoutManager setEffects:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c17ac

// -[SCValdiTextViewEffectsLayoutManager customUnderlineStyle]
// Type encoding: @16@0:8
// Implementation: 0x1080c17d8

// -[SCValdiTextViewEffectsLayoutManager customUnderlineSourceAttributedString]
// Type encoding: @16@0:8
// Implementation: 0x1080c17e4

// -[SCValdiTextViewEffectsLayoutManager customUnderlineCharacterRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080c17f0

// -[SCValdiTextViewEffectsLayoutManager customUnderlineFallbackColor]
// Type encoding: @16@0:8
// Implementation: 0x1080c17fc

// -[SCValdiTextViewEffectsLayoutManager processedText]
// Type encoding: @16@0:8
// Implementation: 0x1080c1808

// -[SCValdiTextViewEffectsLayoutManager hasActiveAnimationRanges]
// Type encoding: B16@0:8
// Implementation: 0x1080c1814

// -[SCValdiTextViewEffectsLayoutManager setHasActiveAnimationRanges:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080c1824

// -[SCValdiTextViewEffectsLayoutManager textAnimationCoordinator]
// Type encoding: @16@0:8
// Implementation: 0x1080c1834

// -[SCValdiTextViewEffectsLayoutManager textAnimationBasePartIndex]
// Type encoding: Q16@0:8
// Implementation: 0x1080c1854

// -[SCValdiTextViewEffectsLayoutManager valdiViewNode]
// Type encoding: @16@0:8
// Implementation: 0x1080c1860

// -[SCValdiTextViewEffectsLayoutManager animationEntries]
// Type encoding: @16@0:8
// Implementation: 0x1080c1880

// -[SCValdiTextViewEffectsLayoutManager setAnimationEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c188c

// -[SCValdiTextViewEffectsLayoutManager cachedAnimationRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080c18b8

// -[SCValdiTextViewEffectsLayoutManager setCachedAnimationRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c18c4

// -[SCValdiTextViewEffectsLayoutManager cachedVisibleAnimationRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080c18f0

// -[SCValdiTextViewEffectsLayoutManager setCachedVisibleAnimationRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c18fc

// -[SCValdiTextViewEffectsLayoutManager cachedOutlineRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080c1928

// -[SCValdiTextViewEffectsLayoutManager setCachedOutlineRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c1934

// -[SCValdiTextViewEffectsLayoutManager cachedCustomUnderlineRanges]
// Type encoding: @16@0:8
// Implementation: 0x1080c1960

// -[SCValdiTextViewEffectsLayoutManager setCachedCustomUnderlineRanges:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c196c

// -[SCValdiTextViewEffectsLayoutManager animationStartTimes]
// Type encoding: @16@0:8
// Implementation: 0x1080c1998

// -[SCValdiTextViewEffectsLayoutManager setAnimationStartTimes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c19a4

// -[SCValdiTextViewEffectsLayoutManager storedAnimationProgress]
// Type encoding: @16@0:8
// Implementation: 0x1080c19d0

// -[SCValdiTextViewEffectsLayoutManager setStoredAnimationProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080c19dc

// -[SCValdiTextViewEffectsLayoutManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080c1a08

@end
