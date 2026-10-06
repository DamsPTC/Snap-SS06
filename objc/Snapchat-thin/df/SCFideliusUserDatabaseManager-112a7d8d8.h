// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusUserDatabaseManager
// Superclass: NSObject
// Address: 0x112a7d8d8

@interface SCFideliusUserDatabaseManager

// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine

// -[SCFideliusUserDatabaseManager initWithName:iwek:hashedBeta:identity:error:logger:grapheneRegistry:circumstanceEngine:]
// Type encoding: @80@0:8@16@24@32@40^@48@56@64@72
// Implementation: 0x10043921c

// -[SCFideliusUserDatabaseManager initWithName:iwek:hashedBeta:identity:version:error:logger:grapheneRegistry:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40Q48^@56@64@72@80
// Implementation: 0x100439250

// -[SCFideliusUserDatabaseManager close]
// Type encoding: B16@0:8
// Implementation: 0x105947430

// -[SCFideliusUserDatabaseManager databaseName]
// Type encoding: @16@0:8
// Implementation: 0x105947590

// -[SCFideliusUserDatabaseManager hashedBeta]
// Type encoding: @16@0:8
// Implementation: 0x1059475b8

// -[SCFideliusUserDatabaseManager fidDbV2]
// Type encoding: @16@0:8
// Implementation: 0x1005888dc

// -[SCFideliusUserDatabaseManager friendDeviceInfoCacheV2]
// Type encoding: @16@0:8
// Implementation: 0x1059475e0

// -[SCFideliusUserDatabaseManager keyProviderCache]
// Type encoding: @16@0:8
// Implementation: 0x105947608

// -[SCFideliusUserDatabaseManager perform:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105947b14

// -[SCFideliusUserDatabaseManager _loadWithUrl:urlV2:iwek:identity:fileManager:error:eventName:]
// Type encoding: B72@0:8@16@24@32@40@48^@56@64
// Implementation: 0x1004506a8

// -[SCFideliusUserDatabaseManager _createWithUrl:urlV2:iwek:identity:fileManager:]
// Type encoding: B56@0:8@16@24@32@40@48
// Implementation: 0x105947b1c

// -[SCFideliusUserDatabaseManager logDBSize:]
// Type encoding: v24@0:8@16
// Implementation: 0x100600764

// -[SCFideliusUserDatabaseManager logDBLoadResult:isFileExist:isIdentityMissing:message:eventName:]
// Type encoding: v44@0:8B16B20B24@28@36
// Implementation: 0x100600588

// -[SCFideliusUserDatabaseManager dbV2InsertUserIdentity:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105947c44

// -[SCFideliusUserDatabaseManager _dbV2InsertUserIdentity:source:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105947d50

// -[SCFideliusUserDatabaseManager dbV2InsertFriendDeviceInfos:source:userPreferences:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105947f74

// -[SCFideliusUserDatabaseManager dbV2DeleteFriendDeviceInfos:source:userPreferences:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059482f8

// -[SCFideliusUserDatabaseManager dbV2DeleteFriendDeviceInfosForUserId:source:userPreferences:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105948650

// -[SCFideliusUserDatabaseManager dbV2DeleteAllFriendDeviceInfosFromSource:userPreferences:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105948910

// -[SCFideliusUserDatabaseManager dbV2InsertMessageEncryptionKey:conversationId:messageId:timestamp:purgePolicy:source:]
// Type encoding: v64@0:8@16@24q32@40@48@56
// Implementation: 0x105948b40

// -[SCFideliusUserDatabaseManager dbV2DeleteExpiredMessageKeysWithSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105948e18

// -[SCFideliusUserDatabaseManager dbV2DeleteMessageKeysWithConversationId:messageId:source:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x105948fd0

// -[SCFideliusUserDatabaseManager _createDBV2IfNotExistWithURL:iwek:logger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059491c8

// -[SCFideliusUserDatabaseManager _createFriendCacheV2IfNotExistWithURL:iwek:logger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105949310

// -[SCFideliusUserDatabaseManager _cappedLoggingUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x105949440

// -[SCFideliusUserDatabaseManager _cappedLoggingUserIdsWithDeviceInfos:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594949c

// -[SCFideliusUserDatabaseManager circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x10594959c

// -[SCFideliusUserDatabaseManager setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059495a4

// -[SCFideliusUserDatabaseManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059495d4

// +[SCFideliusUserDatabaseManager databaseV2FileExists:]
// Type encoding: B24@0:8@16
// Implementation: 0x10594737c

// +[SCFideliusUserDatabaseManager deleteDatabaseWithName:version:source:logger:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x105947630

// +[SCFideliusUserDatabaseManager deleteDatabaseV2WithName:version:source:logger:]
// Type encoding: v48@0:8@16Q24@32@40
// Implementation: 0x105947848

// +[SCFideliusUserDatabaseManager userDatabaseUrlWithName:version:fileManager:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1004397b4

// +[SCFideliusUserDatabaseManager userDatabaseV2UrlWithName:version:fileManager:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x100449e68

@end
