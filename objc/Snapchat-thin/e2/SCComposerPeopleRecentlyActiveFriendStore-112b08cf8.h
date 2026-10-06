// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleRecentlyActiveFriendStore
// Superclass: NSObject
// Address: 0x112b08cf8

@interface SCComposerPeopleRecentlyActiveFriendStore

// Property: incomingFriendsWithActiveStatusObservable; attributes: T@"SCBridgeObservable",&,N,V_incomingFriendsWithActiveStatusObservable
// Property: suggestedFriendsWithActiveStatusObservable; attributes: T@"SCBridgeObservable",&,N,V_suggestedFriendsWithActiveStatusObservable
// Property: recentlyActiveTextObservable; attributes: T@"SCBridgeObservable",&,N,V_recentlyActiveTextObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleRecentlyActiveFriendStore initWithIncomingFriendsWithActiveStatusObservable:suggestedFriendsWithActiveStatusObservable:recentlyActiveText:performerProvider:featureSettingsService:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1069990c8

// -[SCComposerPeopleRecentlyActiveFriendStore _setUpObservablesForComposer]
// Type encoding: v16@0:8
// Implementation: 0x1069991ec

// -[SCComposerPeopleRecentlyActiveFriendStore _createPerformerFromPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069992e0

// -[SCComposerPeopleRecentlyActiveFriendStore _observeIncomingFriendsWithActiveStatus:suggestedFriendsWithActiveStatus:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10699933c

// -[SCComposerPeopleRecentlyActiveFriendStore _didReceiveRecentlyActiveRecordsOfIncomingFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069995a0

// -[SCComposerPeopleRecentlyActiveFriendStore _didReceiveRecentlyActiveRecordsOfSuggestedFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x106999690

// -[SCComposerPeopleRecentlyActiveFriendStore incomingFriendsWithActiveStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x106999860

// -[SCComposerPeopleRecentlyActiveFriendStore setIncomingFriendsWithActiveStatusObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106999868

// -[SCComposerPeopleRecentlyActiveFriendStore suggestedFriendsWithActiveStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x106999898

// -[SCComposerPeopleRecentlyActiveFriendStore setSuggestedFriendsWithActiveStatusObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069998a0

// -[SCComposerPeopleRecentlyActiveFriendStore recentlyActiveTextObservable]
// Type encoding: @16@0:8
// Implementation: 0x1069998d0

// -[SCComposerPeopleRecentlyActiveFriendStore setRecentlyActiveTextObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069998d8

// -[SCComposerPeopleRecentlyActiveFriendStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106999908

@end
