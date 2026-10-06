// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenKeychainDiskStorage
// Superclass: NSObject
// Address: 0xad8870

@interface SCSnapTokenKeychainDiskStorage


// -[SCSnapTokenKeychainDiskStorage initWithLogger:isKeychainPerformerEnabled:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x453430

// -[SCSnapTokenKeychainDiskStorage refreshTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x4535ac

// -[SCSnapTokenKeychainDiskStorage setRefreshTokenDataWithData:userId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x453620

// -[SCSnapTokenKeychainDiskStorage removeRefreshTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x4536b0

// -[SCSnapTokenKeychainDiskStorage accessTokenDataWithUserId:accessType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x453714

// -[SCSnapTokenKeychainDiskStorage setAccessTokenDataWithData:userId:accessType:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x4537b0

// -[SCSnapTokenKeychainDiskStorage removeAccessTokenDataWithUserId:accessType:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x45386c

// -[SCSnapTokenKeychainDiskStorage cloud1TLTokenDataWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x4538f8

// -[SCSnapTokenKeychainDiskStorage setCloud1TLTokenDataWithData:forUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x45396c

// -[SCSnapTokenKeychainDiskStorage removeCloud1TLTokenDataWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x4539fc

// -[SCSnapTokenKeychainDiskStorage _guardedDataForKey:tokenType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x453a60

// -[SCSnapTokenKeychainDiskStorage _guardedRemoveDataForKeyWithStatus:tokenType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x453be8

// -[SCSnapTokenKeychainDiskStorage _guardedSetBackgroundDataWithStatus:forKey:tokenType:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x453cb4

// -[SCSnapTokenKeychainDiskStorage _dataForKey:tokenType:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x453dac

// -[SCSnapTokenKeychainDiskStorage _removeDataForKeyWithStatus:tokenType:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x453e64

// -[SCSnapTokenKeychainDiskStorage _setBackgroundDataWithStatus:forKey:tokenType:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x453f0c

// -[SCSnapTokenKeychainDiskStorage _accessTokenKeyForUserId:accessType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x453fb8

// -[SCSnapTokenKeychainDiskStorage _refreshTokenKeyForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x45405c

// -[SCSnapTokenKeychainDiskStorage _accessTokenMetricKeyWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x454094

// -[SCSnapTokenKeychainDiskStorage _cloud1TLTokenKeyForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x45411c

// -[SCSnapTokenKeychainDiskStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x454154

// +[SCSnapTokenKeychainDiskStorage _sharedKeychainPerformer]
// Type encoding: @16@0:8
// Implementation: 0x4534d8

@end
