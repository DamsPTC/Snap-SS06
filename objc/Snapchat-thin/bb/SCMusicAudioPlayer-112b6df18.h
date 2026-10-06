// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMusicAudioPlayer
// Superclass: NSObject
// Address: 0x112b6df18

@interface SCMusicAudioPlayer

// Property: periodicTimeObservable; attributes: T@"SCObservable",R,N
// Property: playerEventObservable; attributes: T@"SCObservable",R,N,V_playerEventObservable
// Property: duration; attributes: T{?=qiIq},R,N
// Property: isPlaying; attributes: TB,R,V_isPlaying
// Property: volume; attributes: Tf,V_volume
// Property: shouldLoop; attributes: TB,N,V_shouldLoop
// Property: suspendDelegate; attributes: T@"<SCMusicAudioPlayerSuspendDelegate>",W,N,V_suspendDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMusicAudioPlayer initWithAudioSession:assetProvider:shouldLoop:shouldDisableScreenLockWhilePlaying:muteSwitchChecker:]
// Type encoding: @48@0:8@16@?24B32B36@40
// Implementation: 0x107a8b338

// -[SCMusicAudioPlayer prepare]
// Type encoding: v16@0:8
// Implementation: 0x107a8b5f8

// -[SCMusicAudioPlayer play]
// Type encoding: v16@0:8
// Implementation: 0x107a8b6b8

// -[SCMusicAudioPlayer playAtRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x107a8b6c0

// -[SCMusicAudioPlayer playWithHostTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107a8b6f8

// -[SCMusicAudioPlayer playWithHostTime:rate:]
// Type encoding: v48@0:8{?=qiIq}16d40
// Implementation: 0x107a8b72c

// -[SCMusicAudioPlayer pause]
// Type encoding: v16@0:8
// Implementation: 0x107a8b7f0

// -[SCMusicAudioPlayer seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x107a8b88c

// -[SCMusicAudioPlayer periodicTimeObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a8ba38

// -[SCMusicAudioPlayer duration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x107a8ba60

// -[SCMusicAudioPlayer setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x107a8bb8c

// -[SCMusicAudioPlayer volume]
// Type encoding: f16@0:8
// Implementation: 0x107a8bc88

// -[SCMusicAudioPlayer _initializePlayerIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107a8bd4c

// -[SCMusicAudioPlayer _playerDidChangeStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a8bffc

// -[SCMusicAudioPlayer _playerDidCompleteSeek]
// Type encoding: v16@0:8
// Implementation: 0x107a8c098

// -[SCMusicAudioPlayer _teardownPlayer]
// Type encoding: v16@0:8
// Implementation: 0x107a8c108

// -[SCMusicAudioPlayer _updatePlaybackIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107a8c1c0

// -[SCMusicAudioPlayer audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c2dc

// -[SCMusicAudioPlayer audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a8c348

// -[SCMusicAudioPlayer audioSessionMediaServicesWereReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c3b0

// -[SCMusicAudioPlayer _playerItemDidReachEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c430

// -[SCMusicAudioPlayer _audioSessionWillDeactivate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c5f4

// -[SCMusicAudioPlayer _audioSessionActivated:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c660

// -[SCMusicAudioPlayer _applicationDidBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c6c8

// -[SCMusicAudioPlayer _applicationWillResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c730

// -[SCMusicAudioPlayer _setUpVolumeObservations]
// Type encoding: v16@0:8
// Implementation: 0x107a8c79c

// -[SCMusicAudioPlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x107a8c8f8

// -[SCMusicAudioPlayer shouldLoop]
// Type encoding: B16@0:8
// Implementation: 0x107a8c904

// -[SCMusicAudioPlayer setShouldLoop:]
// Type encoding: v20@0:8B16
// Implementation: 0x107a8c90c

// -[SCMusicAudioPlayer playerEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x107a8c914

// -[SCMusicAudioPlayer suspendDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107a8c91c

// -[SCMusicAudioPlayer setSuspendDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a8c934

// -[SCMusicAudioPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a8c940

@end
