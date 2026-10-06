// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMockLensMediaAssetProvider
// Superclass: NSObject
// Address: 0x112bf3938

@interface SCMockLensMediaAssetProvider

// Property: mediaType; attributes: TQ,R,N,V_mediaType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMockLensMediaAssetProvider initWithAssets:mediaType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1091d129c

// -[SCMockLensMediaAssetProvider assetTypeAtIndex:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1091d1344

// -[SCMockLensMediaAssetProvider canProcessMoreImages]
// Type encoding: B16@0:8
// Implementation: 0x1091d1384

// -[SCMockLensMediaAssetProvider cancelAssetLoadingWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d138c

// -[SCMockLensMediaAssetProvider cooldown]
// Type encoding: v16@0:8
// Implementation: 0x1091d1390

// -[SCMockLensMediaAssetProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091d1394

// -[SCMockLensMediaAssetProvider getOriginalImageAtIndex:completion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x1091d13ac

// -[SCMockLensMediaAssetProvider getPreviewImageAtIndex:targetSize:completion:]
// Type encoding: @48@0:8Q16{CGSize=dd}24@?40
// Implementation: 0x1091d16b8

// -[SCMockLensMediaAssetProvider getVideoAssetAtIndex:completion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x1091d16bc

// -[SCMockLensMediaAssetProvider imageCount]
// Type encoding: Q16@0:8
// Implementation: 0x1091d1790

// -[SCMockLensMediaAssetProvider imageIdentifierAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1091d1798

// -[SCMockLensMediaAssetProvider _imageIdentifierForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d17c8

// -[SCMockLensMediaAssetProvider _videoIdentifierForIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091d17d8

// -[SCMockLensMediaAssetProvider indexOfImageWithIdentifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1091d17e8

// -[SCMockLensMediaAssetProvider processMoreImagesIfPossibleWithSize:count:]
// Type encoding: v40@0:8{CGSize=dd}16Q32
// Implementation: 0x1091d17f0

// -[SCMockLensMediaAssetProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091d17f4

// -[SCMockLensMediaAssetProvider videoDurationAtIndex:]
// Type encoding: d24@0:8Q16
// Implementation: 0x1091d18b4

// -[SCMockLensMediaAssetProvider warmupWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091d18c0

// -[SCMockLensMediaAssetProvider isPresetImageAtIndex:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1091d18c4

// -[SCMockLensMediaAssetProvider rawImageCount]
// Type encoding: Q16@0:8
// Implementation: 0x1091d18cc

// -[SCMockLensMediaAssetProvider resetRequestedImagesCountButKeepIndexes]
// Type encoding: v16@0:8
// Implementation: 0x1091d18d4

// -[SCMockLensMediaAssetProvider mediaType]
// Type encoding: Q16@0:8
// Implementation: 0x1091d18d8

// -[SCMockLensMediaAssetProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091d18e0

// +[SCMockLensMediaAssetProvider defaultMockProvider]
// Type encoding: @16@0:8
// Implementation: 0x1091d1320

@end
