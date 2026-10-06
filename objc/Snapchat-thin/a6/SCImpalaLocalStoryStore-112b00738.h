// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaLocalStoryStore
// Superclass: NSObject
// Address: 0x112b00738

@interface SCImpalaLocalStoryStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaLocalStoryStore initWithMyStoriesDataCoordinator:storiesThumbnailCoordinator:snapProProfilesProvider:circumstanceEngine:storiesSnapReadReceiptCoordinator:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106815434

// -[SCImpalaLocalStoryStore _performOnLocalStoryStoreQueueAndWait:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106815700

// -[SCImpalaLocalStoryStore tearDown]
// Type encoding: v16@0:8
// Implementation: 0x106815760

// -[SCImpalaLocalStoryStore rehydrate]
// Type encoding: v16@0:8
// Implementation: 0x10681592c

// -[SCImpalaLocalStoryStore dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106815a08

// -[SCImpalaLocalStoryStore observeStorySnapshot]
// Type encoding: @16@0:8
// Implementation: 0x106815a68

// -[SCImpalaLocalStoryStore observeOwnedStoryState]
// Type encoding: @16@0:8
// Implementation: 0x106815ab0

// -[SCImpalaLocalStoryStore observeSpotlightPostingProgressWithOnPostingStart:onPostingComplete:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x106815ab8

// -[SCImpalaLocalStoryStore retrySpotlightUploadWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106815b20

// -[SCImpalaLocalStoryStore deleteFailedSpotlightUploadWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106815b7c

// -[SCImpalaLocalStoryStore _storyIdForSpotlightClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106815c90

// -[SCImpalaLocalStoryStore observeLivePublicStoryWithBusinessProfileId:onChange:onPending:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106815e90

// -[SCImpalaLocalStoryStore didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068163bc

// -[SCImpalaLocalStoryStore didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068164d8

// -[SCImpalaLocalStoryStore _handleQueriedStoryPlaybackSequence:storyId:clientId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106816d44

// -[SCImpalaLocalStoryStore _createThumbnailInfoForPlaybackInfo:clientId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106816e50

// -[SCImpalaLocalStoryStore _createFriendStoryThumbnailInfoForPlaybackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x106817040

// -[SCImpalaLocalStoryStore _createFriendStoryMediaInfoForPlaybackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068172ac

// -[SCImpalaLocalStoryStore _queryThumbnailForThumbnailInfo:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106817684

// -[SCImpalaLocalStoryStore _snapWithManagementInfo:businessProfileId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10681786c

// -[SCImpalaLocalStoryStore _enrichSequencesWithManagementInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x106817e28

// -[SCImpalaLocalStoryStore setupPlaybackSequencesObservation]
// Type encoding: v16@0:8
// Implementation: 0x1068180ec

// -[SCImpalaLocalStoryStore _setupPlaybackSequencesObservationOnQueue]
// Type encoding: v16@0:8
// Implementation: 0x106818144

// -[SCImpalaLocalStoryStore setupPlaybackSequencesObservationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1068181d4

// -[SCImpalaLocalStoryStore _setupPlaybackSequencesObservationIfNeededOnQueue]
// Type encoding: v16@0:8
// Implementation: 0x10681822c

// -[SCImpalaLocalStoryStore setupOwnedStoryStateObservation]
// Type encoding: v16@0:8
// Implementation: 0x106818698

// -[SCImpalaLocalStoryStore _setupOwnedStoryStateObservationOnQueue]
// Type encoding: v16@0:8
// Implementation: 0x1068186f0

// -[SCImpalaLocalStoryStore setupOwnedStoryStateObservationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106818904

// -[SCImpalaLocalStoryStore _setupOwnedStoryStateObservationIfNeededOnQueue]
// Type encoding: v16@0:8
// Implementation: 0x10681895c

// -[SCImpalaLocalStoryStore emitOwnedStoryStateForSequences:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068189a4

// -[SCImpalaLocalStoryStore emitOwnedStoryStateForOrderedSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068189e0

// -[SCImpalaLocalStoryStore _thumbnailOrderedSnapsFromPlaybackSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106818ef8

// -[SCImpalaLocalStoryStore _friendSnapsFromOrderedSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068192b0

// -[SCImpalaLocalStoryStore _isPublicStorySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x106819414

// -[SCImpalaLocalStoryStore _queryStoryUnviewedForSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106819538

// -[SCImpalaLocalStoryStore _storyIdentifierForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106819850

// -[SCImpalaLocalStoryStore _queryStoryUnviewedBySnapForSnaps:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068198d4

// -[SCImpalaLocalStoryStore _emitOwnedStoryStateForFriendThumbnailSnap:topOwnedSnap:orderedSnaps:pendingCount:topThumbnailAsset:unviewedBySnapIdentifier:anyStoryUnviewed:friendStoryUnviewed:friendStoryPostingFailed:stackVersion:]
// Type encoding: v84@0:8@16@24@32Q40@48@56B64B68B72Q76
// Implementation: 0x106819cb0

// -[SCImpalaLocalStoryStore _ownedStorySnapModelsFromSnaps:topThumbnailAsset:unviewedBySnapIdentifier:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106819f48

// -[SCImpalaLocalStoryStore _orderedSnapsFromSequences:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681a360

// -[SCImpalaLocalStoryStore _isFailedSnapWithClientId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10681a520

// -[SCImpalaLocalStoryStore refreshOwnedStoryState]
// Type encoding: v16@0:8
// Implementation: 0x10681a5a4

// -[SCImpalaLocalStoryStore consumeJoinedOwnedStoryPlaybackInfos:publicSourceSettledEmpty:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10681a620

// -[SCImpalaLocalStoryStore bindOwnedStoryJoinedStateFrom:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681a734

// -[SCImpalaLocalStoryStore _emptyOwnedStoryState]
// Type encoding: @16@0:8
// Implementation: 0x10681a84c

// -[SCImpalaLocalStoryStore _latestSnapFromSequences:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681a904

// -[SCImpalaLocalStoryStore _sequencesByRemovingSnapWithComponentId:fromSequences:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10681ab1c

// -[SCImpalaLocalStoryStore _pendingSnapCountFromSequences:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10681ae88

// -[SCImpalaLocalStoryStore _pendingSnapCountFromSnaps:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10681aed0

// -[SCImpalaLocalStoryStore _hasFailedSnapInSnaps:]
// Type encoding: B24@0:8@16
// Implementation: 0x10681b00c

// -[SCImpalaLocalStoryStore _encryptedThumbnailForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681b150

// -[SCImpalaLocalStoryStore _queryThumbnailAssetForSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10681b440

// -[SCImpalaLocalStoryStore emitSnapshotForSequences:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681b650

// -[SCImpalaLocalStoryStore _shouldFetchSnapshotThumbnailForSnap:fromSequence:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10681bb1c

// -[SCImpalaLocalStoryStore emitSpotlightSnapshot]
// Type encoding: v16@0:8
// Implementation: 0x10681bbac

// -[SCImpalaLocalStoryStore emitCurrentPlaybackSnapshot]
// Type encoding: v16@0:8
// Implementation: 0x10681bc6c

// -[SCImpalaLocalStoryStore emitSnapshotForSequence:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681bcf8

// -[SCImpalaLocalStoryStore enrichItemsWithThumbnails:snaps:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10681c40c

// -[SCImpalaLocalStoryStore isSnapPending:]
// Type encoding: B24@0:8@16
// Implementation: 0x10681c774

// -[SCImpalaLocalStoryStore isSnapPending:isSpotlight:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x10681c77c

// -[SCImpalaLocalStoryStore _isFailedPostingState:]
// Type encoding: B24@0:8q16
// Implementation: 0x10681c96c

// -[SCImpalaLocalStoryStore _uploadErrorForClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681c988

// -[SCImpalaLocalStoryStore _scheduleFailureGraceReemitForClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681cabc

// -[SCImpalaLocalStoryStore extractItemsFromSequences:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681cc00

// -[SCImpalaLocalStoryStore _shouldEmitJoinedOwnedStorySequenceItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x10681cf04

// -[SCImpalaLocalStoryStore mapSequenceToJoinedItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681d0f0

// -[SCImpalaLocalStoryStore mapSnapToItem:fromSequence:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10681d240

// -[SCImpalaLocalStoryStore mapSequenceToStoryType:snap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10681d8c8

// -[SCImpalaLocalStoryStore _storySnapshotEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10681d9d4

// -[SCImpalaLocalStoryStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x10681da10

// -[SCImpalaLocalStoryStore emptySnapshotObservable]
// Type encoding: @16@0:8
// Implementation: 0x10681da1c

// -[SCImpalaLocalStoryStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10681dad4

@end
