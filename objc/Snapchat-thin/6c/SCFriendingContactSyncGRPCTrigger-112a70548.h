// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingContactSyncGRPCTrigger
// Superclass: NSObject
// Address: 0x112a70548

@interface SCFriendingContactSyncGRPCTrigger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendingContactSyncGRPCTrigger initWithFeatureSettingsService:userPreferences:performer:contactPermissionInfoProvider:configsProvider:contactSyncer:friendingPhoneContactBookStoreService:grapheneRegistry:circumstanceEngine:shouldRemoveUserLevelPermission:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64@72@80B88
// Implementation: 0x10097d09c

// -[SCFriendingContactSyncGRPCTrigger syncContactIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10582c7d0

// -[SCFriendingContactSyncGRPCTrigger _syncContactIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10582c8a4

// -[SCFriendingContactSyncGRPCTrigger _syncContact]
// Type encoding: v16@0:8
// Implementation: 0x10582c948

// -[SCFriendingContactSyncGRPCTrigger _resetClientContactSyncVersionAndTTL]
// Type encoding: v16@0:8
// Implementation: 0x10582ca70

// -[SCFriendingContactSyncGRPCTrigger _removeClientContactSyncTTL]
// Type encoding: v16@0:8
// Implementation: 0x10582cb58

// -[SCFriendingContactSyncGRPCTrigger _checkContactSyncPermissions]
// Type encoding: B16@0:8
// Implementation: 0x10582cb98

// -[SCFriendingContactSyncGRPCTrigger _clientContactBookPermissionChangedSinceLastSession]
// Type encoding: B16@0:8
// Implementation: 0x10582cc28

// -[SCFriendingContactSyncGRPCTrigger _clientContactBookSyncVersionExpired]
// Type encoding: B16@0:8
// Implementation: 0x10582cc68

// -[SCFriendingContactSyncGRPCTrigger _clientContactSyncTTLExpired]
// Type encoding: B16@0:8
// Implementation: 0x10582ccfc

// -[SCFriendingContactSyncGRPCTrigger _clientContactBookHasUpdated]
// Type encoding: B16@0:8
// Implementation: 0x10582cdc4

// -[SCFriendingContactSyncGRPCTrigger _observeFeatureSetting]
// Type encoding: v16@0:8
// Implementation: 0x10097d3c0

// -[SCFriendingContactSyncGRPCTrigger _featureSettingsDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582d010

// -[SCFriendingContactSyncGRPCTrigger _logContactSyncTriggerMetric:clientTTLExpired:permissionChangedSinceLastSession:contactBookChanged:]
// Type encoding: v32@0:8B16B20B24B28
// Implementation: 0x10582d0bc

// -[SCFriendingContactSyncGRPCTrigger visitAddContactEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582d244

// -[SCFriendingContactSyncGRPCTrigger visitDeleteContactEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582d250

// -[SCFriendingContactSyncGRPCTrigger visitDropEverythingEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582d25c

// -[SCFriendingContactSyncGRPCTrigger visitUpdateContactEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10582d260

// -[SCFriendingContactSyncGRPCTrigger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10582d264

@end
