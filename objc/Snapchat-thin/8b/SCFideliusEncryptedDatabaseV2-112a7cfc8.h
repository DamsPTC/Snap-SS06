// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusEncryptedDatabaseV2
// Superclass: NSObject
// Address: 0x112a7cfc8

@interface SCFideliusEncryptedDatabaseV2

// Property: dbUrl; attributes: T@"NSURL",&,V_dbUrl

// -[SCFideliusEncryptedDatabaseV2 initWithUrl:iwek:logger:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100454534

// -[SCFideliusEncryptedDatabaseV2 sharedTransactor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10045466c

// -[SCFideliusEncryptedDatabaseV2 _sharedTransactorFromDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x100454828

// -[SCFideliusEncryptedDatabaseV2 _removeSharedTransactor]
// Type encoding: v16@0:8
// Implementation: 0x1059210f4

// -[SCFideliusEncryptedDatabaseV2 close]
// Type encoding: v16@0:8
// Implementation: 0x1059211f8

// -[SCFideliusEncryptedDatabaseV2 getFideliusUserIdentityWithHashedBeta:]
// Type encoding: @24@0:8@16
// Implementation: 0x100588904

// -[SCFideliusEncryptedDatabaseV2 insertFideliusUserIdentityWithHashedBeta:outBeta:inBeta:version:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1059212ac

// -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfoWithTheirOutBeta:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059216b4

// -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfosForUserIdWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105921aac

// -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfosForUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105921ea4

// -[SCFideliusEncryptedDatabaseV2 getFideliusFriendDeviceInfos]
// Type encoding: @16@0:8
// Implementation: 0x105922280

// -[SCFideliusEncryptedDatabaseV2 insertFideliusFriendDeviceInfos:]
// Type encoding: B24@0:8@16
// Implementation: 0x105922598

// -[SCFideliusEncryptedDatabaseV2 insertFideliusFriendDeviceInfoWithTheirOutBeta:userId:mystique:version:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1059229c8

// -[SCFideliusEncryptedDatabaseV2 deleteFideliusFriendDeviceInfoWithTheirOutBeta:]
// Type encoding: B24@0:8@16
// Implementation: 0x105922dc0

// -[SCFideliusEncryptedDatabaseV2 deleteFideliusFriendDeviceInfosWithTheirOutBeta:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059230cc

// -[SCFideliusEncryptedDatabaseV2 deleteFideliusFriendDeviceInfosForUserIdWithUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x105923380

// -[SCFideliusEncryptedDatabaseV2 getArroyoMessageEncryptionKeyWithConversationId:messageId:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10592368c

// -[SCFideliusEncryptedDatabaseV2 insertArroyoMessageEncryptionKeyWithConversationId:messageId:encryptedKey:timestamp:purgePolicy:]
// Type encoding: B56@0:8@16q24@32q40@48
// Implementation: 0x105923bd4

// -[SCFideliusEncryptedDatabaseV2 deleteArroyoMessageEncryptionKeyWithConversationId:messageId:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x105924098

// -[SCFideliusEncryptedDatabaseV2 deleteExpiredArroyoMessageEncryptionKeysWithTimestamp:purgePolicy:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x105924484

// -[SCFideliusEncryptedDatabaseV2 deleteExpiredArroyoMessageEncryptionKeys]
// Type encoding: B16@0:8
// Implementation: 0x105924718

// -[SCFideliusEncryptedDatabaseV2 _toDecryptedFriendDeviceInfos:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059247d0

// -[SCFideliusEncryptedDatabaseV2 _toDecryptedUserIdentity:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005ffc74

// -[SCFideliusEncryptedDatabaseV2 _toDecryptedMessageEncryptionKey:additionalData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105924b98

// -[SCFideliusEncryptedDatabaseV2 _deterministicEncryptString:]
// Type encoding: @24@0:8@16
// Implementation: 0x100588cc4

// -[SCFideliusEncryptedDatabaseV2 _deterministicDecryptString:]
// Type encoding: @24@0:8@16
// Implementation: 0x1005ffff8

// -[SCFideliusEncryptedDatabaseV2 _logError:errorMessage:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105924ca4

// -[SCFideliusEncryptedDatabaseV2 _encryptFideliusFriendDeviceInfos:]
// Type encoding: @24@0:8@16
// Implementation: 0x105924d84

// -[SCFideliusEncryptedDatabaseV2 _encryptFideliusUserIdsOrBetas:]
// Type encoding: @24@0:8@16
// Implementation: 0x105925054

// -[SCFideliusEncryptedDatabaseV2 _deterministicEncryptStringCC:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059251fc

// -[SCFideliusEncryptedDatabaseV2 _deterministicDecryptStringCC:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059252f8

// -[SCFideliusEncryptedDatabaseV2 _encryptFideliusUserIdsOrBetasCC:]
// Type encoding: @24@0:8@16
// Implementation: 0x10592541c

// -[SCFideliusEncryptedDatabaseV2 _toDecryptedFriendDeviceInfosCC:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059255c4

// -[SCFideliusEncryptedDatabaseV2 dbUrl]
// Type encoding: @16@0:8
// Implementation: 0x10592598c

// -[SCFideliusEncryptedDatabaseV2 setDbUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x105925998

// -[SCFideliusEncryptedDatabaseV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059259a0

// +[SCFideliusEncryptedDatabaseV2 sharedDictionary]
// Type encoding: @16@0:8
// Implementation: 0x100454a0c

@end
