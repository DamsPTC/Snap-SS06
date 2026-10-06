// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesCRFeaturedStoryManager
// Superclass: NSObject
// Address: 0x112a74918

@interface SCMemoriesCRFeaturedStoryManager


// -[SCMemoriesCRFeaturedStoryManager initWithMemoriesCRFeaturedStoryDataSource:photoPermissionCoordinator:coreConfigProvider:featureSettingsService:userId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105886c28

// -[SCMemoriesCRFeaturedStoryManager initWithPhotoPermissionCoordinator:coreConfigProvider:memoriesExperimentService:grapheneRegistry:docObjectContext:featureSettingsService:screenshopPersistenceService:applicationLifecycleEvents:memoriesCRFeaturedStoryNetworkCoordinator:userBlizzard:userId:transactorProvider:circumstanceEngine:memoriesUserDefaultsManager:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x105881fc0

// -[SCMemoriesCRFeaturedStoryManager observeAllCRFeaturedStories]
// Type encoding: @16@0:8
// Implementation: 0x105882460

// -[SCMemoriesCRFeaturedStoryManager _observeCRFeaturedStoryWithType:isInForeground:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x105882744

// -[SCMemoriesCRFeaturedStoryManager _observeCRFeaturedStoryFromPhotoLibraryWithType:featuredStoryId:activationDate:referenceDate:isInForeground:]
// Type encoding: @52@0:8Q16@24@32@40B48
// Implementation: 0x105882bc4

// -[SCMemoriesCRFeaturedStoryManager setAssetIdViewed:featuredStoryId:playbackItemIndex:isFromSnapFeed:viewedSnapLevelItemIdsInCurrentStory:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x1058835d0

// -[SCMemoriesCRFeaturedStoryManager setCRFeaturedStorySeenInCarouselWithFeaturedStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105883aa0

// -[SCMemoriesCRFeaturedStoryManager setCRFeaturedStoryToBeHiddenWithFeaturedStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105883c58

// -[SCMemoriesCRFeaturedStoryManager resetViewProgressForFeaturedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x105883e10

// -[SCMemoriesCRFeaturedStoryManager _resetCRFeaturedStoryViewProgressInLocalStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x105884038

// -[SCMemoriesCRFeaturedStoryManager _localStatesObservableForCRFeaturedStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10588418c

// -[SCMemoriesCRFeaturedStoryManager _addLocalStatesObservableForFeaturedStoryId:observable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105884204

// -[SCMemoriesCRFeaturedStoryManager _createFinalCRFeaturedStoryWithLatestStates:memoriesCRFeaturedStoryType:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x105884280

// -[SCMemoriesCRFeaturedStoryManager _createOrUpdateCRFeaturedStoriesInLocalDB:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105884890

// -[SCMemoriesCRFeaturedStoryManager _deleteAllExpiredCRFeaturedStoriesInLocalDB]
// Type encoding: @16@0:8
// Implementation: 0x105884ed8

// -[SCMemoriesCRFeaturedStoryManager _createCRFeaturedStoryObservables:]
// Type encoding: @20@0:8B16
// Implementation: 0x1058851f4

// -[SCMemoriesCRFeaturedStoryManager _observeAllCRFeaturedStories:]
// Type encoding: @20@0:8B16
// Implementation: 0x105885634

// -[SCMemoriesCRFeaturedStoryManager _isCRFeaturedStoryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105885bd0

// -[SCMemoriesCRFeaturedStoryManager onBackgroundSyncWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105885c7c

// -[SCMemoriesCRFeaturedStoryManager _onBackgroundSyncWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105885d18

// -[SCMemoriesCRFeaturedStoryManager _eligibleCRFeaturedStoriesForNextNumberOfDays:isInForeground:]
// Type encoding: @28@0:8Q16B24
// Implementation: 0x105886410

// -[SCMemoriesCRFeaturedStoryManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105886b38

@end
