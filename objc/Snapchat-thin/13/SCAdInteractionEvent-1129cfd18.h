// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdInteractionEvent
// Superclass: NSObject
// Address: 0x1129cfd18

@interface SCAdInteractionEvent

// Property: common; attributes: T@"SCAdTrackCommon",N,R,Vcommon
// Property: eventType; attributes: Tq,N,R,VeventType
// Property: intentType; attributes: Tq,N,R,VintentType
// Property: location; attributes: T{CGPoint=dd},N,R,Vlocation
// Property: locationXToScreenWidthRatio; attributes: Td,N,R,VlocationXToScreenWidthRatio
// Property: locationYToScreenHeightRatio; attributes: Td,N,R,VlocationYToScreenHeightRatio
// Property: swipeFailReason; attributes: Tq,N,R,VswipeFailReason
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdInteractionEvent common]
// Type encoding: @16@0:8
// Implementation: 0x104683544

// -[SCAdInteractionEvent eventType]
// Type encoding: q16@0:8
// Implementation: 0x104683554

// -[SCAdInteractionEvent intentType]
// Type encoding: q16@0:8
// Implementation: 0x104683564

// -[SCAdInteractionEvent location]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x104683574

// -[SCAdInteractionEvent locationXToScreenWidthRatio]
// Type encoding: d16@0:8
// Implementation: 0x104683588

// -[SCAdInteractionEvent locationYToScreenHeightRatio]
// Type encoding: d16@0:8
// Implementation: 0x104683598

// -[SCAdInteractionEvent swipeFailReason]
// Type encoding: q16@0:8
// Implementation: 0x1046835a8

// -[SCAdInteractionEvent initWithCommon:eventType:intentType:location:locationXToScreenWidthRatio:locationYToScreenHeightRatio:swipeFailReason:]
// Type encoding: @80@0:8@16q24q32{CGPoint=dd}40d56d64q72
// Implementation: 0x10468368c

// -[SCAdInteractionEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104683888

// -[SCAdInteractionEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104683b74

// -[SCAdInteractionEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104683bf4

// -[SCAdInteractionEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104683bf8

// -[SCAdInteractionEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104683c44

// -[SCAdInteractionEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104683cc0

@end
