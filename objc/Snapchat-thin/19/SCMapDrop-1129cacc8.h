// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapDrop
// Superclass: NSObject
// Address: 0x1129cacc8

@interface SCMapDrop

// Property: dropIdentifier; attributes: T@"NSString",N,R
// Property: creatorIdentifier; attributes: T@"NSString",N,R
// Property: coordinate; attributes: T{CLLocationCoordinate2D=dd},N,R,Vcoordinate
// Property: name; attributes: T@"NSString",N,R
// Property: bitmojiID; attributes: T@"NSString",N,R
// Property: selfieID; attributes: T@"NSString",N,R
// Property: state; attributes: Tq,N,R,Vstate
// Property: isCreator; attributes: TB,N,R,VisCreator
// Property: showLabel; attributes: TB,N,R,VshowLabel
// Property: addressString; attributes: T@"NSString",N,R
// Property: pinIcon; attributes: T@"NSString",N,R
// Property: isSaved; attributes: TB,N,R,VisSaved
// Property: description; attributes: T@"NSString",N,R

// -[SCMapDrop withState:isSaved:]
// Type encoding: @28@0:8q16B24
// Implementation: 0x10451df7c

// -[SCMapDrop withCoordinate:]
// Type encoding: @32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x10451e234

// -[SCMapDrop withTitle:icon:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10451e4f4

// -[SCMapDrop dropIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10451ef1c

// -[SCMapDrop creatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10451ef28

// -[SCMapDrop coordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x10451ef34

// -[SCMapDrop name]
// Type encoding: @16@0:8
// Implementation: 0x10451ef48

// -[SCMapDrop bitmojiID]
// Type encoding: @16@0:8
// Implementation: 0x10451ef9c

// -[SCMapDrop selfieID]
// Type encoding: @16@0:8
// Implementation: 0x10451efa8

// -[SCMapDrop state]
// Type encoding: q16@0:8
// Implementation: 0x10451efb4

// -[SCMapDrop isCreator]
// Type encoding: B16@0:8
// Implementation: 0x10451efc4

// -[SCMapDrop showLabel]
// Type encoding: B16@0:8
// Implementation: 0x10451efd4

// -[SCMapDrop addressString]
// Type encoding: @16@0:8
// Implementation: 0x10451efe4

// -[SCMapDrop pinIcon]
// Type encoding: @16@0:8
// Implementation: 0x10451eff0

// -[SCMapDrop isSaved]
// Type encoding: B16@0:8
// Implementation: 0x10451f054

// -[SCMapDrop initWithDropIdentifier:creatorIdentifier:coordinate:name:bitmojiID:selfieID:state:isCreator:showLabel:addressString:pinIcon:isSaved:]
// Type encoding: @108@0:8@16@24{CLLocationCoordinate2D=dd}32@48@56@64q72B80B84@88@96B104
// Implementation: 0x10451f1fc

// -[SCMapDrop copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x10451f534

// -[SCMapDrop description]
// Type encoding: @16@0:8
// Implementation: 0x10451f538

// -[SCMapDrop init]
// Type encoding: @16@0:8
// Implementation: 0x10451f56c

// -[SCMapDrop .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10451f5e8

@end
