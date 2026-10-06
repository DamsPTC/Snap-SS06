// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAudioNotePlayer
// Superclass: NSObject
// Address: 0x112ae6838

@interface SCAudioNotePlayer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAudioNotePlayer initWithContentDelivery:userTrackedLogger:timeProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10658d300

// -[SCAudioNotePlayer initWithContentDelivery:userTrackedLogger:audioNotePlayer:performer:timeProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10658d414

// -[SCAudioNotePlayer createPlaybackSession:conversationId:metricsInfo:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10658d570

// -[SCAudioNotePlayer _createPlaybackSessionWithType:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10658d708

// -[SCAudioNotePlayer createPlaybackSessionWithData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10658d858

// -[SCAudioNotePlayer startPlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658d9b8

// -[SCAudioNotePlayer _startPlaybackHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658dac4

// -[SCAudioNotePlayer _startPlaybackWithMessage:metricsInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10658dbc4

// -[SCAudioNotePlayer _logVoiceNoteFetchWithSuccess:startTime:metricsInfo:]
// Type encoding: v36@0:8B16d20@28
// Implementation: 0x10658def8

// -[SCAudioNotePlayer _startPlaybackForDownloadedMediaWithMessage:metricsInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10658e020

// -[SCAudioNotePlayer _startPlaybackForDownloadedMediaHelperWithMessage:metricsInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10658e154

// -[SCAudioNotePlayer _startPlaybackWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658e234

// -[SCAudioNotePlayer _startPlaybackWithDataHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658e340

// -[SCAudioNotePlayer pausePlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658e3b8

// -[SCAudioNotePlayer _pausePlaybackHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658e4c4

// -[SCAudioNotePlayer setPlaybackSpeed:forSession:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10658e550

// -[SCAudioNotePlayer _setPlaybackSpeedHelper:forSession:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10658e670

// -[SCAudioNotePlayer _logPlaybackSpeedChange]
// Type encoding: v16@0:8
// Implementation: 0x10658e740

// -[SCAudioNotePlayer seekToTime:forSession:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10658e8fc

// -[SCAudioNotePlayer _seekToTimeHelper:forSession:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x10658ea1c

// -[SCAudioNotePlayer isPlaying:]
// Type encoding: B24@0:8@16
// Implementation: 0x10658ead4

// -[SCAudioNotePlayer _endActiveSession]
// Type encoding: v16@0:8
// Implementation: 0x10658eb58

// -[SCAudioNotePlayer audioNotePlayerStateChangeWithSessionId:state:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10658ebf0

// -[SCAudioNotePlayer _audioNotePlayerStateChangeWithSessionId:state:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10658ed08

// -[SCAudioNotePlayer audioNotePlayerDidFinishPlayingWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658ee60

// -[SCAudioNotePlayer _audioNotePlayerDidFinishPlayingWithSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10658ef6c

// -[SCAudioNotePlayer resetWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10658f024

// -[SCAudioNotePlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x10658f02c

// -[SCAudioNotePlayer pauseAll]
// Type encoding: v16@0:8
// Implementation: 0x10658f034

// -[SCAudioNotePlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10658f03c

@end
