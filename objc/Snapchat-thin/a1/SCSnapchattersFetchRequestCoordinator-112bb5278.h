// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersFetchRequestCoordinator
// Superclass: NSObject
// Address: 0x112bb5278

@interface SCSnapchattersFetchRequestCoordinator

// Property: atlasFriendsDataProvider; attributes: T@"SCLazy",&,V_atlasFriendsDataProvider

// -[SCSnapchattersFetchRequestCoordinator initWithDocObjectContext:docObjectPerformer:servicePerformer:currentDateProvider:fetchService:userInfoRepository:grapheneLogger:appStartExperimentReader:circumstanceEngine:contactTempSnapchatterMutator:friendsFetchBlizzardLogger:incomingFriendsSyncer:friendSyncGrapheneLogger:blockedUsersReconciler:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x100976050

// -[SCSnapchattersFetchRequestCoordinator attachAtlasFriendsDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100976e3c

// -[SCSnapchattersFetchRequestCoordinator getAtlasBlockedUsersWithCursor:success:onError:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x108bcca08

// -[SCSnapchattersFetchRequestCoordinator _dispatchBlockedUsersReconcile:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bccc2c

// -[SCSnapchattersFetchRequestCoordinator _scheduleZombieHealingTask]
// Type encoding: v16@0:8
// Implementation: 0x1009763d0

// -[SCSnapchattersFetchRequestCoordinator _performZombieHealingIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108bccdfc

// -[SCSnapchattersFetchRequestCoordinator fetchFriendsWithFetchRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100989f78

// -[SCSnapchattersFetchRequestCoordinator _dispatchFriendFetchRequest:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1009e824c

// -[SCSnapchattersFetchRequestCoordinator _startFetchForGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bcd0d0

// -[SCSnapchattersFetchRequestCoordinator _completeInFlightGroup:success:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108bcd2a4

// -[SCSnapchattersFetchRequestCoordinator _logFetchDedupOutcome:trigger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bcd3b0

// -[SCSnapchattersFetchRequestCoordinator fetchFriendsAndSyncIncomingWithFetchRequest:incomingSyncScenario:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x100989cb8

// -[SCSnapchattersFetchRequestCoordinator handleSoJuFriendsResponse:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcd834

// -[SCSnapchattersFetchRequestCoordinator handleSoJuFriendsResponseDictionary:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcd9e4

// -[SCSnapchattersFetchRequestCoordinator handleSyncFriendData:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcdbd0

// -[SCSnapchattersFetchRequestCoordinator _syncIncomingFriendsWithScenario:completionQueue:completionHandler:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x10098a440

// -[SCSnapchattersFetchRequestCoordinator _fetchFriendsWithFetchRequest:forceFullSync:completionQueue:completionHandler:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1009e86a4

// -[SCSnapchattersFetchRequestCoordinator _processFetchAtlasFriendsResponse:userInfoRepository:error:completionQueue:completionHandler:ignoreBlizzardLogging:triggerSource:syncType:startTime:]
// Type encoding: v84@0:8@16@24@32@40@?48B56@60@68d76
// Implementation: 0x108bcdee8

// -[SCSnapchattersFetchRequestCoordinator _processFetchFriendsResponse:userInfoRepository:error:completionQueue:completionHandler:ignoreBlizzardLogging:triggerSource:syncType:startTime:]
// Type encoding: v84@0:8@16@24@32@40@?48B56@60@68d76
// Implementation: 0x100c33ab8

// -[SCSnapchattersFetchRequestCoordinator _logFetchFriendsBlizzardEventWithSuccess:errorMsg:triggerSource:syncType:friendCountFetched:bestFriendsCount:addedMeCount:overallLatencyMS:networkLatencyMS:]
// Type encoding: v84@0:8B16@20@28@36q44q52q60q68q76
// Implementation: 0x100c54c20

// -[SCSnapchattersFetchRequestCoordinator atlasFriendsDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x108bce480

// -[SCSnapchattersFetchRequestCoordinator setAtlasFriendsDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100976e40

// -[SCSnapchattersFetchRequestCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bce48c

@end
