// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewGallerySaveSnapDocProvider
// Superclass: NSObject
// Address: 0x112b924a8

@interface SCPreviewGallerySaveSnapDocProvider


// -[SCPreviewGallerySaveSnapDocProvider initWithSnapDocManagerLazy:snapDocConverter:snapDocEditor:performer:fileManager:mixedAudioEnabled:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x1080051dc

// -[SCPreviewGallerySaveSnapDocProvider createTimelineSnapDocWithBaseMediaURLs:timeRanges:segmentCreativeEditTags:localSOJUEdits:localOverlayFormats:globalSOJUEdits:globalOverlayFormat:globalMediaAssets:globalMediaRenderEffects:localMediaAssets:createTimeUtc:isInfiniteDuration:location:baseMediaRenderEffect:mediaOrigin:completionBlock:]
// Type encoding: v140@0:8@16@24@32@40@48@56@64@72@80@88@96B104@108@116@124@?132
// Implementation: 0x108005334

// -[SCPreviewGallerySaveSnapDocProvider _addPlaybackLayersAndEffectsForAudioAssets:trackSegment:assetType:tagFeatureType:globalMediaRenderEffects:snapDoc:snapDocKey:playback:layerComposition:playbackLayers:renderEffectScenes:effectScene:audioMixingRenderEffectDAG:error:]
// Type encoding: B124@0:8@16@24q32i40@44@52@60@68@76@84@92@100@108^@116
// Implementation: 0x10800684c

// -[SCPreviewGallerySaveSnapDocProvider purgeAllMediaForSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x108006dd4

// -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerForMediaAssets:creativeEditTags:snapDoc:snapDocKey:playback:playbackLayers:trackSegment:error:]
// Type encoding: B80@0:8@16@24@32@40@48@56@64^@72
// Implementation: 0x108007024

// -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithSnapDoc:contentDuration:snapDocKey:baseMediaURL:playbackLayerIndex:error:]
// Type encoding: @76@0:8@16{?=qiIq}24@48@56I64^@68
// Implementation: 0x108007650

// -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithLegacySOJUEdits:playbackLayerIndex:error:]
// Type encoding: @36@0:8@16I24^@28
// Implementation: 0x1080079a8

// -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithSnapDoc:snapDocKey:overlayFormat:playbackLayerIndex:error:]
// Type encoding: @52@0:8@16@24@32I40^@44
// Implementation: 0x108007b6c

// -[SCPreviewGallerySaveSnapDocProvider _createPlaybackLayerWithSnapDoc:snapDocKey:assetData:assetType:playbackLayerIndex:error:]
// Type encoding: @56@0:8@16@24@32i40I44^@48
// Implementation: 0x108007e54

// -[SCPreviewGallerySaveSnapDocProvider _createSnapDocWithLocalSOJUEdits:localOverlayFormats:globalSOJUEdits:globalOverlayFormat:createTimeUtc:isInfiniteDuration:location:mediaOrigin:completion:]
// Type encoding: v84@0:8@16@24@32@40@48B56@60@68@?76
// Implementation: 0x108008120

// -[SCPreviewGallerySaveSnapDocProvider _updateMediaOriginForSnapDoc:mediaOrigin:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108008c6c

// -[SCPreviewGallerySaveSnapDocProvider _updateMediaEffectCapabilitiesForSnapDoc:]
// Type encoding: v24@0:8@16
// Implementation: 0x108008fac

// -[SCPreviewGallerySaveSnapDocProvider _errorWithMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080097b8

// -[SCPreviewGallerySaveSnapDocProvider _mediaAssetsFromMediaAssets:withType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1080098ec

// -[SCPreviewGallerySaveSnapDocProvider _globalTrackMediaAssets:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080099c0

// -[SCPreviewGallerySaveSnapDocProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108009b00

// +[SCPreviewGallerySaveSnapDocProvider _addRenderEffectsForBaseMediaWithRenderEffectScenes:effectScene:baseMediaRenderEffect:renderDAG:index:]
// Type encoding: v52@0:8@16@24@32@40I48
// Implementation: 0x108006f1c

@end
