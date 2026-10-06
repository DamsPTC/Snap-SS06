// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAssetMetadata
// Superclass: NSObject
// Address: 0x112b49c80

@interface SCSpectaclesAssetMetadata

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesAssetMetadata initWithAsset:serialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f48cac

// -[SCSpectaclesAssetMetadata initWithImageData:serialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f48d8c

// -[SCSpectaclesAssetMetadata initWithAvMetadataItems:serialNumber:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106f48e34

// -[SCSpectaclesAssetMetadata _itemWithKey:value:type:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106f48ea0

// -[SCSpectaclesAssetMetadata avMetadataItems]
// Type encoding: @16@0:8
// Implementation: 0x106f48fc0

// -[SCSpectaclesAssetMetadata _valueForPath:metadata:]
// Type encoding: @32@0:8@16^{CGImageMetadata=}24
// Implementation: 0x106f49014

// -[SCSpectaclesAssetMetadata initWithImageMetadata:serialNumber:]
// Type encoding: @32@0:8^{CGImageMetadata=}16@24
// Implementation: 0x106f49030

// -[SCSpectaclesAssetMetadata _addImageMetadata:]
// Type encoding: v24@0:8^{CGImageMetadata=}16
// Implementation: 0x106f49090

// -[SCSpectaclesAssetMetadata _createImageMetadata]
// Type encoding: ^{CGImageMetadata=}16@0:8
// Implementation: 0x106f490e4

// -[SCSpectaclesAssetMetadata imageDataWithJPEGData:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f49154

// -[SCSpectaclesAssetMetadata isCorrupt]
// Type encoding: B16@0:8
// Implementation: 0x106f492cc

// +[SCSpectaclesAssetMetadata assetMetadataForContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f488bc

// +[SCSpectaclesAssetMetadata _primaryCameraForButtonSide:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106f48c08

// +[SCSpectaclesAssetMetadata _rawMediaDataForContent:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f48c18

@end
