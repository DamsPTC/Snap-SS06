// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenKeychainBackedByArchiveDiskStorage
// Superclass: NSObject
// Address: 0xad4c70

@interface SCSnapTokenKeychainBackedByArchiveDiskStorage


// -[SCSnapTokenKeychainBackedByArchiveDiskStorage initWithLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x438b7c

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage accessTokenDataWithUserId:accessType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x438c18

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage setAccessTokenDataWithData:userId:accessType:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x438c8c

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeAccessTokenDataWithUserId:accessType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x438d18

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage refreshTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x438d84

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage setRefreshTokenDataWithData:userId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x438e48

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeRefreshTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x438efc

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage cloud1TLTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x438f98

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage setCloud1TLTokenDataWithData:forUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x439004

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage removeCloud1TLTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x439080

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveSetRefreshTokenData:forUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x4390e4

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRemoveRefreshTokenDataForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x4391b0

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage _archiveRefreshTokenDataForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x439240

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage pathForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x439340

// -[SCSnapTokenKeychainBackedByArchiveDiskStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x4393cc

@end
