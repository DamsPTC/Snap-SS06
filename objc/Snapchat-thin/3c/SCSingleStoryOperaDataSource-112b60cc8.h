// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleStoryOperaDataSource
// Superclass: NSObject
// Address: 0x112b60cc8

@interface SCSingleStoryOperaDataSource

// Property: rootViewModel; attributes: T@"SCOperaPageViewModel",R,N,V_rootViewModel
// Property: lastViewModel; attributes: T@"SCOperaPageViewModel",R,N,V_lastViewModel
// Property: generatedViewModels; attributes: T@"NSMutableArray",&,N,V_generatedViewModels
// Property: delegate; attributes: T@"<SCSingleStoryOperaDataSourceDelegate>",W,N,V_delegate
// Property: storiesPlaybackSequence; attributes: T@"SCStoriesOperaPlaybackSequence",&,N,V_storiesPlaybackSequence
// Property: fanPassUpsellPlaylistFiltering; attributes: T@"<SCFanPassUpsellPlaylistFiltering>",W,N,V_fanPassUpsellPlaylistFiltering
// Property: storiesMediaManager; attributes: T@"SCStoriesOperaMediaManager",&,N,V_storiesMediaManager
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleStoryOperaDataSource initWithStoriesPlaybackSequence:viewingType:initialClientId:storiesMediaCoordinator:storiesMediaFetcher:userSession:viewLocation:viewLocationPos:isJoinedPlayback:chromeAvatarProvider:type:customStoriesDataFetcher:snapchatterFetcher:snapchatterPublicInfoFetcher:snapchattersSynchronousDataFetcher:debugViewer:readReceiptCoordinator:impalaLegacyServices:lazyEventsController:circumstanceEngine:lazyDataFetcher:grapheneMetricsEmitter:musicContentRestrictionServices:snapchatterUserInfoProvider:storyAvailability:crashLogger:offPlatformLinkGenerationService:enableSingleSnapPlayer:enableSingleSnapPlayerForImages:enableOperaBuiltInMediaResolver:storiesConfigProvider:profilesProvider:spotlightDataFetcher:p2pOptions:pageType:snapchatterObservableRepository:subscriptionsInfoProvider:creatorInfoProvider:]
// Type encoding: @304@0:8@16q24@32@40@48@56q64q72B80@84@92@100@108@116@124@132@140@148@156@164@172@180@188@196Q204@212@220B228B232B236@240@248@256@264q272@280@288@296
// Implementation: 0x1072223ac

// -[SCSingleStoryOperaDataSource updateViewLocation:andViewLocationPos:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107222ce8

// -[SCSingleStoryOperaDataSource disableAutoProgressingForSnap:isNext:isCurrent:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107222cf0

// -[SCSingleStoryOperaDataSource resetAutoProgression]
// Type encoding: v16@0:8
// Implementation: 0x107222df0

// -[SCSingleStoryOperaDataSource _configurationWithStoriesPlaybackSequence:viewLocation:storyAvailability:circumstanceEngine:]
// Type encoding: @48@0:8@16q24Q32@40
// Implementation: 0x107222f24

// -[SCSingleStoryOperaDataSource skipStorySnap:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1072231b8

// -[SCSingleStoryOperaDataSource _handleSkipStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072232c0

// -[SCSingleStoryOperaDataSource _updatePagePropertiesForStorySnap:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1072235f4

// -[SCSingleStoryOperaDataSource _removeStorySnapFromStoriesViewingOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107223728

// -[SCSingleStoryOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10722385c

// -[SCSingleStoryOperaDataSource _prefetchRequestFromSnapPlaybackMetadata:prefetchSignals:importance:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x1072238ec

// -[SCSingleStoryOperaDataSource prefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x107224368

// -[SCSingleStoryOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107224624

// -[SCSingleStoryOperaDataSource _shouldSkipFanPassPlaceholdersForSnaps:groupId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107224d70

// -[SCSingleStoryOperaDataSource _shouldFilterFanPassPlaceholdersForSnaps:mutator:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107224f7c

// -[SCSingleStoryOperaDataSource _specificSnapForClientId:inSnaps:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1072250e4

// -[SCSingleStoryOperaDataSource _firstStorySnapToDisplayForOperaPlaylist]
// Type encoding: @16@0:8
// Implementation: 0x107225298

// -[SCSingleStoryOperaDataSource _playlistItemIdForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072257ec

// -[SCSingleStoryOperaDataSource storySnapForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072257f4

// -[SCSingleStoryOperaDataSource teardownStoryForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107225848

// -[SCSingleStoryOperaDataSource _isOperaBuiltInMediaResolverEnabledForDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x107225888

// -[SCSingleStoryOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107225980

// -[SCSingleStoryOperaDataSource _completePageDataForStorySnap:didUpdateCurrentStorySnap:fanPassDisplayName:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x107226018

// -[SCSingleStoryOperaDataSource _getDiscoverFeedStoryForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107226198

// -[SCSingleStoryOperaDataSource _discoverFeedFriendOfGroupDisplayNameForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072262b8

// -[SCSingleStoryOperaDataSource _cacheFriendOfGroupFeedDisplayNameForStorySnapIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072263e8

// -[SCSingleStoryOperaDataSource _friendOfGroupFeedDisplayNameForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072264f0

// -[SCSingleStoryOperaDataSource _pagesPropertiesForStorySnap:fanPassDisplayName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1072265cc

// -[SCSingleStoryOperaDataSource _cacheContextParamsIfPresent:forStorySnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107226a64

// -[SCSingleStoryOperaDataSource _addOperaSnapPlaybackFeatureAttributionsForStorySnap:properties:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107226b5c

// -[SCSingleStoryOperaDataSource _nonMediaPagePropertiesForStorySnap:fanPassDisplayName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107226c38

// -[SCSingleStoryOperaDataSource _addSingleSnapPlayerAudioTranscriptionSubtitlePropertiesForStorySnap:properties:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1072271dc

// -[SCSingleStoryOperaDataSource _addSingleSnapPlayerPropertiesForStorySnap:snapHasTimeAdPlacements:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x1072273a8

// -[SCSingleStoryOperaDataSource _completeOnMainThread:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107227570

// -[SCSingleStoryOperaDataSource _createOperaItemAttributionInfoForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072276e0

// -[SCSingleStoryOperaDataSource extraPropertiesForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107227b60

// -[SCSingleStoryOperaDataSource mediaLoadDidFailFor:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107227fe8

// -[SCSingleStoryOperaDataSource reloadMediaFor:]
// Type encoding: v24@0:8@16
// Implementation: 0x107228050

// -[SCSingleStoryOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1072281e4

// -[SCSingleStoryOperaDataSource _handleDownloadedMediaWithStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107228278

// -[SCSingleStoryOperaDataSource _updatePlaylistItemWithStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107228518

// -[SCSingleStoryOperaDataSource _prepareMediaForStorySnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107228594

// -[SCSingleStoryOperaDataSource _nextStorySnapAfterStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107228c58

// -[SCSingleStoryOperaDataSource _prevStorySnapBeforeStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107228df0

// -[SCSingleStoryOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107228f40

// -[SCSingleStoryOperaDataSource _removeOutdatedPagePropertiesForStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107228fd8

// -[SCSingleStoryOperaDataSource didUpdateMediaStateChangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722901c

// -[SCSingleStoryOperaDataSource didUpdateMediaStateIdempotencyRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722912c

// -[SCSingleStoryOperaDataSource _handleMediaStateChangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722923c

// -[SCSingleStoryOperaDataSource _handleMediaStateIdempotencyChangeRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229510

// -[SCSingleStoryOperaDataSource _componentIdFromClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072296bc

// -[SCSingleStoryOperaDataSource _shouldRegeneratePagePropertiesForStorySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x10722974c

// -[SCSingleStoryOperaDataSource _pagePropertiesForError:]
// Type encoding: @24@0:8@16
// Implementation: 0x1072298fc

// -[SCSingleStoryOperaDataSource rootViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107229b50

// -[SCSingleStoryOperaDataSource lastViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107229b58

// -[SCSingleStoryOperaDataSource generatedViewModels]
// Type encoding: @16@0:8
// Implementation: 0x107229b60

// -[SCSingleStoryOperaDataSource setGeneratedViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229b68

// -[SCSingleStoryOperaDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x107229b98

// -[SCSingleStoryOperaDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229bb0

// -[SCSingleStoryOperaDataSource storiesPlaybackSequence]
// Type encoding: @16@0:8
// Implementation: 0x107229bbc

// -[SCSingleStoryOperaDataSource setStoriesPlaybackSequence:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229bc4

// -[SCSingleStoryOperaDataSource fanPassUpsellPlaylistFiltering]
// Type encoding: @16@0:8
// Implementation: 0x107229bf4

// -[SCSingleStoryOperaDataSource setFanPassUpsellPlaylistFiltering:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229c0c

// -[SCSingleStoryOperaDataSource storiesMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x107229c18

// -[SCSingleStoryOperaDataSource setStoriesMediaManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229c20

// -[SCSingleStoryOperaDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107229c50

// -[SCSingleStoryOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107229c68

// -[SCSingleStoryOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107229c74

// +[SCSingleStoryOperaDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1072223a0

@end
