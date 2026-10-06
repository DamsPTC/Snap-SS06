// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSAScenariumAudioTrack
// Superclass: NSObject
// Address: 0x112bf92e8

@interface LSAScenariumAudioTrack

// Property: numberOfLoops; attributes: Tq,V_numberOfLoops
// Property: muted; attributes: TB,GisMuted,V_muted
// Property: suspended; attributes: TB,GisSuspended,V_suspended
// Property: volume; attributes: Tf,N
// Property: pan; attributes: Tf,N
// Property: duration; attributes: Td,R
// Property: currentTime; attributes: Td
// Property: isPlaying; attributes: TB,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSAScenariumAudioTrack initWithContentsPath:error:delegate:onFinishCallback:]
// Type encoding: @48@0:8@16^@24@32@?40
// Implementation: 0x10ad9f008

// -[LSAScenariumAudioTrack dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10ad9f1b4

// -[LSAScenariumAudioTrack prepareToPlay]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f230

// -[LSAScenariumAudioTrack playWithRepeatCount:]
// Type encoding: B24@0:8q16
// Implementation: 0x10ad9f238

// -[LSAScenariumAudioTrack play]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f28c

// -[LSAScenariumAudioTrack pause]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f298

// -[LSAScenariumAudioTrack resume]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f2b4

// -[LSAScenariumAudioTrack stop]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f2bc

// -[LSAScenariumAudioTrack close]
// Type encoding: v16@0:8
// Implementation: 0x10ad9f31c

// -[LSAScenariumAudioTrack setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad9f35c

// -[LSAScenariumAudioTrack isMuted]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f3cc

// -[LSAScenariumAudioTrack setSuspended:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad9f404

// -[LSAScenariumAudioTrack isSuspended]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f47c

// -[LSAScenariumAudioTrack setNumberOfLoops:]
// Type encoding: v24@0:8q16
// Implementation: 0x10ad9f4b4

// -[LSAScenariumAudioTrack numberOfLoops]
// Type encoding: q16@0:8
// Implementation: 0x10ad9f4f4

// -[LSAScenariumAudioTrack setVolume:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad9f52c

// -[LSAScenariumAudioTrack volume]
// Type encoding: f16@0:8
// Implementation: 0x10ad9f578

// -[LSAScenariumAudioTrack setPan:]
// Type encoding: v20@0:8f16
// Implementation: 0x10ad9f5b0

// -[LSAScenariumAudioTrack pan]
// Type encoding: f16@0:8
// Implementation: 0x10ad9f5b8

// -[LSAScenariumAudioTrack duration]
// Type encoding: d16@0:8
// Implementation: 0x10ad9f5c0

// -[LSAScenariumAudioTrack currentTime]
// Type encoding: d16@0:8
// Implementation: 0x10ad9f5c8

// -[LSAScenariumAudioTrack setCurrentTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10ad9f5d0

// -[LSAScenariumAudioTrack isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x10ad9f5d8

// -[LSAScenariumAudioTrack audioPlayerDidFinishPlaying:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10ad9f5e0

// -[LSAScenariumAudioTrack _resumePlaybackAfterSuspend]
// Type encoding: v16@0:8
// Implementation: 0x10ad9f73c

// -[LSAScenariumAudioTrack _finishWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10ad9f838

// -[LSAScenariumAudioTrack .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ad9f890

@end
