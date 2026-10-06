// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNMessagingFeedManager
// Superclass: NSObject
// Address: 0x112bab9a8

@interface SCNMessagingFeedManager


// -[SCNMessagingFeedManager initWithCpp:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x100606be0

// -[SCNMessagingFeedManager syncFeed:trackingId:syncFeedRequestMetadata:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10060e058

// -[SCNMessagingFeedManager maybeSyncFeedLite:metadata:callback:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x108624a48

// -[SCNMessagingFeedManager queryFeedAutoPaginated:trackingId:]
// Type encoding: v28@0:8i16@20
// Implementation: 0x108624ae0

// -[SCNMessagingFeedManager fetchFeed:numberOfEntries:trackingId:]
// Type encoding: v36@0:8q16i24@28
// Implementation: 0x100606cac

// -[SCNMessagingFeedManager fetchAndSyncFeedWithConversationIds:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108624b80

// -[SCNMessagingFeedManager clearGroupFeedEntry:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108624c24

// -[SCNMessagingFeedManager onFeedExited:feedSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108624cc0

// -[SCNMessagingFeedManager onFeedEntered:disableMessagesExpiration:feedSessionId:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108624d68

// -[SCNMessagingFeedManager signalFeedEntered]
// Type encoding: v16@0:8
// Implementation: 0x108624e24

// -[SCNMessagingFeedManager processUnviewedContentExpiry]
// Type encoding: v16@0:8
// Implementation: 0x108624e7c

// -[SCNMessagingFeedManager getConsumableConversations:]
// Type encoding: v24@0:8@16
// Implementation: 0x108624ed4

// -[SCNMessagingFeedManager retryMultiRecipientCell:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108624f60

// -[SCNMessagingFeedManager cancelSend:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108624ffc

// -[SCNMessagingFeedManager fetchSaveableSentSnapId:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108625098

// -[SCNMessagingFeedManager setPinnedConversationStatus:pinnedStatus:callback:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108625140

// -[SCNMessagingFeedManager fetchFeedEntries:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1086251fc

// -[SCNMessagingFeedManager fetchLastEventUpdateTimestampsForUsers:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1086252a0

// -[SCNMessagingFeedManager fetchFeedEntriesForUsers:callback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108625344

// -[SCNMessagingFeedManager fetchFeedEntriesWithStreaks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1086253e8

// -[SCNMessagingFeedManager fetchFeedEntriesWithExpiredStreaks:minStreakCount:minExpirationTimeMs:callback:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x108625474

// -[SCNMessagingFeedManager fetchUnreadFeedEntryCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1086255dc

// -[SCNMessagingFeedManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100607a64

// -[SCNMessagingFeedManager .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x100606b98

@end
