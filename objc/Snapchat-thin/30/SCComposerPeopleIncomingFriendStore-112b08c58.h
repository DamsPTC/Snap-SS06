// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleIncomingFriendStore
// Superclass: NSObject
// Address: 0x112b08c58

@interface SCComposerPeopleIncomingFriendStore

// Property: incomingFriendsObservable; attributes: T@"SCBridgeObservable",?,&,N,V_incomingFriendsObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleIncomingFriendStore initWithSnapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:activeStoryFetcher:performerProvider:circumstanceEngine:shouldRankIncomingFriends:userPreferences:viewedIncomingFriendsTracker:snapchattersObservableRepository:reminderPinReader:]
// Type encoding: @100@0:8@16@24@32@40@48@56B64@68@76@84@92
// Implementation: 0x106995518

// -[SCComposerPeopleIncomingFriendStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1069957dc

// -[SCComposerPeopleIncomingFriendStore _fetchIncomingFriendsAndPublishInPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1069957e8

// -[SCComposerPeopleIncomingFriendStore _fetchIncomingFriendsAndPublish]
// Type encoding: v16@0:8
// Implementation: 0x1069958dc

// -[SCComposerPeopleIncomingFriendStore _incomingFriendsFetchFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106995be4

// -[SCComposerPeopleIncomingFriendStore _reorderIncomingFriendsIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x106995c28

// -[SCComposerPeopleIncomingFriendStore _pinIncomingFriendIfNeeded:]
// Type encoding: @24@0:8@16
// Implementation: 0x106995f04

// -[SCComposerPeopleIncomingFriendStore _pinAndPublishIncomingFriends:applySinglePin:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106996108

// -[SCComposerPeopleIncomingFriendStore _highlightedUserIdsWithReminderPins:applySinglePin:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106996334

// -[SCComposerPeopleIncomingFriendStore _pinReminderUsersIfNeeded:applySinglePin:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x1069963ec

// -[SCComposerPeopleIncomingFriendStore _applyReminderPins:eligibleUserIds:applySinglePin:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x106996774

// -[SCComposerPeopleIncomingFriendStore _publishIncomingFriendsWithSnapchatters:pinnedReminderUserIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106996c5c

// -[SCComposerPeopleIncomingFriendStore _observeActiveStoryInfo]
// Type encoding: v16@0:8
// Implementation: 0x1069970b8

// -[SCComposerPeopleIncomingFriendStore _observeIncomingSnapchatters]
// Type encoding: v16@0:8
// Implementation: 0x106997200

// -[SCComposerPeopleIncomingFriendStore _didReceiveIncomingSnapchattersFromObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069973e0

// -[SCComposerPeopleIncomingFriendStore _didReceiveActiveStoryInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069973e4

// -[SCComposerPeopleIncomingFriendStore hideIncomingFriendWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106997440

// -[SCComposerPeopleIncomingFriendStore _hideIncomingFriend:]
// Type encoding: v24@0:8@16
// Implementation: 0x106997570

// -[SCComposerPeopleIncomingFriendStore viewedIncomingFriendsWithRequests:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069975d8

// -[SCComposerPeopleIncomingFriendStore _viewedIncomingFriendsWithRequestsInPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106997704

// -[SCComposerPeopleIncomingFriendStore _updateFriendRequestViewedWithSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x106997a5c

// -[SCComposerPeopleIncomingFriendStore incomingFriendWithUserId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106997ab4

// -[SCComposerPeopleIncomingFriendStore _incomingFriendForUserId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106997c08

// -[SCComposerPeopleIncomingFriendStore _subtextWithDebuggingInfo:incomingFriend:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106997d2c

// -[SCComposerPeopleIncomingFriendStore _createLazyPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106997d98

// -[SCComposerPeopleIncomingFriendStore didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106997e8c

// -[SCComposerPeopleIncomingFriendStore didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106997e90

// -[SCComposerPeopleIncomingFriendStore getIncomingFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106997e94

// -[SCComposerPeopleIncomingFriendStore onIncomingFriendsUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106997e98

// -[SCComposerPeopleIncomingFriendStore incomingFriendsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106997ea8

// -[SCComposerPeopleIncomingFriendStore setIncomingFriendsObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106997eb0

// -[SCComposerPeopleIncomingFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106997ee0

@end
