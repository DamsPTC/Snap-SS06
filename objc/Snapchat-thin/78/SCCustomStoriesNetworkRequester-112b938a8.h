// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoriesNetworkRequester
// Superclass: NSObject
// Address: 0x112b938a8

@interface SCCustomStoriesNetworkRequester


// -[SCCustomStoriesNetworkRequester initWithProtobufRequestManager:grapheneMetricsEmitter:currentUserId:networkConnectivityMonitor:locationProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10044526c

// -[SCCustomStoriesNetworkRequester syncCustomStoriesWithSyncToken:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10055cc94

// -[SCCustomStoriesNetworkRequester _syncRequestWithSyncToken:accessToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1005648e4

// -[SCCustomStoriesNetworkRequester joinCustomStoryGroupWithGroupId:email:googleIdToken:msIdToken:completionQueue:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x10803fc24

// -[SCCustomStoriesNetworkRequester _joinRequestWithGroupId:email:googleIdToken:msIdToken:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10804006c

// -[SCCustomStoriesNetworkRequester createCustomStoryWithMetadata:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1080401e0

// -[SCCustomStoriesNetworkRequester _createRequestWithMetadata:accessToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108040644

// -[SCCustomStoriesNetworkRequester _createRequestWithMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x1080406cc

// -[SCCustomStoriesNetworkRequester transferSharedStoryOwnership:currentVersion:currentOwnerId:newOwnerId:completionQueue:completion:]
// Type encoding: v64@0:8@16Q24@32@40@48@?56
// Implementation: 0x108040c4c

// -[SCCustomStoriesNetworkRequester _createTransferSharedStoryOwnershipRequest:currentVersion:currentOwnerId:newOwnerId:accessToken:]
// Type encoding: @56@0:8@16Q24@32@40@48
// Implementation: 0x108040ff8

// -[SCCustomStoriesNetworkRequester _createTransferSharedStoryOwnershipRequest:currentVersion:currentOwnerId:newOwnerId:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x1080410a0

// -[SCCustomStoriesNetworkRequester updateCustomStoryWithMetadata:currentVersion:originalPosterIdsPermitted:originalViewerIdsPermitted:completionQueue:completion:]
// Type encoding: v64@0:8@16Q24@32@40@48@?56
// Implementation: 0x108041290

// -[SCCustomStoriesNetworkRequester _updateRequestWithMetadata:currentVersion:originalPosterIdsPermitted:originalViewerIdsPermitted:accessToken:]
// Type encoding: @56@0:8@16Q24@32@40@48
// Implementation: 0x108041678

// -[SCCustomStoriesNetworkRequester _updateRequestWithMetadata:currentVersion:originalPosterIdsPermitted:originalViewerIdsPermitted:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x108041720

// -[SCCustomStoriesNetworkRequester updateCustomStoryWithCustomStoryId:currentVersion:participantsToRemove:completionQueue:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x1080420c0

// -[SCCustomStoriesNetworkRequester removeMembersFromCustomStory:currentVersion:membersToRemove:completionQueue:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x1080423f8

// -[SCCustomStoriesNetworkRequester addModeratorForSharedStory:currentVersion:newModeratorId:completionQueue:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x108042430

// -[SCCustomStoriesNetworkRequester demoteModeratorForSharedStory:currentVersion:moderatorIdToDemote:completionQueue:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x108042544

// -[SCCustomStoriesNetworkRequester banParticipantForSharedStory:currentVersion:participantToBan:completionQueue:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x108042658

// -[SCCustomStoriesNetworkRequester unbanParticipantForSharedStory:currentVersion:participantToUnban:completionQueue:completion:]
// Type encoding: v56@0:8@16Q24@32@40@?48
// Implementation: 0x10804276c

// -[SCCustomStoriesNetworkRequester _removeParticipantsRequestWithCustomStoryId:currentVersion:participantsToRemove:accessToken:]
// Type encoding: @48@0:8@16Q24@32@40
// Implementation: 0x108042880

// -[SCCustomStoriesNetworkRequester _removeParticipantsWithCustomStoryId:currentVersion:participantsToRemove:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x108042920

// -[SCCustomStoriesNetworkRequester _updateCustomStoryWithCustomStoryId:currentVersion:membersToPromoteAsModerator:moderatorsToDemote:membersToRemove:membersToBan:membersToUnban:completionQueue:completion:]
// Type encoding: v88@0:8@16Q24@32@40@48@56@64@72@?80
// Implementation: 0x108042b3c

// -[SCCustomStoriesNetworkRequester _createUpdateCustomStoryGroupRequest:currentVersion:membersToPromoteAsModerator:moderatorsToDemote:membersToRemove:membersToBan:membersToUnban:accessToken:]
// Type encoding: @80@0:8@16Q24@32@40@48@56@64@72
// Implementation: 0x108042f78

// -[SCCustomStoriesNetworkRequester _createUpdateCustomStoryGroupRequest:currentVersion:membersToPromoteAsModerator:moderatorsToDemote:membersToRemove:membersToBan:membersToUnban:]
// Type encoding: @72@0:8@16Q24@32@40@48@56@64
// Implementation: 0x10804304c

// -[SCCustomStoriesNetworkRequester updateMembershipWithCustomStoryId:updateMembershipType:enableAutoSaveToMemories:completionQueue:completion:]
// Type encoding: v48@0:8@16i24B28@32@?40
// Implementation: 0x10804377c

// -[SCCustomStoriesNetworkRequester _updateMembershipRequestWithCustomStoryId:updateMembershipType:enableAutoSaveToMemories:accessToken:]
// Type encoding: @40@0:8@16i24B28@32
// Implementation: 0x108043a80

// -[SCCustomStoriesNetworkRequester deleteCustomStoryWithCustomStoryId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108043ba8

// -[SCCustomStoriesNetworkRequester _deleteRequestWithCustomStoryId:accessToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108043eb8

// -[SCCustomStoriesNetworkRequester fetchCustomStoryWithCustomStoryId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108043fa4

// -[SCCustomStoriesNetworkRequester _getRequestWithCustomStoryId:accessToken:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10804427c

// -[SCCustomStoriesNetworkRequester listUserCustomStoryGroupsWithSnapchatterId:isPublic:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x108044368

// -[SCCustomStoriesNetworkRequester _listUserCustomStoryGroupsRequestWithSnapchatterId:accessToken:isPublic:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x108044678

// -[SCCustomStoriesNetworkRequester _addBlockedUsersExcetpionsRequestWithStoryId:snapchatterIds:accessToken:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x108044760

// -[SCCustomStoriesNetworkRequester addSharedStoryBlockedUsersExceptionsWithStoryId:snapchatterIds:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1080449dc

// -[SCCustomStoriesNetworkRequester _logNetworkMetricsWithPath:requestSource:success:requestSize:responseSize:]
// Type encoding: v52@0:8@16@24B32q36q44
// Implementation: 0x1008a4f18

// -[SCCustomStoriesNetworkRequester .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108044d1c

@end
