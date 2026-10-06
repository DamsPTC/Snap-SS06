// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFideliusUtils
// Superclass: NSObject
// Address: 0x112a7d9c8

@interface SCFideliusUtils


// +[SCFideliusUtils keyDerivationForKey:salt:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105949e8c

// +[SCFideliusUtils addFideliusHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x105949ea0

// +[SCFideliusUtils addFideliusHeaderBytes:]
// Type encoding: @24@0:8@16
// Implementation: 0x105949f44

// +[SCFideliusUtils removeFideliusHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x105949fc0

// +[SCFideliusUtils removeFideliusHeaderBytes:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594a04c

// +[SCFideliusUtils createTempIdentity]
// Type encoding: @16@0:8
// Implementation: 0x10594a0b0

// +[SCFideliusUtils createInitPackage:hashedBetas:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10594a294

// +[SCFideliusUtils appendUtf8String:toData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10594a44c

// +[SCFideliusUtils safeJSONSerialization:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594a4c0

// +[SCFideliusUtils handshakeForFriend:device:myBeta:logger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10594a568

// +[SCFideliusUtils handshakeForFriend:deviceInfo:myBeta:logger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10594a8d4

// +[SCFideliusUtils dataToDeriveKeyForOtherUserId:ourUserId:mystique:version:outgoing:type:]
// Type encoding: @60@0:8@16@24@32@40B48@52
// Implementation: 0x10594ac4c

// +[SCFideliusUtils initWithBase64EncodedString:source:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100437800

// +[SCFideliusUtils userDatabaseFolderURLWithVersion:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10043991c

// +[SCFideliusUtils deviceDatabaseFolderURLWithVersion:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10594ad58

// +[SCFideliusUtils applicationSupportDirectory]
// Type encoding: @16@0:8
// Implementation: 0x1004399a8

// +[SCFideliusUtils randomEventSampling:]
// Type encoding: B24@0:8d16
// Implementation: 0x100435dcc

// +[SCFideliusUtils SCCoreUUIDToE2eeUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594ade4

// +[SCFideliusUtils toSOJUSecurityFideliusFriendInfoDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594ae88

// +[SCFideliusUtils toKeyProviderSyncKeysResult:fideliusManager:logger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10594af40

// +[SCFideliusUtils toSOJUSecurityFideliusUpdatesResponse:senderUserId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10594b338

// +[SCFideliusUtils toSOJUSecurityFidUpdatePackage:senderUserId:friendUserId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10594b594

// +[SCFideliusUtils friendKeysToFideliusFriendInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594b748

// +[SCFideliusUtils messageIdentifierToArroyoMessageIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594b8b4

// +[SCFideliusUtils assistedRetryInfosToArroyoRetryInfos:senderUserId:friendUserId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10594b9d8

// +[SCFideliusUtils makeMeshInitializeDeviceKeyRequest:hashedPublicKeys:deviceID:grpcFideliusIdentityService:circumstanceEngine:successCallback:failureCallback:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10594bd90

// +[SCFideliusUtils friendDeviceInfoToMetadataMap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594bf44

// +[SCFideliusUtils diffTargetFideliusFriendMetadataMap:currentFriendMetadataMap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10594c290

// +[SCFideliusUtils extractKeysFromDevices:]
// Type encoding: @24@0:8@16
// Implementation: 0x10594c438

// +[SCFideliusUtils friendKeysToParticipantKey:userIdentity:logger:source:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10594c678

@end
