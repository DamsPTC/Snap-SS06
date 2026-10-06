// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesAudioSettingsManager
// Superclass: NSObject
// Address: 0x112a84f98

@interface SCSpectaclesAudioSettingsManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: audioLevel; attributes: T@"SCObservable",R,N,V_audioLevel
// Property: muted; attributes: T@"SCObservable",R,N,V_muted

// -[SCSpectaclesAudioSettingsManager initWithConnectionHub:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a524dc

// -[SCSpectaclesAudioSettingsManager requestAudioLevelAsyncWithForceBoot:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a525a4

// -[SCSpectaclesAudioSettingsManager setAudioLevelAsync:]
// Type encoding: v24@0:8q16
// Implementation: 0x105a525e8

// -[SCSpectaclesAudioSettingsManager requestSystemSoundMutedStatusAsync]
// Type encoding: v16@0:8
// Implementation: 0x105a5262c

// -[SCSpectaclesAudioSettingsManager muteSystemSoundAsync:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a52670

// -[SCSpectaclesAudioSettingsManager playSound:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105a526b4

// -[SCSpectaclesAudioSettingsManager _handleNewAudioLevel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a526f8

// -[SCSpectaclesAudioSettingsManager _handleMutedSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a5273c

// -[SCSpectaclesAudioSettingsManager _handleAudioLevelError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a527b0

// -[SCSpectaclesAudioSettingsManager _handleMutedSettingsError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a527f4

// -[SCSpectaclesAudioSettingsManager _errorFromResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a52838

// -[SCSpectaclesAudioSettingsManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a528b8

// -[SCSpectaclesAudioSettingsManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a52bec

// -[SCSpectaclesAudioSettingsManager audioLevel]
// Type encoding: @16@0:8
// Implementation: 0x105a52bf4

// -[SCSpectaclesAudioSettingsManager muted]
// Type encoding: @16@0:8
// Implementation: 0x105a52bfc

// -[SCSpectaclesAudioSettingsManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a52c04

@end
