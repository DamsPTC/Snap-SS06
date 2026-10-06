// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusLogger
// Superclass: NSObject
// Address: 0x112a7d568

@interface SCFideliusLogger


// -[SCFideliusLogger initWithGraphene:Blizzard:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003f4f2c

// -[SCFideliusLogger setUserBlizzard:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f5014

// -[SCFideliusLogger unsetUserBlizzard]
// Type encoding: v16@0:8
// Implementation: 0x105936de4

// -[SCFideliusLogger logBlizzardEventWithBestEffortUserTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x10042ead4

// -[SCFideliusLogger logDatabaseError:type:code:message:statement:path:]
// Type encoding: v60@0:8@16@24i32@36@44@52
// Implementation: 0x105936df4

// -[SCFideliusLogger logUnsampledEventWithDiskInfo:file:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059370b4

// -[SCFideliusLogger logUnsampledEventWithDiskInfo:file:errorCode:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105937194

// -[SCFideliusLogger logInternalEvent:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059372ac

// -[SCFideliusLogger addToFileEvent:parameters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100435838

// -[SCFideliusLogger filePath]
// Type encoding: @16@0:8
// Implementation: 0x1059372b0

// -[SCFideliusLogger serializedEventsString]
// Type encoding: @16@0:8
// Implementation: 0x105937304

// -[SCFideliusLogger flushAllEvents]
// Type encoding: v16@0:8
// Implementation: 0x10593730c

// -[SCFideliusLogger flushOldEvents]
// Type encoding: v16@0:8
// Implementation: 0x105937314

// -[SCFideliusLogger logEventStartTime:uniqueId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10043741c

// -[SCFideliusLogger getDuration:uniqueId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x10072956c

// -[SCFideliusLogger onInvalidate]
// Type encoding: v16@0:8
// Implementation: 0x105937344

// -[SCFideliusLogger logIdentityInit:success:failureReason:message:source:uniqueId:version:pkid:deviceId:]
// Type encoding: v84@0:8q16B24@28@36@44@52q60q68@76
// Implementation: 0x1006effd8

// -[SCFideliusLogger logInversePhi:dataReady:retried:cleartext:failureReason:message:uniqueId:]
// Type encoding: v56@0:8B16B20B24B28@32@40@48
// Implementation: 0x105937374

// -[SCFideliusLogger logClientSnapSuppressed:source:myBeta:cleartext:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1059377d4

// -[SCFideliusLogger logGraphRead:failureReason:source:maxSize:]
// Type encoding: v44@0:8B16@20@28q36
// Implementation: 0x1004246cc

// -[SCFideliusLogger logSecretGenerated:failureReason:source:failurePk:]
// Type encoding: v44@0:8B16@20@28@36
// Implementation: 0x105937a50

// -[SCFideliusLogger logFriendAdded:currentDeviceCount:previousDeviceCount:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x105937d8c

// -[SCFideliusLogger logFriendBatchProcessed:friendModifiedCount:deviceUpdatedCount:deviceDeletedCount:]
// Type encoding: v48@0:8q16q24q32q40
// Implementation: 0x105937fd8

// -[SCFideliusLogger _logKeyPropagation:withSuccess:source:numKeys:numFriendsWithKeysRequested:numFriendsWithKeysReceived:statusCode:versionsCount:deltaSyncKeysInfo:handshakeReady:]
// Type encoding: v88@0:8q16B24@28q36q44q52q60@68@76B84
// Implementation: 0x105938364

// -[SCFideliusLogger logKeysReceive:]
// Type encoding: v24@0:8@16
// Implementation: 0x105938b00

// -[SCFideliusLogger logUnwrappedKeysCheck:failureReason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105938ca4

// -[SCFideliusLogger logSekCryptoOps:result:failureReason:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x105938d18

// -[SCFideliusLogger logServerBetaMatch:mismatchCount:loadingStatus:keyAvailable:]
// Type encoding: v40@0:8B16q20@28B36
// Implementation: 0x105938db4

// -[SCFideliusLogger logClientRetryInit:retryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059390ac

// -[SCFideliusLogger logSnapSendClear:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593953c

// -[SCFideliusLogger logAckRetry:withBackground:source:withArroyo:withCrossDeviceRetry:failureReason:uniqueId:messageId:conversationId:]
// Type encoding: v76@0:8q16B24@28B36B40@44@52@60@68
// Implementation: 0x105939694

// -[SCFideliusLogger logDeviceRemoved:]
// Type encoding: v24@0:8@16
// Implementation: 0x105939c48

// -[SCFideliusLogger logAppInvalidation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105939d7c

// -[SCFideliusLogger logAppOpen:failureReason:source:withIdentityLoaded:]
// Type encoding: v40@0:8B16@20@28B36
// Implementation: 0x10072efc8

// -[SCFideliusLogger logPostServerInit:source:withNilIwek:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105939eb0

// -[SCFideliusLogger logUserIdentityCreated:numOtherIdentities:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x10593a108

// -[SCFideliusLogger logSekDiskOps:withSuccess:ConversationID:MessageID:]
// Type encoding: v44@0:8q16B24@28@36
// Implementation: 0x10593a37c

// -[SCFideliusLogger logOpsLatency:uniqueId:rewrapCount:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10593a578

// -[SCFideliusLogger logNotReady:action:withUserSession:withIdentity:withDatabaseManager:loadingStatus:]
// Type encoding: v52@0:8q16@24B32B36B40@44
// Implementation: 0x10593a6b0

// -[SCFideliusLogger logGeneralError:failureReason:source:file:freeDiskSpaceMb:totalDiskSpaceMb:freeNodes:totalNodes:]
// Type encoding: v80@0:8q16@24@32@40@48@56@64@72
// Implementation: 0x10593a98c

// -[SCFideliusLogger logGeneralError:failureReason:source:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10593ad58

// -[SCFideliusLogger logDbOperation:result:table:databaseType:errorCode:statement:source:errorMessage:freeDiskSpaceMb:totalDiskSpaceMb:freeNodes:totalNodes:withNewDb:withIdentityMissing:dbSizeByte:totalDbSizeByte:numDbs:]
// Type encoding: v144@0:8q16@24@32@40q48@56@64@72@80@88@96@104B112B116q120q128q136
// Implementation: 0x10060b0b4

// -[SCFideliusLogger logCreateUserDbTablesFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593ad84

// -[SCFideliusLogger logDbCloseError]
// Type encoding: v16@0:8
// Implementation: 0x10593add4

// -[SCFideliusLogger logUserDbOps:result:errorMessage:withNewDb:withIdentityMissing:]
// Type encoding: v48@0:8q16@24@32B40B44
// Implementation: 0x10060af74

// -[SCFideliusLogger logDBSize:totalDbSizeByte:numDbs:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x100610b60

// -[SCFideliusLogger logDeleteDatabase:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593ae24

// -[SCFideliusLogger logIdentityRestored:position:recordCount:source:storedProtocolVersion:hardcodedProtocolVersion:]
// Type encoding: v60@0:8B16q20q28@36q44q52
// Implementation: 0x10593ae80

// -[SCFideliusLogger logArchivedIdentityLoad:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593b1c0

// -[SCFideliusLogger logArchivedIdentityV2Load:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100436b14

// -[SCFideliusLogger logDecryptRecryptPush:failureReason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10593b3b0

// -[SCFideliusLogger logSyncKeys:failureReason:source:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10593b4c8

// -[SCFideliusLogger logGetFullReadyKey:failureReason:loadingStatus:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10593b74c

// -[SCFideliusLogger logBackfillKeychain:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593b8a0

// -[SCFideliusLogger logKeychainOps:key:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593ba2c

// -[SCFideliusLogger logFriendWriteIncompleteWithDiffFriends:]
// Type encoding: v24@0:8q16
// Implementation: 0x10593bbb8

// -[SCFideliusLogger logFriendKeyDivergence:totalFriends:divergentKeysCount:repairArmed:divergentKeysInfo:]
// Type encoding: v52@0:8q16q24q32B40@44
// Implementation: 0x10593bd40

// -[SCFideliusLogger logFriendKeyReconcile:deviceUpdatedCount:source:success:]
// Type encoding: v44@0:8q16q24@32B40
// Implementation: 0x10593c028

// -[SCFideliusLogger logKVStoreRead:failureReason:source:maxSize:]
// Type encoding: v44@0:8B16@20@28q36
// Implementation: 0x1007962ac

// -[SCFideliusLogger logKVStoreWrite:failureReason:source:maxSize:]
// Type encoding: v44@0:8B16@20@28q36
// Implementation: 0x10593c2c0

// -[SCFideliusLogger logKVStoreUpload:failureReason:source:numKeys:]
// Type encoding: v44@0:8B16@20@28q36
// Implementation: 0x10593c580

// -[SCFideliusLogger logKVStoreMerge:failureReason:source:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10593c840

// -[SCFideliusLogger logCloudKVStoreChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593cac4

// -[SCFideliusLogger logDBV2Update:failureReason:source:table:recordCount:recipientUserIds:isBackfillCompleted:]
// Type encoding: v64@0:8B16@20@28@36q44@52B60
// Implementation: 0x10593cc04

// -[SCFideliusLogger logDeviceIDCreate:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10593d070

// -[SCFideliusLogger logDBLatency:table:action:durationInSeconds:]
// Type encoding: v48@0:8Q16@24@32d40
// Implementation: 0x100453e8c

// -[SCFideliusLogger logDBMgrFetchingStatus:durationInSeconds:]
// Type encoding: v32@0:8Q16d24
// Implementation: 0x10593d240

// -[SCFideliusLogger logPollRecrypt:source:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10083800c

// -[SCFideliusLogger logInvalidCurrentKeyWithFailureReason:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593d3d4

// -[SCFideliusLogger logNonFriendKeysRequestedSyncKeys:source:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10593d5c4

// -[SCFideliusLogger logKeysFetchedFromFriendDb:source:eligibileForE2EE:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x10593d6f4

// -[SCFideliusLogger logMissingKeysFetch:friendCount:nonFriendCount:hasEmptyKeys:errorDescription:]
// Type encoding: v48@0:8B16Q20Q28B36@40
// Implementation: 0x10593d8a8

// -[SCFideliusLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10593ddb0

@end
