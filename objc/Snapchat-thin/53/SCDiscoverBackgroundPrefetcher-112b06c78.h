// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverBackgroundPrefetcher
// Superclass: NSObject
// Address: 0x112b06c78

@interface SCDiscoverBackgroundPrefetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverBackgroundPrefetcher initWithQueryCoordinator:discoverFeedDataFetcher:discoverFeedDataMutator:sectionExtensionServices:userSession:circumstanceEngine:discoverFeedCollection:snapchattersSynchronousDataFetcher:bitmojiAvatarProvider:legacyMediaCache:imageFetchingService:storiesConfigProvider:bitmojiImageFetcher:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10692fbfc

// -[SCDiscoverBackgroundPrefetcher _handleBackgroundPrefetchMediaWithCompletionHandler:sectionExtensionServices:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10692feb0

// -[SCDiscoverBackgroundPrefetcher _loadDiscoverMetadataFromDiskOnPerformerWithComplete:completionHandler:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x1069301f4

// -[SCDiscoverBackgroundPrefetcher _loadDiscoverMetadataFromDiskComplete:completionHandler:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10693030c

// -[SCDiscoverBackgroundPrefetcher _loadDiscoverMetadataFromDiskComplete:sectionToPrefetchConfigMap:completionHandler:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x106930378

// -[SCDiscoverBackgroundPrefetcher _sendQueryForSectionToPrefetchConfigMap:isValid:dataLoaded:completionHandler:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x106930500

// -[SCDiscoverBackgroundPrefetcher _queryDiscoverResultsComplete:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10693074c

// -[SCDiscoverBackgroundPrefetcher _prefetchWithAllStories:sectionToPrefetchConfigMap:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069309a0

// -[SCDiscoverBackgroundPrefetcher _prefetchDiscoverMedia:feedType:storiesToPrefetch:numOfSnapsInAStory:maxNumOfSnapsInAStory:completionHandler:]
// Type encoding: v64@0:8@16@24@32Q40Q48@?56
// Implementation: 0x106930e10

// -[SCDiscoverBackgroundPrefetcher _prefetchDiscoverThumbnail:storiesToPrefetch:feedType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1069310f0

// -[SCDiscoverBackgroundPrefetcher _handleStoriesDownloadCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106931750

// -[SCDiscoverBackgroundPrefetcher _updateBackgroundFetchResult:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10693179c

// -[SCDiscoverBackgroundPrefetcher _doBackgroundPrefetchWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106931854

// -[SCDiscoverBackgroundPrefetcher dataSyncerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x106931984

// -[SCDiscoverBackgroundPrefetcher jobConfig]
// Type encoding: @16@0:8
// Implementation: 0x106931990

// -[SCDiscoverBackgroundPrefetcher submitOnRegister]
// Type encoding: B16@0:8
// Implementation: 0x106931a2c

// -[SCDiscoverBackgroundPrefetcher onSync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106931a34

// -[SCDiscoverBackgroundPrefetcher _handledBitmojiThumbnailPrefetch:feedType:discoverDownloadGroup:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106931b40

// -[SCDiscoverBackgroundPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106931f44

@end
