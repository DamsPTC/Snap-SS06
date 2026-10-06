// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAScenariumAudioPlayer
// Superclass: NSObject
// Address: 0x112bf9298

@interface LSAScenariumAudioPlayer

// Property: active; attributes: TB,N,GisActive,V_active
// Property: muted; attributes: TB,N,GisMuted,V_muted
// Property: suspended; attributes: TB,N,GisSuspended,V_suspended
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAScenariumAudioPlayer init]
// Type encoding: @16@0:8
// Implementation: 0x10ad9cab8

// -[LSAScenariumAudioPlayer muteAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9cbb4

// -[LSAScenariumAudioPlayer unmuteAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9cbc0

// -[LSAScenariumAudioPlayer suspendAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9cbcc

// -[LSAScenariumAudioPlayer resumeAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9cbd8

// -[LSAScenariumAudioPlayer activateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9cbe4

// -[LSAScenariumAudioPlayer deactivateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9cd60

// -[LSAScenariumAudioPlayer openTrackAtPath:playbackFinishCallback:]
// Type encoding: q32@0:8@16@?24
// Implementation: 0x10ad9d074

// -[LSAScenariumAudioPlayer closeTrackWithHandle:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ad9d388

// -[LSAScenariumAudioPlayer playTrackWithHandle:repeatCount:]
// Type encoding: B32@0:8q16q24
// Implementation: 0x10ad9d530

// -[LSAScenariumAudioPlayer pauseTrackWithHandle:]
// Type encoding: B24@0:8q16
// Implementation: 0x10ad9d81c

// -[LSAScenariumAudioPlayer resumeTrackWithHandle:]
// Type encoding: B24@0:8q16
// Implementation: 0x10ad9da7c

// -[LSAScenariumAudioPlayer stopTrackWithHandle:]
// Type encoding: B24@0:8q16
// Implementation: 0x10ad9dcf4

// -[LSAScenariumAudioPlayer durationForTrackWithHandle:]
// Type encoding: d24@0:8q16
// Implementation: 0x10ad9de84

// -[LSAScenariumAudioPlayer positionForTrackWithHandle:]
// Type encoding: d24@0:8q16
// Implementation: 0x10ad9deec

// -[LSAScenariumAudioPlayer setPosition:forTrackWithHandle:]
// Type encoding: B32@0:8d16q24
// Implementation: 0x10ad9df54

// -[LSAScenariumAudioPlayer isPlayingTrackWithHandle:]
// Type encoding: B24@0:8q16
// Implementation: 0x10ad9e0fc

// -[LSAScenariumAudioPlayer volumeForTrackWithHandle:]
// Type encoding: f24@0:8q16
// Implementation: 0x10ad9e15c

// -[LSAScenariumAudioPlayer setVolume:forTrackWithHandle:]
// Type encoding: B28@0:8f16q20
// Implementation: 0x10ad9e1c4

// -[LSAScenariumAudioPlayer panForTrackWithHandle:]
// Type encoding: f24@0:8q16
// Implementation: 0x10ad9e370

// -[LSAScenariumAudioPlayer setPan:forTrackWithHandle:]
// Type encoding: B28@0:8f16q20
// Implementation: 0x10ad9e3d8

// -[LSAScenariumAudioPlayer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9e584

// -[LSAScenariumAudioPlayer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9e58c

// -[LSAScenariumAudioPlayer _trackForHandle:]
// Type encoding: @24@0:8q16
// Implementation: 0x10ad9e594

// -[LSAScenariumAudioPlayer _setAllSoundsMuted:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10ad9e650

// -[LSAScenariumAudioPlayer _setAllSoundsSuspended:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10ad9e988

// -[LSAScenariumAudioPlayer audioTrackDidRequestRestartPlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9eda0

// -[LSAScenariumAudioPlayer isActive]
// Type encoding: B16@0:8
// Implementation: 0x10ad9ef90

// -[LSAScenariumAudioPlayer setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad9ef98

// -[LSAScenariumAudioPlayer isMuted]
// Type encoding: B16@0:8
// Implementation: 0x10ad9efa0

// -[LSAScenariumAudioPlayer setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad9efa8

// -[LSAScenariumAudioPlayer isSuspended]
// Type encoding: B16@0:8
// Implementation: 0x10ad9efb0

// -[LSAScenariumAudioPlayer setSuspended:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad9efb8

// -[LSAScenariumAudioPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad9efc0

@end
