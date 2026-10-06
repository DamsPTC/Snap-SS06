// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableNetworkLogger
// Superclass: NSObject
// Address: 0x112a4e718

@interface SCUnlockableNetworkLogger

// Property: grapheneRegistry; attributes: T@"SCLazy",&,N,V_grapheneRegistry

// -[SCUnlockableNetworkLogger initWithGrapheneRegistry:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bc9f2c

// -[SCUnlockableNetworkLogger reportGetUnlockablesSuccessful:duration:server:]
// Type encoding: v40@0:8@16d24Q32
// Implementation: 0x1055e7250

// -[SCUnlockableNetworkLogger reportGetUnlockablesFailure:duration:responseCode:server:]
// Type encoding: v48@0:8@16d24q32Q40
// Implementation: 0x1055e7328

// -[SCUnlockableNetworkLogger reportAddUnlockSuccessfulForUnlockType:duration:server:]
// Type encoding: v40@0:8Q16d24Q32
// Implementation: 0x1055e7400

// -[SCUnlockableNetworkLogger reportAddUnlockFailureForUnlockType:duration:responseCode:server:error:]
// Type encoding: v56@0:8Q16d24q32Q40@48
// Implementation: 0x1055e7498

// -[SCUnlockableNetworkLogger reportRemoveUnlockSuccessfulForUnlockType:unlockableType:duration:server:]
// Type encoding: v48@0:8Q16Q24d32Q40
// Implementation: 0x1055e7598

// -[SCUnlockableNetworkLogger reportRemoveUnlockFailureForUnlockType:unlockableType:duration:responseCode:server:error:]
// Type encoding: v64@0:8Q16Q24d32q40Q48@56
// Implementation: 0x1055e765c

// -[SCUnlockableNetworkLogger reportGetMetadataSuccessfulWithDuration:server:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x1055e7780

// -[SCUnlockableNetworkLogger reportGetMetadataFailureWithDuration:responseCode:server:error:]
// Type encoding: v48@0:8d16q24Q32@40
// Implementation: 0x1055e77f4

// -[SCUnlockableNetworkLogger _reportMetric:server:unlockType:unlockableType:responseCode:error:duration:]
// Type encoding: v72@0:8@16Q24@32@40@48@56d64
// Implementation: 0x1055e78c8

// -[SCUnlockableNetworkLogger _reportGetUnlocksHistogramForReportType:count:server:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x1055e7b30

// -[SCUnlockableNetworkLogger _serverStringWithServerType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1055e7c40

// -[SCUnlockableNetworkLogger _unlockTypeStringWithUnlockType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1055e7c7c

// -[SCUnlockableNetworkLogger _unlockableTypeStringWithUnlockableType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1055e7ca4

// -[SCUnlockableNetworkLogger grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x1055e7cb0

// -[SCUnlockableNetworkLogger setGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055e7cb8

// -[SCUnlockableNetworkLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055e7ce8

@end
