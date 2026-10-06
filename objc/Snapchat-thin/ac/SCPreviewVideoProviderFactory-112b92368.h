// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewVideoProviderFactory
// Superclass: NSObject
// Address: 0x112b92368

@interface SCPreviewVideoProviderFactory

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewVideoProviderFactory initWithActiveVideoPathProvider:snapDocManager:temporaryFileWriter:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1006d49b8

// -[SCPreviewVideoProviderFactory setLoggingCommon:]
// Type encoding: v24@0:8@16
// Implementation: 0x108000a5c

// -[SCPreviewVideoProviderFactory setPreviewBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x108000a8c

// -[SCPreviewVideoProviderFactory videoProviderWithURL:rawVideoDataFileURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108000abc

// -[SCPreviewVideoProviderFactory videoProviderWithVideoURL:rawVideoDataFileURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108000b78

// -[SCPreviewVideoProviderFactory videoProviderWithAsset:]
// Type encoding: @24@0:8@16
// Implementation: 0x108000c34

// -[SCPreviewVideoProviderFactory bounceVideoProviderWithAsset:offset:repeating:]
// Type encoding: @36@0:8@16d24B32
// Implementation: 0x108000c94

// -[SCPreviewVideoProviderFactory bounceVideoWithAsset:offset:bounceDuration:outputSpeedFactor:repeatCount:]
// Type encoding: @56@0:8@16d24d32d40q48
// Implementation: 0x108000d0c

// -[SCPreviewVideoProviderFactory generateZoomInAssetWithAsset:zoomInFactor:timeRange:completionBlock:]
// Type encoding: v88@0:8@16d24{?={?=qiIq}{?=qiIq}}32@?80
// Implementation: 0x108000d14

// -[SCPreviewVideoProviderFactory _bounceAssetWithAsset:offset:bounceDuration:outputSpeedFactor:repeatCount:normalizeOutputDuration:]
// Type encoding: @60@0:8@16d24d32d40q48B56
// Implementation: 0x10800131c

// -[SCPreviewVideoProviderFactory videoProviderWithMediaMetadata:snapDoc:snapDocKey:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1080013ac

// -[SCPreviewVideoProviderFactory .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108001468

@end
