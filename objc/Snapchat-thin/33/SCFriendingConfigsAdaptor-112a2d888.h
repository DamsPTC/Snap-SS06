// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingConfigsAdaptor
// Superclass: NSObject
// Address: 0x112a2d888

@interface SCFriendingConfigsAdaptor

// Property: addedFriendsTimestamp; attributes: T@"NSNumber",&,N
// Property: contactsResyncRequest; attributes: Tq,R,N
// Property: isContactSyncEnabled; attributes: TB,N
// Property: searchableByPhoneNumber; attributes: TB,N

// -[SCFriendingConfigsAdaptor initWithCircumstanceEngine:featureSettingsService:timeProvider:shouldRemoveUserLevelPermission:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1009e8e8c

// -[SCFriendingConfigsAdaptor isContactSyncEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105381314

// -[SCFriendingConfigsAdaptor setIsContactSyncEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105381364

// -[SCFriendingConfigsAdaptor searchableByPhoneNumber]
// Type encoding: B16@0:8
// Implementation: 0x1053813a0

// -[SCFriendingConfigsAdaptor setSearchableByPhoneNumber:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053813e0

// -[SCFriendingConfigsAdaptor addedFriendsTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1009e8fa0

// -[SCFriendingConfigsAdaptor setAddedFriendsTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10538141c

// -[SCFriendingConfigsAdaptor contactsResyncRequest]
// Type encoding: q16@0:8
// Implementation: 0x105381464

// -[SCFriendingConfigsAdaptor updateContactBookSyncEnabledToServer:completionQueue:completionBlock:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x1053814a4

// -[SCFriendingConfigsAdaptor updateSearchableByPhoneNumberToServer:completionQueue:completionBlock:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x105381618

// -[SCFriendingConfigsAdaptor updateQuickAddPrivacyToServer:completionQueue:completionBlock:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x10538178c

// -[SCFriendingConfigsAdaptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105381904

@end
