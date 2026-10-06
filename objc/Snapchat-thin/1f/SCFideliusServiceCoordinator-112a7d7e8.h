// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusServiceCoordinator
// Superclass: NSObject
// Address: 0x112a7d7e8

@interface SCFideliusServiceCoordinator

// Property: snapService; attributes: T@"SCFideliusSnapService",&,V_snapService
// Property: retryService; attributes: T@"SCFideliusRetryService",&,N,V_retryService
// Property: ackRetryService; attributes: T@"SCFideliusAckRetryService",&,V_ackRetryService
// Property: reEncryptionDelegate; attributes: T@"SCFideliusReEncryptionDelegateImpl",&,N,V_reEncryptionDelegate
// Property: identityService; attributes: T@"SCFideliusIdentityService",&,V_identityService

// -[SCFideliusServiceCoordinator initWithManager:snapchatterServices:httpMetadataService:httpRequestModifier:databaseFetcher:logger:fideliusFriendMetadataCoordinator:backgroundTaskWrapper:circumstanceEngine:grpcFideliusRecryptService:userPreferences:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1003f5c00

// -[SCFideliusServiceCoordinator beginObservationOnIdentityService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f6f5c

// -[SCFideliusServiceCoordinator betaReady:]
// Type encoding: v24@0:8@16
// Implementation: 0x100436148

// -[SCFideliusServiceCoordinator dbReady:identity:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10060a660

// -[SCFideliusServiceCoordinator dataInvalidated]
// Type encoding: v16@0:8
// Implementation: 0x105946d94

// -[SCFideliusServiceCoordinator identityService:]
// Type encoding: @24@0:8@16
// Implementation: 0x10062a350

// -[SCFideliusServiceCoordinator snapService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105946e18

// -[SCFideliusServiceCoordinator retryService:]
// Type encoding: @24@0:8@16
// Implementation: 0x105946ea0

// -[SCFideliusServiceCoordinator ackRetryService:]
// Type encoding: @24@0:8@16
// Implementation: 0x100837ecc

// -[SCFideliusServiceCoordinator reEncryptionDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10041beac

// -[SCFideliusServiceCoordinator stopSnapService]
// Type encoding: v16@0:8
// Implementation: 0x105946ec8

// -[SCFideliusServiceCoordinator identityService]
// Type encoding: @16@0:8
// Implementation: 0x1003f6fac

// -[SCFideliusServiceCoordinator setIdentityService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f61c4

// -[SCFideliusServiceCoordinator snapService]
// Type encoding: @16@0:8
// Implementation: 0x105946ed0

// -[SCFideliusServiceCoordinator setSnapService:]
// Type encoding: v24@0:8@16
// Implementation: 0x100436b0c

// -[SCFideliusServiceCoordinator retryService]
// Type encoding: @16@0:8
// Implementation: 0x105946edc

// -[SCFideliusServiceCoordinator setRetryService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105946ee4

// -[SCFideliusServiceCoordinator ackRetryService]
// Type encoding: @16@0:8
// Implementation: 0x100613884

// -[SCFideliusServiceCoordinator setAckRetryService:]
// Type encoding: v24@0:8@16
// Implementation: 0x100614110

// -[SCFideliusServiceCoordinator setReEncryptionDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105946f14

// -[SCFideliusServiceCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105946f44

@end
