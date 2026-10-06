// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVoiceoverMediaLoader
// Superclass: NSObject
// Address: 0x112a6d2a8

@interface SCVoiceoverMediaLoader

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVoiceoverMediaLoader initWithMemoriesMediaRetriever:temporaryFileWriter:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1057fed9c

// -[SCVoiceoverMediaLoader requestDecryptedVoiceoverAudioForSnapID:queue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057fee84

// -[SCVoiceoverMediaLoader requestVoiceoverAudioWithDecryptedData:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057fef9c

// -[SCVoiceoverMediaLoader _asyncEncryptedContentDataResultHandlerWithCompletion:onQueue:]
// Type encoding: @?32@0:8@?16@24
// Implementation: 0x1057ff084

// -[SCVoiceoverMediaLoader _voiceoverAudioWithVoiceoverAssetData:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057ff450

// -[SCVoiceoverMediaLoader _voiceoverAudioWithVoiceoverAsset:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057ff5bc

// -[SCVoiceoverMediaLoader _stitchAudioSegments:fromAsset:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057ff7ac

// -[SCVoiceoverMediaLoader _completeWithAudioData:fromAsset:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057ffd88

// -[SCVoiceoverMediaLoader .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10580005c

@end
