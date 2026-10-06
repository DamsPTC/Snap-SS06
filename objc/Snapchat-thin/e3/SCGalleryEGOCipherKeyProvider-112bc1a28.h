// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryEGOCipherKeyProvider
// Superclass: NSObject
// Address: 0x112bc1a28

@interface SCGalleryEGOCipherKeyProvider

// Property: delegate; attributes: T@"<SCGalleryEGOCipherKeyProviderDelegate>",W,N,V_delegate

// -[SCGalleryEGOCipherKeyProvider initWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108d4ea48

// -[SCGalleryEGOCipherKeyProvider _applicationProtectedDataDidBecomeAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d4eb5c

// -[SCGalleryEGOCipherKeyProvider _observeApplication]
// Type encoding: v16@0:8
// Implementation: 0x108d4ebc0

// -[SCGalleryEGOCipherKeyProvider _unobserveApplication]
// Type encoding: v16@0:8
// Implementation: 0x108d4ec2c

// -[SCGalleryEGOCipherKeyProvider _retrieveMasterKeysFromKeychainWhenAllowed:]
// Type encoding: v20@0:8B16
// Implementation: 0x108d4ec6c

// -[SCGalleryEGOCipherKeyProvider _searchKeysAndUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108d4eec4

// -[SCGalleryEGOCipherKeyProvider _scheduleNextRetrievalAttempt]
// Type encoding: v16@0:8
// Implementation: 0x108d4f05c

// -[SCGalleryEGOCipherKeyProvider _attemptToCreateAndPersistNewKey]
// Type encoding: B16@0:8
// Implementation: 0x108d4f0e0

// -[SCGalleryEGOCipherKeyProvider _announceKeysAvailableAndUnobserve]
// Type encoding: v16@0:8
// Implementation: 0x108d4f1f8

// -[SCGalleryEGOCipherKeyProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x108d4f238

// -[SCGalleryEGOCipherKeyProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108d4f250

// -[SCGalleryEGOCipherKeyProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108d4f25c

@end
