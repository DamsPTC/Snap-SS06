// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCustomStoriesDataMutator
// Superclass: NSObject
// Address: 0x112b938f8

@interface SCCustomStoriesDataMutator

// Property: legacyDataMutator; attributes: T@"<SCLegacyCustomStoriesDataMutating>",&,N,V_legacyDataMutator
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCustomStoriesDataMutator initWithCustomStoriesNetworkRequester:customStoriesDataSyncer:blockedSnapchatterFetcher:snapchatterFetcher:userSession:docObjectContext:storiesBlizzardLogger:grapheneMetricsEmitter:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10804521c

// -[SCCustomStoriesDataMutator removeCustomStoryWithPublicationId:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108045520

// -[SCCustomStoriesDataMutator removeCustomStoryFromDiskOnlyWithPublicationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1080456e8

// -[SCCustomStoriesDataMutator leaveCustomStoryWithPublicationId:leaveByBlocking:isPendingMembership:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16B24B28@32@?40
// Implementation: 0x1080456fc

// -[SCCustomStoriesDataMutator transferSharedStoryOwnership:currentOwnerId:newOwnerId:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108045914

// -[SCCustomStoriesDataMutator _sendTransferSharedStoryOwnershipRequest:originalSharedStory:currentOwnerId:newOwnerId:completionQueue:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x108045d1c

// -[SCCustomStoriesDataMutator updateCustomStoryWithMetadata:numOfSnapchattersSelected:numOfGroupsSelected:completionQueue:successBlock:failureBlock:]
// Type encoding: v64@0:8@16Q24Q32@40@?48@?56
// Implementation: 0x108046054

// -[SCCustomStoriesDataMutator _sendUpdateCustomStoryMetadataRequestWithMetadata:originalCustomStory:numOfSnapchattersSelected:numOfGroupsSelected:completionQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24Q32Q40@48@?56@?64
// Implementation: 0x10804673c

// -[SCCustomStoriesDataMutator removeParticipantsFromCustomStoryId:participants:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108046bd0

// -[SCCustomStoriesDataMutator _sendRemoveParticipantsRequestWithCustomStoryId:originalCustomStory:participants:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108046f80

// -[SCCustomStoriesDataMutator createCustomStoryWithMetadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:completionQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16q24Q32Q40@48@56@?64@?72
// Implementation: 0x1080472a0

// -[SCCustomStoriesDataMutator _createCustomStoryHelperWithMetadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:completionQueue:successBlock:failureBlock:]
// Type encoding: v80@0:8@16q24Q32Q40@48@56@?64@?72
// Implementation: 0x108047704

// -[SCCustomStoriesDataMutator updateLocalMyMostRecentPostTimestampWithCustomStoriesMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x108047964

// -[SCCustomStoriesDataMutator addModeratorForSharedStory:newModeratorId:completionQueue:completion:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x108047b4c

// -[SCCustomStoriesDataMutator _sendAddModeratorRequestWithSharedStoryId:originalSharedStory:newModeratorId:completionQueue:completion:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x108047f94

// -[SCCustomStoriesDataMutator demoteModeratorForSharedStory:moderatorIdToDemote:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1080483e0

// -[SCCustomStoriesDataMutator _sendDemoteModeratorRequestWithSharedStoryId:originalSharedStory:moderatorIdToDemote:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108048790

// -[SCCustomStoriesDataMutator addSharedStoryBlockedUsersExceptionsWithStoryId:snapchatterIds:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x108048b50

// -[SCCustomStoriesDataMutator _sendAddSharedStoryBlockedUsersExceptionsRequestWithStoryId:originalSharedStory:snapchatterIds:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x108048f00

// -[SCCustomStoriesDataMutator joinCustomStoryGroupWithGroupId:email:googleIdToken:msIdToken:completionQueue:completion:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x108049200

// -[SCCustomStoriesDataMutator _handleJoinCustomStoryGroupWithResponse:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1080494e0

// -[SCCustomStoriesDataMutator _revertCustomStoryUpdateWithOriginalCustomStory:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1080496f8

// -[SCCustomStoriesDataMutator _handleCreatedCustomStoryWithCustomStoryId:metadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:]
// Type encoding: v64@0:8@16@24q32Q40Q48@56
// Implementation: 0x108049a00

// -[SCCustomStoriesDataMutator _removeOrLeaveCustomStoryDidFinishWithPublicationId:leaveType:success:completionQueue:completionBlock:]
// Type encoding: v52@0:8@16q24B32@36@?44
// Implementation: 0x108049ca8

// -[SCCustomStoriesDataMutator banParticipantForSharedStory:participantId:completionQueue:completion:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x108049ee4

// -[SCCustomStoriesDataMutator unbanParticipantForSharedStory:participantId:completionQueue:completion:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x10804a328

// -[SCCustomStoriesDataMutator _sendBanParticipantRequestWithSharedStoryId:originalSharedStory:participantId:completionQueue:completion:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10804a76c

// -[SCCustomStoriesDataMutator _sendUnbanParticipantRequestWithSharedStoryId:originalSharedStory:participantId:completionQueue:completion:failureBlock:]
// Type encoding: v64@0:8@16@24@32@40@?48@?56
// Implementation: 0x10804ab18

// -[SCCustomStoriesDataMutator _handleCreationResponse:error:metadata:creationSource:numOfSnapchattersSelected:numOfGroupsSelected:sourcePageSessionId:completionQueue:successBlock:failureBlock:]
// Type encoding: v96@0:8@16@24@32q40Q48Q56@64@72@?80@?88
// Implementation: 0x10804aec4

// -[SCCustomStoriesDataMutator _handleCustomStoryMembershipWithOriginalCustomStory:response:httpResponse:error:completionQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10804b338

// -[SCCustomStoriesDataMutator _handleCustomStoryBlockedUsersExceptionsUpdateWithOriginalCustomStory:updateResponse:httpResponse:error:completionQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24@32@40@48@?56@?64
// Implementation: 0x10804b544

// -[SCCustomStoriesDataMutator _handleCustomStoryUpdateWithOriginalCustomStory:updatedPosterIds:numOfSnapchattersSelected:numOfGroupsSelected:updateResponse:httpResponse:error:completionQueue:successBlock:failureBlock:]
// Type encoding: v96@0:8@16@24Q32Q40@48@56@64@72@?80@?88
// Implementation: 0x10804b750

// -[SCCustomStoriesDataMutator _handleErrorWithOriginalCustomStory:error:httpResponse:completionQueue:failureBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x10804ba74

// -[SCCustomStoriesDataMutator _logSharedStoryInviteWithPublicationId:isCreator:originalMembersIds:updatedMembersIds:numOfSnapchattersSelected:numOfGroupsSelected:]
// Type encoding: v60@0:8@16B24@28@36Q44Q52
// Implementation: 0x10804bf48

// -[SCCustomStoriesDataMutator _filterOutNonFriendnapchatterIdsFromCurrentSnapchatterIds:friendSnapchatters:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10804c080

// -[SCCustomStoriesDataMutator legacyDataMutator]
// Type encoding: @16@0:8
// Implementation: 0x10804c140

// -[SCCustomStoriesDataMutator setLegacyDataMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10804c148

// -[SCCustomStoriesDataMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10804c178

@end
