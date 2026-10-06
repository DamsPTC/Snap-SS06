// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapLocalTimeManager
// Superclass: NSObject
// Address: 0x112af5158

@interface SCMapLocalTimeManager


// -[SCMapLocalTimeManager initWithLocationContextGRPCService:mutedFriendsSet:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10674d5f8

// -[SCMapLocalTimeManager localTimeObservableForFriendId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10674d6dc

// -[SCMapLocalTimeManager updateMutedFriendsSet:]
// Type encoding: v24@0:8@16
// Implementation: 0x10674d7c8

// -[SCMapLocalTimeManager _requestLocalTimeForFriendId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10674da88

// -[SCMapLocalTimeManager _emitEmptyTimeForFriendUnlocked:]
// Type encoding: v24@0:8@16
// Implementation: 0x10674db44

// -[SCMapLocalTimeManager _makeGRPCRequestForFriendId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10674dbdc

// -[SCMapLocalTimeManager _handleLocationContextResponse:error:friendId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10674ddf4

// -[SCMapLocalTimeManager _emitLocalTimeFromResponse:forFriendId:toSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10674df00

// -[SCMapLocalTimeManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10674e16c

@end
