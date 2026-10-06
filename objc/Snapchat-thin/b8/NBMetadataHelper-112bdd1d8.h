// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: NBMetadataHelper
// Superclass: NSObject
// Address: 0x112bdd1d8

@interface NBMetadataHelper

// Property: metadataCache; attributes: T@"NSCache",&,N,V_metadataCache
// Property: countryToIndex; attributes: T@"NSDictionary",R,N,V_countryToIndex

// -[NBMetadataHelper init]
// Type encoding: @16@0:8
// Implementation: 0x108f9bd44

// -[NBMetadataHelper lowMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9bea8

// -[NBMetadataHelper getAllMetadata]
// Type encoding: @16@0:8
// Implementation: 0x108f9c1dc

// -[NBMetadataHelper getMetadataForRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9c628

// -[NBMetadataHelper getMetadataForNonGeographicalRegion:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9c77c

// -[NBMetadataHelper getMetadataForRegionCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9c8f8

// -[NBMetadataHelper arrayFromZippedDataAtUncompressedOffset:usize:regionCode:]
// Type encoding: @32@0:8i16i20@24
// Implementation: 0x108f9c990

// -[NBMetadataHelper countryToIndex]
// Type encoding: @16@0:8
// Implementation: 0x108f9cbe8

// -[NBMetadataHelper metadataCache]
// Type encoding: @16@0:8
// Implementation: 0x108f9cbf0

// -[NBMetadataHelper setMetadataCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x108f9cbf8

// -[NBMetadataHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108f9cc28

// +[NBMetadataHelper countryCodeToRegionCodeMap]
// Type encoding: @16@0:8
// Implementation: 0x108f9beb0

// +[NBMetadataHelper CCode2CNMap]
// Type encoding: @16@0:8
// Implementation: 0x108f9bf78

// +[NBMetadataHelper CN2CCodeMap]
// Type encoding: @16@0:8
// Implementation: 0x108f9c1d8

// +[NBMetadataHelper regionCodeFromCountryCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9c4ec

// +[NBMetadataHelper countryCodeFromRegionCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x108f9c5bc

// +[NBMetadataHelper hasValue:]
// Type encoding: B24@0:8@16
// Implementation: 0x108f9c7d0

// +[NBMetadataHelper jsonObjectFromZippedDataWithBytes:compressedLength:expandedLength:]
// Type encoding: @40@0:8*16Q24Q32
// Implementation: 0x108f9c814

@end
