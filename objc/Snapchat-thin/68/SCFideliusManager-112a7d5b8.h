// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusManager
// Superclass: NSObject
// Address: 0x112a7d5b8

@interface SCFideliusManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: keyProviderPerformer; attributes: T@"<SCPerforming>",&,N,V_keyProviderPerformer
// Property: userDatabaseManager; attributes: T@"SCFideliusUserDatabaseManager",&,N,V_userDatabaseManager
// Property: snapchatterServices; attributes: T@"SCSnapchatterServices",&,N,V_snapchatterServices
// Property: grpcFideliusIdentityService; attributes: T@"SCLazy",&,N,V_grpcFideliusIdentityService
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: logger; attributes: T@"SCLazy",&,N,V_logger
// Property: fideliusStatus; attributes: TQ,V_fideliusStatus
// Property: userPreferences; attributes: T@"SCLazy",&,N,V_userPreferences
// Property: appGroupPlistStorage; attributes: T@"SCLazy",&,N,V_appGroupPlistStorage
// Property: services; attributes: T@"SCFideliusServiceCoordinator",&,N,V_services
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFideliusManager getKeysForUser:]
// Type encoding: @24@0:8@16
// Implementation: 0x10593de10

// -[SCFideliusManager getKeyForCurrentUser]
// Type encoding: @16@0:8
// Implementation: 0x10593e514

// -[SCFideliusManager syncKeys:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593e74c

// -[SCFideliusManager _syncKeys:callback:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10593e758

// -[SCFideliusManager getKeysForUserAsync:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10593ef88

// -[SCFideliusManager getKeyForCurrentUserAsync:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593f124

// -[SCFideliusManager ensureCurrentUserKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593f2ac

// -[SCFideliusManager getKeysForUsers:]
// Type encoding: @24@0:8@16
// Implementation: 0x10593f2b0

// -[SCFideliusManager _createParticipantKeyWithDevices:participant:eligible:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10593fb64

// -[SCFideliusManager getKeysForUsersAsync:shouldIncludeNonFriend:callback:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10593fc14

// -[SCFideliusManager _fetchAndProcessMissingKeys:participantsWithFriendKeysPopulated:friendCount:nonFriendCount:callback:]
// Type encoding: v56@0:8@16@24Q32Q40@48
// Implementation: 0x1059400a4

// -[SCFideliusManager _handleFriendKeysResponse:error:participantsWithFriendKeysPopulated:friendCount:nonFriendCount:callback:]
// Type encoding: v64@0:8@16@24@32Q40Q48@56
// Implementation: 0x1059403ac

// -[SCFideliusManager initWithUserSession:snapchatterServices:httpMetadataService:httpRequestModifier:circumstanceEngine:appStartExperimentReader:deviceGraphManager:identityArchiveManager:logger:grapheneRegistry:userUnifiedGRPCServices:fideliusFriendMetadataCoordinator:backgroundTaskWrapper:applicationLifecycleEvents:userPreferences:appGroupPlistStorage:tempIdentityManager:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144
// Implementation: 0x1003f50cc

// -[SCFideliusManager loginWithIwek:hashedBeta:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105940dac

// -[SCFideliusManager registerWithIwek:hashedBeta:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105940ebc

// -[SCFideliusManager _processLoginRegistrationWithIwek:hashedBeta:source:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x105940fcc

// -[SCFideliusManager _processServerInitIwek:hashedOutBeta:tempIdentity:source:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x105941094

// -[SCFideliusManager _onClientInitFailure]
// Type encoding: v16@0:8
// Implementation: 0x10594149c

// -[SCFideliusManager tweakReInitIdentity]
// Type encoding: v16@0:8
// Implementation: 0x10594150c

// -[SCFideliusManager coldStartLoad]
// Type encoding: v16@0:8
// Implementation: 0x1003f9a1c

// -[SCFideliusManager loadingStatus]
// Type encoding: @16@0:8
// Implementation: 0x1059415b4

// -[SCFideliusManager loadingStatusEnum]
// Type encoding: Q16@0:8
// Implementation: 0x1059416ec

// -[SCFideliusManager startedLoading]
// Type encoding: B16@0:8
// Implementation: 0x1059417c4

// -[SCFideliusManager _loadFromDisk:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1003fabcc

// -[SCFideliusManager _onArchiveLoaded:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100436d30

// -[SCFideliusManager _loadFromDiskStage2:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100436e3c

// -[SCFideliusManager _clientInit:source:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1059418a4

// -[SCFideliusManager _meshInitializeDeviceKey:hashedPublicKeys:source:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x1059419d8

// -[SCFideliusManager _incrementKeyVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x105941ce8

// -[SCFideliusManager _commitNewKeyVersionWithSeverIwek:key:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059421ac

// -[SCFideliusManager _saveArchive:]
// Type encoding: B24@0:8@16
// Implementation: 0x105942680

// -[SCFideliusManager _rollbackKeyVersion]
// Type encoding: v16@0:8
// Implementation: 0x105942738

// -[SCFideliusManager _updateKeyVersion]
// Type encoding: v16@0:8
// Implementation: 0x1007371b8

// -[SCFideliusManager _shouldIncrementKeyVersion:targetVersion:]
// Type encoding: B32@0:8@16q24
// Implementation: 0x100798a0c

// -[SCFideliusManager invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10594283c

// -[SCFideliusManager _clearUserInfo]
// Type encoding: v16@0:8
// Implementation: 0x10594294c

// -[SCFideliusManager _backupAndresetCurrentDeviceUser]
// Type encoding: v16@0:8
// Implementation: 0x105942a98

// -[SCFideliusManager _setStatusToTempReady]
// Type encoding: v16@0:8
// Implementation: 0x105942b94

// -[SCFideliusManager _useNewIdentity:source:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105942b9c

// -[SCFideliusManager _loadExistingIdentity:hashedBeta:source:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x100436f0c

// -[SCFideliusManager _generateAndUpload:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105942d3c

// -[SCFideliusManager _loadFromArchive:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105942e20

// -[SCFideliusManager _loadFromArchiveV2:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1003fac54

// -[SCFideliusManager _loadLocalIdentityWithIwek:hashedBeta:source:callback:]
// Type encoding: v48@0:8@16@24Q32@?40
// Implementation: 0x100436fec

// -[SCFideliusManager isReady:]
// Type encoding: B24@0:8@16
// Implementation: 0x10062a3e0

// -[SCFideliusManager _isReady:]
// Type encoding: B24@0:8@16
// Implementation: 0x10061428c

// -[SCFideliusManager isBetaReady:]
// Type encoding: B24@0:8@16
// Implementation: 0x105943080

// -[SCFideliusManager _optionallyLoadArchiveOnDemand:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10594329c

// -[SCFideliusManager _isBetaReady:]
// Type encoding: B24@0:8@16
// Implementation: 0x105943340

// -[SCFideliusManager logNotReady:action:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059433e0

// -[SCFideliusManager _logNotReady:action:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105943514

// -[SCFideliusManager myUserIdentity]
// Type encoding: @16@0:8
// Implementation: 0x105943684

// -[SCFideliusManager _myUserIdentity]
// Type encoding: @16@0:8
// Implementation: 0x1059437f8

// -[SCFideliusManager getCurrentUserKey]
// Type encoding: @16@0:8
// Implementation: 0x105943854

// -[SCFideliusManager userDbManager]
// Type encoding: @16@0:8
// Implementation: 0x10594399c

// -[SCFideliusManager userDatabaseFetcher]
// Type encoding: @16@0:8
// Implementation: 0x105943b3c

// -[SCFideliusManager userSession]
// Type encoding: @16@0:8
// Implementation: 0x100436404

// -[SCFideliusManager onFideliusWarmStart]
// Type encoding: v16@0:8
// Implementation: 0x105943b98

// -[SCFideliusManager fetchUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105943d88

// -[SCFideliusManager _fetchUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x100614200

// -[SCFideliusManager _meshPollRecrypt:]
// Type encoding: v24@0:8@16
// Implementation: 0x100614334

// -[SCFideliusManager _finishLoadingNewIdentityWithSource:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105943e24

// -[SCFideliusManager isIdentityValid:source:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105944478

// -[SCFideliusManager reInitialize]
// Type encoding: v16@0:8
// Implementation: 0x10594472c

// -[SCFideliusManager _reInitialize]
// Type encoding: v16@0:8
// Implementation: 0x1059447d0

// -[SCFideliusManager _reuseAndUpload:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105944834

// -[SCFideliusManager _shouldReuseAndUploadOnWarmStart]
// Type encoding: B16@0:8
// Implementation: 0x105944928

// -[SCFideliusManager getCurrentIdentityFullReadySync]
// Type encoding: @16@0:8
// Implementation: 0x105944960

// -[SCFideliusManager _postReadyNotification:identity:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10060a2c0

// -[SCFideliusManager _writeToWatch:appGroupUserDefaults:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100665310

// -[SCFideliusManager registerCurrentUserKeyWithServer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105944b90

// -[SCFideliusManager resyncBetaIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105945240

// -[SCFideliusManager services]
// Type encoding: @16@0:8
// Implementation: 0x1003f6f54

// -[SCFideliusManager setServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f6c84

// -[SCFideliusManager performer]
// Type encoding: @16@0:8
// Implementation: 0x105945480

// -[SCFideliusManager setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105945488

// -[SCFideliusManager keyProviderPerformer]
// Type encoding: @16@0:8
// Implementation: 0x1059454b8

// -[SCFideliusManager setKeyProviderPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059454c0

// -[SCFideliusManager userDatabaseManager]
// Type encoding: @16@0:8
// Implementation: 0x1059454f0

// -[SCFideliusManager setUserDatabaseManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059454f8

// -[SCFideliusManager snapchatterServices]
// Type encoding: @16@0:8
// Implementation: 0x105945528

// -[SCFideliusManager setSnapchatterServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x105945530

// -[SCFideliusManager grpcFideliusIdentityService]
// Type encoding: @16@0:8
// Implementation: 0x105945560

// -[SCFideliusManager setGrpcFideliusIdentityService:]
// Type encoding: v24@0:8@16
// Implementation: 0x105945568

// -[SCFideliusManager circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x105945598

// -[SCFideliusManager setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059455a0

// -[SCFideliusManager logger]
// Type encoding: @16@0:8
// Implementation: 0x1059455d0

// -[SCFideliusManager setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059455d8

// -[SCFideliusManager fideliusStatus]
// Type encoding: Q16@0:8
// Implementation: 0x1003fabc4

// -[SCFideliusManager setFideliusStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1003f5af0

// -[SCFideliusManager userPreferences]
// Type encoding: @16@0:8
// Implementation: 0x105945608

// -[SCFideliusManager setUserPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f5af8

// -[SCFideliusManager appGroupPlistStorage]
// Type encoding: @16@0:8
// Implementation: 0x105945610

// -[SCFideliusManager setAppGroupPlistStorage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105945618

// -[SCFideliusManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105945648

// +[SCFideliusManager initSourceNames]
// Type encoding: @16@0:8
// Implementation: 0x100414da8

// +[SCFideliusManager nameForType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x100414d2c

// +[SCFideliusManager statusNames]
// Type encoding: @16@0:8
// Implementation: 0x105940ac4

// +[SCFideliusManager nameForStatus:]
// Type encoding: @24@0:8Q16
// Implementation: 0x105940c70

// +[SCFideliusManager isLoadingFinished:]
// Type encoding: B24@0:8Q16
// Implementation: 0x105944468

@end
