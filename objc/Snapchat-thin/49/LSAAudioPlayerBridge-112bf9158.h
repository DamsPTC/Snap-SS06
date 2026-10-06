// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAAudioPlayerBridge
// Superclass: NSObject
// Address: 0x112bf9158

@interface LSAAudioPlayerBridge

// Property: activeAudioPlayersCounter; attributes: TS,V_activeAudioPlayersCounter
// Property: scenariumAudioPlayer; attributes: T@"LSAScenariumAudioPlayer",R,N,V_scenariumAudioPlayer
// Property: audioToolboxPlayer; attributes: T@"LSAAudioToolboxPlayer",R,N,V_audioToolboxPlayer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAAudioPlayerBridge init]
// Type encoding: @16@0:8
// Implementation: 0x10ad99e6c

// -[LSAAudioPlayerBridge muteAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad99fc0

// -[LSAAudioPlayerBridge unmuteAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9a068

// -[LSAAudioPlayerBridge suspendAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9a110

// -[LSAAudioPlayerBridge resumeAllSoundsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9a1ac

// -[LSAAudioPlayerBridge activateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9a248

// -[LSAAudioPlayerBridge deactivateWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10ad9a258

// -[LSAAudioPlayerBridge isPlayingAudio]
// Type encoding: B16@0:8
// Implementation: 0x10ad9a268

// -[LSAAudioPlayerBridge addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9a284

// -[LSAAudioPlayerBridge removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9a28c

// -[LSAAudioPlayerBridge audioPlayerDidStartPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9a294

// -[LSAAudioPlayerBridge audioPlayerDidStopPlayingAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ad9a2f8

// -[LSAAudioPlayerBridge _invokeSelectorOnAllPlayers:completion:]
// Type encoding: v32@0:8:16@?24
// Implementation: 0x10ad9a368

// -[LSAAudioPlayerBridge scenariumAudioPlayer]
// Type encoding: @16@0:8
// Implementation: 0x10ad9a524

// -[LSAAudioPlayerBridge audioToolboxPlayer]
// Type encoding: @16@0:8
// Implementation: 0x10ad9a52c

// -[LSAAudioPlayerBridge activeAudioPlayersCounter]
// Type encoding: S16@0:8
// Implementation: 0x10ad9a534

// -[LSAAudioPlayerBridge setActiveAudioPlayersCounter:]
// Type encoding: v20@0:8S16
// Implementation: 0x10ad9a53c

// -[LSAAudioPlayerBridge .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad9a544

@end
