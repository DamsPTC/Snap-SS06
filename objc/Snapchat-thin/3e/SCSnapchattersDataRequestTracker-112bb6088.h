// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersDataRequestTracker
// Superclass: NSObject
// Address: 0x112bb6088

@interface SCSnapchattersDataRequestTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isFriendsDataFullySynced; attributes: TB,V_isFriendsDataFullySynced

// -[SCSnapchattersDataRequestTracker init]
// Type encoding: @16@0:8
// Implementation: 0x1003e2cb8

// -[SCSnapchattersDataRequestTracker inProcessingSnapchatterIds]
// Type encoding: @16@0:8
// Implementation: 0x108befea4

// -[SCSnapchattersDataRequestTracker inProcessingSnapchatterRequestForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108beff3c

// -[SCSnapchattersDataRequestTracker didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108beffdc

// -[SCSnapchattersDataRequestTracker didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bf03bc

// -[SCSnapchattersDataRequestTracker didStartSnapchattersFetchDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x100989044

// -[SCSnapchattersDataRequestTracker didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x100c55ba4

// -[SCSnapchattersDataRequestTracker didStartSnapchattersSuggestDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bf07e8

// -[SCSnapchattersDataRequestTracker didEndSnapchattersSuggestDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bf0920

// -[SCSnapchattersDataRequestTracker didStartSnapchattersContactDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bf0aa0

// -[SCSnapchattersDataRequestTracker didEndSnapchattersContactDataRequest:withResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bf0bd8

// -[SCSnapchattersDataRequestTracker didEndSnapchattersFriendInfoRequest:withSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108bf0d44

// -[SCSnapchattersDataRequestTracker addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003e2dfc

// -[SCSnapchattersDataRequestTracker removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bf0e88

// -[SCSnapchattersDataRequestTracker _startProcessingDataRequest:forSnapchatterId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bf0e90

// -[SCSnapchattersDataRequestTracker _endProcessingDataRequest:forSnapchatterId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bf0f34

// -[SCSnapchattersDataRequestTracker _markDataFullySyncedIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c55ce4

// -[SCSnapchattersDataRequestTracker isFriendsDataFullySynced]
// Type encoding: B16@0:8
// Implementation: 0x100bf09fc

// -[SCSnapchattersDataRequestTracker setIsFriendsDataFullySynced:]
// Type encoding: v20@0:8B16
// Implementation: 0x100c55e04

// -[SCSnapchattersDataRequestTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bf1054

// -[SCSnapchattersDataRequestTracker .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1003e2c98

@end
