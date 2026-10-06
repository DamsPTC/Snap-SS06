// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightMediaFetcher
// Superclass: NSObject
// Address: 0x112b04298

@interface SCSpotlightMediaFetcher

// Property: storyMediaStates; attributes: T@"SCObservable",R,N
// Property: storiesBeingFetched; attributes: T@"SCObservable",R,N
// Property: supportedStoryTypes; attributes: T@"NSSet",R,C,N

// -[SCSpotlightMediaFetcher initWithCircumstanceEngine:feedType:preferences:discoverFeedDataFetcher:storiesMediaCoordinator:playbackMediaPrefetcher:contentObjectResolver:notificationCenter:snapDocConfigurer:readReceiptCoordinator:spotlightUsageTracker:]
// Type encoding: @104@0:8@16q24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1068ae310

// -[SCSpotlightMediaFetcher storyMediaStates]
// Type encoding: @16@0:8
// Implementation: 0x1068ae7f4

// -[SCSpotlightMediaFetcher storiesBeingFetched]
// Type encoding: @16@0:8
// Implementation: 0x1068ae81c

// -[SCSpotlightMediaFetcher _resolveSupportedStoryTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068ae844

// -[SCSpotlightMediaFetcher supportedStoryTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068ae858

// -[SCSpotlightMediaFetcher fetchMediaForSpotlightStory:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:]
// Type encoding: v68@0:8@16B24B28B32@36@44q52@?60
// Implementation: 0x1068ae860

// -[SCSpotlightMediaFetcher _initialize]
// Type encoding: v16@0:8
// Implementation: 0x1068af034

// -[SCSpotlightMediaFetcher _continueInitializationWithSavedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068af2d8

// -[SCSpotlightMediaFetcher _continueInitializationWithLoadedDedupeFps:savedStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068af404

// -[SCSpotlightMediaFetcher _addStoryBeingFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068af880

// -[SCSpotlightMediaFetcher _removeStoryBeingFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068af8c0

// -[SCSpotlightMediaFetcher _saveStoryMediaStatesDict]
// Type encoding: v16@0:8
// Implementation: 0x1068af900

// -[SCSpotlightMediaFetcher _onResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068af964

// -[SCSpotlightMediaFetcher _updateMediaStateIfRequired:newSpotlightMediaState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1068af9c4

// -[SCSpotlightMediaFetcher _logMediaFetchedWithTimeRequested:mediaState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1068afab8

// -[SCSpotlightMediaFetcher _fetchMediaForStory:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:]
// Type encoding: v68@0:8@16B24B28B32@36@44q52@?60
// Implementation: 0x1068afbbc

// -[SCSpotlightMediaFetcher _fetchMediaForMediaInfo:dedupeFp:duration:isSpotlightSingleSnap:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:]
// Type encoding: v88@0:8@16@24d32B40B44B48B52@56@64q72@?80
// Implementation: 0x1068afd88

// -[SCSpotlightMediaFetcher _handleSingleSnapPrefetch:dedupeFp:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:]
// Type encoding: v76@0:8@16@24B32B36B40@44@52q60@?68
// Implementation: 0x1068afee4

// -[SCSpotlightMediaFetcher _handleLongformShowPrefetch:dedupeFp:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:completion:]
// Type encoding: v68@0:8@16@24B32B36B40@44q52@?60
// Implementation: 0x1068b036c

// -[SCSpotlightMediaFetcher _handlePublicUserStoryPrefetch:dedupeFp:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:]
// Type encoding: v76@0:8@16@24B32B36B40@44@52q60@?68
// Implementation: 0x1068b0804

// -[SCSpotlightMediaFetcher _retrieveLoadedDedupeFpsForStories:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068b0d94

// -[SCSpotlightMediaFetcher _loadInitialStateOfMediaInfoStories:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1068b1084

// -[SCSpotlightMediaFetcher _mediaInfosToCheckForStory:viewStatusDict:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1068b15e4

// -[SCSpotlightMediaFetcher _queueLabelForFeedType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068b19b4

// -[SCSpotlightMediaFetcher _mediaStateKeyForFeedType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068b1a28

// -[SCSpotlightMediaFetcher _feedTypeString]
// Type encoding: @16@0:8
// Implementation: 0x1068b1a9c

// -[SCSpotlightMediaFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068b1af0

@end
