// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatAudioNotePlayer
// Superclass: NSObject
// Address: 0x112b5ba48

@interface SCChatAudioNotePlayer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatAudioNotePlayer initWithContentDelivery:userTrackedLogger:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107043a60

// -[SCChatAudioNotePlayer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107043b94

// -[SCChatAudioNotePlayer playOrPauseAudioNoteWithSessionId:media:messageAnalyticsId:delegate:metricsInfo:playbackSpeed:offsetInSeconds:]
// Type encoding: v72@0:8@16@24@32@40@48d56@64
// Implementation: 0x107043bfc

// -[SCChatAudioNotePlayer _playOrPauseAudioNoteHelperWithSessionId:media:messageAnalyticsId:delegate:metricsInfo:playbackSpeed:offsetInSeconds:]
// Type encoding: v72@0:8@16@24@32@40@48d56@64
// Implementation: 0x107043d98

// -[SCChatAudioNotePlayer _handleMediaLoaded:playbackSpeed:offsetInSeconds:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x1070440dc

// -[SCChatAudioNotePlayer _playAudioNoteWithData:playbackSpeed:offsetInSeconds:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x1070441fc

// -[SCChatAudioNotePlayer playOrPauseWithSessionId:data:offsetSecs:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1070442b4

// -[SCChatAudioNotePlayer _playOrPauseWithSessionId:data:offsetSecs:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1070443e4

// -[SCChatAudioNotePlayer play]
// Type encoding: v16@0:8
// Implementation: 0x107044530

// -[SCChatAudioNotePlayer _playHelper]
// Type encoding: v16@0:8
// Implementation: 0x1070445ac

// -[SCChatAudioNotePlayer pause]
// Type encoding: v16@0:8
// Implementation: 0x107044668

// -[SCChatAudioNotePlayer _pauseHelper]
// Type encoding: v16@0:8
// Implementation: 0x1070446e4

// -[SCChatAudioNotePlayer stopWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107044790

// -[SCChatAudioNotePlayer _stopHelperWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10704483c

// -[SCChatAudioNotePlayer setPlaybackSpeed:]
// Type encoding: v24@0:8d16
// Implementation: 0x10704492c

// -[SCChatAudioNotePlayer seekToTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1070449a4

// -[SCChatAudioNotePlayer reset]
// Type encoding: v16@0:8
// Implementation: 0x107044a1c

// -[SCChatAudioNotePlayer resetWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107044a24

// -[SCChatAudioNotePlayer togglePlayPause:]
// Type encoding: v24@0:8@16
// Implementation: 0x107044a28

// -[SCChatAudioNotePlayer _togglePlayPauseHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x107044ad4

// -[SCChatAudioNotePlayer isPlaying]
// Type encoding: B16@0:8
// Implementation: 0x107044b3c

// -[SCChatAudioNotePlayer isPaused]
// Type encoding: B16@0:8
// Implementation: 0x107044b4c

// -[SCChatAudioNotePlayer isStopped]
// Type encoding: B16@0:8
// Implementation: 0x107044b5c

// -[SCChatAudioNotePlayer currentPlaybackTime]
// Type encoding: d16@0:8
// Implementation: 0x107044b6c

// -[SCChatAudioNotePlayer _getPerformer]
// Type encoding: @16@0:8
// Implementation: 0x107044ba4

// -[SCChatAudioNotePlayer _perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107044be4

// -[SCChatAudioNotePlayer audioPlayerDidFinishPlaying:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107044c3c

// -[SCChatAudioNotePlayer audioPlayerDecodeErrorDidOccur:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107044cec

// -[SCChatAudioNotePlayer _createAudioConfigurationWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107044cf0

// -[SCChatAudioNotePlayer _removeAudioConfigurationWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107044e74

// -[SCChatAudioNotePlayer _onRelinquishConfigurationWithCompletion:error:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x107045074

// -[SCChatAudioNotePlayer updateDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1070450f8

// -[SCChatAudioNotePlayer audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x107045104

// -[SCChatAudioNotePlayer audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107045138

// -[SCChatAudioNotePlayer audioSessionRouteDidChangeReasonNewDeviceAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10704513c

// -[SCChatAudioNotePlayer audioSessionRouteDidChangeReasonOldDeviceUnavailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x107045140

// -[SCChatAudioNotePlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107045174

@end
