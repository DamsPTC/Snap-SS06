// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDynamicGeoFilterTextResource
// Superclass: SCDynamicGeoFilterResource
// Address: 0x112be84e8

@interface SCDynamicGeoFilterTextResource

// Property: fontColor; attributes: T@"UIColor",&,N,V_fontColor
// Property: fontSize; attributes: Td,N,V_fontSize
// Property: maxFontSize; attributes: Td,N,V_maxFontSize
// Property: fontURL; attributes: T@"NSString",&,N,V_fontURL
// Property: alignment; attributes: Tq,N,V_alignment
// Property: shadow; attributes: T@"NSShadow",&,N,V_shadow
// Property: autoResizeEnabled; attributes: TB,N,V_autoResizeEnabled
// Property: fallbackText; attributes: T@"NSString",&,N,V_fallbackText
// Property: capitalization; attributes: T@"NSString",&,N,V_capitalization
// Property: lastRetrieved; attributes: T@"NSString",C,V_lastRetrieved
// Property: staticText; attributes: T@"NSString",C,N,V_staticText
// Property: dynamicText; attributes: T@"NSString",C,N,V_dynamicText
// Property: targetDateTime; attributes: T@"NSString",C,N,V_targetDateTime
// Property: targetDirection; attributes: T@"NSString",C,N,V_targetDirection
// Property: fallbackMethod; attributes: Tq,N,V_fallbackMethod

// -[SCDynamicGeoFilterTextResource hashableValuesFromDisplayParameters]
// Type encoding: @16@0:8
// Implementation: 0x109133de4

// -[SCDynamicGeoFilterTextResource initWithfontSize:maxFontSize:fontURL:staticText:fontColor:fontColorAlpha:autoResizeEnabled:shadow:fallbackText:capitalization:alignment:layout:source:resourceId:rotation:minRefreshInterval:type:dynamicText:targetDatetime:targetDateTimeDirection:fallbackMethod:filterId:]
// Type encoding: @212@0:8d16d24@32@40@48d56B64@68@76@84@92{CGRect={CGPoint=dd}{CGSize=dd}}100@132@140d148d156@164@172@180@188q196@204
// Implementation: 0x109134204

// -[SCDynamicGeoFilterTextResource initWithDictionary:filterId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10913452c

// -[SCDynamicGeoFilterTextResource parseShadow:]
// Type encoding: @24@0:8@16
// Implementation: 0x109134a70

// -[SCDynamicGeoFilterTextResource initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x109134c10

// -[SCDynamicGeoFilterTextResource encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x109134ea4

// -[SCDynamicGeoFilterTextResource getUIImagesWithCanvasSize:completion:performerQueue:contextData:dynamicContextProperties:displayName:]
// Type encoding: v72@0:8{CGSize=dd}16@?32@40@48@56@64
// Implementation: 0x109135068

// -[SCDynamicGeoFilterTextResource getUIImagesWithCanvasSize:preloadedText:completion:performerQueue:contextData:dynamicContextProperties:displayName:]
// Type encoding: v80@0:8{CGSize=dd}16@32@?40@48@56@64@72
// Implementation: 0x109135084

// -[SCDynamicGeoFilterTextResource renderCacheComponentKeyWithContextData:dynamicContextProperties:userName:displayName:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109135608

// -[SCDynamicGeoFilterTextResource _handleFontUrlFetchWithNSData:error:completion:canvasSize:preloadedText:contextData:dynamicContextProperties:displayName:]
// Type encoding: v88@0:8@16@24@?32{CGSize=dd}40@56@64@72@80
// Implementation: 0x1091357c0

// -[SCDynamicGeoFilterTextResource _logFilterResourceDataNilMetricForReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x109135c28

// -[SCDynamicGeoFilterTextResource _imageWithCanvasSize:font:completion:contextData:dynamicContextProperties:displayName:]
// Type encoding: v72@0:8{CGSize=dd}16@32@?40@48@56@64
// Implementation: 0x109135d1c

// -[SCDynamicGeoFilterTextResource stringBySubstitutingDynamicTextWithContextData:dynamicContextProperties:userName:displayName:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x109136298

// -[SCDynamicGeoFilterTextResource _setDynamicTextWithSubstitutionAndReturn:]
// Type encoding: @24@0:8@16
// Implementation: 0x109136b94

// -[SCDynamicGeoFilterTextResource _imageWithCanvasSize:font:text:completion:]
// Type encoding: v56@0:8{CGSize=dd}16@32@40@?48
// Implementation: 0x109137864

// -[SCDynamicGeoFilterTextResource _sizeFontAndFitWithText:boundingBox:attributes:font:singleLineParagraphStyle:multiLineParagraphStyle:returnHeight:stringDrawingOptions:stringDrawingContext:]
// Type encoding: @96@0:8@16{CGSize=dd}24@40@48@56@64o^d72o^q80o^@88
// Implementation: 0x1091381c8

// -[SCDynamicGeoFilterTextResource _attributedStringSizedToFitForText:boundingBox:attributes:font:paragraphStyle:returnHeight:]
// Type encoding: @72@0:8@16{CGSize=dd}24@40@48@56o^d64
// Implementation: 0x1091382e8

// -[SCDynamicGeoFilterTextResource _attributedStringSizedToFitMultilineForText:boundingBox:attributes:font:paragraphStyle:returnHeight:stringDrawingOptions:stringDrawingContext:]
// Type encoding: @88@0:8@16{CGSize=dd}24@40@48@56o^d64o^q72o^@80
// Implementation: 0x109138550

// -[SCDynamicGeoFilterTextResource fetchesTextDataFromServer]
// Type encoding: B16@0:8
// Implementation: 0x109138940

// -[SCDynamicGeoFilterTextResource staticText]
// Type encoding: @16@0:8
// Implementation: 0x109138970

// -[SCDynamicGeoFilterTextResource setStaticText:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138980

// -[SCDynamicGeoFilterTextResource dynamicText]
// Type encoding: @16@0:8
// Implementation: 0x10913898c

// -[SCDynamicGeoFilterTextResource setDynamicText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913899c

// -[SCDynamicGeoFilterTextResource targetDateTime]
// Type encoding: @16@0:8
// Implementation: 0x1091389a8

// -[SCDynamicGeoFilterTextResource setTargetDateTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091389b8

// -[SCDynamicGeoFilterTextResource targetDirection]
// Type encoding: @16@0:8
// Implementation: 0x1091389c4

// -[SCDynamicGeoFilterTextResource setTargetDirection:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091389d4

// -[SCDynamicGeoFilterTextResource fallbackMethod]
// Type encoding: q16@0:8
// Implementation: 0x1091389e0

// -[SCDynamicGeoFilterTextResource setFallbackMethod:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091389f0

// -[SCDynamicGeoFilterTextResource fontColor]
// Type encoding: @16@0:8
// Implementation: 0x109138a00

// -[SCDynamicGeoFilterTextResource setFontColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138a10

// -[SCDynamicGeoFilterTextResource fontSize]
// Type encoding: d16@0:8
// Implementation: 0x109138a50

// -[SCDynamicGeoFilterTextResource setFontSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x109138a60

// -[SCDynamicGeoFilterTextResource maxFontSize]
// Type encoding: d16@0:8
// Implementation: 0x109138a70

// -[SCDynamicGeoFilterTextResource setMaxFontSize:]
// Type encoding: v24@0:8d16
// Implementation: 0x109138a80

// -[SCDynamicGeoFilterTextResource fontURL]
// Type encoding: @16@0:8
// Implementation: 0x109138a90

// -[SCDynamicGeoFilterTextResource setFontURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138aa0

// -[SCDynamicGeoFilterTextResource alignment]
// Type encoding: q16@0:8
// Implementation: 0x109138ae0

// -[SCDynamicGeoFilterTextResource setAlignment:]
// Type encoding: v24@0:8q16
// Implementation: 0x109138af0

// -[SCDynamicGeoFilterTextResource shadow]
// Type encoding: @16@0:8
// Implementation: 0x109138b00

// -[SCDynamicGeoFilterTextResource setShadow:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138b10

// -[SCDynamicGeoFilterTextResource autoResizeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109138b50

// -[SCDynamicGeoFilterTextResource setAutoResizeEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x109138b60

// -[SCDynamicGeoFilterTextResource fallbackText]
// Type encoding: @16@0:8
// Implementation: 0x109138b70

// -[SCDynamicGeoFilterTextResource setFallbackText:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138b80

// -[SCDynamicGeoFilterTextResource capitalization]
// Type encoding: @16@0:8
// Implementation: 0x109138bc0

// -[SCDynamicGeoFilterTextResource setCapitalization:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138bd0

// -[SCDynamicGeoFilterTextResource lastRetrieved]
// Type encoding: @16@0:8
// Implementation: 0x109138c10

// -[SCDynamicGeoFilterTextResource setLastRetrieved:]
// Type encoding: v24@0:8@16
// Implementation: 0x109138c20

// -[SCDynamicGeoFilterTextResource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109138c2c

// +[SCDynamicGeoFilterTextResource textAlignmentToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x1091349d4

// +[SCDynamicGeoFilterTextResource _textAlignmentFromString:]
// Type encoding: q24@0:8@16
// Implementation: 0x1091349f4

// +[SCDynamicGeoFilterTextResource _substituteUsernameWhenEmpty:fallbackMethod:fallbackText:userName:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x109136a4c

// +[SCDynamicGeoFilterTextResource _getRelativeTime:direction:withFormat:fromCurrentTime:fallbackText:relativeTimeComponents:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x109136bbc

// +[SCDynamicGeoFilterTextResource _intervalStringFrom:withFormat:targetDirection:relativeTimeComponents:]
// Type encoding: @48@0:8d16@24@32@40
// Implementation: 0x109137240

// +[SCDynamicGeoFilterTextResource _unitNameFromTimeComponent:withValue:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x109137718

// +[SCDynamicGeoFilterTextResource _unitValueFromString:withDateComponents:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x109137750

@end
