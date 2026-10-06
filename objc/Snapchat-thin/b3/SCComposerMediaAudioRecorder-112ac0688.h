// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaAudioRecorder
// Superclass: NSObject
// Address: 0x112ac0688

@interface SCComposerMediaAudioRecorder

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaAudioRecorder initWithAudioServices:captureServices:temporaryFileWriterServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1060479f0

// -[SCComposerMediaAudioRecorder getAuthorizationHandler]
// Type encoding: @16@0:8
// Implementation: 0x106047abc

// -[SCComposerMediaAudioRecorder startRecordingWithOptions:callback:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x106047b38

// -[SCComposerMediaAudioRecorder _startRecordingWithAudioServices:options:completion:]
// Type encoding: @40@0:8@16@24@?32
// Implementation: 0x106047be8

// -[SCComposerMediaAudioRecorder pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106048580

// -[SCComposerMediaAudioRecorder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10604858c

@end
