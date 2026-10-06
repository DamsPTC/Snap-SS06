// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendingUpdateFriendCoordinator
// Superclass: NSObject
// Address: 0x112bb6308

@interface SCFriendingUpdateFriendCoordinator


// -[SCFriendingUpdateFriendCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:currentDateProvider:updateService:grapheneLogger:grapheneRegistry:performerProvider:userTrackedLogger:circumstanceEngine:configsProvider:addFriendsTrayScopeExposer:addFriendsTrayScopeServices:featureSettingsService:preferences:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x108bf9f04

// -[SCFriendingUpdateFriendCoordinator addFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfa278

// -[SCFriendingUpdateFriendCoordinator addFriendWithUpdateRequest:operationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bfaa60

// -[SCFriendingUpdateFriendCoordinator multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfb450

// -[SCFriendingUpdateFriendCoordinator deleteFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfb5b8

// -[SCFriendingUpdateFriendCoordinator ignoreIncomingFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfb720

// -[SCFriendingUpdateFriendCoordinator blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfb888

// -[SCFriendingUpdateFriendCoordinator unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfb9f0

// -[SCFriendingUpdateFriendCoordinator setDisplayNameWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfbb58

// -[SCFriendingUpdateFriendCoordinator setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfbcc0

// -[SCFriendingUpdateFriendCoordinator _addFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfbe28

// -[SCFriendingUpdateFriendCoordinator _processAddFriendWithAFriend:localSnapchatter:addSource:placement:placementInfo:fideliusFriendMetadata:error:completionQueue:completionHandler:startTime:selectedShortcutId:sectionName:]
// Type encoding: v112@0:8@16@24q32q40@48@56@64@72@?80d88@96@104
// Implementation: 0x108bfc200

// -[SCFriendingUpdateFriendCoordinator _processAddFriendWithAFriend:localSnapchatter:addSource:placement:fideliusFriendMetadata:error:completionQueue:completionHandler:startTime:selectedShortcutId:sectionName:]
// Type encoding: v104@0:8@16@24q32q40@48@56@64@?72d80@88@96
// Implementation: 0x108bfc90c

// -[SCFriendingUpdateFriendCoordinator _multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfc948

// -[SCFriendingUpdateFriendCoordinator _processMultiAddWithFriends:addFriendDataRequests:placementString:fideliusFriendMetadatas:isRegistration:startTime:error:completionQueue:completionHandler:]
// Type encoding: v84@0:8@16@24@32@40B48d52@60@68@?76
// Implementation: 0x108bfcfd8

// -[SCFriendingUpdateFriendCoordinator _deleteFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfd764

// -[SCFriendingUpdateFriendCoordinator _processDeleteWithAFriend:deleteSource:placementInfo:startTime:error:completionQueue:completionHandler:]
// Type encoding: v72@0:8@16q24@32d40@48@56@?64
// Implementation: 0x108bfda60

// -[SCFriendingUpdateFriendCoordinator _ignoreIncomingFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfdf2c

// -[SCFriendingUpdateFriendCoordinator _processIgnoreWithIncomingFriend:startTime:error:completionQueue:completionHandler:shouldLogSuggestionFetchRequestId:]
// Type encoding: v60@0:8@16d24@32@40@?48B56
// Implementation: 0x108bfe1a4

// -[SCFriendingUpdateFriendCoordinator _blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfe54c

// -[SCFriendingUpdateFriendCoordinator _processBlockWithPersistedSnapchatter:startTime:error:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16d24@32@40@?48
// Implementation: 0x108bfe7e0

// -[SCFriendingUpdateFriendCoordinator _unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bfebbc

// -[SCFriendingUpdateFriendCoordinator _processUnblockWithPersistedSnapchatter:startTime:error:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16d24@32@40@?48
// Implementation: 0x108bfee08

// -[SCFriendingUpdateFriendCoordinator _setDisplayNameWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bff1a4

// -[SCFriendingUpdateFriendCoordinator _processSetDisplayNameWithSnapchatter:displayName:error:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108bff428

// -[SCFriendingUpdateFriendCoordinator _setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bff620

// -[SCFriendingUpdateFriendCoordinator _processSetPostSendEmojiWithSnapchatter:postViewEmoji:error:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108bff89c

// -[SCFriendingUpdateFriendCoordinator _setAddedFriendsTimestampFromSnapchatterFromServer:addSource:placement:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x108bffa94

// -[SCFriendingUpdateFriendCoordinator _isDuplicateBadingFixEnabled]
// Type encoding: B16@0:8
// Implementation: 0x108bffc30

// -[SCFriendingUpdateFriendCoordinator _logAddFriendAfterUpdatingDB:errorMessage:addSource:toFriendUserId:placementString:placementInfo:networkLatencyInMs:uiLatencyInMs:selectedShortcutId:sectionName:shouldLogSuggestionFetchRequestId:]
// Type encoding: v96@0:8B16@20@28@36@44@52d60d68@76@84B92
// Implementation: 0x108bffc48

// -[SCFriendingUpdateFriendCoordinator _logAddAllFriends:errorMessage:friends:userIdToAddSourceMap:placementString:networkLatencyInMs:uiLatencyInMs:]
// Type encoding: v68@0:8B16@20@28@36@44d52d60
// Implementation: 0x108bffcbc

// -[SCFriendingUpdateFriendCoordinator _logAddAllFriendsAfterUpdatingDB:errorMessage:friends:userIdToAddSourceMap:placementString:networkLatencyInMs:uiLatencyInMs:]
// Type encoding: v68@0:8B16@20@28@36@44d52d60
// Implementation: 0x108bffeb4

// -[SCFriendingUpdateFriendCoordinator _logAddAllFriendsSuccess:error:startTime:]
// Type encoding: v36@0:8B16@20d28
// Implementation: 0x108bffeec

// -[SCFriendingUpdateFriendCoordinator _needToShowAddFriendsTray:]
// Type encoding: B24@0:8q16
// Implementation: 0x108bfff54

// -[SCFriendingUpdateFriendCoordinator _currentTrayImpressionCount:]
// Type encoding: q24@0:8q16
// Implementation: 0x108c00010

// -[SCFriendingUpdateFriendCoordinator _maxTrayImpressionCount:]
// Type encoding: q24@0:8q16
// Implementation: 0x108c00068

// -[SCFriendingUpdateFriendCoordinator _isAddFriendSourceAccept:]
// Type encoding: B24@0:8q16
// Implementation: 0x108c000a0

// -[SCFriendingUpdateFriendCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c000b4

@end
