// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAssetMetadataHermosa
// Superclass: SCSpectaclesAssetMetadata
// Address: 0x112b49cf8

@interface SCSpectaclesAssetMetadataHermosa

// Property: calibration; attributes: T@"SCSpectaclesCalibration",R,N,V_calibration
// Property: vioCalibration; attributes: T@"NSString",R,C,N,V_vioCalibration
// Property: lensMetadata; attributes: T@"NSData",R,N,V_lensMetadata
// Property: primaryCamera; attributes: TQ,R,N,V_primaryCamera
// Property: vioData; attributes: T@"NSData",R,N,V_vioData
// Property: recordedLensId; attributes: T@"NSString",R,N,V_recordedLensId

// -[SCSpectaclesAssetMetadataHermosa initWithCalibration:vioCalibration:lensMetadata:primaryCamera:vioData:recordedLensId:]
// Type encoding: @64@0:8@16@24@32Q40@48@56
// Implementation: 0x106f49ad8

// -[SCSpectaclesAssetMetadataHermosa isCorrupt]
// Type encoding: B16@0:8
// Implementation: 0x106f49c38

// -[SCSpectaclesAssetMetadataHermosa initWithAvMetadataItems:serialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f49c50

// -[SCSpectaclesAssetMetadataHermosa avMetadataItems]
// Type encoding: @16@0:8
// Implementation: 0x106f4a070

// -[SCSpectaclesAssetMetadataHermosa initWithImageMetadata:serialNumber:]
// Type encoding: @32@0:8^{CGImageMetadata=}16@24
// Implementation: 0x106f4a1fc

// -[SCSpectaclesAssetMetadataHermosa _addImageMetadata:]
// Type encoding: v24@0:8^{CGImageMetadata=}16
// Implementation: 0x106f4a3e0

// -[SCSpectaclesAssetMetadataHermosa calibration]
// Type encoding: @16@0:8
// Implementation: 0x106f4a4ac

// -[SCSpectaclesAssetMetadataHermosa vioCalibration]
// Type encoding: @16@0:8
// Implementation: 0x106f4a4bc

// -[SCSpectaclesAssetMetadataHermosa lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x106f4a4cc

// -[SCSpectaclesAssetMetadataHermosa primaryCamera]
// Type encoding: Q16@0:8
// Implementation: 0x106f4a4dc

// -[SCSpectaclesAssetMetadataHermosa vioData]
// Type encoding: @16@0:8
// Implementation: 0x106f4a4ec

// -[SCSpectaclesAssetMetadataHermosa recordedLensId]
// Type encoding: @16@0:8
// Implementation: 0x106f4a4fc

// -[SCSpectaclesAssetMetadataHermosa .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f4a50c

@end
