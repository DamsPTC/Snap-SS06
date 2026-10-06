// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncUpdateEntryOperationResult
// Superclass: NSObject
// Address: 0x112b8ccd8

@interface SCCloudSyncUpdateEntryOperationResult


// -[SCCloudSyncUpdateEntryOperationResult copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107f5dd04

// -[SCCloudSyncUpdateEntryOperationResult internalInit]
// Type encoding: @16@0:8
// Implementation: 0x107f5dd28

// -[SCCloudSyncUpdateEntryOperationResult matchSuccess:serverFailure:networkFailure:localInconsistencyFailure:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x107f5dd6c

// -[SCCloudSyncUpdateEntryOperationResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f5de68

// +[SCCloudSyncUpdateEntryOperationResult localInconsistencyFailureWithErrorMessage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f5db14

// +[SCCloudSyncUpdateEntryOperationResult networkFailureWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f5db80

// +[SCCloudSyncUpdateEntryOperationResult serverFailureWithServiceStatusCodeEnum:entries:backoffTimeValueMs:debugInfo:]
// Type encoding: @48@0:8q16@24d32@40
// Implementation: 0x107f5dbec

// +[SCCloudSyncUpdateEntryOperationResult successWithEntryInfoDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f5dca0

@end
