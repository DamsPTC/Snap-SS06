// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyStoriesDatabaseStore
// Superclass: NSObject
// Address: 0x112ba39d8

@interface SCMyStoriesDatabaseStore


// -[SCMyStoriesDatabaseStore initWithDocObjectContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008129dc

// -[SCMyStoriesDatabaseStore _fetchForClassWithFilter:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x100813a2c

// -[SCMyStoriesDatabaseStore fetchPlaybackSequenceForStoryWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008137c8

// -[SCMyStoriesDatabaseStore fetchPlaybackSequencesForStoryWithIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084d3524

// -[SCMyStoriesDatabaseStore fetchPlaybackSequencesForStoryType:]
// Type encoding: @24@0:8q16
// Implementation: 0x100814e84

// -[SCMyStoriesDatabaseStore fetchAllPlaybackSequences]
// Type encoding: @16@0:8
// Implementation: 0x10081409c

// -[SCMyStoriesDatabaseStore _filterMyStorySnaps:newSnaps:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084d3864

// -[SCMyStoriesDatabaseStore _insertMyStorySnapsWithStoryId:storySnaps:txContext:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1084d3b98

// -[SCMyStoriesDatabaseStore _insertMyStorySnaps:txContext:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084d3e90

// -[SCMyStoriesDatabaseStore insertMyStorySnaps:postingTime:completionQueue:completion:]
// Type encoding: v48@0:8@16d24@32@?40
// Implementation: 0x1084d40b0

// -[SCMyStoriesDatabaseStore _insertMyStorySnapIfMissingForStoryWithId:snapComponentId:creationBlock:txContext:]
// Type encoding: v48@0:8@16@24@?32@40
// Implementation: 0x1084d4440

// -[SCMyStoriesDatabaseStore insertMyStorySnapIfMissingForStoryWithId:snapComponentId:creationBlock:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@?32@40@?48
// Implementation: 0x1084d4784

// -[SCMyStoriesDatabaseStore _insertPlaybackSequenceIfNeededForStoryWithId:storyType:txContext:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1084d48d0

// -[SCMyStoriesDatabaseStore insertPlaybackSequenceIfNeededForStoryWithId:storyType:completionQueue:completion:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x1084d49fc

// -[SCMyStoriesDatabaseStore _getStoryIdsAndSnapComponentIdsFromStorySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084d4adc

// -[SCMyStoriesDatabaseStore _updateMyStorySnaps:txContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1084d4dec

// -[SCMyStoriesDatabaseStore updateMyStorySnaps:postedTime:grapheneEmitter:completionQueue:completion:]
// Type encoding: v56@0:8@16d24@32@40@?48
// Implementation: 0x1084d536c

// -[SCMyStoriesDatabaseStore _updateMyStorySnapForStoryWithId:snapIndex:clientId:serverId:txContext:]
// Type encoding: @56@0:8@16^q24@32@40@48
// Implementation: 0x1084d5590

// -[SCMyStoriesDatabaseStore _updateMyStorySnapWithClientId:zipped:txContext:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1084d5b14

// -[SCMyStoriesDatabaseStore updateMyStorySnapWithClientId:zipped:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1084d628c

// -[SCMyStoriesDatabaseStore _updateMyStorySnapsForStory:newSnaps:currentUserId:txContent:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10081666c

// -[SCMyStoriesDatabaseStore _deleteMyStorySnapsForStoryWithId:snapComponentId:currentUserId:txContent:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1084d636c

// -[SCMyStoriesDatabaseStore deleteMyStorySnapsForStoryWithId:snapComponentId:currentUserId:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1084d6688

// -[SCMyStoriesDatabaseStore deleteMyStorySnapsForStoriesWithIds:snapComponentId:currentUserId:completionQueue:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1084d67ec

// -[SCMyStoriesDatabaseStore _deleteOurStorySnapsForServerId:currentUserId:txContent:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1084d6a74

// -[SCMyStoriesDatabaseStore deleteOurStorySnapsForServerId:currentUserId:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1084d6f88

// -[SCMyStoriesDatabaseStore _deletePlaybackSequenceForStoryWithId:txContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1084d7098

// -[SCMyStoriesDatabaseStore deletePlaybackSequenceForStoryWithId:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1084d7188

// -[SCMyStoriesDatabaseStore _deletePlaybackSequencesForStoryType:storyIdsToKeep:txContext:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x1084d725c

// -[SCMyStoriesDatabaseStore deletePlaybackSequencesForStoryType:storyIdsToKeep:completionQueue:completion:]
// Type encoding: v48@0:8q16@24@32@?40
// Implementation: 0x1084d74ac

// -[SCMyStoriesDatabaseStore _deleteAllMyStoriesExpiredSince:currentUserId:grapheneEmitter:txContent:]
// Type encoding: v48@0:8d16@24@32@40
// Implementation: 0x100813d6c

// -[SCMyStoriesDatabaseStore deleteAllMyStoriesExpiredSince:currentUserId:grapheneEmitter:completionQueue:completion:]
// Type encoding: v56@0:8d16@24@32@40@?48
// Implementation: 0x100813c38

// -[SCMyStoriesDatabaseStore _deleteAllPlaybackSequences:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084d75ac

// -[SCMyStoriesDatabaseStore deleteAllPlaybackSequences:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1084d7760

// -[SCMyStoriesDatabaseStore _checkStoryIdIsUUID:]
// Type encoding: B24@0:8@16
// Implementation: 0x1084d78ec

// -[SCMyStoriesDatabaseStore _getMyStoryTypeFromSnap:]
// Type encoding: q24@0:8@16
// Implementation: 0x1084d7950

// -[SCMyStoriesDatabaseStore _mergeLocalAndPostedSnapIds:postedSnapIdentifiers:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084d7ad4

// -[SCMyStoriesDatabaseStore _mergeLocalAndPostedSnapCaptureInfo:postedCaptureInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084d7dbc

// -[SCMyStoriesDatabaseStore _mergeLocalAndPostedMyStorySnap:postedSnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084d7f40

// -[SCMyStoriesDatabaseStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1084d8aa0

// +[SCMyStoriesDatabaseStore shouldKeepMyCustomStoryWhenEmpty:currentUserId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1084d77d0

@end
