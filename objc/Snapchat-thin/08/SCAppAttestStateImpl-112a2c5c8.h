// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAppAttestStateImpl
// Superclass: NSObject
// Address: 0x112a2c5c8

@interface SCAppAttestStateImpl

// Property: nonce; attributes: T@"NSString",R,&,V_nonce
// Property: sharedService; attributes: T@"DCAppAttestService",&,N,V_sharedService

// -[SCAppAttestStateImpl initWithRequirement:keyAttestationAndGenerationTimeout:assertionTimeout:errorRetryBackoff:errorMaxRetries:blizzardLogger:grapheneRegistry:]
// Type encoding: @64@0:8i16d20d28d36I44@48@56
// Implementation: 0x105357fdc

// -[SCAppAttestStateImpl generateKeyAndAttestation]
// Type encoding: v16@0:8
// Implementation: 0x105358110

// -[SCAppAttestStateImpl generateAssertionWithData:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105358290

// -[SCAppAttestStateImpl _generateAndAttestKey]
// Type encoding: v16@0:8
// Implementation: 0x105358554

// -[SCAppAttestStateImpl _generateAndAttestKeyWithRetrier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535871c

// -[SCAppAttestStateImpl _attestKey:withRetrier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105358ac4

// -[SCAppAttestStateImpl _getKeyIdAndAttestationWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105358f00

// -[SCAppAttestStateImpl _generateAssertionWithData:completionHandler:overheadStartSec:]
// Type encoding: v40@0:8@16@?24d32
// Implementation: 0x105359068

// -[SCAppAttestStateImpl _generateAssertionWithData:completionHandler:overheadStartSec:keyId:attestation:promise:retrier:]
// Type encoding: v72@0:8@16@?24d32@40@48@56@64
// Implementation: 0x10535946c

// -[SCAppAttestStateImpl _generateVendorAttestationWithKeyId:attestation:assertion:error:overheadStartSec:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40d48@?56
// Implementation: 0x10535994c

// -[SCAppAttestStateImpl _errorWithCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x105359af4

// -[SCAppAttestStateImpl _isRetryableError:]
// Type encoding: B24@0:8@16
// Implementation: 0x105359b10

// -[SCAppAttestStateImpl _objectOrNil:]
// Type encoding: @24@0:8@16
// Implementation: 0x105359b74

// -[SCAppAttestStateImpl _appAttestStepToString:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105359bd8

// -[SCAppAttestStateImpl _errorToString:]
// Type encoding: @24@0:8q16
// Implementation: 0x105359bf4

// -[SCAppAttestStateImpl _logStep:latencySec:error:]
// Type encoding: v40@0:8Q16d24@32
// Implementation: 0x105359cf0

// -[SCAppAttestStateImpl _logBlizzardEventForStep:latencySec:error:]
// Type encoding: v40@0:8Q16d24@32
// Implementation: 0x105359d5c

// -[SCAppAttestStateImpl _logGrapheneMetricForStep:latencySec:error:]
// Type encoding: v40@0:8Q16d24@32
// Implementation: 0x105359eb0

// -[SCAppAttestStateImpl _logOverheadOnRegistration:]
// Type encoding: v24@0:8d16
// Implementation: 0x10535a024

// -[SCAppAttestStateImpl nonce]
// Type encoding: @16@0:8
// Implementation: 0x10535a0b0

// -[SCAppAttestStateImpl sharedService]
// Type encoding: @16@0:8
// Implementation: 0x10535a0bc

// -[SCAppAttestStateImpl setSharedService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10535a0c4

// -[SCAppAttestStateImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10535a0f4

@end
