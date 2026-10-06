// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppAttestStateManagerImpl
// Superclass: NSObject
// Address: 0x112a2c618

@interface SCAppAttestStateManagerImpl

// Property: state; attributes: T@"<SCAppAttestState>",R,&,V_state
// Property: sharedService; attributes: T@"DCAppAttestService",&,N,V_sharedService

// -[SCAppAttestStateManagerImpl initWithRequirement:keyGenerationAndAttestationTimeout:assertionTimeout:errorRetryBackoff:errorMaxRetries:blizzardLogger:grapheneRegistry:]
// Type encoding: @64@0:8i16d20d28d36I44@48@56
// Implementation: 0x10535a154

// -[SCAppAttestStateManagerImpl reinitState]
// Type encoding: v16@0:8
// Implementation: 0x10535a260

// -[SCAppAttestStateManagerImpl _reinitStateWithRequirement:]
// Type encoding: v20@0:8i16
// Implementation: 0x10535a268

// -[SCAppAttestStateManagerImpl state]
// Type encoding: @16@0:8
// Implementation: 0x10535a2c0

// -[SCAppAttestStateManagerImpl sharedService]
// Type encoding: @16@0:8
// Implementation: 0x10535a2cc

// -[SCAppAttestStateManagerImpl setSharedService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535a2d4

// -[SCAppAttestStateManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10535a304

@end
