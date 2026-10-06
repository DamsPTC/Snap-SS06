// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaViewInteractionData
// Superclass: NSObject
// Address: 0x1129b3de0

@interface SCOperaViewInteractionData

// Property: type; attributes: TQ,N,R,Vtype
// Property: startLocation; attributes: T{CGPoint=dd},N,R,VstartLocation
// Property: startLocationXToScreenWidthRatio; attributes: Td,N,R,VstartLocationXToScreenWidthRatio
// Property: startLocationYToScreenHeightRatio; attributes: Td,N,R,VstartLocationYToScreenHeightRatio
// Property: endLocation; attributes: T{CGPoint=dd},N,R,VendLocation
// Property: endLocationXToScreenWidthRatio; attributes: Td,N,R,VendLocationXToScreenWidthRatio
// Property: endLocationYToScreenHeightRatio; attributes: Td,N,R,VendLocationYToScreenHeightRatio
// Property: interactionTime; attributes: Td,N,R,VinteractionTime

// -[SCOperaViewInteractionData type]
// Type encoding: Q16@0:8
// Implementation: 0x10443ef48

// -[SCOperaViewInteractionData startLocation]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10443ef58

// -[SCOperaViewInteractionData startLocationXToScreenWidthRatio]
// Type encoding: d16@0:8
// Implementation: 0x10443ef6c

// -[SCOperaViewInteractionData startLocationYToScreenHeightRatio]
// Type encoding: d16@0:8
// Implementation: 0x10443ef7c

// -[SCOperaViewInteractionData endLocation]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10443ef8c

// -[SCOperaViewInteractionData endLocationXToScreenWidthRatio]
// Type encoding: d16@0:8
// Implementation: 0x10443efa0

// -[SCOperaViewInteractionData endLocationYToScreenHeightRatio]
// Type encoding: d16@0:8
// Implementation: 0x10443efb0

// -[SCOperaViewInteractionData interactionTime]
// Type encoding: d16@0:8
// Implementation: 0x10443efc0

// -[SCOperaViewInteractionData initWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:endLocation:endLocationXToScreenWidthRatio:endLocationYToScreenHeightRatio:]
// Type encoding: @88@0:8Q16{CGPoint=dd}24d40d48{CGPoint=dd}56d72d80
// Implementation: 0x10443f1c0

// -[SCOperaViewInteractionData initWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10443f1e4

// -[SCOperaViewInteractionData initWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:]
// Type encoding: @56@0:8Q16{CGPoint=dd}24d40d48
// Implementation: 0x10443f208

// -[SCOperaViewInteractionData init]
// Type encoding: @16@0:8
// Implementation: 0x10443f418

// +[SCOperaViewInteractionData interactionWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10443f264

// +[SCOperaViewInteractionData interactionWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:]
// Type encoding: @56@0:8Q16{CGPoint=dd}24d40d48
// Implementation: 0x10443f2b0

// +[SCOperaViewInteractionData interactionWithType:startLocation:startLocationXToScreenWidthRatio:startLocationYToScreenHeightRatio:endLocation:endLocationXToScreenWidthRatio:endLocationYToScreenHeightRatio:]
// Type encoding: @88@0:8Q16{CGPoint=dd}24d40d48{CGPoint=dd}56d72d80
// Implementation: 0x10443f31c

// +[SCOperaViewInteractionData interactionWithType:startLocation:endLocation:in:]
// Type encoding: @64@0:8Q16{CGPoint=dd}24{CGPoint=dd}40@56
// Implementation: 0x10443f338

// +[SCOperaViewInteractionData interactionWithType:startLocation:in:]
// Type encoding: @48@0:8Q16{CGPoint=dd}24@40
// Implementation: 0x10443f3bc

@end
