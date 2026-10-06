// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaceLoadedEvent
// Superclass: NSObject
// Address: 0x112997978

@interface SCPlaceLoadedEvent

// Property: placeId; attributes: T@"NSString",N,R
// Property: pinType; attributes: T@"SCPinType",N,R,VpinType
// Property: annotations; attributes: T@"NSArray",N,R
// Property: tileId; attributes: TQ,N,R,VtileId
// Property: zoomLevel; attributes: Tq,N,R,VzoomLevel
// Property: placeAttributes; attributes: T@"SCPromotedPlaceAttributes",N,R,VplaceAttributes
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCPlaceLoadedEvent placeId]
// Type encoding: @16@0:8
// Implementation: 0x104302ad0

// -[SCPlaceLoadedEvent pinType]
// Type encoding: @16@0:8
// Implementation: 0x104302b24

// -[SCPlaceLoadedEvent annotations]
// Type encoding: @16@0:8
// Implementation: 0x104302b34

// -[SCPlaceLoadedEvent tileId]
// Type encoding: Q16@0:8
// Implementation: 0x104302b7c

// -[SCPlaceLoadedEvent zoomLevel]
// Type encoding: q16@0:8
// Implementation: 0x104302b8c

// -[SCPlaceLoadedEvent placeAttributes]
// Type encoding: @16@0:8
// Implementation: 0x104302b9c

// -[SCPlaceLoadedEvent initWithPlaceId:pinType:annotations:tileId:zoomLevel:placeAttributes:]
// Type encoding: @64@0:8@16@24@32Q40q48@56
// Implementation: 0x104302c68

// -[SCPlaceLoadedEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x104302f5c

// -[SCPlaceLoadedEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x104302f90

// -[SCPlaceLoadedEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104303434

// -[SCPlaceLoadedEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104303010

// -[SCPlaceLoadedEvent init]
// Type encoding: @16@0:8
// Implementation: 0x10430309c

// -[SCPlaceLoadedEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10430311c

@end
