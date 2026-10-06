// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenKeychainDiskStorage
// Superclass: NSObject
// Address: 0x112c2b1a8

@interface SCSnapTokenKeychainDiskStorage


// -[SCSnapTokenKeychainDiskStorage initWithLogger:isKeychainPerformerEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x100105b88

// -[SCSnapTokenKeychainDiskStorage refreshTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10010614c

// -[SCSnapTokenKeychainDiskStorage setRefreshTokenDataWithData:userId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af794d8

// -[SCSnapTokenKeychainDiskStorage removeRefreshTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af79568

// -[SCSnapTokenKeychainDiskStorage accessTokenDataWithUserId:accessType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x100356ad0

// -[SCSnapTokenKeychainDiskStorage setAccessTokenDataWithData:userId:accessType:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x10af795cc

// -[SCSnapTokenKeychainDiskStorage removeAccessTokenDataWithUserId:accessType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x10af79688

// -[SCSnapTokenKeychainDiskStorage cloud1TLTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002c0acc

// -[SCSnapTokenKeychainDiskStorage setCloud1TLTokenDataWithData:forUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af79714

// -[SCSnapTokenKeychainDiskStorage removeCloud1TLTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10af797a4

// -[SCSnapTokenKeychainDiskStorage _guardedDataForKey:tokenType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10af79808

// -[SCSnapTokenKeychainDiskStorage _guardedRemoveDataForKeyWithStatus:tokenType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af79990

// -[SCSnapTokenKeychainDiskStorage _guardedSetBackgroundDataWithStatus:forKey:tokenType:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10af79a5c

// -[SCSnapTokenKeychainDiskStorage _dataForKey:tokenType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1001061f8

// -[SCSnapTokenKeychainDiskStorage _removeDataForKeyWithStatus:tokenType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10af79b54

// -[SCSnapTokenKeychainDiskStorage _setBackgroundDataWithStatus:forKey:tokenType:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10af79bfc

// -[SCSnapTokenKeychainDiskStorage _accessTokenKeyForUserId:accessType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x100356b6c

// -[SCSnapTokenKeychainDiskStorage _refreshTokenKeyForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1001061c0

// -[SCSnapTokenKeychainDiskStorage _accessTokenMetricKeyWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100356ebc

// -[SCSnapTokenKeychainDiskStorage _cloud1TLTokenKeyForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002c0b40

// -[SCSnapTokenKeychainDiskStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af79ca8

// +[SCSnapTokenKeychainDiskStorage _sharedKeychainPerformer]
// Type encoding: @16@0:8
// Implementation: 0x100105c30

@end
