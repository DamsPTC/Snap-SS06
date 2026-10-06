// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicSnapDocUtilities
// Superclass: NSObject
// Address: 0x1129c41b0

@interface SCMusicSnapDocUtilities


// -[SCMusicSnapDocUtilities init]
// Type encoding: @16@0:8
// Implementation: 0x1044df638

// +[SCMusicSnapDocUtilities musicStickerCTItemInstanceWithTrackID:title:artistName:stickerType:trackOffsetMS:lottieURL:]
// Type encoding: @60@0:8Q16@24@32i40Q44@52
// Implementation: 0x1044de0ac

// +[SCMusicSnapDocUtilities getMusicStickerFromSnapDoc:snapDocEditorServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1044de260

// +[SCMusicSnapDocUtilities getMusicStickerFromSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x1044de400

// +[SCMusicSnapDocUtilities getMusicStickerPlaybackLayerIdFromSnapDoc:snapDocEditorServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1044de488

// +[SCMusicSnapDocUtilities getMusicStickerPlaybacklayerIdFromSnapDoc:]
// Type encoding: @24@0:8@16
// Implementation: 0x1044de518

// +[SCMusicSnapDocUtilities getMusicPlaybackLayerIdFromSnapDoc:snapDocEditorServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1044de754

// +[SCMusicSnapDocUtilities isMusicTrackPlaybackLayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044de7c4

// +[SCMusicSnapDocUtilities isMusicStickerPlaybackLayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044de7fc

// +[SCMusicSnapDocUtilities isMusicPlaybackLayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044de838

// +[SCMusicSnapDocUtilities snapDocHasTrackId:snapDocEditor:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x1044de9c0

// +[SCMusicSnapDocUtilities snapDocHasIdenticalMusicStickerMetadata:stickerType:lottieURL:trackOffsetMs:snapDocEditor:]
// Type encoding: B52@0:8Q16i24@28Q36@44
// Implementation: 0x1044deba0

// +[SCMusicSnapDocUtilities snapDocMusicStickerHasDuration:]
// Type encoding: B24@0:8@16
// Implementation: 0x1044df1a4

// +[SCMusicSnapDocUtilities deleteAllMusicLayersInSnapDocEditor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1044df3ac

// +[SCMusicSnapDocUtilities addMusicPlaybackLayerToSnapDocEditor:musicAssetData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1044df3e0

// +[SCMusicSnapDocUtilities addMusicPlaybackLayersToSnapDocEditor:musicAssetData:musicStickerItemInstance:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1044df510

@end
