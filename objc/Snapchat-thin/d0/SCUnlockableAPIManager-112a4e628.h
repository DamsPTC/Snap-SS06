// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableAPIManager
// Superclass: NSObject
// Address: 0x112a4e628

@interface SCUnlockableAPIManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableAPIManager initWithRequestManager:networkConfig:requestInfoProvider:unlocksNamespace:networkLogging:timeProvider:responseParser:]
// Type encoding: @68@0:8@16@24@32i40@44@52@60
// Implementation: 0x100bca2c0

// -[SCUnlockableAPIManager fetchUnlockablesWhichChecksumsAbsentInMap:unlockGroups:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1055e4b70

// -[SCUnlockableAPIManager addUnlockWithUnlockableId:unlockType:metadataParams:deepLinkAppId:deepLinkProperties:snapInfo:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v88@0:8q16Q24@32@40@48@56@64@?72@?80
// Implementation: 0x1055e4f00

// -[SCUnlockableAPIManager removeUnlockableWithId:unlockTypes:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v56@0:8q16@24@32@?40@?48
// Implementation: 0x1055e555c

// -[SCUnlockableAPIManager fetchMetadataWithUnlockableId:unlockType:metadataParams:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v64@0:8q16Q24@32@40@?48@?56
// Implementation: 0x1055e5834

// -[SCUnlockableAPIManager pinUnlockableWithId:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v48@0:8q16@24@?32@?40
// Implementation: 0x1055e5d60

// -[SCUnlockableAPIManager unpinUnlockableWithId:callbackPerformer:successBlock:failureBlock:]
// Type encoding: v48@0:8q16@24@?32@?40
// Implementation: 0x1055e5ecc

// -[SCUnlockableAPIManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055e65b0

// +[SCUnlockableAPIManager _failureResponseDataFromData:error:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1055e5ee4

// +[SCUnlockableAPIManager _networkUnlockTypesFromUnlockTypes:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e5fb8

// +[SCUnlockableAPIManager _gpbObjectDictionaryFromChecksumMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e6008

// +[SCUnlockableAPIManager _unlockGroupRequestsFromNetworkUnlockGroups:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e6180

// +[SCUnlockableAPIManager _unlockGroupRequestFromNetworkUnlockGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e62f0

// +[SCUnlockableAPIManager _unlockGroupFromNetworkUnlockGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e638c

// +[SCUnlockableAPIManager _enumArrayFromArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055e6428

// +[SCUnlockableAPIManager _unlockTypeFromUnlockType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1055e6550

// +[SCUnlockableAPIManager _unlockableTypeFromUnlockableType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1055e6564

// +[SCUnlockableAPIManager _logUnlockTypeFromNetworkUnlockType:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x1055e656c

// +[SCUnlockableAPIManager _invalidInputParamsError]
// Type encoding: @16@0:8
// Implementation: 0x1055e6590

@end
