// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlaybackPlayerEvent
// Superclass: NSObject
// Address: 0x112be74f8

@interface SCPlaybackPlayerEvent


// -[SCPlaybackPlayerEvent copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1091136e8

// -[SCPlaybackPlayerEvent hash]
// Type encoding: Q16@0:8
// Implementation: 0x10911370c

// -[SCPlaybackPlayerEvent internalInit]
// Type encoding: @16@0:8
// Implementation: 0x10911380c

// -[SCPlaybackPlayerEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x109113850

// -[SCPlaybackPlayerEvent matchOnIsPlayingChanged:onPlayerError:onPlayerReady:onPlayerStateChanged:onPlayerBufferChanged:onPlaybackEnd:onPlayerRateChanged:onPlaybackProgressUpdated:]
// Type encoding: v80@0:8@?16@?24@?32@?40@?48@?56@?64@?72
// Implementation: 0x1091139d0

// -[SCPlaybackPlayerEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109113bac

// +[SCPlaybackPlayerEvent onIsPlayingChangedWithIsPlaying:]
// Type encoding: @20@0:8B16
// Implementation: 0x109113400

// +[SCPlaybackPlayerEvent onPlaybackEnd]
// Type encoding: @16@0:8
// Implementation: 0x109113458

// +[SCPlaybackPlayerEvent onPlaybackProgressUpdatedWithCurrentPositionSecs:playbackDurationSecs:]
// Type encoding: @32@0:8d16d24
// Implementation: 0x1091134a4

// +[SCPlaybackPlayerEvent onPlayerBufferChangedWithIsPlaybackLikelyToKeepUp:bufferedTimeRangesInternal:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x109113504

// +[SCPlaybackPlayerEvent onPlayerErrorWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x109113578

// +[SCPlaybackPlayerEvent onPlayerRateChangedWithRate:]
// Type encoding: @20@0:8f16
// Implementation: 0x1091135e4

// +[SCPlaybackPlayerEvent onPlayerReady]
// Type encoding: @16@0:8
// Implementation: 0x109113640

// +[SCPlaybackPlayerEvent onPlayerStateChangedWithState:]
// Type encoding: @24@0:8q16
// Implementation: 0x10911368c

@end
