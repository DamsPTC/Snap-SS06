// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackAssetCompositorImpl
// Superclass: NSObject
// Address: 0x112a554c8

@interface SCPlaybackAssetCompositorImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPlaybackAssetCompositorImpl initWithGrapheneRegistry:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056939cc

// -[SCPlaybackAssetCompositorImpl createSubtitleAssetFromSubtitleBundle:bundleId:mediaContextType:assetRepository:]
// Type encoding: @44@0:8@16@24i32@36
// Implementation: 0x105693aa0

// -[SCPlaybackAssetCompositorImpl compositeVideoAsset:multiLanguageSubtitleAsset:subtitleConfig:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105693d94

// -[SCPlaybackAssetCompositorImpl compositeVideoAsset:subtitleAsset:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105693ea8

// -[SCPlaybackAssetCompositorImpl _loadTracksToComposeFromAssets:startTime:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x105694140

// -[SCPlaybackAssetCompositorImpl _compositeWithStartTime:timeRange:tracks:mediaAsset:completion:]
// Type encoding: v96@0:8d16{?={?=qiIq}{?=qiIq}}24@72@80@?88
// Implementation: 0x105694a20

// -[SCPlaybackAssetCompositorImpl _insertToAssetsComposition:withTrack:timeRange:]
// Type encoding: v80@0:8@16@24{?={?=qiIq}{?=qiIq}}32
// Implementation: 0x105694ca8

// -[SCPlaybackAssetCompositorImpl _logAssetCompositionWithSuccess:startTime:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x105694d84

// -[SCPlaybackAssetCompositorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105694e24

@end
