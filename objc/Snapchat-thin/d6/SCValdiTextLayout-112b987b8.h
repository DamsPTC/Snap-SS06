// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCValdiTextLayout
// Superclass: NSObject
// Address: 0x112b987b8

@interface SCValdiTextLayout

// Property: processedText; attributes: T@"SCValdiProcessedText",&,N,V_processedText
// Property: layoutManager; attributes: T@"NSLayoutManager",R,N,V_layoutManager
// Property: textContainer; attributes: T@"NSTextContainer",R,N,V_textContainer
// Property: size; attributes: T{CGSize=dd},N
// Property: maxNumberOfLines; attributes: TQ,N
// Property: usedRect; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N

// -[SCValdiTextLayout init]
// Type encoding: @16@0:8
// Implementation: 0x1080a6e60

// -[SCValdiTextLayout initWithLayoutManager:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080a6ea4

// -[SCValdiTextLayout setProcessedText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080a6f5c

// -[SCValdiTextLayout refreshProcessedTextStorage]
// Type encoding: v16@0:8
// Implementation: 0x1080a6fa0

// -[SCValdiTextLayout ensureLayout]
// Type encoding: v16@0:8
// Implementation: 0x1080a7004

// -[SCValdiTextLayout invalidateLayout]
// Type encoding: v16@0:8
// Implementation: 0x1080a7010

// -[SCValdiTextLayout _resolveDrawRectWithOrigin:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8{CGPoint=dd}16
// Implementation: 0x1080a7070

// -[SCValdiTextLayout drawInRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1080a70e0

// -[SCValdiTextLayout size]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1080a7144

// -[SCValdiTextLayout setSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x1080a714c

// -[SCValdiTextLayout usedRect]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1080a71a0

// -[SCValdiTextLayout setMaxNumberOfLines:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1080a71c4

// -[SCValdiTextLayout maxNumberOfLines]
// Type encoding: Q16@0:8
// Implementation: 0x1080a71cc

// -[SCValdiTextLayout characterIndexAtPoint:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x1080a71d4

// -[SCValdiTextLayout insertionIndexAtPoint:]
// Type encoding: q32@0:8{CGPoint=dd}16
// Implementation: 0x1080a7250

// -[SCValdiTextLayout boundingRectForRange:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8{_NSRange=QQ}16
// Implementation: 0x1080a7314

// -[SCValdiTextLayout _glyphRangeForCharacterRange:]
// Type encoding: {_NSRange=QQ}32@0:8{_NSRange=QQ}16
// Implementation: 0x1080a7364

// -[SCValdiTextLayout selectionRectsForRange:inDrawingRect:]
// Type encoding: @64@0:8{_NSRange=QQ}16{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x1080a73e4

// -[SCValdiTextLayout caretRectForCharacterIndex:inDrawingRect:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8Q16{CGRect={CGPoint=dd}{CGSize=dd}}24
// Implementation: 0x1080a7634

// -[SCValdiTextLayout underlineRectsForRange:inDrawingRect:lineWidth:underlineOffset:]
// Type encoding: @80@0:8{_NSRange=QQ}16{CGRect={CGPoint=dd}{CGSize=dd}}32d64d72
// Implementation: 0x1080a7758

// -[SCValdiTextLayout processedText]
// Type encoding: @16@0:8
// Implementation: 0x1080a7aac

// -[SCValdiTextLayout layoutManager]
// Type encoding: @16@0:8
// Implementation: 0x1080a7ab4

// -[SCValdiTextLayout textContainer]
// Type encoding: @16@0:8
// Implementation: 0x1080a7abc

// -[SCValdiTextLayout .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080a7ac4

// +[SCValdiTextLayout measureSizeWithMaxSize:fontAttributes:fontManager:text:traitCollection:]
// Type encoding: {CGSize=dd}64@0:8{CGSize=dd}16@32@40@48@56
// Implementation: 0x1080a77dc

// +[SCValdiTextLayout fontLeadingInMeasureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1080a7a8c

// +[SCValdiTextLayout setFontLeadingInMeasureEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1080a7a9c

@end
