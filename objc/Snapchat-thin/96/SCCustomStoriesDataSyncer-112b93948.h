// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoriesDataSyncer
// Superclass: NSObject
// Address: 0x112b93948

@interface SCCustomStoriesDataSyncer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: postableCustomStoriesObservable; attributes: T@"SCObservable",R,N

// -[SCCustomStoriesDataSyncer initWithNetworkRequester:performer:docObjectContext:grapheneMetricsEmitter:currentUserId:blockedSnapchatterFetcher:snapchattersDataFetcher:snapchattersDataTracker:circumstanceEngine:communitiesMemberRankingJobSchedulingServices:storiesConfigProvider:appLifecycleManager:appStartExperimentReader:conversationUpdaterEventPublisher:conversationDataFetcher:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x1004459b0

// -[SCCustomStoriesDataSyncer forceSyncCustomStoriesMetadataWithFullSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x100447328

// -[SCCustomStoriesDataSyncer _forceSyncCustomStoriesMetadataOnPerformerWithFullSync:]
// Type encoding: v20@0:8B16
// Implementation: 0x10055b1c0

// -[SCCustomStoriesDataSyncer syncCustomStoriesMetadataIfPossibleWithFullMetadataRefresh:requestSource:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10804c39c

// -[SCCustomStoriesDataSyncer _syncCustomStoriesMetadataIfPossibleWithFullMetadataRefresh:requestSource:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10804c4b4

// -[SCCustomStoriesDataSyncer syncCustomStoriesMetadataWithPublicationIds:requestSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10804c578

// -[SCCustomStoriesDataSyncer fetchPublicationIdsRemotelyIfMissing:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10804c6b4

// -[SCCustomStoriesDataSyncer _syncAndFetchPublicationIdsIfMissing:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10804c844

// -[SCCustomStoriesDataSyncer fetchPublicationIdRemotely:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804cbe8

// -[SCCustomStoriesDataSyncer _fetchPublicationIdRemotely:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804cd50

// -[SCCustomStoriesDataSyncer _handleSuccessGetCustomStoryResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10804d160

// -[SCCustomStoriesDataSyncer syncAndFetchPublicationIds:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10804d308

// -[SCCustomStoriesDataSyncer forceSyncAndFetchPublicationIds:requestSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10804d49c

// -[SCCustomStoriesDataSyncer _syncAndFetchPublicationIdsOnPerfomer:requestSource:debounceRequest:completionQueue:completion:]
// Type encoding: v52@0:8@16@24B32@36@?44
// Implementation: 0x10804d630

// -[SCCustomStoriesDataSyncer _syncPublicationIdsOnPerfomer:requestSource:debounceRequest:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x10804d7c0

// -[SCCustomStoriesDataSyncer _syncCustomStoriesWithFullSync:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10055b6dc

// -[SCCustomStoriesDataSyncer _handleFetchedSyncCustomStoriesResponse:publicationIds:error:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1008a584c

// -[SCCustomStoriesDataSyncer _handleSuccessSyncCustomStoriesResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1008a5998

// -[SCCustomStoriesDataSyncer _handleSnapchatterDataUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10804dab8

// -[SCCustomStoriesDataSyncer _updateBlockedUserIdsForSharedStoryWithPulicationId:blockedUserIdsToNames:shouldRemoveBlockedUserFromViewerList:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10804dba4

// -[SCCustomStoriesDataSyncer _fetchBlockedSnapchatterIdsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1008a6070

// -[SCCustomStoriesDataSyncer _updateAllCustomStoryMetaDataWithLatestBlockedUserIdsToNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x10804ddb8

// -[SCCustomStoriesDataSyncer _updateAllCustomStoryMetaDataOnPerformerWithLatestBlockedUserIdsToNames:]
// Type encoding: v24@0:8@16
// Implementation: 0x10804dec4

// -[SCCustomStoriesDataSyncer _handleSyncFailureWithPublicationIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10804e044

// -[SCCustomStoriesDataSyncer addSyncUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10804e09c

// -[SCCustomStoriesDataSyncer removeSyncUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10804e0a4

// -[SCCustomStoriesDataSyncer _announceSyncedCustomStoriesWithRequestedCustomStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10804e0ac

// -[SCCustomStoriesDataSyncer _announceFullSyncFinished]
// Type encoding: v16@0:8
// Implementation: 0x1008ad708

// -[SCCustomStoriesDataSyncer warmUpObservers]
// Type encoding: v16@0:8
// Implementation: 0x100447190

// -[SCCustomStoriesDataSyncer customStoryMetadataObservableForPublicationId:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10804e0b4

// -[SCCustomStoriesDataSyncer customStoryMetadataMapObservable]
// Type encoding: @16@0:8
// Implementation: 0x10804e0bc

// -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataMapObservable]
// Type encoding: @16@0:8
// Implementation: 0x10804e0c4

// -[SCCustomStoriesDataSyncer customStoryPublicGroupMetadataObservableForFriendId:groupId:observationQueue:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10804e0cc

// -[SCCustomStoriesDataSyncer friendCustomStoryPublicGroupMetadataMapObservableForFriendUserId:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10804e170

// -[SCCustomStoriesDataSyncer customStoryMetadataForPublicationIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804e1f4

// -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataForPublicationIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804e360

// -[SCCustomStoriesDataSyncer customStoryMetadataForPublicationId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804e4cc

// -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataForPublicationId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804e780

// -[SCCustomStoriesDataSyncer customStoryMetadataWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10804ea34

// -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10804eb6c

// -[SCCustomStoriesDataSyncer customStoryMetadataByCreatorUserId:storyType:completionQueue:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x10804eca4

// -[SCCustomStoriesDataSyncer customStoryMetadataWithPublicationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10804ee1c

// -[SCCustomStoriesDataSyncer friendOfGroupFeedDisplayNameForPublicationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10804ee24

// -[SCCustomStoriesDataSyncer allCustomStoryMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10804ef28

// -[SCCustomStoriesDataSyncer allCommunityStoryMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10804ef8c

// -[SCCustomStoriesDataSyncer allCommunityStoryMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10804eff0

// -[SCCustomStoriesDataSyncer allUniversityCommunityStoryMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10804f1a4

// -[SCCustomStoriesDataSyncer allPendingCustomStoryMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10804f3a4

// -[SCCustomStoriesDataSyncer publicationIdForShortcutStoryWithListId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10804f408

// -[SCCustomStoriesDataSyncer sharedStoryBlockedSnapchattersInGroupForPublicationId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804f4a8

// -[SCCustomStoriesDataSyncer updateCustomStoryPublicGroupByFriendUserId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804f7bc

// -[SCCustomStoriesDataSyncer updateCustomStoryPublicGroupByUserId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10804f9f8

// -[SCCustomStoriesDataSyncer _coalesceListGroupsWithUserId:isPublic:currentTime:completionQueue:completion:]
// Type encoding: v52@0:8@16B24d28@36@?44
// Implementation: 0x10804fca8

// -[SCCustomStoriesDataSyncer _makeListGroupsCoalescerWithLabel:isPublic:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x100446420

// -[SCCustomStoriesDataSyncer _fireListUserCustomStoryGroupsWithRequest:isPublic:reply:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10804ffc4

// -[SCCustomStoriesDataSyncer _handleListGroupsCoalescerResponse:error:userId:currentTime:completionQueue:completion:]
// Type encoding: v64@0:8@16@24@32d40@48@?56
// Implementation: 0x1080500e0

// -[SCCustomStoriesDataSyncer _handleCustomStoryPublicGroupsListResponse:friendUserId:currentTime:completionQueue:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x1080501dc

// -[SCCustomStoriesDataSyncer postableCustomStoriesObservable]
// Type encoding: @16@0:8
// Implementation: 0x1008135a0

// -[SCCustomStoriesDataSyncer postableCustomStoryMetadataWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108050380

// -[SCCustomStoriesDataSyncer _waitForLoginSyncToFinishWithBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1080504b8

// -[SCCustomStoriesDataSyncer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10805054c

// -[SCCustomStoriesDataSyncer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x108050554

// -[SCCustomStoriesDataSyncer customStoryMetadataDidUpdateWithCustomStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x100558408

// -[SCCustomStoriesDataSyncer didUpdatePostableStories]
// Type encoding: v16@0:8
// Implementation: 0x10055a824

// -[SCCustomStoriesDataSyncer didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10805055c

// -[SCCustomStoriesDataSyncer didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x108050560

// -[SCCustomStoriesDataSyncer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1080506ec

@end
