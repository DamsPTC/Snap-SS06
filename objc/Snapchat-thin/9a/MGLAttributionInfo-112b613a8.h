// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLAttributionInfo
// Superclass: NSObject
// Address: 0x112b613a8

@interface MGLAttributionInfo

// Property: title; attributes: T@"NSAttributedString",&,N,V_title
// Property: URL; attributes: T@"NSURL",&,N,V_URL
// Property: feedbackLink; attributes: TB,N,GisFeedbackLink,V_feedbackLink

// -[MGLAttributionInfo initWithTitle:URL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1072447ec

// -[MGLAttributionInfo copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10724488c

// -[MGLAttributionInfo feedbackURLAtCenterCoordinate:zoomLevel:]
// Type encoding: @40@0:8{CLLocationCoordinate2D=dd}16d32
// Implementation: 0x1072448dc

// -[MGLAttributionInfo feedbackURLForStyleURL:atCenterCoordinate:zoomLevel:direction:pitch:]
// Type encoding: @64@0:8@16{CLLocationCoordinate2D=dd}24d40d48d56
// Implementation: 0x1072448ec

// -[MGLAttributionInfo titleWithStyle:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107244d9c

// -[MGLAttributionInfo isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x107244fdc

// -[MGLAttributionInfo hash]
// Type encoding: Q16@0:8
// Implementation: 0x1072450fc

// -[MGLAttributionInfo subsetCompare:]
// Type encoding: q24@0:8@16
// Implementation: 0x107245170

// -[MGLAttributionInfo title]
// Type encoding: @16@0:8
// Implementation: 0x10724525c

// -[MGLAttributionInfo setTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x107245264

// -[MGLAttributionInfo URL]
// Type encoding: @16@0:8
// Implementation: 0x107245284

// -[MGLAttributionInfo setURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10724528c

// -[MGLAttributionInfo isFeedbackLink]
// Type encoding: B16@0:8
// Implementation: 0x1072452ac

// -[MGLAttributionInfo setFeedbackLink:]
// Type encoding: v20@0:8B16
// Implementation: 0x1072452b4

// -[MGLAttributionInfo .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1072452bc

// +[MGLAttributionInfo attributionInfosFromHTMLString:fontSize:linkColor:]
// Type encoding: @40@0:8@16d24@32
// Implementation: 0x1072440c0

@end
