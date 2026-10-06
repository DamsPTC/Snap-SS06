// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyStoriesDataCoordinator
// Superclass: NSObject
// Address: 0x112b07718

@interface SCMyStoriesDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMyStoriesDataCoordinator initWithDocObjectContext:performer:myStoriesStore:snapDeleteCoordinator:snapPostCoordinator:snapViewerDataCoordinator:customStoriesDataFetcher:grapheneMetricsEmitter:blizzardLogger:currentUserId:currentUsername:circumstanceEngine:notificationPool:snapReadReceiptLogger:appLifecycleManager:appStartExperimentReader:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x100812ca4

// -[SCMyStoriesDataCoordinator _setUpInitialData]
// Type encoding: v16@0:8
// Implementation: 0x100813408

// -[SCMyStoriesDataCoordinator _setUpInitialDataOnPerformer]
// Type encoding: v16@0:8
// Implementation: 0x1008136b4

// -[SCMyStoriesDataCoordinator _onPostableCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x100814bcc

// -[SCMyStoriesDataCoordinator addListener:]
// Type encoding: B24@0:8@16
// Implementation: 0x10081edb8

// -[SCMyStoriesDataCoordinator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694e37c

// -[SCMyStoriesDataCoordinator insertStoryPostingSetting:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10694e384

// -[SCMyStoriesDataCoordinator insertPostingStorySnaps:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10694e3f4

// -[SCMyStoriesDataCoordinator insertPostingStorySnapsWithSnapDoc:storyMetadata:destinationMetadataByStoryPostingId:customStoryTypesByStoryId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10694e534

// -[SCMyStoriesDataCoordinator _insertPostingStorySnaps:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10694e724

// -[SCMyStoriesDataCoordinator _announceStoriesPostAttemptForStoryIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694ea4c

// -[SCMyStoriesDataCoordinator setStoriesUploadingSnapState:businessIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10694ee38

// -[SCMyStoriesDataCoordinator getStoriesUploadingSnapState]
// Type encoding: @16@0:8
// Implementation: 0x10694eec8

// -[SCMyStoriesDataCoordinator updateSnapZippedFieldWithClientId:zipped:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10694eef0

// -[SCMyStoriesDataCoordinator updatePostedStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694ef00

// -[SCMyStoriesDataCoordinator _updatePostedStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694f018

// -[SCMyStoriesDataCoordinator retryStoryPostWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694f104

// -[SCMyStoriesDataCoordinator queryAllStoriesWithCompletionQueue:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1008144d4

// -[SCMyStoriesDataCoordinator queryStoriesWithStoryIds:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10694f154

// -[SCMyStoriesDataCoordinator queryRepostedSpotlightStoryWithStoryId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10694f34c

// -[SCMyStoriesDataCoordinator updatePostingWithScheduled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10694f7c8

// -[SCMyStoriesDataCoordinator queryMyStoryWithStoryId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10694f8dc

// -[SCMyStoriesDataCoordinator myStoryObservableWithStoryId:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10694fa9c

// -[SCMyStoriesDataCoordinator storiesObservableWithStoryIds:observationQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10694fb30

// -[SCMyStoriesDataCoordinator myStoriesObservableWithStoryType:observationQueue:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x10694fbd8

// -[SCMyStoriesDataCoordinator fetchViewerInfoWithRequestSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10694fc80

// -[SCMyStoriesDataCoordinator fetchViewerInfoWithStoryId:requestSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10694fdd0

// -[SCMyStoriesDataCoordinator _fetchViewerInfoWithStories:requestSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10694ffa8

// -[SCMyStoriesDataCoordinator _updateMapStoryPostingInfoWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069505a8

// -[SCMyStoriesDataCoordinator startSavingSnapWithStoryId:snapComponentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069506f8

// -[SCMyStoriesDataCoordinator finishSavingSnapWithStoryId:snapComponentId:success:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106950700

// -[SCMyStoriesDataCoordinator fetchSnapSaveStateWithStoryId:snapComponentId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x106950708

// -[SCMyStoriesDataCoordinator _startDeletingOurStorySnapWithClientId:serverId:posterGuid:queue:onDeleteBegin:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106950774

// -[SCMyStoriesDataCoordinator deleteStorySnapWithClientId:serverId:posterGuid:storyId:onlyShowFailureToast:disableFailureToast:queue:onDeleteBegin:]
// Type encoding: v72@0:8@16@24@32@40B48B52@56@?64
// Implementation: 0x106950b44

// -[SCMyStoriesDataCoordinator _deleteOurStorySnapWithClientId:serverId:posterGuid:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106951380

// -[SCMyStoriesDataCoordinator _deleteStorySnaps:fromMyStory:onlyShowFailureToast:disableFailureToast:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x1069516dc

// -[SCMyStoriesDataCoordinator _handleDeletedStorySnapOnServerWithSuccess:clientId:storyId:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x106951cf0

// -[SCMyStoriesDataCoordinator deleteSnapProSnapWithStoryId:clientId:serverId:posterGuid:snapProAttributes:isSpotlightStory:isImpalaFlow:callback:]
// Type encoding: v72@0:8@16@24@32@40@48B56B60@?64
// Implementation: 0x106951e2c

// -[SCMyStoriesDataCoordinator _deletePendingSnapProSnapsWithClientId:businessId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069523bc

// -[SCMyStoriesDataCoordinator removeAllPendingSnapsWithBusinessId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10695242c

// -[SCMyStoriesDataCoordinator _logStorySnapDeletionWithClientId:serverId:posterGuid:storyType:storyTypeSpecific:storyId:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x106952674

// -[SCMyStoriesDataCoordinator didDeleteOurStorySnapForServerId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10695290c

// -[SCMyStoriesDataCoordinator deleteAsyncFailedStorySnapsWithClientId:storyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069529ec

// -[SCMyStoriesDataCoordinator fetchSnapDeleteStateWithStoryId:snapComponentId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x106952a74

// -[SCMyStoriesDataCoordinator fetchSnapDeleteStatesWithStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106952ae0

// -[SCMyStoriesDataCoordinator updatePostingState:forStory:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106952b34

// -[SCMyStoriesDataCoordinator updatePostingState:clientIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106952b94

// -[SCMyStoriesDataCoordinator updatePostingProgress:forStory:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x106952bf4

// -[SCMyStoriesDataCoordinator updateStoryLatestPostTimestamp:forStoryType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x106952c54

// -[SCMyStoriesDataCoordinator getStoryLastestPostTimestampForStoryType:]
// Type encoding: d24@0:8q16
// Implementation: 0x106952ca0

// -[SCMyStoriesDataCoordinator postingStateWithClientId:]
// Type encoding: q24@0:8@16
// Implementation: 0x106952cf0

// -[SCMyStoriesDataCoordinator clientIdToPostingStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x106952d54

// -[SCMyStoriesDataCoordinator clientIdToPostingProgressObservable]
// Type encoding: @16@0:8
// Implementation: 0x106952d9c

// -[SCMyStoriesDataCoordinator currentClientIdToPostingState]
// Type encoding: @16@0:8
// Implementation: 0x106952de4

// -[SCMyStoriesDataCoordinator currentClientIdToPostingProgress]
// Type encoding: @16@0:8
// Implementation: 0x106952e2c

// -[SCMyStoriesDataCoordinator failedSnapCountObservable]
// Type encoding: @16@0:8
// Implementation: 0x10081c2bc

// -[SCMyStoriesDataCoordinator insertPostingSnapProSnap:businessIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106952e74

// -[SCMyStoriesDataCoordinator insertPostingSnapProSnapWithBusinessIdsToSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106952ee4

// -[SCMyStoriesDataCoordinator querySnapProPendingSnapsWithBusinessId:confirmedSnapComponentIds:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100c83a80

// -[SCMyStoriesDataCoordinator queryPrivateStoriesOrPendingSnapProSnapsExistWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106952f34

// -[SCMyStoriesDataCoordinator deleteExpiredMetadata]
// Type encoding: v16@0:8
// Implementation: 0x100813ba0

// -[SCMyStoriesDataCoordinator _fetchAndObserveStories]
// Type encoding: @16@0:8
// Implementation: 0x100817480

// -[SCMyStoriesDataCoordinator _updateMyStoriesFetchedResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10081827c

// -[SCMyStoriesDataCoordinator postingStateUpdatedWithClientIds:postingState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10695328c

// -[SCMyStoriesDataCoordinator postingProgressUpdatedWithClientId:postingProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106953370

// -[SCMyStoriesDataCoordinator postedStateUpdateWithClientId:snapId:businessId:storyType:storyTypeVariant:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10695345c

// -[SCMyStoriesDataCoordinator postingToSpotlightStartWithClientId:postingToHostProfile:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106953644

// -[SCMyStoriesDataCoordinator saveStateUpdatedWithStoryId:snapComponentId:saveState:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106953780

// -[SCMyStoriesDataCoordinator deleteStateUpdatedWithStoryId:snapComponentId:snapProAttributes:deleteState:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x106953890

// -[SCMyStoriesDataCoordinator _announceMyStoriesDataUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100818990

// -[SCMyStoriesDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069539cc

@end
