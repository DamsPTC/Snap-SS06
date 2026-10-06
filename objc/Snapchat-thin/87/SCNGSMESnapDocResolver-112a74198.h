// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNGSMESnapDocResolver
// Superclass: NSObject
// Address: 0x112a74198

@interface SCNGSMESnapDocResolver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNGSMESnapDocResolver initWithSnapDocManager:asyncPerformer:overlayFormatter:userSession:memoriesTrackingImageProcessCommandScopeExposer:voiceoverMediaLoader:timelineModeConfig:objcMusicMediaLoader:snapDocEditorServices:snapDocConverter:snapRendererSnapDocConverter:circumstanceEngine:playbackAssetRepository:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x105865088

// -[SCNGSMESnapDocResolver parseFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x105865384

// -[SCNGSMESnapDocResolver overlayImageFromSnapDocParser:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105867a1c

// -[SCNGSMESnapDocResolver _playbackAbsoluteSpeedFromEdits:]
// Type encoding: d24@0:8@16
// Implementation: 0x105867c1c

// -[SCNGSMESnapDocResolver sojuEditsFromSnapDocParser:snapDocEditor:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105867d30

// -[SCNGSMESnapDocResolver genericAssetsFromSnapDocParser:queue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105867e54

// -[SCNGSMESnapDocResolver segmentMetadataFromSnapDocParser:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10586872c

// -[SCNGSMESnapDocResolver snapWithSegmentMedias:mediaMsDurations:segmentTimeRanges:baseAudioVolumeProportion:audioOverride:audioMixTracks:snapInfos:globalOverlayEdits:localOverlayEdits:globalOverlayImage:localOverlayImages:localEditsCommands:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x105869124

// -[SCNGSMESnapDocResolver mediaCompositionForAssetsSequence:mediaMsDurations:segmentTimeRanges:globalOverlayEdits:localOverlayEdits:audioEnabled:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x105869558

// -[SCNGSMESnapDocResolver asyncloadVideoAndAudioTracksForSegmentMedias:]
// Type encoding: @24@0:8@16
// Implementation: 0x1058698f0

// -[SCNGSMESnapDocResolver mediaCompositionForAssets:mediaMsDurations:segmentTimeRanges:playbackSpeeds:videoAndAudioTracks:audioEnabled:]
// Type encoding: @60@0:8@16@24@32@40@48B56
// Implementation: 0x105869e70

// -[SCNGSMESnapDocResolver snapWithMediaComposition:snapInfos:globalOverlayImage:localOverlayImages:localEditsCommands:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10586a9ec

// -[SCNGSMESnapDocResolver imageProcessCommandForGlobalOverlayImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10586af0c

// -[SCNGSMESnapDocResolver snapInfoFromSnapDoc:overlayEdits:maxMediaAreaSize:]
// Type encoding: @48@0:8@16@24{CGSize=dd}32
// Implementation: 0x10586b0b8

// -[SCNGSMESnapDocResolver commandsForOverlayEdits:snapInfo:cameoStickerData:ctItemimageCache:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10586b2c4

// -[SCNGSMESnapDocResolver didFinishWithScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10586b55c

// -[SCNGSMESnapDocResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10586b5ac

@end
