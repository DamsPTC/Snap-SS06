// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardData
// Superclass: NSObject
// Address: 0x112c78958

@interface SCLensInfoCardData

// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: lensMetadata; attributes: T@"SCLensInfoCardLensMetadata",R,C,N,V_lensMetadata
// Property: lensCreator; attributes: T@"SCLensInfoCardLensCreator",R,C,N,V_lensCreator
// Property: availableActions; attributes: TQ,R,N,V_availableActions

// -[SCLensInfoCardData initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b5ffb44

// -[SCLensInfoCardData initWithLensId:lensMetadata:lensCreator:availableActions:]
// Type encoding: @48@0:8@16@24@32Q40
// Implementation: 0x10b5ffc30

// -[SCLensInfoCardData copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b5ffd18

// -[SCLensInfoCardData encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b5ffd3c

// -[SCLensInfoCardData hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b5ffdc4

// -[SCLensInfoCardData isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b5ffe48

// -[SCLensInfoCardData lensId]
// Type encoding: @16@0:8
// Implementation: 0x10b5fff18

// -[SCLensInfoCardData lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b5fff20

// -[SCLensInfoCardData lensCreator]
// Type encoding: @16@0:8
// Implementation: 0x10b5fff28

// -[SCLensInfoCardData availableActions]
// Type encoding: Q16@0:8
// Implementation: 0x10b5fff30

// -[SCLensInfoCardData .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b5fff38

@end
