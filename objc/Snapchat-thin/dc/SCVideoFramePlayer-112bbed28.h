// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoFramePlayer
// Superclass: NSObject
// Address: 0x112bbed28

@interface SCVideoFramePlayer

// Property: player; attributes: T@"AVPlayer",&,N,V_player
// Property: volume; attributes: Td,N,V_volume
// Property: frameSourceRate; attributes: Td,N
// Property: playerRate; attributes: Td,N,V_playerRate
// Property: reversePlaybackEnabled; attributes: TB,R,N,V_reversePlaybackEnabled
// Property: currentTime; attributes: T{?=qiIq},R,N
// Property: preciseSeeking; attributes: TB,N,V_preciseSeeking
// Property: isPlaying; attributes: TB,R,N
// Property: currentSource; attributes: T@"SCVideoFrameSource",R,N,V_currentSource
// Property: startTimestamp; attributes: T{?=qiIq},N,V_startTimestamp
// Property: seekInProgress; attributes: TB,R,N
// Property: reversedAudioData; attributes: T@"NSData",&,N,V_reversedAudioData
// Property: audioSeekingDelegate; attributes: T@"<SCVideoFramePlayerAudioSeekingDelegate>",W,N,V_audioSeekingDelegate
// Property: useSeparatePlayerForNonBaseAudio; attributes: TB,N,V_useSeparatePlayerForNonBaseAudio

// -[SCVideoFramePlayer initWithAVPlayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108cdfe68

// -[SCVideoFramePlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x108cdff2c

// -[SCVideoFramePlayer setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cdff9c

// -[SCVideoFramePlayer setPlayerRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108cdffe8

// -[SCVideoFramePlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x108ce0058

// -[SCVideoFramePlayer beginConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x108ce0060

// -[SCVideoFramePlayer commitConfigurationWithSeekToBeginning:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce006c

// -[SCVideoFramePlayer replaceCurrentSourceWithSource:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ce0190

// -[SCVideoFramePlayer setReversePlaybackEnabled:reverseAudioPlayer:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108ce0280

// -[SCVideoFramePlayer frameSourceRate]
// Type encoding: d16@0:8
// Implementation: 0x108ce0354

// -[SCVideoFramePlayer setFrameSourceRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce0368

// -[SCVideoFramePlayer startRunningAtTime:shouldSeek:]
// Type encoding: v44@0:8{?=qiIq}16B40
// Implementation: 0x108ce0468

// -[SCVideoFramePlayer seekInProgress]
// Type encoding: B16@0:8
// Implementation: 0x108ce0558

// -[SCVideoFramePlayer setReversedAudioData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce0574

// -[SCVideoFramePlayer updateSeparateAudioPlayback]
// Type encoding: v16@0:8
// Implementation: 0x108ce05b4

// -[SCVideoFramePlayer _setSeparateAudioPlayerItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x108ce0600

// -[SCVideoFramePlayer currentTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce07c8

// -[SCVideoFramePlayer seekToBeginning]
// Type encoding: v16@0:8
// Implementation: 0x108ce07e0

// -[SCVideoFramePlayer seekToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce0810

// -[SCVideoFramePlayer seekToTime:completionHandler:]
// Type encoding: v48@0:8{?=qiIq}16@?40
// Implementation: 0x108ce08cc

// -[SCVideoFramePlayer stopPlayingAndSeekSmoothlyToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce08d0

// -[SCVideoFramePlayer _smoothSeekToTime]
// Type encoding: v16@0:8
// Implementation: 0x108ce09e4

// -[SCVideoFramePlayer _pause]
// Type encoding: v16@0:8
// Implementation: 0x108ce0b74

// -[SCVideoFramePlayer pauseRunning]
// Type encoding: v16@0:8
// Implementation: 0x108ce0b9c

// -[SCVideoFramePlayer stop]
// Type encoding: v16@0:8
// Implementation: 0x108ce0ba4

// -[SCVideoFramePlayer _updatePlayersRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce0bd0

// -[SCVideoFramePlayer _isPaused]
// Type encoding: B16@0:8
// Implementation: 0x108ce0c18

// -[SCVideoFramePlayer _muteAllPlayers]
// Type encoding: v16@0:8
// Implementation: 0x108ce0c38

// -[SCVideoFramePlayer _setAVPlayerVolumes:]
// Type encoding: v24@0:8d16
// Implementation: 0x108ce0c74

// -[SCVideoFramePlayer _seekVideoAndAudioToTime:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce0d3c

// -[SCVideoFramePlayer _audioPlayerSeekToTime:preciseSeeking:]
// Type encoding: v44@0:8{?=qiIq}16B40
// Implementation: 0x108ce10d4

// -[SCVideoFramePlayer _audioPlayer:seekToTime:preciseSeeking:]
// Type encoding: v52@0:8@16{?=qiIq}24B48
// Implementation: 0x108ce11d0

// -[SCVideoFramePlayer updatePlayerRateWithReversePlayback]
// Type encoding: v16@0:8
// Implementation: 0x108ce12a0

// -[SCVideoFramePlayer _rescaleAndChangePlayerItemIfNecessaryIgnoringOldSpeed:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce13a0

// -[SCVideoFramePlayer reverseAudioPlayer]
// Type encoding: @16@0:8
// Implementation: 0x108ce1404

// -[SCVideoFramePlayer overrideAudioPlayer]
// Type encoding: @16@0:8
// Implementation: 0x108ce163c

// -[SCVideoFramePlayer _restartOverrideAudioWhenPlayToEndTimeNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce16ac

// -[SCVideoFramePlayer player]
// Type encoding: @16@0:8
// Implementation: 0x108ce173c

// -[SCVideoFramePlayer setPlayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce1744

// -[SCVideoFramePlayer volume]
// Type encoding: d16@0:8
// Implementation: 0x108ce1774

// -[SCVideoFramePlayer playerRate]
// Type encoding: d16@0:8
// Implementation: 0x108ce177c

// -[SCVideoFramePlayer reversePlaybackEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108ce1784

// -[SCVideoFramePlayer preciseSeeking]
// Type encoding: B16@0:8
// Implementation: 0x108ce178c

// -[SCVideoFramePlayer setPreciseSeeking:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce1794

// -[SCVideoFramePlayer currentSource]
// Type encoding: @16@0:8
// Implementation: 0x108ce179c

// -[SCVideoFramePlayer startTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x108ce17a4

// -[SCVideoFramePlayer setStartTimestamp:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x108ce17b8

// -[SCVideoFramePlayer reversedAudioData]
// Type encoding: @16@0:8
// Implementation: 0x108ce17cc

// -[SCVideoFramePlayer audioSeekingDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108ce17d4

// -[SCVideoFramePlayer setAudioSeekingDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108ce17ec

// -[SCVideoFramePlayer useSeparatePlayerForNonBaseAudio]
// Type encoding: B16@0:8
// Implementation: 0x108ce17f8

// -[SCVideoFramePlayer setUseSeparatePlayerForNonBaseAudio:]
// Type encoding: v20@0:8B16
// Implementation: 0x108ce1800

// -[SCVideoFramePlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108ce1808

@end
