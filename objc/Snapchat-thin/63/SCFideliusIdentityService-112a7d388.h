// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusIdentityService
// Superclass: NSObject
// Address: 0x112a7d388

@interface SCFideliusIdentityService


// -[SCFideliusIdentityService initWithDataSource:snapchatterDataFetcher:httpMetadataService:httpRequestModifier:logger:fideliusFriendMetadataCoordinator:circumstanceEngine:userPreferences:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x1003f5f58

// -[SCFideliusIdentityService _beginObservation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f706c

// -[SCFideliusIdentityService beginObservation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1003f6fb8

// -[SCFideliusIdentityService dataInvalidated]
// Type encoding: v16@0:8
// Implementation: 0x105930b30

// -[SCFideliusIdentityService _processFideliusFriendMetadataMap:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105930c1c

// -[SCFideliusIdentityService _reconcileFullStateFideliusFriendMetadataMap:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105931430

// -[SCFideliusIdentityService _batchProcessFriendInfoV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x105931c38

// -[SCFideliusIdentityService _batchProcessFriendInfoV2:reconcileFullState:source:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105931c44

// -[SCFideliusIdentityService _betaToDeviceDictFromDeviceList:]
// Type encoding: @24@0:8@16
// Implementation: 0x105932364

// -[SCFideliusIdentityService _batchHandshake:forUser:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105932470

// -[SCFideliusIdentityService _batchHandshakeV2:forUser:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1059325cc

// -[SCFideliusIdentityService hasKeysForFriendUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059327a4

// -[SCFideliusIdentityService _removeFriendId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105932928

// -[SCFideliusIdentityService setBeta:]
// Type encoding: v24@0:8@16
// Implementation: 0x100614118

// -[SCFideliusIdentityService _myBeta]
// Type encoding: @16@0:8
// Implementation: 0x10593299c

// -[SCFideliusIdentityService _processFriendKeysV2:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059329c4

// -[SCFideliusIdentityService processKeysFromRetryInitV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x100838840

// -[SCFideliusIdentityService processKeysFromSync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105932d9c

// -[SCFideliusIdentityService deleteAllFriends]
// Type encoding: v16@0:8
// Implementation: 0x105932fb0

// -[SCFideliusIdentityService processQueuedData]
// Type encoding: v16@0:8
// Implementation: 0x1006141a8

// -[SCFideliusIdentityService _processQueuedFideliusFriendMetadataUpdateData]
// Type encoding: v16@0:8
// Implementation: 0x100628904

// -[SCFideliusIdentityService _processQueuedKeysFromSync]
// Type encoding: v16@0:8
// Implementation: 0x100628a04

// -[SCFideliusIdentityService _mutateSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593307c

// -[SCFideliusIdentityService _mutateSnapchattersV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593320c

// -[SCFideliusIdentityService _processFetchFriendKeysFromSync:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105933284

// -[SCFideliusIdentityService processFideliusFriendMetadataUpdateData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105933370

// -[SCFideliusIdentityService _processFideliusFriendMetadataUpdateData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10593340c

// -[SCFideliusIdentityService _processFetchFideliusFriendMetadataUpdateData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105933610

// -[SCFideliusIdentityService _processAddFideliusFriendMetadataUpdateData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059338d8

// -[SCFideliusIdentityService _processDeleteFideliusFriendMetadataUpdateData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105933ad0

// -[SCFideliusIdentityService _addUnProcessedFideliusFriendMetadataUpdateData:]
// Type encoding: v24@0:8@16
// Implementation: 0x105933d00

// -[SCFideliusIdentityService _addUnProcessedGrpcFriendsKeys:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105933d08

// -[SCFideliusIdentityService _markProcessFriendMetadataUpdateInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x105933d64

// -[SCFideliusIdentityService syncFriendDbToFideliusDb]
// Type encoding: v16@0:8
// Implementation: 0x10062a6d0

// -[SCFideliusIdentityService logFriendKeyDivergenceShadowSweepIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x10062a8cc

// -[SCFideliusIdentityService _readFriendKeysFromFideliusDb]
// Type encoding: @16@0:8
// Implementation: 0x1059343cc

// -[SCFideliusIdentityService _diffMapFromComparingFriendDb:withFideliusDb:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105934478

// -[SCFideliusIdentityService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105934620

// +[SCFideliusIdentityService _toFideliusFriendKeys:]
// Type encoding: @24@0:8@16
// Implementation: 0x105931828

// +[SCFideliusIdentityService _toSCFideliusFriendMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x105931a4c

@end
