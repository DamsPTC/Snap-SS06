// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginArchiveTokenManager
// Superclass: NSObject
// Address: 0x112c205c8

@interface SCOneTapLoginArchiveTokenManager

// Property: currentTokenForUserId; attributes: T@"NSMutableDictionary",&,V_currentTokenForUserId

// -[SCOneTapLoginArchiveTokenManager initWithArchiveUtils:archivePath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af4e5f0

// -[SCOneTapLoginArchiveTokenManager tokenForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af4e720

// -[SCOneTapLoginArchiveTokenManager setWithNewToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af4e8ac

// -[SCOneTapLoginArchiveTokenManager clearTokenForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4ea9c

// -[SCOneTapLoginArchiveTokenManager token]
// Type encoding: @16@0:8
// Implementation: 0x10af4ebe8

// -[SCOneTapLoginArchiveTokenManager clearToken]
// Type encoding: v16@0:8
// Implementation: 0x10af4ebf4

// -[SCOneTapLoginArchiveTokenManager _loadAuthTokenWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4ec00

// -[SCOneTapLoginArchiveTokenManager _readFromArchiveWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af4ecc8

// -[SCOneTapLoginArchiveTokenManager _writeCurrentTokenToArchiveWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af4ed84

// -[SCOneTapLoginArchiveTokenManager _archiveUtilsStoragePathWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af4ee58

// -[SCOneTapLoginArchiveTokenManager currentTokenForUserId]
// Type encoding: @16@0:8
// Implementation: 0x10af4ef04

// -[SCOneTapLoginArchiveTokenManager setCurrentTokenForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af4ef10

// -[SCOneTapLoginArchiveTokenManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af4ef18

@end
