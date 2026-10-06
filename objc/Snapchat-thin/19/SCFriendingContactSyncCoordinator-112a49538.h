// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingContactSyncCoordinator
// Superclass: NSObject
// Address: 0x112a49538

@interface SCFriendingContactSyncCoordinator


// -[SCFriendingContactSyncCoordinator initWithDocObjectContext:contactPermissionInfoProvider:configsProvider:friendingPhoneContactBookStoreService:servicePerformer:grpcSender:logger:contactSessionService:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1055a4844

// -[SCFriendingContactSyncCoordinator syncContactsWithTriggerSource:completionQueue:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1055a4a14

// -[SCFriendingContactSyncCoordinator _syncContactsWithTriggerSource:completionQueue:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x1055a4b5c

// -[SCFriendingContactSyncCoordinator _processContactUploadResponse:phoneContacts:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1055a5034

// -[SCFriendingContactSyncCoordinator _logContactsFetchFinishedWithStartTime:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1055a52ec

// -[SCFriendingContactSyncCoordinator _logContactsSyncResponseParsingFinishedWithStartTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055a5390

// -[SCFriendingContactSyncCoordinator _logPhoneContactMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1055a5408

// -[SCFriendingContactSyncCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055a55e0

@end
