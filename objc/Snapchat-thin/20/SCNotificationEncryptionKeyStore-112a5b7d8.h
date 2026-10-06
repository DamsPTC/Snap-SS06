// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNotificationEncryptionKeyStore
// Superclass: NSObject
// Address: 0x112a5b7d8

@interface SCNotificationEncryptionKeyStore


// -[SCNotificationEncryptionKeyStore initWithCurrentUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056eb6ec

// -[SCNotificationEncryptionKeyStore retrieveKey]
// Type encoding: @16@0:8
// Implementation: 0x1056eb764

// -[SCNotificationEncryptionKeyStore _clearSavedKeyAndUserIdIfUserMismatch]
// Type encoding: v16@0:8
// Implementation: 0x1056eb844

// -[SCNotificationEncryptionKeyStore _getEncryptionKeyForCurrentUser]
// Type encoding: @16@0:8
// Implementation: 0x1056eb884

// -[SCNotificationEncryptionKeyStore _getSavedEncryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x1056eb8fc

// -[SCNotificationEncryptionKeyStore _getSavedUserId]
// Type encoding: @16@0:8
// Implementation: 0x1056eb910

// -[SCNotificationEncryptionKeyStore _generateAndSaveKeyWithUserId]
// Type encoding: @16@0:8
// Implementation: 0x1056eb9b0

// -[SCNotificationEncryptionKeyStore _saveKeyAndUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056eba24

// -[SCNotificationEncryptionKeyStore saveEncryptionKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056eba80

// -[SCNotificationEncryptionKeyStore savedCurrentUserId]
// Type encoding: B16@0:8
// Implementation: 0x1056ebad8

// -[SCNotificationEncryptionKeyStore _shouldClearSavedKeyAndUserId]
// Type encoding: B16@0:8
// Implementation: 0x1056ebb3c

// -[SCNotificationEncryptionKeyStore clearSavedKeyAndUserId]
// Type encoding: v16@0:8
// Implementation: 0x1056ebbc8

// -[SCNotificationEncryptionKeyStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056ebc08

@end
