// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomVolumeController
// Superclass: NSObject
// Address: 0x112a738d8

@interface SCCustomVolumeController

// Property: audioConfiguration; attributes: T@"SCAudioConfigurationToken",&,N,V_audioConfigurationInternal
// Property: listeners; attributes: T@"NSHashTable",&,N,V_listeners
// Property: overridingObjects; attributes: T@"NSHashTable",&,N,V_overridingObjects
// Property: ignoreMuteOverride; attributes: TB,N,V_ignoreMuteOverride

// -[SCCustomVolumeController initWithAudioSession:mutableAudioSession:pauseMusicOnVolumePress:pauseMusicOnOverride:disableIgnoreMuteOverride:]
// Type encoding: @44@0:8@16@24B32B36B40
// Implementation: 0x1008ba9e0

// -[SCCustomVolumeController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10585771c

// -[SCCustomVolumeController _restoreNativeVolumeIfNecessaryKeepMuteOverride:]
// Type encoding: v20@0:8B16
// Implementation: 0x105857760

// -[SCCustomVolumeController _restoreNativeVolumeIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10585784c

// -[SCCustomVolumeController restoreNativeVolumeForObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x105857854

// -[SCCustomVolumeController restoreNativeVolumeForObject:keepMuteOverride:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10585785c

// -[SCCustomVolumeController restoreNativeVolume]
// Type encoding: v16@0:8
// Implementation: 0x1058578cc

// -[SCCustomVolumeController onAppEnteredBackground]
// Type encoding: v16@0:8
// Implementation: 0x105857908

// -[SCCustomVolumeController onAppDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x105857930

// -[SCCustomVolumeController overrideNativeVolumeForObject:shouldOverrideMute:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105857948

// -[SCCustomVolumeController overrideNativeVolumeForObject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058579f0

// -[SCCustomVolumeController overrideMuteSwitch]
// Type encoding: v16@0:8
// Implementation: 0x1058579f8

// -[SCCustomVolumeController overrideMuteSwitchAndPauseMusic]
// Type encoding: v16@0:8
// Implementation: 0x105857a1c

// -[SCCustomVolumeController _shouldUpdateVolume]
// Type encoding: B16@0:8
// Implementation: 0x105857a48

// -[SCCustomVolumeController _overrideMuteIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105857b00

// -[SCCustomVolumeController muteButtonPlaybackConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x105857cd0

// -[SCCustomVolumeController _pauseBackgroundMusic]
// Type encoding: v16@0:8
// Implementation: 0x105857d20

// -[SCCustomVolumeController _setPlaybackCategoryForBackgroundMusicPause]
// Type encoding: v16@0:8
// Implementation: 0x105857d90

// -[SCCustomVolumeController _activateAudioSessionForBackgroundMusicPause]
// Type encoding: v16@0:8
// Implementation: 0x105857eb0

// -[SCCustomVolumeController _setMixWithOthersCategoryForBackgroundMusicPause]
// Type encoding: v16@0:8
// Implementation: 0x105857fb8

// -[SCCustomVolumeController _stopOverridingMuteIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1058580b4

// -[SCCustomVolumeController setAudioConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x105858258

// -[SCCustomVolumeController isOverridingMuteSwitch]
// Type encoding: B16@0:8
// Implementation: 0x1008baaf0

// -[SCCustomVolumeController volumeButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x1058582d8

// -[SCCustomVolumeController _isHandlingVolumeButtonEvents]
// Type encoding: B16@0:8
// Implementation: 0x1058582dc

// -[SCCustomVolumeController _startHandlingVolumeButtonEvents]
// Type encoding: v16@0:8
// Implementation: 0x1058582ec

// -[SCCustomVolumeController _stopHandlingVolumeButtonEvents]
// Type encoding: v16@0:8
// Implementation: 0x105858484

// -[SCCustomVolumeController _handleVolumeButton]
// Type encoding: v16@0:8
// Implementation: 0x1058585b4

// -[SCCustomVolumeController _handleVolumeButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058585f8

// -[SCCustomVolumeController addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058585fc

// -[SCCustomVolumeController removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10585860c

// -[SCCustomVolumeController _notifyListenersOfOverrideChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x10585861c

// -[SCCustomVolumeController audioConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x1008bab5c

// -[SCCustomVolumeController listeners]
// Type encoding: @16@0:8
// Implementation: 0x105858728

// -[SCCustomVolumeController setListeners:]
// Type encoding: v24@0:8@16
// Implementation: 0x105858730

// -[SCCustomVolumeController overridingObjects]
// Type encoding: @16@0:8
// Implementation: 0x105858760

// -[SCCustomVolumeController setOverridingObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x105858768

// -[SCCustomVolumeController ignoreMuteOverride]
// Type encoding: B16@0:8
// Implementation: 0x105858798

// -[SCCustomVolumeController setIgnoreMuteOverride:]
// Type encoding: v20@0:8B16
// Implementation: 0x1058587a0

// -[SCCustomVolumeController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058587a8

@end
