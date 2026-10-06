// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceoverViewModel
// Superclass: NSObject
// Address: 0x112a00838

@interface SCVoiceoverViewModel

// Property: maxDuration; attributes: T{?=qiIq},R,N,V_maxDuration
// Property: currentDuration; attributes: T{?=qiIq},R,N
// Property: numberOfSegments; attributes: TQ,R,N
// Property: isRecording; attributes: TB,R,N
// Property: hasChanges; attributes: TB,R,N,V_hasChanges
// Property: isAudioMixed; attributes: TB,R,N,V_isAudioMixed
// Property: recordingEventPublisher; attributes: T@"SCObservable",R,N

// -[SCVoiceoverViewModel initWithAudio:audioSession:maxDuration:grapheneLogger:audioMixToggleInitialValue:mixingProportionValue:]
// Type encoding: @72@0:8@16@24{?=qiIq}32@56B64f68
// Implementation: 0x104e24724

// -[SCVoiceoverViewModel startRecording]
// Type encoding: v16@0:8
// Implementation: 0x104e24848

// -[SCVoiceoverViewModel stopRecording]
// Type encoding: v16@0:8
// Implementation: 0x104e24880

// -[SCVoiceoverViewModel undoLastSegment]
// Type encoding: v16@0:8
// Implementation: 0x104e248b8

// -[SCVoiceoverViewModel durationOfSegmentAtIndex:]
// Type encoding: {?=qiIq}24@0:8Q16
// Implementation: 0x104e248f8

// -[SCVoiceoverViewModel createVoiceoverAudioWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104e24910

// -[SCVoiceoverViewModel setAudioMixingEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e24ac4

// -[SCVoiceoverViewModel currentDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x104e24bb8

// -[SCVoiceoverViewModel numberOfSegments]
// Type encoding: Q16@0:8
// Implementation: 0x104e24bd0

// -[SCVoiceoverViewModel isRecording]
// Type encoding: B16@0:8
// Implementation: 0x104e24bd8

// -[SCVoiceoverViewModel recordingEventPublisher]
// Type encoding: @16@0:8
// Implementation: 0x104e24be0

// -[SCVoiceoverViewModel _bindToAudioSessionRecording]
// Type encoding: v16@0:8
// Implementation: 0x104e24be8

// -[SCVoiceoverViewModel _handleRecordingEndedWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104e24dd4

// -[SCVoiceoverViewModel _handleFinishedCreatingVoiceoverAudioWithAudio:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104e24e08

// -[SCVoiceoverViewModel _mixingProportion]
// Type encoding: @16@0:8
// Implementation: 0x104e24e64

// -[SCVoiceoverViewModel maxDuration]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x104e24ea4

// -[SCVoiceoverViewModel hasChanges]
// Type encoding: B16@0:8
// Implementation: 0x104e24eb8

// -[SCVoiceoverViewModel isAudioMixed]
// Type encoding: B16@0:8
// Implementation: 0x104e24ec0

// -[SCVoiceoverViewModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e24ec8

@end
