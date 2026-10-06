// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesFeaturedStoryDataMutator
// Superclass: NSObject
// Address: 0x112a74e18

@interface SCMemoriesFeaturedStoryDataMutator

// Property: delegate; attributes: T@"<SCMemoriesFeaturedStoryDataMutatorDelegate>",W,N,V_delegate
// Property: dataSource; attributes: T@"<SCMemoriesHighlightContentDataSource>",W,N,V_dataSource
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesFeaturedStoryDataMutator initWithMemoriesDataObjectContext:galleryLogger:memoriesCloudFS:snapDocManager:galleryEncryptedDatabase:encryptedContentManager:memoriesCachingMediaHelper:keyService:memoriesProfile:circumstanceEngine:memoriesExperimentService:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100b6c070

// -[SCMemoriesFeaturedStoryDataMutator featuredStoryDataSourceDidChange]
// Type encoding: v16@0:8
// Implementation: 0x10589212c

// -[SCMemoriesFeaturedStoryDataMutator deleteLocalTemporarySnaps:forEntry:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105892158

// -[SCMemoriesFeaturedStoryDataMutator deleteLocalTemporarySnap:forEntry:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105892564

// -[SCMemoriesFeaturedStoryDataMutator deleteLocalTemporaryEntry:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105892a08

// -[SCMemoriesFeaturedStoryDataMutator addSnapsEntities:toEntry:snapsOrder:mutationInfo:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105892f18

// -[SCMemoriesFeaturedStoryDataMutator createTemporaryEntryFromEntry:queue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1058938e0

// -[SCMemoriesFeaturedStoryDataMutator editFeaturedSnap:mediaData:rawMediaAssetCloudFile:originalSnapCloudFile:entry:duration:isInfiniteDuration:overlayFormat:overlay:snapAssets:assetMedias:completionHandler:]
// Type encoding: v108@0:8@16@24@32@40@48d56B64@68@76@84@92@?100
// Implementation: 0x105894a34

// -[SCMemoriesFeaturedStoryDataMutator updateTitleForTemporaryEntry:title:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105896134

// -[SCMemoriesFeaturedStoryDataMutator reorderTempEntry:reorderedSnaps:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105896670

// -[SCMemoriesFeaturedStoryDataMutator updateTitleForPlaceholderEntry:title:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105896c38

// -[SCMemoriesFeaturedStoryDataMutator updateFeaturedStoriesWithEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x105896cd0

// -[SCMemoriesFeaturedStoryDataMutator fetchMemoriesOperaFeaturedStoriesSnapForEntry:]
// Type encoding: @24@0:8@16
// Implementation: 0x105896d18

// -[SCMemoriesFeaturedStoryDataMutator addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105896d7c

// -[SCMemoriesFeaturedStoryDataMutator removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105896d84

// -[SCMemoriesFeaturedStoryDataMutator resetViewProgressForFeaturedStories:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105896d8c

// -[SCMemoriesFeaturedStoryDataMutator _removeMediaForSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1058970a0

// -[SCMemoriesFeaturedStoryDataMutator _performDeletionChangeRequestsForSnaps:entry:removeMedia:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1058971c0

// -[SCMemoriesFeaturedStoryDataMutator delegate]
// Type encoding: @16@0:8
// Implementation: 0x105897570

// -[SCMemoriesFeaturedStoryDataMutator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b88d64

// -[SCMemoriesFeaturedStoryDataMutator dataSource]
// Type encoding: @16@0:8
// Implementation: 0x105897588

// -[SCMemoriesFeaturedStoryDataMutator setDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b6c37c

// -[SCMemoriesFeaturedStoryDataMutator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1058975a0

@end
