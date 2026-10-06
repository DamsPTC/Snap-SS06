// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMultiSnapIndividualEditingState
// Superclass: NSObject
// Address: 0x112b9dfd8

@interface SCMultiSnapIndividualEditingState

// Property: timeBase; attributes: T{?=qiIq},N,V_timeBase
// Property: isResolvedFromGlobalAndLocalStates; attributes: TB,N,V_isResolvedFromGlobalAndLocalStates
// Property: captions; attributes: T@"NSMutableArray",&,N,V_captions
// Property: autoCaptions; attributes: T@"SCPreviewAutoCaptionsState",&,N,V_autoCaptions
// Property: voiceoverAudioState; attributes: T@"SCVoiceoverAudioState",&,N,V_voiceoverAudioState
// Property: stickers; attributes: T@"NSMutableArray",&,N,V_stickers
// Property: filtersState; attributes: T@"SCFiltersState",&,N,V_filtersState
// Property: attachmentURL; attributes: T@"NSString",C,N,V_attachmentURL
// Property: audioFilterStyleId; attributes: T@"NSString",C,N,V_audioFilterStyleId
// Property: audioEnabled; attributes: TB,N,V_audioEnabled
// Property: drawingStrokes; attributes: T@"NSMutableArray",&,N,V_drawingStrokes
// Property: drawingSmoothingAlgorithm; attributes: Tq,N,V_drawingSmoothingAlgorithm
// Property: croppingState; attributes: T@"<SCPreviewCroppingState>",&,N,V_croppingState
// Property: initialCroppingState; attributes: T@"<SCPreviewCroppingState>",&,N,V_initialCroppingState
// Property: genericAssets; attributes: T@"NSDictionary",&,N,V_genericAssets
// Property: mixedBaseAudioVolume; attributes: T@"NSNumber",C,N,V_mixedBaseAudioVolume
// Property: mixedAudioTracks; attributes: T@"NSDictionary",C,N,V_mixedAudioTracks
// Property: musicSelection; attributes: T@"SCMusicSelection",C,N,V_musicSelection
// Property: baseMediaMusicSelection; attributes: T@"SCMusicSelection",C,N,V_baseMediaMusicSelection
// Property: activeMusicSelection; attributes: T@"SCMusicSelection",R,N
// Property: liveCameraLensConfiguration; attributes: T@"SCLensConfiguration",C,N,V_liveCameraLensConfiguration
// Property: previewLensConfiguration; attributes: T@"SCLensConfiguration",C,N,V_previewLensConfiguration
// Property: ttsAudioAsset; attributes: T@"SCSnapVideoFilterAsset",C,N,V_ttsAudioAsset
// Property: commonLoggingParams; attributes: T@"SCSnapCommonLoggingParams",&,N,V_commonLoggingParams

// -[SCMultiSnapIndividualEditingState initWithTimeBase:]
// Type encoding: @40@0:8{?=qiIq}16
// Implementation: 0x10844f40c

// -[SCMultiSnapIndividualEditingState setTimeBase:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10844f504

// -[SCMultiSnapIndividualEditingState visualFilterName]
// Type encoding: @16@0:8
// Implementation: 0x10844f5d4

// -[SCMultiSnapIndividualEditingState videoPlaybackRate]
// Type encoding: d16@0:8
// Implementation: 0x10844f680

// -[SCMultiSnapIndividualEditingState hasAnimatedOrTrackingContent]
// Type encoding: B16@0:8
// Implementation: 0x10844f778

// -[SCMultiSnapIndividualEditingState updateAvailableFiltersWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10844f9d8

// -[SCMultiSnapIndividualEditingState activeMusicSelection]
// Type encoding: @16@0:8
// Implementation: 0x10844fdd0

// -[SCMultiSnapIndividualEditingState hasAudioVisualEdits]
// Type encoding: B16@0:8
// Implementation: 0x10844fe00

// -[SCMultiSnapIndividualEditingState hasEdits]
// Type encoding: B16@0:8
// Implementation: 0x10844fedc

// -[SCMultiSnapIndividualEditingState isEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x10844ff24

// -[SCMultiSnapIndividualEditingState copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x108450404

// -[SCMultiSnapIndividualEditingState _newAudioStartOffsetWithCurrentOffset:andNewTimeBase:]
// Type encoding: {?=qiIq}64@0:8{?=qiIq}16{?=qiIq}40
// Implementation: 0x1084506ac

// -[SCMultiSnapIndividualEditingState timeBase]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10845078c

// -[SCMultiSnapIndividualEditingState isResolvedFromGlobalAndLocalStates]
// Type encoding: B16@0:8
// Implementation: 0x1084507a0

// -[SCMultiSnapIndividualEditingState setIsResolvedFromGlobalAndLocalStates:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084507a8

// -[SCMultiSnapIndividualEditingState captions]
// Type encoding: @16@0:8
// Implementation: 0x1084507b0

// -[SCMultiSnapIndividualEditingState setCaptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084507b8

// -[SCMultiSnapIndividualEditingState autoCaptions]
// Type encoding: @16@0:8
// Implementation: 0x1084507e8

// -[SCMultiSnapIndividualEditingState setAutoCaptions:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084507f0

// -[SCMultiSnapIndividualEditingState voiceoverAudioState]
// Type encoding: @16@0:8
// Implementation: 0x108450820

// -[SCMultiSnapIndividualEditingState setVoiceoverAudioState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450828

// -[SCMultiSnapIndividualEditingState stickers]
// Type encoding: @16@0:8
// Implementation: 0x108450858

// -[SCMultiSnapIndividualEditingState setStickers:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450860

// -[SCMultiSnapIndividualEditingState filtersState]
// Type encoding: @16@0:8
// Implementation: 0x108450890

// -[SCMultiSnapIndividualEditingState setFiltersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450898

// -[SCMultiSnapIndividualEditingState attachmentURL]
// Type encoding: @16@0:8
// Implementation: 0x1084508c8

// -[SCMultiSnapIndividualEditingState setAttachmentURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084508d0

// -[SCMultiSnapIndividualEditingState audioFilterStyleId]
// Type encoding: @16@0:8
// Implementation: 0x1084508d8

// -[SCMultiSnapIndividualEditingState setAudioFilterStyleId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084508e0

// -[SCMultiSnapIndividualEditingState audioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1084508e8

// -[SCMultiSnapIndividualEditingState setAudioEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1084508f0

// -[SCMultiSnapIndividualEditingState drawingStrokes]
// Type encoding: @16@0:8
// Implementation: 0x1084508f8

// -[SCMultiSnapIndividualEditingState setDrawingStrokes:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450900

// -[SCMultiSnapIndividualEditingState drawingSmoothingAlgorithm]
// Type encoding: q16@0:8
// Implementation: 0x108450930

// -[SCMultiSnapIndividualEditingState setDrawingSmoothingAlgorithm:]
// Type encoding: v24@0:8q16
// Implementation: 0x108450938

// -[SCMultiSnapIndividualEditingState croppingState]
// Type encoding: @16@0:8
// Implementation: 0x108450940

// -[SCMultiSnapIndividualEditingState setCroppingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450948

// -[SCMultiSnapIndividualEditingState initialCroppingState]
// Type encoding: @16@0:8
// Implementation: 0x108450978

// -[SCMultiSnapIndividualEditingState setInitialCroppingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450980

// -[SCMultiSnapIndividualEditingState genericAssets]
// Type encoding: @16@0:8
// Implementation: 0x1084509b0

// -[SCMultiSnapIndividualEditingState setGenericAssets:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084509b8

// -[SCMultiSnapIndividualEditingState mixedBaseAudioVolume]
// Type encoding: @16@0:8
// Implementation: 0x1084509e8

// -[SCMultiSnapIndividualEditingState setMixedBaseAudioVolume:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084509f0

// -[SCMultiSnapIndividualEditingState mixedAudioTracks]
// Type encoding: @16@0:8
// Implementation: 0x1084509f8

// -[SCMultiSnapIndividualEditingState setMixedAudioTracks:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a00

// -[SCMultiSnapIndividualEditingState musicSelection]
// Type encoding: @16@0:8
// Implementation: 0x108450a08

// -[SCMultiSnapIndividualEditingState setMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a10

// -[SCMultiSnapIndividualEditingState baseMediaMusicSelection]
// Type encoding: @16@0:8
// Implementation: 0x108450a18

// -[SCMultiSnapIndividualEditingState setBaseMediaMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a20

// -[SCMultiSnapIndividualEditingState liveCameraLensConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108450a28

// -[SCMultiSnapIndividualEditingState setLiveCameraLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a30

// -[SCMultiSnapIndividualEditingState previewLensConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108450a38

// -[SCMultiSnapIndividualEditingState setPreviewLensConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a40

// -[SCMultiSnapIndividualEditingState ttsAudioAsset]
// Type encoding: @16@0:8
// Implementation: 0x108450a48

// -[SCMultiSnapIndividualEditingState setTtsAudioAsset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a50

// -[SCMultiSnapIndividualEditingState commonLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x108450a58

// -[SCMultiSnapIndividualEditingState setCommonLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x108450a60

// -[SCMultiSnapIndividualEditingState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108450a90

@end
