// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensEffectAudioProcessor
// Superclass: NSObject
// Address: 0x112be2368

@interface SCLensEffectAudioProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensEffectAudioProcessor initWithAudioProcessingComponent:audioPlayer:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10903956c

// -[SCLensEffectAudioProcessor activateAudioPlayers]
// Type encoding: v16@0:8
// Implementation: 0x109039674

// -[SCLensEffectAudioProcessor deactivateAudioPlayers]
// Type encoding: v16@0:8
// Implementation: 0x109039758

// -[SCLensEffectAudioProcessor stopAllSoundEffects]
// Type encoding: v16@0:8
// Implementation: 0x109039858

// -[SCLensEffectAudioProcessor stopAllSoundEffectsAndWait]
// Type encoding: v16@0:8
// Implementation: 0x10903993c

// -[SCLensEffectAudioProcessor resumeAllSoundEffects]
// Type encoding: v16@0:8
// Implementation: 0x109039a70

// -[SCLensEffectAudioProcessor muteAudioPlayersForRequestorId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109039b54

// -[SCLensEffectAudioProcessor unmuteAudioPlayersForRequestorId:]
// Type encoding: v24@0:8@16
// Implementation: 0x109039c88

// -[SCLensEffectAudioProcessor processAudioBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x109039dc8

// -[SCLensEffectAudioProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109039ee4

@end
