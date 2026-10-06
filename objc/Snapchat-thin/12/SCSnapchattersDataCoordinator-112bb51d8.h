// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersDataCoordinator
// Superclass: NSObject
// Address: 0x112bb51d8

@interface SCSnapchattersDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: snapchattersLoggingDataObservable; attributes: T@"SCObservable",?,R,&,N
// Property: fetchSuggestionLoggingDataObservable; attributes: T@"SCObservable",?,R,&,N
// Property: snapchatterFriendSyncStatusObservable; attributes: T@"SCObservable",R,&,N

// -[SCSnapchattersDataCoordinator initWithDocObjectContext:preferences:fetchService:suggestService:contactService:currentDateProvider:dataRequestTracker:userInfoRepository:permissionInfoProvider:configsProvider:suggestedSnapchatterFetcher:grapheneLogger:hiddenSuggestionCoordinator:userIdToSnapchatterFetcher:phoneNumberProvider:appStartExperimentReader:circumstanceEngine:updateFriendMutator:performerProvider:grapheneRegistry:contactTempSnapchatterMutator:friendsFetchBlizzardLogger:pinnedUserIds:friendingPhoneContactBookStoreService:findFriendsEligibilityChecker:incomingFriendsSyncer:blockedUsersReconciler:]
// Type encoding: @232@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224
// Implementation: 0x100975940

// -[SCSnapchattersDataCoordinator snapchattersLoggingDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10097cb74

// -[SCSnapchattersDataCoordinator fetchSuggestionLoggingDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10097cb44

// -[SCSnapchattersDataCoordinator snapchatterFriendSyncStatusObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bb0e14

// -[SCSnapchattersDataCoordinator attachAtlasFriendsDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100976e34

// -[SCSnapchattersDataCoordinator handleSnapchatterFetchDataRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc67dc

// -[SCSnapchattersDataCoordinator handleSnapchatterFetchDataRequestAndSyncIncoming:incomingSyncScenario:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x10097b2b4

// -[SCSnapchattersDataCoordinator handleSnapchatterUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bc6eec

// -[SCSnapchattersDataCoordinator handleSnapchatterSuggestDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bc77d8

// -[SCSnapchattersDataCoordinator handleSnapchatterContactDataRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc7ee4

// -[SCSnapchattersDataCoordinator addFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8450

// -[SCSnapchattersDataCoordinator addFriendWithUpdateRequest:operationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bc84f0

// -[SCSnapchattersDataCoordinator multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8578

// -[SCSnapchattersDataCoordinator deleteFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8654

// -[SCSnapchattersDataCoordinator blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8730

// -[SCSnapchattersDataCoordinator unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc87d0

// -[SCSnapchattersDataCoordinator setDisplayNameWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc88ac

// -[SCSnapchattersDataCoordinator setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8988

// -[SCSnapchattersDataCoordinator _addFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8a64

// -[SCSnapchattersDataCoordinator _addFriendWithUpdateRequest:operationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108bc8cd8

// -[SCSnapchattersDataCoordinator _multiAddFriendsWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc8f08

// -[SCSnapchattersDataCoordinator _deleteFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc90dc

// -[SCSnapchattersDataCoordinator _blockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9294

// -[SCSnapchattersDataCoordinator _unblockSnapchatterWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc944c

// -[SCSnapchattersDataCoordinator _setDisplayNameWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9604

// -[SCSnapchattersDataCoordinator _setPostSendEmojiWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9860

// -[SCSnapchattersDataCoordinator _ignoreFriendWithUpdateRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9a18

// -[SCSnapchattersDataCoordinator updateFriendRequestViewed:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9bd0

// -[SCSnapchattersDataCoordinator promoteAddFriendsSuggestionsOfUserIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9d38

// -[SCSnapchattersDataCoordinator updateRecentFriendsByUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bc9ea0

// -[SCSnapchattersDataCoordinator prefetchSuggestedSnapchattersWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bca008

// -[SCSnapchattersDataCoordinator setSnapStreakForUsername:snapstreakCount:expirationServerTimestamp:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x108bca0a4

// -[SCSnapchattersDataCoordinator setSnapStreakForUserIdsToStreakMetadata:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bca248

// -[SCSnapchattersDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bca3b0

// -[SCSnapchattersDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bca500

// -[SCSnapchattersDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bca508

// -[SCSnapchattersDataCoordinator dataCoordinatorDidUpdateWithIdentifier:dataRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bca510

// -[SCSnapchattersDataCoordinator cleanAllDataWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bca514

// -[SCSnapchattersDataCoordinator handleSoJuFriendsResponse:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bca648

// -[SCSnapchattersDataCoordinator _fetchSuggestionWithSuggestRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bca650

// -[SCSnapchattersDataCoordinator _updateFriendRequestViewed:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcaa0c

// -[SCSnapchattersDataCoordinator _directPromoteAddFriendsTopSuggestionsUserIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcabbc

// -[SCSnapchattersDataCoordinator _updateRecentFriendsByUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcaf90

// -[SCSnapchattersDataCoordinator _setSnapStreakForUsername:snapstreakCount:expirationServerTimestamp:completionQueue:completionHandler:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x108bcb248

// -[SCSnapchattersDataCoordinator _setSnapStreakForUserIdsToStreakMetadata:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcb740

// -[SCSnapchattersDataCoordinator _cleanAllDataWithCompletionQueue:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bcbf94

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersFetchDataRequest:withSuccess:andError:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x100c55740

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersUpdateDataRequest:withSuccess:andError:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bcc02c

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersUpdateDataRequest:withSuccess:error:completionQueue:completionHandler:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x108bcc038

// -[SCSnapchattersDataCoordinator _announceDidStartSnapchattersSuggestDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bcc204

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersSuggestDataRequest:withSuccess:andError:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bcc278

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersContactDataRequest:withSuccess:andError:contactBookSize:completionQueue:completionHandler:]
// Type encoding: v60@0:8@16B24@28Q36@44@?52
// Implementation: 0x108bcc39c

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersFriendInfoRequestWithSuccess:snapchatter:snapstreakCount:expirationServerTimestamp:]
// Type encoding: v44@0:8B16@20q28@36
// Implementation: 0x108bcc5c4

// -[SCSnapchattersDataCoordinator _announceDidEndSnapchattersFriendInfoRequestWithSuccess:snapchatterToStreakMetadata:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x108bcc6b4

// -[SCSnapchattersDataCoordinator _logFetchContactsLatencyMs:includingContactUpload:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x108bcc734

// -[SCSnapchattersDataCoordinator fetchServerContactsWithCallbackQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108bcc784

// -[SCSnapchattersDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bcc78c

// +[SCSnapchattersDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x100c55e0c

@end
