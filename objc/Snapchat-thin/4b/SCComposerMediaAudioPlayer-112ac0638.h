// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerMediaAudioPlayer
// Superclass: NSObject
// Address: 0x112ac0638

@interface SCComposerMediaAudioPlayer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerMediaAudioPlayer initWithAudioSession:audio:shouldDisableScreenLockWhilePlaying:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106047664

// -[SCComposerMediaAudioPlayer play]
// Type encoding: v16@0:8
// Implementation: 0x106047770

// -[SCComposerMediaAudioPlayer pause]
// Type encoding: v16@0:8
// Implementation: 0x106047778

// -[SCComposerMediaAudioPlayer seekWithTimeMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x106047780

// -[SCComposerMediaAudioPlayer getDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x1060477c8

// -[SCComposerMediaAudioPlayer observeCurrentTimeWithCallback:]
// Type encoding: @24@0:8@?16
// Implementation: 0x106047810

// -[SCComposerMediaAudioPlayer dispose]
// Type encoding: v16@0:8
// Implementation: 0x1060479ac

// -[SCComposerMediaAudioPlayer pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1060479d8

// -[SCComposerMediaAudioPlayer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060479e4

@end
