// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPersonStatus
// Superclass: NSObject
// Address: 0x1129a4498

@interface SCMapPersonStatus

// Property: statusId; attributes: T@"NSString",N,R
// Property: sticker; attributes: T@"SCMapBitmojiSticker",N,R,Vsticker
// Property: constraint; attributes: T@"SCMapPersonStatusConstraint",N,R,Vconstraint
// Property: description; attributes: T@"NSString",N,R

// -[SCMapPersonStatus isCancelledAtCoordinate:]
// Type encoding: B32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x106b1ecac

// -[SCMapPersonStatus statusId]
// Type encoding: @16@0:8
// Implementation: 0x104381858

// -[SCMapPersonStatus sticker]
// Type encoding: @16@0:8
// Implementation: 0x1043818b4

// -[SCMapPersonStatus constraint]
// Type encoding: @16@0:8
// Implementation: 0x1043818c4

// -[SCMapPersonStatus initWithStatusId:sticker:constraint:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104381958

// -[SCMapPersonStatus copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104381bec

// -[SCMapPersonStatus description]
// Type encoding: @16@0:8
// Implementation: 0x104381bf0

// -[SCMapPersonStatus init]
// Type encoding: @16@0:8
// Implementation: 0x104381d8c

// -[SCMapPersonStatus .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104381e08

@end
