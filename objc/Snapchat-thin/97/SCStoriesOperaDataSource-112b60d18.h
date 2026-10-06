// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesOperaDataSource
// Superclass: NSObject
// Address: 0x112b60d18

@interface SCStoriesOperaDataSource

// Property: storiesMediaManager; attributes: T@"SCStoriesOperaMediaManager",R,N,V_storiesMediaManager
// Property: viewModelConnectionsCallbackController; attributes: T@"<SCOperaPageViewModelConnectionsCallbackControlling>",W,N,V_viewModelConnectionsCallbackController
// Property: enableCriticalModeWhenLoading; attributes: TB,R,N,V_enableCriticalModeWhenLoading
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: showViewersTable; attributes: TB,N,V_showViewersTable
// Property: viewingType; attributes: Tq,N,V_viewingType
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncing
// Property: fanPassUpsellPlaylistFiltering; attributes: T@"<SCFanPassUpsellPlaylistFiltering>",W,N,V_fanPassUpsellPlaylistFiltering
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesOperaDataSource initWithViewingType:userSession:storiesPlaybackDataProvider:storiesMediaCoordinator:viewLocation:playSingleSnap:isJoinedPlayback:initialClientId:type:customStoriesDataFetcher:snapchatterFetcher:snapchatterPublicInfoFetcher:snapchattersSynchronousDataFetcher:shakePromptHelper:debugViewer:storiesCachedSummaryInfoProvider:readReceiptCoordinator:circumstanceEngine:firstStoryId:impalaLegacyServices:networkConnectivityMonitor:lazyEventsController:lazyDataFetcher:grapheneMetricsEmitter:grapheneRegistry:musicContentRestrictionServices:imageDownloader:snapchatterUserInfoProvider:playbackAssetRepository:crashLogger:offPlatformLinkGenerationService:storiesConfigProvider:profilesProvider:spotlightDataFetcher:p2pOptions:pageType:snapchatterObservableRepository:subscriptionsInfoProvider:creatorInfoProvider:]
// Type encoding: @320@0:8q16@24@32@40q48B56B60@64@72@80@88@96@104^?112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280q288@296@304@312
// Implementation: 0x107229f20

// -[SCStoriesOperaDataSource updateStoryIdsList:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722a87c

// -[SCStoriesOperaDataSource requestCallbackWhenViewModelConnectionIsStable:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10722ac3c

// -[SCStoriesOperaDataSource _friendStoriesDataSourceForStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722acb0

// -[SCStoriesOperaDataSource mediaManager]
// Type encoding: @16@0:8
// Implementation: 0x10722b194

// -[SCStoriesOperaDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x10722b1bc

// -[SCStoriesOperaDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722b1f0

// -[SCStoriesOperaDataSource _resolveDataModelToPlaylistItemGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722b32c

// -[SCStoriesOperaDataSource _isCameoStory:]
// Type encoding: B24@0:8@16
// Implementation: 0x10722b6b8

// -[SCStoriesOperaDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x10722b9a0

// -[SCStoriesOperaDataSource operaMediaBundleProvider]
// Type encoding: @16@0:8
// Implementation: 0x10722b9a8

// -[SCStoriesOperaDataSource canProvideMediaBundleForPlaylistItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x10722b9d8

// -[SCStoriesOperaDataSource mediaBundleFromPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722ba98

// -[SCStoriesOperaDataSource prefetchAmount]
// Type encoding: Q16@0:8
// Implementation: 0x10722bd24

// -[SCStoriesOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x10722bda4

// -[SCStoriesOperaDataSource generatePrefetchRequestsForGroup:startPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:]
// Type encoding: v72@0:8@16@24@32@40Q48@?56@64
// Implementation: 0x10722c008

// -[SCStoriesOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722c1c0

// -[SCStoriesOperaDataSource _friendStoriesDataSourceForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722c250

// -[SCStoriesOperaDataSource reloadGroupWithID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722c644

// -[SCStoriesOperaDataSource refreshGroupFromLocalCacheWithID:dataProvider:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10722c724

// -[SCStoriesOperaDataSource appendGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722c878

// -[SCStoriesOperaDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722c9b8

// -[SCStoriesOperaDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722c9bc

// -[SCStoriesOperaDataSource _shouldEnableContentDescriptorZipForPlaybackSequence:]
// Type encoding: B24@0:8@16
// Implementation: 0x10722ca10

// -[SCStoriesOperaDataSource _storyPlaybackSequenceForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722caa8

// -[SCStoriesOperaDataSource _userStoryOperaGroupIdForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722cdec

// -[SCStoriesOperaDataSource _storySnapForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10722cec0

// -[SCStoriesOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10722cf64

// -[SCStoriesOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10722d020

// -[SCStoriesOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x10722d144

// -[SCStoriesOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722d20c

// -[SCStoriesOperaDataSource setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722d2a4

// -[SCStoriesOperaDataSource registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x10722d338

// -[SCStoriesOperaDataSource operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10722d56c

// -[SCStoriesOperaDataSource _updateViewLocationIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10722e36c

// -[SCStoriesOperaDataSource storiesMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x10722e444

// -[SCStoriesOperaDataSource viewModelConnectionsCallbackController]
// Type encoding: @16@0:8
// Implementation: 0x10722e44c

// -[SCStoriesOperaDataSource setViewModelConnectionsCallbackController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722e464

// -[SCStoriesOperaDataSource enableCriticalModeWhenLoading]
// Type encoding: B16@0:8
// Implementation: 0x10722e470

// -[SCStoriesOperaDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x10722e478

// -[SCStoriesOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722e490

// -[SCStoriesOperaDataSource showViewersTable]
// Type encoding: B16@0:8
// Implementation: 0x10722e49c

// -[SCStoriesOperaDataSource setShowViewersTable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10722e4a4

// -[SCStoriesOperaDataSource viewingType]
// Type encoding: q16@0:8
// Implementation: 0x10722e4ac

// -[SCStoriesOperaDataSource setViewingType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10722e4b4

// -[SCStoriesOperaDataSource eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x10722e4bc

// -[SCStoriesOperaDataSource fanPassUpsellPlaylistFiltering]
// Type encoding: @16@0:8
// Implementation: 0x10722e4c4

// -[SCStoriesOperaDataSource setFanPassUpsellPlaylistFiltering:]
// Type encoding: v24@0:8@16
// Implementation: 0x10722e4dc

// -[SCStoriesOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10722e4e8

@end
