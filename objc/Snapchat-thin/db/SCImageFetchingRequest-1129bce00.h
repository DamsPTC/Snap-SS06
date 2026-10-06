// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageFetchingRequest
// Superclass: NSObject
// Address: 0x1129bce00

@interface SCImageFetchingRequest

// Property: imageSource; attributes: T@"SCImageSource",N,R,VimageSource
// Property: attributedFeature; attributes: T@"SCAttributedFeature",N,R,VattributedFeature
// Property: scale; attributes: Td,N,R,Vscale
// Property: targetSize; attributes: T{CGSize=dd},N,R,VtargetSize
// Property: dataEncryptionStrategy; attributes: T@"SCDataEncryptionStrategy",N,R,VdataEncryptionStrategy
// Property: description; attributes: T@"NSString",N,R

// -[SCImageFetchingRequest initWithImageSource:attributedFeature:targetSize:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x104478b40

// -[SCImageFetchingRequest initWithImageSource:attributedFeature:scale:targetSize:]
// Type encoding: @56@0:8@16@24d32{CGSize=dd}40
// Implementation: 0x104478c70

// -[SCImageFetchingRequest imageSource]
// Type encoding: @16@0:8
// Implementation: 0x104479948

// -[SCImageFetchingRequest attributedFeature]
// Type encoding: @16@0:8
// Implementation: 0x104479958

// -[SCImageFetchingRequest scale]
// Type encoding: d16@0:8
// Implementation: 0x104479968

// -[SCImageFetchingRequest targetSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x104479978

// -[SCImageFetchingRequest dataEncryptionStrategy]
// Type encoding: @16@0:8
// Implementation: 0x10447998c

// -[SCImageFetchingRequest initWithImageSource:attributedFeature:scale:targetSize:dataEncryptionStrategy:]
// Type encoding: @64@0:8@16@24d32{CGSize=dd}40@56
// Implementation: 0x104479a48

// -[SCImageFetchingRequest copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104479c54

// -[SCImageFetchingRequest description]
// Type encoding: @16@0:8
// Implementation: 0x104479c58

// -[SCImageFetchingRequest init]
// Type encoding: @16@0:8
// Implementation: 0x104479cfc

// -[SCImageFetchingRequest .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104479d78

@end
