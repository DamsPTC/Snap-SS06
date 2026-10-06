// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapPostCoordinator
// Superclass: NSObject
// Address: 0x112b077b8

@interface SCStoriesSnapPostCoordinator

// Property: postingStateForwarder; attributes: T@"<SCStoriesSnapPostingStateForwarding>",W,N,V_postingStateForwarder

// -[SCStoriesSnapPostCoordinator initWithDocObjectContext:performer:myStoriesStore:storySendManager:storyMentionMessageSender:groupsDataFetcher:snapProPendingSnapManager:snapPoster:thumbnailCoordinator:grapheneMetricsEmitter:currentUserId:currentUsername:blizzardLogger:arroyoEventPublisher:circumstanceEngine:appStartExperimentReader:storyShareSender:statusSender:conversationIdResolver:storyPrivacySettingManager:snapchatterPublicInfoFetcher:tinsel:shareYoursClient:backgroundTaskWrapper:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x10081e264

// -[SCStoriesSnapPostCoordinator insertStoryPostingSetting:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10695643c

// -[SCStoriesSnapPostCoordinator insertPostingStorySnapsWithSnapDoc:storyMetadata:destinationMetadataByStoryPostingId:customStoryTypesByStoryId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106956504

// -[SCStoriesSnapPostCoordinator updatePostingState:forStory:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106956f2c

// -[SCStoriesSnapPostCoordinator updatePostingState:clientIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10695706c

// -[SCStoriesSnapPostCoordinator _updatePostingState:clientIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106957124

// -[SCStoriesSnapPostCoordinator updatePostingProgress:forStory:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1069573f0

// -[SCStoriesSnapPostCoordinator postingStateWithClientId:]
// Type encoding: q24@0:8@16
// Implementation: 0x106957508

// -[SCStoriesSnapPostCoordinator clientIdToPostingStateObservable]
// Type encoding: @16@0:8
// Implementation: 0x106957690

// -[SCStoriesSnapPostCoordinator clientIdToPostingProgressObservable]
// Type encoding: @16@0:8
// Implementation: 0x106957814

// -[SCStoriesSnapPostCoordinator currentClientIdToPostingState]
// Type encoding: @16@0:8
// Implementation: 0x106957998

// -[SCStoriesSnapPostCoordinator currentClientIdToPostingProgress]
// Type encoding: @16@0:8
// Implementation: 0x106957acc

// -[SCStoriesSnapPostCoordinator failedSnapCountObservable]
// Type encoding: @16@0:8
// Implementation: 0x10081edb0

// -[SCStoriesSnapPostCoordinator _updateFailedSnapCount]
// Type encoding: v16@0:8
// Implementation: 0x106957be8

// -[SCStoriesSnapPostCoordinator pendingSnapComponentIds]
// Type encoding: @16@0:8
// Implementation: 0x106957d2c

// -[SCStoriesSnapPostCoordinator updateStoryLatestPostTimestamp:forStoryType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x106957eac

// -[SCStoriesSnapPostCoordinator getStoryLastestPostTimestampForStoryType:]
// Type encoding: d24@0:8q16
// Implementation: 0x106957fac

// -[SCStoriesSnapPostCoordinator _updateStoryLatestTimestamp:forStoryType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x106957ff8

// -[SCStoriesSnapPostCoordinator insertPostingSnapProSnap:businessIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069580d0

// -[SCStoriesSnapPostCoordinator insertPostingSnapProSnapWithBusinessIdsToSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069581c8

// -[SCStoriesSnapPostCoordinator querySnapProPendingSnapsWithBusinessId:confirmedSnapComponentIds:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x100c83b08

// -[SCStoriesSnapPostCoordinator removePendingSnapProSnapWithClientId:businessId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106958338

// -[SCStoriesSnapPostCoordinator querySnapProPendingSnapsExistWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106958430

// -[SCStoriesSnapPostCoordinator _recordPostAttemptType:forSnapComponentId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106958508

// -[SCStoriesSnapPostCoordinator _postAttemptTypeForClientIds:]
// Type encoding: q24@0:8@16
// Implementation: 0x106958580

// -[SCStoriesSnapPostCoordinator retryStoryPostWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069586e0

// -[SCStoriesSnapPostCoordinator _retryCrossPostLegIfApplicableWithSnapComponentId:clientId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106958b04

// -[SCStoriesSnapPostCoordinator _allPendingStoryIdsWithSnapComponentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106958da0

// -[SCStoriesSnapPostCoordinator _logRetryWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x106958f68

// -[SCStoriesSnapPostCoordinator _appendShadowStatusKeysWithClientId:storyIds:clientState:site:toKeys:clientStates:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x106958f70

// -[SCStoriesSnapPostCoordinator _dispatchShadowStatusQueryAtSite:keys:clientStates:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106959220

// -[SCStoriesSnapPostCoordinator _countShadowStatuses:site:keys:clientStates:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1069594c8

// -[SCStoriesSnapPostCoordinator onStorySendUpdated:storyDestinations:content:state:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x106959904

// -[SCStoriesSnapPostCoordinator _handleSpotlightAutoSharePostingStateUpdate:storyDestinations:content:state:postMetadata:spotlightShareInfo:currentTime:]
// Type encoding: v72@0:8@16@24@32q40@48@56@64
// Implementation: 0x106959dcc

// -[SCStoriesSnapPostCoordinator _handlePostingState:storyDestinations:content:postMetadata:snapComponentId:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10695a370

// -[SCStoriesSnapPostCoordinator _handleRecoveredSnapWithStoryId:snapComponentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10695b15c

// -[SCStoriesSnapPostCoordinator onStorySendComplete:content:completedStoryDestinations:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10695b218

// -[SCStoriesSnapPostCoordinator _persistSuccessfulStoryDestinations:clientId:content:spotlightShareInfo:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10695b924

// -[SCStoriesSnapPostCoordinator _logCrossPostSendMetricsForDestinations:isPartial:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10695be5c

// -[SCStoriesSnapPostCoordinator _sendGroupStoryShareToOwningGroupConversationId:storySnapId:mediaType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10695c1f0

// -[SCStoriesSnapPostCoordinator _handleSuccessfulStoryDestinations:clientId:taskQueueId:content:spotlightShareInfo:suppressLegacyPostingToast:]
// Type encoding: v60@0:8@16@24@32@40@48B56
// Implementation: 0x10695c33c

// -[SCStoriesSnapPostCoordinator _clearCompletedStoryPostStateForClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10695d0ec

// -[SCStoriesSnapPostCoordinator _handlePostSuccessWithClientId:sendMessageAttemptId:updatedSnapServerId:content:storyIdToStorySnapId:storyIdToStorySnapIndex:storyIdToDestinationMetadata:friendOfGroupStoryIds:snapProDestinations:mediaType:spotlightShareInfo:suppressLegacyPostingToast:]
// Type encoding: v108@0:8@16@24@32@40@48@56@64@72@80q88@96B104
// Implementation: 0x10695d244

// -[SCStoriesSnapPostCoordinator _handlePostFailureWithClientId:completedStoryDestinations:partialFailure:spotlightShareInfo:suppressLegacyPostingToast:keepAlive:]
// Type encoding: v56@0:8@16@24B32@36B44@48
// Implementation: 0x10695e930

// -[SCStoriesSnapPostCoordinator _handleLostStoryPostWithSnapComponentId:storyIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10695f4d0

// -[SCStoriesSnapPostCoordinator _handleLostStoryPostWithSnapComponentId:storyIds:keepAlive:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10695f4d8

// -[SCStoriesSnapPostCoordinator _deleteUnrecoverableSnapsWithSnapComponentId:storyIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10695f678

// -[SCStoriesSnapPostCoordinator _deleteUnrecoverableSnapsWithSnapComponentId:storyIds:keepAlive:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10695f680

// -[SCStoriesSnapPostCoordinator _deleteUnrecoverableSnapsWithSnapComponentId:storyIds:keepAlive:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10695f688

// -[SCStoriesSnapPostCoordinator _onMessageSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10695f99c

// -[SCStoriesSnapPostCoordinator updateIncidentalAttachmentsWithLocalMessageContent:callback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10695f9e4

// -[SCStoriesSnapPostCoordinator _swapTileMediaReferencesInStoryMetadata:localMessageContent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106960084

// -[SCStoriesSnapPostCoordinator _logThumbnailData:clientId:isTimeout:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x106960578

// -[SCStoriesSnapPostCoordinator updateWithAsyncPostingConfirmedPosts:failedPosts:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106960624

// -[SCStoriesSnapPostCoordinator didDeletePostingSnapWithStoryId:clientId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106960af4

// -[SCStoriesSnapPostCoordinator didDeleteSnapWithServerId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106960c78

// -[SCStoriesSnapPostCoordinator _ackStatusForConfirmedPosts:]
// Type encoding: v24@0:8@16
// Implementation: 0x106960c7c

// -[SCStoriesSnapPostCoordinator _logPostingStatusAckResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069610cc

// -[SCStoriesSnapPostCoordinator _handleDeletedSnapsWithSnapComponentId:storyIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106961168

// -[SCStoriesSnapPostCoordinator _deleteStoryPostWithSnapComponentId:storyId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069612c0

// -[SCStoriesSnapPostCoordinator _logDeletionWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x10696155c

// -[SCStoriesSnapPostCoordinator _destinationMetadataForBlizzardLoggerWithDestinationMetadata:storyPrivacy:]
// Type encoding: i32@0:8@16q24
// Implementation: 0x106961564

// -[SCStoriesSnapPostCoordinator _fetchFriendlinkStatusForRepostedUserId:mentionedUserIds:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069615d4

// -[SCStoriesSnapPostCoordinator _addShareYoursStoryForShareYoursId:storyIdToStorySnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106961970

// -[SCStoriesSnapPostCoordinator postingStateForwarder]
// Type encoding: @16@0:8
// Implementation: 0x106961c38

// -[SCStoriesSnapPostCoordinator setPostingStateForwarder:]
// Type encoding: v24@0:8@16
// Implementation: 0x106961c50

// -[SCStoriesSnapPostCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106961c5c

@end
