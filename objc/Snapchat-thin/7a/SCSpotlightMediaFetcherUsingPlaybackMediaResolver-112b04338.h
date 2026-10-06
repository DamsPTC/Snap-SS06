// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightMediaFetcherUsingPlaybackMediaResolver
// Superclass: NSObject
// Address: 0x112b04338

@interface SCSpotlightMediaFetcherUsingPlaybackMediaResolver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: storyMediaStates; attributes: T@"SCObservable",R,N
// Property: storiesBeingFetched; attributes: T@"SCObservable",R,N
// Property: supportedStoryTypes; attributes: T@"NSSet",R,C,N

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver initWithCircumstanceEngine:queue:feedType:discoverFeedDataFetcher:playbackMediaResolver:contentObjectResolver:readReceiptCoordinator:notificationCenter:]
// Type encoding: @80@0:8@16@24q32@40@48@56@64@72
// Implementation: 0x1068b2ab8

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver storyMediaStates]
// Type encoding: @16@0:8
// Implementation: 0x1068b2f98

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver storiesBeingFetched]
// Type encoding: @16@0:8
// Implementation: 0x1068b2fc0

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _resolveSupportedStoryTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068b2fe8

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver supportedStoryTypes]
// Type encoding: @16@0:8
// Implementation: 0x1068b3064

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver fetchMediaForSpotlightStory:userInitiated:highestImportanceMode:completePrefetch:contexts:batchId:trigger:completion:]
// Type encoding: v68@0:8@16B24B28B32@36@44q52@?60
// Implementation: 0x1068b306c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _fetchMediaForStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:completion:]
// Type encoding: v60@0:8@16B24B28B32@36q44@?52
// Implementation: 0x1068b38e4

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _initialize]
// Type encoding: v16@0:8
// Implementation: 0x1068b3d30

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _loadCachedStatesDictWithSavedStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b3e74

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _continueInitializationWithSavedStories:cacheMediaStateDict:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068b3fa4

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _emitCacheStatusMetricsForPhase:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b43fc

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _determineLaunchStateForStory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068b463c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _determineLaunchStateForSingleSnapStory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068b4704

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _installSCPlaybackMediaPrefetchStatusObservation]
// Type encoding: v16@0:8
// Implementation: 0x1068b48d0

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _parseIncomingStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b4a48

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068b4e94

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _hydrateMissingMediaIdentifiersFor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b504c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _updateResultStateForStatus:]
// Type encoding: q24@0:8@16
// Implementation: 0x1068b5200

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _storiesMediaInfoForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068b5480

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:]
// Type encoding: @52@0:8@16B24B28B32@36q44
// Implementation: 0x1068b5530

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForLFShow:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:]
// Type encoding: @52@0:8@16B24B28B32@36q44
// Implementation: 0x1068b5860

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForPublicUserStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:]
// Type encoding: @52@0:8@16B24B28B32@36q44
// Implementation: 0x1068b5d84

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _mediaResolutionRequestForSavedStory:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:]
// Type encoding: @52@0:8@16B24B28B32@36q44
// Implementation: 0x1068b5f48

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _singleMediaRequestsFromSnaps:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:snapsToFetch:]
// Type encoding: @60@0:8@16B24B28B32@36q44q52
// Implementation: 0x1068b6120

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _singleMediaRequestsFromMediaInfo:userInitiated:highestImportanceMode:completePrefetch:contexts:trigger:]
// Type encoding: @52@0:8@16B24B28B32@36q44
// Implementation: 0x1068b63dc

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _addStoryBeingFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b660c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _removeStoryBeingFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b6678

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _hydrateMediaIdentifierLookupFor:withRequest:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068b66e4

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _updateMediaStatesIfRequired:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b6874

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _updateMediaStatesIfRequired:forceUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068b687c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _loadStoryMediaStatesDict:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068b6a9c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _saveStoryMediaStatesDict]
// Type encoding: v16@0:8
// Implementation: 0x1068b6d48

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _onResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068b6f34

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _fileURLForFeedType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068b7024

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _isStorySingleSnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068b714c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _isStoryCameo:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068b719c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _logMediaFetchedWithTimeRequested:mediaState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1068b726c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _queueLabelForFeedType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1068b7370

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _queryStoriesForFeed:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x1068b73dc

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _finalizeQueryStoriesWithStories:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1068b755c

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver _feedTypeString]
// Type encoding: @16@0:8
// Implementation: 0x1068b7620

// -[SCSpotlightMediaFetcherUsingPlaybackMediaResolver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068b7674

@end
