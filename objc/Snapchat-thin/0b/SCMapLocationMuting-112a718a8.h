// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLocationMuting
// Superclass: NSObject
// Address: 0x112a718a8

@interface SCMapLocationMuting

// Property: mutedFriendsIdsObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapLocationMuting initWithValisService:userPreferences:userContext:asyncQueue:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1058379d0

// -[SCMapLocationMuting _warmupMutedSet]
// Type encoding: v16@0:8
// Implementation: 0x105837b0c

// -[SCMapLocationMuting mutedFriendsIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x105837bbc

// -[SCMapLocationMuting muteFriendWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105837be4

// -[SCMapLocationMuting unmuteFriendWithId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105837db8

// -[SCMapLocationMuting _getMutedFriends]
// Type encoding: v16@0:8
// Implementation: 0x105837f8c

// -[SCMapLocationMuting _updateMutedFriendsWithIDs:version:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058380bc

// -[SCMapLocationMuting _removeMutedFriendsWithIDs:version:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058381e0

// -[SCMapLocationMuting _addMutedFriendsWithIDs:version:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1058382f8

// -[SCMapLocationMuting _updateCachedObjectWithSet:requestVersion:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105838410

// -[SCMapLocationMuting _getCachedObject]
// Type encoding: @16@0:8
// Implementation: 0x1058384e0

// -[SCMapLocationMuting .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105838530

@end
