// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAssetMetadataMalibu
// Superclass: SCSpectaclesAssetMetadata
// Address: 0x112b49d48

@interface SCSpectaclesAssetMetadataMalibu

// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: metadata; attributes: T@"NSData",R,N,V_metadata
// Property: imuData; attributes: T@"NSData",R,N,V_imuData

// -[SCSpectaclesAssetMetadataMalibu initWithMediaId:metadata:imuData:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106f4a57c

// -[SCSpectaclesAssetMetadataMalibu isCorrupt]
// Type encoding: B16@0:8
// Implementation: 0x106f4a668

// -[SCSpectaclesAssetMetadataMalibu initWithAvMetadataItems:serialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f4a670

// -[SCSpectaclesAssetMetadataMalibu avMetadataItems]
// Type encoding: @16@0:8
// Implementation: 0x106f4a934

// -[SCSpectaclesAssetMetadataMalibu initWithImageMetadata:serialNumber:]
// Type encoding: @32@0:8^{CGImageMetadata=}16@24
// Implementation: 0x106f4aa9c

// -[SCSpectaclesAssetMetadataMalibu _addImageMetadata:]
// Type encoding: v24@0:8^{CGImageMetadata=}16
// Implementation: 0x106f4abf0

// -[SCSpectaclesAssetMetadataMalibu mediaId]
// Type encoding: @16@0:8
// Implementation: 0x106f4aca8

// -[SCSpectaclesAssetMetadataMalibu metadata]
// Type encoding: @16@0:8
// Implementation: 0x106f4acb8

// -[SCSpectaclesAssetMetadataMalibu imuData]
// Type encoding: @16@0:8
// Implementation: 0x106f4acc8

// -[SCSpectaclesAssetMetadataMalibu .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f4acd8

@end
