// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewSnapEditingState
// Superclass: NSObject
// Address: 0x112b9e028

@interface SCPreviewSnapEditingState

// Property: geofilterName; attributes: T@"NSString",R,C,N,V_geofilterName
// Property: smartFilterName; attributes: T@"NSString",R,C,N,V_smartFilterName
// Property: mediaFilterName; attributes: T@"NSString",R,C,N,V_mediaFilterName
// Property: selectedVenueId; attributes: T@"NSString",R,C,N,V_selectedVenueId
// Property: venueFilterYOffset; attributes: Td,R,N,V_venueFilterYOffset
// Property: motionFilterName; attributes: T@"NSString",R,C,N,V_motionFilterName
// Property: ucoEditingState; attributes: T@"SCUcoPreviewEditingState",R,N,V_ucoEditingState
// Property: hasAnimatedFilters; attributes: TB,R,N,V_hasAnimatedFilters
// Property: timestampType; attributes: Tq,R,N,V_timestampType
// Property: altitudeType; attributes: TQ,R,N,V_altitudeType
// Property: altitudeUnit; attributes: TQ,R,N,V_altitudeUnit
// Property: weatherType; attributes: Tq,R,N,V_weatherType
// Property: drawingUpdateVersion; attributes: TQ,R,N,V_drawingUpdateVersion
// Property: objectTrackingUpdateVersion; attributes: TQ,R,N,V_objectTrackingUpdateVersion
// Property: captionState; attributes: T@"NSArray",R,N,V_captionState
// Property: autoCaptionsState; attributes: T@"SCPreviewAutoCaptionsState",R,N,V_autoCaptionsState
// Property: croppingState; attributes: T@"<SCPreviewCroppingState>",R,C,N,V_croppingState
// Property: ctLensState; attributes: T@"SCPreviewCTLensState",R,N,V_ctLensState
// Property: imageDurationInSecs; attributes: Td,N,V_imageDurationInSecs
// Property: stickersState; attributes: T@"NSArray",C,N,V_stickersState
// Property: audioEnabled; attributes: TB,N,V_audioEnabled
// Property: snapCraftStypleId; attributes: T@"NSString",C,N,V_snapCraftStypleId
// Property: snapAttachmentUrl; attributes: T@"NSString",R,C,N,V_snapAttachmentUrl
// Property: infiniteDurationState; attributes: TB,R,N,V_infiniteDurationState
// Property: audioFilterStyleId; attributes: T@"NSString",R,C,N,V_audioFilterStyleId
// Property: bounceOffset; attributes: T@"NSNumber",R,N,V_bounceOffset
// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: musicSelection; attributes: T@"SCMusicSelection",R,C,N,V_musicSelection
// Property: voiceoverAudio; attributes: T@"SCVoiceoverAudio",R,C,N,V_voiceoverAudio
// Property: textToSpeechAudioData; attributes: T@"NSData",R,C,N,V_textToSpeechAudioData
// Property: timeRanges; attributes: T@"NSArray",R,C,N,V_timeRanges
// Property: audioMixingLevels; attributes: T@"SCAudioMixingLevels",&,N,V_audioMixingLevels
// Property: aiModeSessionId; attributes: T@"NSString",R,C,N,V_aiModeSessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewSnapEditingState initWithHasAnimatedFilters:geofilterName:smartFilterName:mediaFilterName:motionFilterName:selectedVenueId:venueFilterYOffset:timestampType:altitudeType:altitudeUnit:weatherType:captionState:croppingState:stickersState:drawingUpdateVersion:objectTrackingUpdateVersion:audioEnabled:imageDurationInSecs:snapCraftStyleId:snapAttachmentUrl:infiniteDurationState:audioFilterStyleId:bounceOffset:lensId:musicSelection:autoCaptionsState:ucoEditingState:voiceoverAudio:timeRanges:ctLensState:audioMixingLevels:textToSpeechAudioData:aiModeSessionId:]
// Type encoding: @268@0:8B16@20@28@36@44@52d60q68Q76Q84q92@100@108@116q124q132B140d144@152@160B168@172@180@188@196@204@212@220@228@236@244@252@260
// Implementation: 0x108450b8c

// -[SCPreviewSnapEditingState isEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x1084510bc

// -[SCPreviewSnapEditingState areFiltersEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x10845195c

// -[SCPreviewSnapEditingState areSnapCraftStyleEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108451c28

// -[SCPreviewSnapEditingState areSnapAttachmentUrlEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108451d30

// -[SCPreviewSnapEditingState audioFilterStyleIDIsEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108451e38

// -[SCPreviewSnapEditingState isLensIdIsEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108451f40

// -[SCPreviewSnapEditingState bounceOffsetIsEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452048

// -[SCPreviewSnapEditingState isMusicSelectionEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452150

// -[SCPreviewSnapEditingState isAutoCaptionsStateEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452258

// -[SCPreviewSnapEditingState isVoiceoverAudioEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452360

// -[SCPreviewSnapEditingState isTimeRangesEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452468

// -[SCPreviewSnapEditingState isCTLensStateEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x1084525b0

// -[SCPreviewSnapEditingState isAudioMixingLevelsStateEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x1084526b8

// -[SCPreviewSnapEditingState isTextToSpeechAudioDataEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452888

// -[SCPreviewSnapEditingState isAiModeSessionIdEquivalentTo:]
// Type encoding: B24@0:8@16
// Implementation: 0x108452990

// -[SCPreviewSnapEditingState _isAudioMixingLevel:equivalentTo:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108452a54

// -[SCPreviewSnapEditingState geofilterName]
// Type encoding: @16@0:8
// Implementation: 0x108452acc

// -[SCPreviewSnapEditingState smartFilterName]
// Type encoding: @16@0:8
// Implementation: 0x108452ad4

// -[SCPreviewSnapEditingState mediaFilterName]
// Type encoding: @16@0:8
// Implementation: 0x108452adc

// -[SCPreviewSnapEditingState selectedVenueId]
// Type encoding: @16@0:8
// Implementation: 0x108452ae4

// -[SCPreviewSnapEditingState venueFilterYOffset]
// Type encoding: d16@0:8
// Implementation: 0x108452aec

// -[SCPreviewSnapEditingState motionFilterName]
// Type encoding: @16@0:8
// Implementation: 0x108452af4

// -[SCPreviewSnapEditingState ucoEditingState]
// Type encoding: @16@0:8
// Implementation: 0x108452afc

// -[SCPreviewSnapEditingState hasAnimatedFilters]
// Type encoding: B16@0:8
// Implementation: 0x108452b04

// -[SCPreviewSnapEditingState timestampType]
// Type encoding: q16@0:8
// Implementation: 0x108452b0c

// -[SCPreviewSnapEditingState altitudeType]
// Type encoding: Q16@0:8
// Implementation: 0x108452b14

// -[SCPreviewSnapEditingState altitudeUnit]
// Type encoding: Q16@0:8
// Implementation: 0x108452b1c

// -[SCPreviewSnapEditingState weatherType]
// Type encoding: q16@0:8
// Implementation: 0x108452b24

// -[SCPreviewSnapEditingState drawingUpdateVersion]
// Type encoding: Q16@0:8
// Implementation: 0x108452b2c

// -[SCPreviewSnapEditingState objectTrackingUpdateVersion]
// Type encoding: Q16@0:8
// Implementation: 0x108452b34

// -[SCPreviewSnapEditingState captionState]
// Type encoding: @16@0:8
// Implementation: 0x108452b3c

// -[SCPreviewSnapEditingState autoCaptionsState]
// Type encoding: @16@0:8
// Implementation: 0x108452b44

// -[SCPreviewSnapEditingState croppingState]
// Type encoding: @16@0:8
// Implementation: 0x108452b4c

// -[SCPreviewSnapEditingState ctLensState]
// Type encoding: @16@0:8
// Implementation: 0x108452b54

// -[SCPreviewSnapEditingState imageDurationInSecs]
// Type encoding: d16@0:8
// Implementation: 0x108452b5c

// -[SCPreviewSnapEditingState setImageDurationInSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x108452b64

// -[SCPreviewSnapEditingState stickersState]
// Type encoding: @16@0:8
// Implementation: 0x108452b6c

// -[SCPreviewSnapEditingState setStickersState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108452b74

// -[SCPreviewSnapEditingState audioEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108452b7c

// -[SCPreviewSnapEditingState setAudioEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x108452b84

// -[SCPreviewSnapEditingState snapCraftStypleId]
// Type encoding: @16@0:8
// Implementation: 0x108452b8c

// -[SCPreviewSnapEditingState setSnapCraftStypleId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108452b94

// -[SCPreviewSnapEditingState snapAttachmentUrl]
// Type encoding: @16@0:8
// Implementation: 0x108452b9c

// -[SCPreviewSnapEditingState infiniteDurationState]
// Type encoding: B16@0:8
// Implementation: 0x108452ba4

// -[SCPreviewSnapEditingState audioFilterStyleId]
// Type encoding: @16@0:8
// Implementation: 0x108452bac

// -[SCPreviewSnapEditingState bounceOffset]
// Type encoding: @16@0:8
// Implementation: 0x108452bb4

// -[SCPreviewSnapEditingState lensId]
// Type encoding: @16@0:8
// Implementation: 0x108452bbc

// -[SCPreviewSnapEditingState musicSelection]
// Type encoding: @16@0:8
// Implementation: 0x108452bc4

// -[SCPreviewSnapEditingState voiceoverAudio]
// Type encoding: @16@0:8
// Implementation: 0x108452bcc

// -[SCPreviewSnapEditingState textToSpeechAudioData]
// Type encoding: @16@0:8
// Implementation: 0x108452bd4

// -[SCPreviewSnapEditingState timeRanges]
// Type encoding: @16@0:8
// Implementation: 0x108452bdc

// -[SCPreviewSnapEditingState audioMixingLevels]
// Type encoding: @16@0:8
// Implementation: 0x108452be4

// -[SCPreviewSnapEditingState setAudioMixingLevels:]
// Type encoding: v24@0:8@16
// Implementation: 0x108452bec

// -[SCPreviewSnapEditingState aiModeSessionId]
// Type encoding: @16@0:8
// Implementation: 0x108452c1c

// -[SCPreviewSnapEditingState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108452c24

@end
