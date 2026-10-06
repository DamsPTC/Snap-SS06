// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMediaAssetManager
// Superclass: NSObject
// Address: 0x112bf3848

@interface SCLensMediaAssetManager

// Property: assets; attributes: T@"<SCLensAssetFetchResult>",&,N,V_assets
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: status; attributes: Tq,V_status
// Property: mediaType; attributes: TQ,R,N,V_mediaType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensMediaAssetManager initWithMediaType:fetchLimit:excludeScreenshots:]
// Type encoding: @36@0:8Q16Q24B32
// Implementation: 0x1091cad48

// -[SCLensMediaAssetManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091caec4

// -[SCLensMediaAssetManager cachingImageManager]
// Type encoding: @16@0:8
// Implementation: 0x1091caf2c

// -[SCLensMediaAssetManager photoLibraryDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091caf88

// -[SCLensMediaAssetManager reloadAssetsIndexWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091cb1e8

// -[SCLensMediaAssetManager imageCount]
// Type encoding: Q16@0:8
// Implementation: 0x1091cb7f0

// -[SCLensMediaAssetManager indexForAssetIdetifier:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1091cb82c

// -[SCLensMediaAssetManager imageIdentifierForItemAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1091cb87c

// -[SCLensMediaAssetManager getThumbnailImageAtIndex:targetSize:completion:]
// Type encoding: @48@0:8Q16{CGSize=dd}24@?40
// Implementation: 0x1091cb928

// -[SCLensMediaAssetManager getOriginalImageAtIndex:completion:]
// Type encoding: @32@0:8Q16@?24
// Implementation: 0x1091cba30

// -[SCLensMediaAssetManager getVideoAtIndex:progressHandler:completion:]
// Type encoding: @40@0:8Q16@?24@?32
// Implementation: 0x1091cbb20

// -[SCLensMediaAssetManager getThumbnailForAsset:targetSize:completion:]
// Type encoding: @48@0:8@16{CGSize=dd}24@?40
// Implementation: 0x1091cbbd4

// -[SCLensMediaAssetManager getOriginalImageForAsset:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x1091cbc98

// -[SCLensMediaAssetManager getVideoForAsset:progressHandler:completion:]
// Type encoding: @40@0:8@16@?24@?32
// Implementation: 0x1091cbd50

// -[SCLensMediaAssetManager cancelAssetLoadingWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091cc160

// -[SCLensMediaAssetManager assetTypeAtIndex:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1091cc18c

// -[SCLensMediaAssetManager videoDurationAtIndex:]
// Type encoding: d24@0:8Q16
// Implementation: 0x1091cc234

// -[SCLensMediaAssetManager cacheContentUriForAssetIdentifier:contentUri:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091cc2dc

// -[SCLensMediaAssetManager contentUriForAssetIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091cc370

// -[SCLensMediaAssetManager _getImageAtIndex:targetSize:options:completion:]
// Type encoding: @56@0:8Q16{CGSize=dd}24@40@?48
// Implementation: 0x1091cc3fc

// -[SCLensMediaAssetManager _getImageForAsset:targetSize:options:completion:]
// Type encoding: @56@0:8@16{CGSize=dd}24@40@?48
// Implementation: 0x1091cc4c8

// -[SCLensMediaAssetManager mediaType]
// Type encoding: Q16@0:8
// Implementation: 0x1091cc75c

// -[SCLensMediaAssetManager assets]
// Type encoding: @16@0:8
// Implementation: 0x1091cc764

// -[SCLensMediaAssetManager setAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091cc76c

// -[SCLensMediaAssetManager performer]
// Type encoding: @16@0:8
// Implementation: 0x1091cc79c

// -[SCLensMediaAssetManager setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091cc7a4

// -[SCLensMediaAssetManager status]
// Type encoding: q16@0:8
// Implementation: 0x1091cc7d4

// -[SCLensMediaAssetManager setStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x1091cc7dc

// -[SCLensMediaAssetManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091cc7e4

@end
