// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableLensResponsesParser
// Superclass: NSObject
// Address: 0x112a4e3a8

@interface SCUnlockableLensResponsesParser

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableLensResponsesParser initWithLensSnapchatMapper:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e1ab0

// -[SCUnlockableLensResponsesParser parseGetUnlocksResponseFromData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e1b24

// -[SCUnlockableLensResponsesParser parseMetadataFromAddUnlockResponse:metadataParams:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055e1bb0

// -[SCUnlockableLensResponsesParser parseErrorTypeFromAddUnlockResponse:responseHeaders:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x1055e1c58

// -[SCUnlockableLensResponsesParser parseMetadataFromFetchMetadataResponse:metadataParams:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055e1d6c

// -[SCUnlockableLensResponsesParser parseErrorTypeFromFetchMetadataResponse:responseHeaders:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x1055e1e14

// -[SCUnlockableLensResponsesParser .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055e21c4

// +[SCUnlockableLensResponsesParser _lensMetadataFromUnlockResponse:lensSnapchatMapper:metadataParams:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055e1f28

// +[SCUnlockableLensResponsesParser _lensMetadataFromLensSnapchat:lensSnapchatMapper:metadataParams:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055e1fe8

// +[SCUnlockableLensResponsesParser _snapchatFieldDescriptorFromMetadataParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e2094

// +[SCUnlockableLensResponsesParser _lensMetadataFromMetadataResponse:lensSnapchatMapper:metadataParams:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1055e2124

// +[SCUnlockableLensResponsesParser _unlockErrorFromUnlockStatus:]
// Type encoding: Q20@0:8i16
// Implementation: 0x1055e21b4

@end
