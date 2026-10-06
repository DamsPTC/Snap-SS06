// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCloudSyncUpdateEntriesResult
// Superclass: NSObject
// Address: 0x112b8c878

@interface SCCloudSyncUpdateEntriesResult


// -[SCCloudSyncUpdateEntriesResult copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x107f5c1d0

// -[SCCloudSyncUpdateEntriesResult internalInit]
// Type encoding: @16@0:8
// Implementation: 0x107f5c1f4

// -[SCCloudSyncUpdateEntriesResult matchSuccess:serverFailure:networkFailure:snapDocFailure:]
// Type encoding: v48@0:8@?16@?24@?32@?40
// Implementation: 0x107f5c238

// -[SCCloudSyncUpdateEntriesResult .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f5c334

// +[SCCloudSyncUpdateEntriesResult networkFailureWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f5bfe0

// +[SCCloudSyncUpdateEntriesResult serverFailureWithServiceStatusCodeEnum:entries:backoffTimeValueMs:debugInfo:]
// Type encoding: @48@0:8q16@24d32@40
// Implementation: 0x107f5c04c

// +[SCCloudSyncUpdateEntriesResult snapDocFailureWithError:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f5c100

// +[SCCloudSyncUpdateEntriesResult successWithEntryInfoDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x107f5c16c

@end
