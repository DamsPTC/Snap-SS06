// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatAudioNoteRecorder
// Superclass: NSObject
// Address: 0x112b0c268

@interface SCChatAudioNoteRecorder

// Property: delegate; attributes: T@"<SCChatAudioNoteRecorderDelegate>",W,N,V_delegate
// Property: audioPreview; attributes: T@"SCChatAudioNotePreview",&,N,V_audioPreview
// Property: maxRecordDuration; attributes: Td,R,N
// Property: state; attributes: TQ,R,N,V_state
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatAudioNoteRecorder init]
// Type encoding: @16@0:8
// Implementation: 0x106a281d8

// -[SCChatAudioNoteRecorder prepareNextRecordingWithCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a282ac

// -[SCChatAudioNoteRecorder maxRecordDuration]
// Type encoding: d16@0:8
// Implementation: 0x106a28624

// -[SCChatAudioNoteRecorder startAudioNoteRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106a28630

// -[SCChatAudioNoteRecorder _performStartAudioNoteRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106a28a0c

// -[SCChatAudioNoteRecorder _startAudioNoteRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106a28ae0

// -[SCChatAudioNoteRecorder _startRecording]
// Type encoding: v16@0:8
// Implementation: 0x106a28bec

// -[SCChatAudioNoteRecorder stopAudioNoteRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106a28ca8

// -[SCChatAudioNoteRecorder _stopAudioNoteRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x106a28d7c

// -[SCChatAudioNoteRecorder audioRecorderDidFinishRecording:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a28e8c

// -[SCChatAudioNoteRecorder _audioRecorderDidFinishRecording:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106a28fa4

// -[SCChatAudioNoteRecorder audioRecorderEncodeErrorDidOccur:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a29148

// -[SCChatAudioNoteRecorder _audioRecorderEncodeErrorDidOccur:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a2927c

// -[SCChatAudioNoteRecorder showRecordingFailureStatusBar]
// Type encoding: v16@0:8
// Implementation: 0x106a29300

// -[SCChatAudioNoteRecorder startAudioNoteRecorderTimer]
// Type encoding: v16@0:8
// Implementation: 0x106a29390

// -[SCChatAudioNoteRecorder stopAudioNoteRecorderTimer]
// Type encoding: v16@0:8
// Implementation: 0x106a2947c

// -[SCChatAudioNoteRecorder recorderTimerFired:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a294b8

// -[SCChatAudioNoteRecorder _recorderTimerFired]
// Type encoding: v16@0:8
// Implementation: 0x106a295a8

// -[SCChatAudioNoteRecorder _nextTempFileUrlWithExtension:]
// Type encoding: @24@0:8@16
// Implementation: 0x106a296e4

// -[SCChatAudioNoteRecorder _removeTempFile]
// Type encoding: v16@0:8
// Implementation: 0x106a297e8

// -[SCChatAudioNoteRecorder audioNoteRecorderSettings]
// Type encoding: @16@0:8
// Implementation: 0x106a29874

// -[SCChatAudioNoteRecorder _releaseAudioSessionTokenIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a29954

// -[SCChatAudioNoteRecorder _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106a299b4

// -[SCChatAudioNoteRecorder _addTimerForFailedRecordAttempt]
// Type encoding: v16@0:8
// Implementation: 0x106a29a20

// -[SCChatAudioNoteRecorder state]
// Type encoding: Q16@0:8
// Implementation: 0x106a29a94

// -[SCChatAudioNoteRecorder delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a29a9c

// -[SCChatAudioNoteRecorder setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a29ab4

// -[SCChatAudioNoteRecorder audioPreview]
// Type encoding: @16@0:8
// Implementation: 0x106a29ac0

// -[SCChatAudioNoteRecorder setAudioPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a29ac8

// -[SCChatAudioNoteRecorder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a29af8

@end
