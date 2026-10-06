// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoriesMashupStyleFeaturedStoryGenAIManager
// Superclass: NSObject
// Address: 0x112a74f08

@interface SCMemoriesMashupStyleFeaturedStoryGenAIManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager initWithMemoriesMashupSnapDocFactory:cloudFSService:snapDocEditorFactory:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesProfile:memoriesDataObjectContext:memoriesFeaturedStoryDataMutator:grapheneRegistry:encryptedContentManager:snapDocDownloadingService:snapRenderer:circumstanceEngine:notificationPool:coordinator:docObjectContext:memoriesEncryptedDatabase:memoriesUserDefaultsManager:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x105897db4

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateMashupStyleFeaturedStoriesForNewCollectionsIfNecessaryWithServerRespondedCollections:allCollectionIds:context:origin:shouldEnableFailureCap:]
// Type encoding: @52@0:8@16@24Q32Q40B48
// Implementation: 0x10589826c

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateMashupForGalleryEntry:memoriesMashupModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105898578

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateMashupForGallerySnaps:collageCreativeTools:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1058985d8

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager terminateFeaturedStoriesGenerationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105898638

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager featuredStoryGenerationDidComplete:generationResult:context:completionObserver:entrySource:collectionTitle:collectionCategory:]
// Type encoding: v72@0:8@16@24Q32@40q48@56q64
// Implementation: 0x105898640

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager generateFeaturedStoryWithLocalEntry:memoriesMashupStyleModel:memoriesServerGeneratedStoryModel:observer:collectionCategory:itemOrder:groupName:priority:]
// Type encoding: v80@0:8@16@24@32@40q48@56@64q72
// Implementation: 0x105898760

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _containsGenAILens:]
// Type encoding: B24@0:8@16
// Implementation: 0x105898dd8

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _validateServerGeneratedSnapDataModelIsGenAI:]
// Type encoding: B24@0:8@16
// Implementation: 0x105899040

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _allowToGenerateAISnapDataModel:forOrigin:collectionCategory:]
// Type encoding: B40@0:8@16Q24q32
// Implementation: 0x105899084

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _getBitMaskTypeFromCollectionCategory:]
// Type encoding: Q24@0:8q16
// Implementation: 0x1058992cc

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _terminateGenerationWithReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1058992f0

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _generateGenAIFeaturedStoriesIfNecessaryWithCollections:featuredStoriesToConvert:context:completionObserver:origin:]
// Type encoding: v56@0:8@16@24Q32@40Q48
// Implementation: 0x105899390

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _shouldKeepAddingCommand]
// Type encoding: B16@0:8
// Implementation: 0x105899bc4

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager subType]
// Type encoding: Q16@0:8
// Implementation: 0x105899bec

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _generateGenAIForFeaturedStory:orderedSelectedOriginalSnaps:genAIModel:collectionCategory:snapId:itemOrder:groupName:observer:]
// Type encoding: v80@0:8@16@24@32q40@48@56@64@72
// Implementation: 0x105899bf4

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _setupNonSupportedLensTimerWithLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10589a640

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _invalidateLensTimeoutTimer]
// Type encoding: v16@0:8
// Implementation: 0x10589a8bc

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _downloadAndPersistGenAiSnapDoc:genAiEntry:createdFromSnapIds:collectionCategory:snapId:itemOrder:groupName:observer:]
// Type encoding: v80@0:8@16@24@32q40@48@56@64@72
// Implementation: 0x10589a8f8

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _persistGenAiSnapDoc:genAiEntry:createdFromSnapIds:collectionCategory:snapId:itemOrder:groupName:observer:]
// Type encoding: v80@0:8@16@24@32q40@48@56@64@72
// Implementation: 0x10589ac50

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _categoryTypeRequestOriginalSnap:]
// Type encoding: B24@0:8q16
// Implementation: 0x10589ade8

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _resetTerminationReasonIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10589adf4

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager _getGrapheneLoggingTypeFromCategoryType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10589ae08

// -[SCMemoriesMashupStyleFeaturedStoryGenAIManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10589ae30

@end
