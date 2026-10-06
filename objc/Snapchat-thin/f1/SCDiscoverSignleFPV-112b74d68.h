// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverSignleFPV
// Superclass: NSObject
// Address: 0x112b74d68

@interface SCDiscoverSignleFPV

// Property: pageSessionId; attributes: T@"NSString",C,N,V_pageSessionId
// Property: pageType; attributes: T@"NSNumber",&,N,V_pageType
// Property: pageTypeSpecific; attributes: T@"NSString",C,N,V_pageTypeSpecific
// Property: isFSBounced; attributes: TB,N,V_isFSBounced
// Property: isNFSBounced; attributes: TB,N,V_isNFSBounced
// Property: isBlendedBounced; attributes: TB,N,V_isBlendedBounced
// Property: isBounced; attributes: TB,N,V_isBounced

// -[SCDiscoverSignleFPV initWithPageSessionId:data:pageType:pageTypeSpecific:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107bcb040

// -[SCDiscoverSignleFPV _isBounced]
// Type encoding: B16@0:8
// Implementation: 0x107bcb130

// -[SCDiscoverSignleFPV _isBouncedFromSectionData:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bcb240

// -[SCDiscoverSignleFPV getLoggingPageType]
// Type encoding: @16@0:8
// Implementation: 0x107bcb320

// -[SCDiscoverSignleFPV getLoggingBounced]
// Type encoding: @16@0:8
// Implementation: 0x107bcb384

// -[SCDiscoverSignleFPV getLoggingFSBounced]
// Type encoding: @16@0:8
// Implementation: 0x107bcb3dc

// -[SCDiscoverSignleFPV getLoggingNFSBounced]
// Type encoding: @16@0:8
// Implementation: 0x107bcb434

// -[SCDiscoverSignleFPV getLoggingBlendedBounced]
// Type encoding: @16@0:8
// Implementation: 0x107bcb48c

// -[SCDiscoverSignleFPV pageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107bcb4e4

// -[SCDiscoverSignleFPV setPageSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcb4ec

// -[SCDiscoverSignleFPV pageType]
// Type encoding: @16@0:8
// Implementation: 0x107bcb4f4

// -[SCDiscoverSignleFPV setPageType:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcb4fc

// -[SCDiscoverSignleFPV pageTypeSpecific]
// Type encoding: @16@0:8
// Implementation: 0x107bcb52c

// -[SCDiscoverSignleFPV setPageTypeSpecific:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcb534

// -[SCDiscoverSignleFPV isFSBounced]
// Type encoding: B16@0:8
// Implementation: 0x107bcb53c

// -[SCDiscoverSignleFPV setIsFSBounced:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bcb544

// -[SCDiscoverSignleFPV isNFSBounced]
// Type encoding: B16@0:8
// Implementation: 0x107bcb54c

// -[SCDiscoverSignleFPV setIsNFSBounced:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bcb554

// -[SCDiscoverSignleFPV isBlendedBounced]
// Type encoding: B16@0:8
// Implementation: 0x107bcb55c

// -[SCDiscoverSignleFPV setIsBlendedBounced:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bcb564

// -[SCDiscoverSignleFPV isBounced]
// Type encoding: B16@0:8
// Implementation: 0x107bcb56c

// -[SCDiscoverSignleFPV setIsBounced:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bcb574

// -[SCDiscoverSignleFPV .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bcb57c

@end
