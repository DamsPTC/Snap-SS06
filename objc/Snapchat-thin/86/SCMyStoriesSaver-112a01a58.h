// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMyStoriesSaver
// Superclass: NSObject
// Address: 0x112a01a58

@interface SCMyStoriesSaver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMyStoriesSaver initWithUserSession:galleryStorySaver:myStoriesDataCoordinator:storiesMediaCoordinator:readReceiptCoordinator:storiesBlizzardLogger:circumstanceEngine:customStoriesDataFetcher:lazyBackgroundTaskWrapper:lazyActiveVideoPaths:discoverFeedDataFetcher:snapchattersSynchronousDataFetcher:grapheneMetricsEmitter:featureSettingsService:memoriesStoryMutator:grapheneRegistry:userBlizzardLogger:watermarkGenerator:genAIDreamsService:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x104e50200

// -[SCMyStoriesSaver saveStorySnapWithClientId:storyId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e506cc

// -[SCMyStoriesSaver saveStoryWithStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e508ac

// -[SCMyStoriesSaver saveEntireSnapProStoryWithStoryId:snapPlaybackInfosOverride:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e50a60

// -[SCMyStoriesSaver saveSnapProStoryWithStoryId:clientId:snapPlaybackInfoOverride:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104e50ea8

// -[SCMyStoriesSaver saveOurStoryWithPlaybackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e51154

// -[SCMyStoriesSaver _saveOurStoryWithPlaybackInfo:saveUpdateSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e51280

// -[SCMyStoriesSaver isSavingMyStoriesForStoryId:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e516f4

// -[SCMyStoriesSaver handleStartSavingStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e516fc

// -[SCMyStoriesSaver handleSavedStoryId:storyDisplayName:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e518b4

// -[SCMyStoriesSaver _saveStoryWithStoryId:playbackSequence:saveUpdateSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e51a64

// -[SCMyStoriesSaver _saveStorySnapWithClientId:storyId:playbackSequence:saveUpdateSubject:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104e51dbc

// -[SCMyStoriesSaver _saveStorySnap:storyId:saveUpdateSubject:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104e52350

// -[SCMyStoriesSaver _saveStorySnap:storyId:saveUpdateSubject:prefetchedMediaData:forceSkipMemories:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x104e5235c

// -[SCMyStoriesSaver _shouldAttachGenAIWatermark:]
// Type encoding: B24@0:8@16
// Implementation: 0x104e5382c

// -[SCMyStoriesSaver _fetchImageForSnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104e53938

// -[SCMyStoriesSaver _exportVideoToUrlForSnap:storyId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104e53b0c

// -[SCMyStoriesSaver _onFetchImageFailureWithSavingLoggerSessionId:saveUpdateSubject:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e54468

// -[SCMyStoriesSaver _onSaveImageToCameraRollWithStoryId:snapComponentId:savingLoggerSessionId:storySnap:error:saveUpdateSubject:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x104e5454c

// -[SCMyStoriesSaver _onExportVideoWithUrl:error:storyId:snapComponentId:savingLoggerSessionId:storySnap:showOutOfSpacePrompt:saveUpdateSubject:]
// Type encoding: v76@0:8@16@24@32@40@48@56B64@68
// Implementation: 0x104e54610

// -[SCMyStoriesSaver _onExportVideoSuccessWithUrl:storyId:snapComponentId:savingLoggerSessionId:storySnap:saveUpdateSubject:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x104e547a4

// -[SCMyStoriesSaver _onSaveVideoToCameraRollWithUrl:storyId:snapComponentId:savingLoggerSessionId:storySnap:error:saveUpdateSubject:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104e54b1c

// -[SCMyStoriesSaver _onExportVideoFailureWithError:storyId:snapComponentId:savingLoggerSessionId:showOutOfSpacePrompt:saveUpdateSubject:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x104e54c3c

// -[SCMyStoriesSaver _onSaveToCameraRollCompleteWithStoryId:snapComponentId:storySnap:error:isVideo:videoDuration:saveUpdateSubject:]
// Type encoding: v68@0:8@16@24@32@40B48d52@60
// Implementation: 0x104e54d0c

// -[SCMyStoriesSaver _onSaveCompleteWithStoryId:snapComponentId:storySnap:saveSuccess:saveToCameraRoll:saveToMemories:showOutOfSpacePrompt:saveUpdateSubject:]
// Type encoding: v64@0:8@16@24@32B40B44B48B52@56
// Implementation: 0x104e54e04

// -[SCMyStoriesSaver _reportSaveIfNecessaryForStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104e55238

// -[SCMyStoriesSaver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e553a0

@end
