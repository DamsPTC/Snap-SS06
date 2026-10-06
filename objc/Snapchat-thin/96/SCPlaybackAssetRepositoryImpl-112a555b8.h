// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackAssetRepositoryImpl
// Superclass: NSObject
// Address: 0x112a555b8

@interface SCPlaybackAssetRepositoryImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackAssetRepositoryImpl initWithStreamingResourceLoader:assetCompositor:bufferedContentFetcher:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105694f5c

// -[SCPlaybackAssetRepositoryImpl createAssetFromContentResult:resourceId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105695028

// -[SCPlaybackAssetRepositoryImpl createSubtitleAssetFromContentResult:resourceId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056950b0

// -[SCPlaybackAssetRepositoryImpl createPlaybackAssetFromContentBundle:metadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105695138

// -[SCPlaybackAssetRepositoryImpl createPlaybackAssetFromUrl:mediaContextType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1056952b8

// -[SCPlaybackAssetRepositoryImpl createAssetFromSingleResolutionResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x105695410

// -[SCPlaybackAssetRepositoryImpl createAssetFromResolutionResult:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1056954b0

// -[SCPlaybackAssetRepositoryImpl observeAssetErrors]
// Type encoding: @16@0:8
// Implementation: 0x105695910

// -[SCPlaybackAssetRepositoryImpl releaseAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x105695a18

// -[SCPlaybackAssetRepositoryImpl cancelContentResultForAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x105695a1c

// -[SCPlaybackAssetRepositoryImpl releaseAllAssets]
// Type encoding: v16@0:8
// Implementation: 0x105695b48

// -[SCPlaybackAssetRepositoryImpl _createVideoAssetFromSingleResolutionResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x105695b4c

// -[SCPlaybackAssetRepositoryImpl _createSubtitleAssetFromSingleResolutionResult:]
// Type encoding: @24@0:8@16
// Implementation: 0x105695f2c

// -[SCPlaybackAssetRepositoryImpl _createSubtitleAssetFromUrl:]
// Type encoding: @24@0:8@16
// Implementation: 0x105696160

// -[SCPlaybackAssetRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10569625c

@end
