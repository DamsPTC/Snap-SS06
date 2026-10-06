// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersContactRequestCoordinator
// Superclass: NSObject
// Address: 0x112bb5188

@interface SCSnapchattersContactRequestCoordinator


// -[SCSnapchattersContactRequestCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:contactService:currentDateProvider:permissionInfoProvider:configsProvider:grapheneLogger:phoneNumberProvider:userPreferences:circumstanceEngine:friendingContactsGrapheneLogger:friendingPhoneContactBookStoreService:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x100976a24

// -[SCSnapchattersContactRequestCoordinator fetchContactsWithContactRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc53fc

// -[SCSnapchattersContactRequestCoordinator deleteAllContactsWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bc5564

// -[SCSnapchattersContactRequestCoordinator _fetchContactsWithContactRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc5698

// -[SCSnapchattersContactRequestCoordinator _fetchContactsWithContactRequest:addressBook:phoneContacts:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108bc5860

// -[SCSnapchattersContactRequestCoordinator _processFetchContactsWithFindFriendsResponse:addressBook:contactBookSize:error:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24Q32@40@48@?56
// Implementation: 0x108bc5b5c

// -[SCSnapchattersContactRequestCoordinator _deleteAllContactsWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bc5f70

// -[SCSnapchattersContactRequestCoordinator _processDeleteAllContactsWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bc60e4

// -[SCSnapchattersContactRequestCoordinator _logFetchContactsResponseProcessingLatencyMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x108bc61e4

// -[SCSnapchattersContactRequestCoordinator _logFetchContactsNetworkLatencyMs:includingContactUpload:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x108bc6228

// -[SCSnapchattersContactRequestCoordinator _logFetchConctacsInRegWithContactBookSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x108bc6278

// -[SCSnapchattersContactRequestCoordinator _logFetchContactsInRegWithFindFriendResponse:error:isContactBookIncluded:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x108bc63c8

// -[SCSnapchattersContactRequestCoordinator fetchServerContactsWithCallbackQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bc65d8

// -[SCSnapchattersContactRequestCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bc65e0

@end
