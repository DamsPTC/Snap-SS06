// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverPublisherOperaDataSource
// Superclass: NSObject
// Address: 0x112b6ed28

@interface SCDiscoverPublisherOperaDataSource

// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncing
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverPublisherOperaDataSource initWithEnableAutoAdvance:loggingContext:snapDocConfigurer:discoverFeedDataFetcher:discoverFeedEventsController:pagePropertiesManager:cachedViewStateProvider:readReceiptCoordinator:viewLocation:circumstanceEngine:creatorSettingsFetcher:storiesConfigProvider:]
// Type encoding: @108@0:8B16@20@28@36@44@52@60@68q76@84@92@100
// Implementation: 0x107ab0d58

// -[SCDiscoverPublisherOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab0f88

// -[SCDiscoverPublisherOperaDataSource setLoggingContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab0f94

// -[SCDiscoverPublisherOperaDataSource _publisherStoryOperaGroupIdForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab0fa0

// -[SCDiscoverPublisherOperaDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ab103c

// -[SCDiscoverPublisherOperaDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab10c8

// -[SCDiscoverPublisherOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab11e8

// -[SCDiscoverPublisherOperaDataSource loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab1294

// -[SCDiscoverPublisherOperaDataSource _singleDiscoverPublisherOperaDataSourceForStoryPlayableId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab1320

// -[SCDiscoverPublisherOperaDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab1514

// -[SCDiscoverPublisherOperaDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab15d0

// -[SCDiscoverPublisherOperaDataSource setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab1654

// -[SCDiscoverPublisherOperaDataSource registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107ab16d0

// -[SCDiscoverPublisherOperaDataSource operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107ab189c

// -[SCDiscoverPublisherOperaDataSource _loadSubtitlesOnDemand]
// Type encoding: B16@0:8
// Implementation: 0x107ab1ff0

// -[SCDiscoverPublisherOperaDataSource _handleSubtitleStateUpdateIfNecessary:dSnapID:storyPlayableId:subtitleAsset:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107ab2038

// -[SCDiscoverPublisherOperaDataSource _updateViewLocationIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107ab2134

// -[SCDiscoverPublisherOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ab2204

// -[SCDiscoverPublisherOperaDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x107ab2310

// -[SCDiscoverPublisherOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107ab2318

// -[SCDiscoverPublisherOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab23f8

// -[SCDiscoverPublisherOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ab24a4

// -[SCDiscoverPublisherOperaDataSource _getDiscoverFeedStoryForPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab280c

// -[SCDiscoverPublisherOperaDataSource _createOperaItemAttributionInfoForPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab28e4

// -[SCDiscoverPublisherOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107ab2b84

// -[SCDiscoverPublisherOperaDataSource startPrefetchForPlaylistItem:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107ab2b8c

// -[SCDiscoverPublisherOperaDataSource generateSnapDocPrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:]
// Type encoding: v72@0:8@16@24@32@40Q48@?56@64
// Implementation: 0x107ab2bf4

// -[SCDiscoverPublisherOperaDataSource _dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab2d6c

// -[SCDiscoverPublisherOperaDataSource _cancelQueuedRequestForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab2e10

// -[SCDiscoverPublisherOperaDataSource eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x107ab2ea0

// -[SCDiscoverPublisherOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ab2ea8

// +[SCDiscoverPublisherOperaDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ab0d4c

@end
