// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersContactService
// Superclass: NSObject
// Address: 0x112bb5bd8

@interface SCSnapchattersContactService


// -[SCSnapchattersContactService initWithSessionRequestManager:snapchattersSnapTokenProvider:findFriendsEligibilityChecker:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1009757e4

// -[SCSnapchattersContactService fetchContactSnapchattersWithAddressBook:contactMetaDataMap:phoneContacts:shouldIncludeEarlyUploadHeader:removeFromSuggestions:callbackQueue:completionBlock:]
// Type encoding: v64@0:8@16@24@32B40B44@48@?56
// Implementation: 0x108be9e64

// -[SCSnapchattersContactService fetchServerContactsWithCallbackQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bea5dc

// -[SCSnapchattersContactService deleteAllContactsWithCallbackQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108beab58

// -[SCSnapchattersContactService _submitRequestWithSnapToken:error:baseUrlString:endpoint:parameters:headers:completionQueue:completionBlock:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@?72
// Implementation: 0x108beaed0

// -[SCSnapchattersContactService _submitRequestWithSnapToken:error:baseUrlString:endpoint:parameters:headers:authenticated:completionQueue:completionBlock:]
// Type encoding: v84@0:8@16@24@32@40@48@56B64@68@?76
// Implementation: 0x108beaefc

// -[SCSnapchattersContactService _getSOJUContactMetaDataJsonFrom:]
// Type encoding: @24@0:8@16
// Implementation: 0x108beb250

// -[SCSnapchattersContactService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108beb52c

@end
