// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenKeychainBackedByArchiveDiskStorage
// Superclass: NSObject
// Address: 0x112c2b108

@interface SCSnapTokenKeychainBackedByArchiveDiskStorage


// -[SCSnapTokenKeychainBackedByArchiveDiskStorage initWithLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x100105aec

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage accessTokenDataWithUserId:accessType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x100356a3c

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage setAccessTokenDataWithData:userId:accessType:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x10af78c70

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeAccessTokenDataWithUserId:accessType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10af78cfc

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage refreshTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100106088

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage setRefreshTokenDataWithData:userId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af78d68

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeRefreshTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af78e1c

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage cloud1TLTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002c0a60

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage setCloud1TLTokenDataWithData:forUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af78eb8

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeCloud1TLTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af78f34

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveSetRefreshTokenData:forUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af78f98

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRemoveRefreshTokenDataForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af79064

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRefreshTokenDataForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af790f4

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage pathForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af791f4

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af79280

@end
