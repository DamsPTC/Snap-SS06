// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAssetMetadataNewport
// Superclass: SCSpectaclesAssetMetadataMalibu
// Address: 0x112b49d98

@interface SCSpectaclesAssetMetadataNewport

// Property: calibration; attributes: T@"SCSpectaclesCalibration",R,N,V_calibration
// Property: primaryCamera; attributes: TQ,R,N,V_primaryCamera

// -[SCSpectaclesAssetMetadataNewport initWithMediaId:metadata:imuData:calibration:primaryCamera:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x106f4ad28

// -[SCSpectaclesAssetMetadataNewport isCorrupt]
// Type encoding: B16@0:8
// Implementation: 0x106f4ade0

// -[SCSpectaclesAssetMetadataNewport initWithAvMetadataItems:serialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f4ae54

// -[SCSpectaclesAssetMetadataNewport avMetadataItems]
// Type encoding: @16@0:8
// Implementation: 0x106f4b25c

// -[SCSpectaclesAssetMetadataNewport initWithImageMetadata:serialNumber:]
// Type encoding: @32@0:8^{CGImageMetadata=}16@24
// Implementation: 0x106f4b408

// -[SCSpectaclesAssetMetadataNewport _addImageMetadata:]
// Type encoding: v24@0:8^{CGImageMetadata=}16
// Implementation: 0x106f4b66c

// -[SCSpectaclesAssetMetadataNewport calibration]
// Type encoding: @16@0:8
// Implementation: 0x106f4b75c

// -[SCSpectaclesAssetMetadataNewport primaryCamera]
// Type encoding: Q16@0:8
// Implementation: 0x106f4b76c

// -[SCSpectaclesAssetMetadataNewport .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f4b77c

@end
