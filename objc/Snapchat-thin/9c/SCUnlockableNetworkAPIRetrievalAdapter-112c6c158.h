// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableNetworkAPIRetrievalAdapter
// Superclass: NSObject
// Address: 0x112c6c158

@interface SCUnlockableNetworkAPIRetrievalAdapter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableNetworkAPIRetrievalAdapter initWithLensMetadataRetriever:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0b8840

// -[SCUnlockableNetworkAPIRetrievalAdapter fetchUnlockablesWhichChecksumsAbsentInMap:unlockGroups:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10b0b88b4

// -[SCUnlockableNetworkAPIRetrievalAdapter addUnlockWithUnlockableId:unlockType:metadataParams:deepLinkAppId:deepLinkProperties:snapInfo:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v88@0:8q16Q24@32@40@48@56@64@?72@?80
// Implementation: 0x10b0b891c

// -[SCUnlockableNetworkAPIRetrievalAdapter removeUnlockableWithId:unlockTypes:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8q16@24@32@?40@?48
// Implementation: 0x10b0b8990

// -[SCUnlockableNetworkAPIRetrievalAdapter fetchMetadataWithUnlockableId:unlockType:metadataParams:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v64@0:8q16Q24@32@40@?48@?56
// Implementation: 0x10b0b89f8

// -[SCUnlockableNetworkAPIRetrievalAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b8d1c

// +[SCUnlockableNetworkAPIRetrievalAdapter _errorMethodNotImplemented]
// Type encoding: @16@0:8
// Implementation: 0x10b0b8d00

@end
