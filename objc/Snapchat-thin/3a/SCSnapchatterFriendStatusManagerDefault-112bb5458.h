// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchatterFriendStatusManagerDefault
// Superclass: NSObject
// Address: 0x112bb5458

@interface SCSnapchatterFriendStatusManagerDefault

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchatterFriendStatusManagerDefault initWithSnapchattersDataFetcher:snapchattersDataTracker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100498910

// -[SCSnapchatterFriendStatusManagerDefault addSnapchattersToTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd56c0

// -[SCSnapchatterFriendStatusManagerDefault removeAllTrackedSnapchatters]
// Type encoding: v16@0:8
// Implementation: 0x108bd5a74

// -[SCSnapchatterFriendStatusManagerDefault statusForSnapchatterId:]
// Type encoding: q24@0:8@16
// Implementation: 0x108bd5adc

// -[SCSnapchatterFriendStatusManagerDefault statusForSnapchatterUsername:]
// Type encoding: q24@0:8@16
// Implementation: 0x108bd5c44

// -[SCSnapchatterFriendStatusManagerDefault snapchatterIdToFriendStatusOrDefault:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bd5d18

// -[SCSnapchatterFriendStatusManagerDefault snapchatterIdToFriendStatus]
// Type encoding: @16@0:8
// Implementation: 0x108bd5ea8

// -[SCSnapchatterFriendStatusManagerDefault addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x100498e64

// -[SCSnapchatterFriendStatusManagerDefault removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd5ebc

// -[SCSnapchatterFriendStatusManagerDefault didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd5ec4

// -[SCSnapchatterFriendStatusManagerDefault didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bd6190

// -[SCSnapchatterFriendStatusManagerDefault _addFriendStatusBasedOnSnapchatter:]
// Type encoding: q24@0:8@16
// Implementation: 0x108bd64b4

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusBasedOnAction:forSnapchatterId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108bd6544

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAddedStateAfterDelayForSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd6720

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAddedStateIfNecessaryForSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd6814

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAcceptedStateAfterDelayForSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd688c

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostAcceptedStateIfNecessaryForSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd6980

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToPostUnblockedStateAfterDelayForSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd69f8

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatusToNonBlockedStateIfNecessaryForSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd6aec

// -[SCSnapchatterFriendStatusManagerDefault _updateAddFriendStatus:forSnapchatterId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x108bd6bf8

// -[SCSnapchatterFriendStatusManagerDefault _dispatchAddFriendStatusUpdate]
// Type encoding: v16@0:8
// Implementation: 0x108bd6d7c

// -[SCSnapchatterFriendStatusManagerDefault _isAcceptingFriendRequestRelatedStatus:]
// Type encoding: B24@0:8q16
// Implementation: 0x108bd6e10

// -[SCSnapchatterFriendStatusManagerDefault .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bd6e28

// +[SCSnapchatterFriendStatusManagerDefault announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x108bd5eb0

@end
