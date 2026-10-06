// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LSASnapRecordingComponent
// Superclass: LSABaseComponent
// Address: 0x112bf9ba8

@interface LSASnapRecordingComponent

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[LSASnapRecordingComponent initWithPerformer:announcerQueuePerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10adb794c

// -[LSASnapRecordingComponent setCoreManager:announcer:configuration:]
// Type encoding: v48@0:8{shared_ptr<LS::CoreManager>=^{CoreManager}^{__shared_weak_count}}16@32@40
// Implementation: 0x10adb7a20

// -[LSASnapRecordingComponent addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb7c28

// -[LSASnapRecordingComponent removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10adb7c38

// -[LSASnapRecordingComponent startSnapRecording]
// Type encoding: v16@0:8
// Implementation: 0x10adb7c48

// -[LSASnapRecordingComponent stopSnapRecording]
// Type encoding: v16@0:8
// Implementation: 0x10adb7ce4

// -[LSASnapRecordingComponent captureSnapImage]
// Type encoding: v16@0:8
// Implementation: 0x10adb7d80

// -[LSASnapRecordingComponent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10adb7e1c

// -[LSASnapRecordingComponent .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10adb7e8c

@end
