// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceoverAudioSession
// Superclass: NSObject
// Address: 0x112a00518

@interface SCVoiceoverAudioSession

// Property: numberOfSegments; attributes: TQ,R,N
// Property: fullAudioLength; attributes: T{?=qiIq},R,N,V_fullAudioLength
// Property: recording; attributes: TB,R,N,GisRecording
// Property: recordingEventPublisher; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVoiceoverAudioSession initWithAudio:maxDuration:audioSessionServices:temporaryFileWriter:]
// Type encoding: @64@0:8@16{?=qiIq}24@48@56
// Implementation: 0x104e1a044

// -[SCVoiceoverAudioSession numberOfSegments]
// Type encoding: Q16@0:8
// Implementation: 0x104e1a2ec

// -[SCVoiceoverAudioSession isRecording]
// Type encoding: B16@0:8
// Implementation: 0x104e1a2f4

// -[SCVoiceoverAudioSession beginRecordingSegment]
// Type encoding: v16@0:8
// Implementation: 0x104e1a304

// -[SCVoiceoverAudioSession endRecordingSegment]
// Type encoding: v16@0:8
// Implementation: 0x104e1a3d8

// -[SCVoiceoverAudioSession undoSegment]
// Type encoding: @16@0:8
// Implementation: 0x104e1a4ac

// -[SCVoiceoverAudioSession lengthOfSegmentAtIndex:]
// Type encoding: {?=qiIq}24@0:8Q16
// Implementation: 0x104e1a4b0

// -[SCVoiceoverAudioSession createVoiceoverAudioWithAudioMixingProportion:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e1a54c

// -[SCVoiceoverAudioSession recordingEventPublisher]
// Type encoding: @16@0:8
// Implementation: 0x104e1a7b8

// -[SCVoiceoverAudioSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104e1a7e0

// -[SCVoiceoverAudioSession _configureAudioSession]
// Type encoding: v16@0:8
// Implementation: 0x104e1a830

// -[SCVoiceoverAudioSession _prepareNextRecordingWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104e1aa6c

// -[SCVoiceoverAudioSession _startRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x104e1accc

// -[SCVoiceoverAudioSession _startRecording]
// Type encoding: v16@0:8
// Implementation: 0x104e1ae0c

// -[SCVoiceoverAudioSession _stopRecordingAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x104e1aff8

// -[SCVoiceoverAudioSession _recordingTimerEnd]
// Type encoding: v16@0:8
// Implementation: 0x104e1b038

// -[SCVoiceoverAudioSession _pushSegment:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e1b03c

// -[SCVoiceoverAudioSession _popSegment]
// Type encoding: @16@0:8
// Implementation: 0x104e1b0cc

// -[SCVoiceoverAudioSession _stitchVoiceoverSegmentsWithAudioMixingProportion:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104e1b170

// -[SCVoiceoverAudioSession audioRecorderDidFinishRecording:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104e1b434

// -[SCVoiceoverAudioSession _audioRecorderDidFinishRecording:successfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104e1b560

// -[SCVoiceoverAudioSession audioRecorderEncodeErrorDidOccur:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e1b67c

// -[SCVoiceoverAudioSession _audioRecorderEncodeErrorDidOccur:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e1b7b0

// -[SCVoiceoverAudioSession _setupAudioSegmentsWithVoiceoverAudio:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e1b810

// -[SCVoiceoverAudioSession _releaseAudioSessionTokenIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104e1ba08

// -[SCVoiceoverAudioSession _segmentsMappedToData]
// Type encoding: @16@0:8
// Implementation: 0x104e1ba7c

// -[SCVoiceoverAudioSession _nextVoiceoverURL]
// Type encoding: @16@0:8
// Implementation: 0x104e1bb4c

// -[SCVoiceoverAudioSession fullAudioLength]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x104e1bbe0

// -[SCVoiceoverAudioSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e1bbf4

@end
