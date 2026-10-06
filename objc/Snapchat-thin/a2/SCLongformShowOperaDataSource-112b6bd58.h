// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLongformShowOperaDataSource
// Superclass: NSObject
// Address: 0x112b6bd58

@interface SCLongformShowOperaDataSource

// Property: delegate; attributes: T@"<SCLongformShowOperaDataSourceDelegate>",W,N,V_delegate
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaViewController; attributes: T@"SCOperaViewController",W,N,V_operaViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLongformShowOperaDataSource initWithUserSession:storySessionId:mediaManager:bitmojiImageFetcher:discoverFeedDataFetcher:discoverFeedEventsController:viewLocation:snapDocConfigurer:publisherPagePropertiesManager:operaNavigationStyle:commerceSessionBuilder:impalaViewControllerBuilder:circumstanceEngine:readReceiptCoordinator:creatorSettingsFetcher:creatorSettingsMutator:creatorSettingsTracker:longformMediaPrefetcher:cameraAttachmentOperaPageResolver:impalaOperaLayerViewControllerProviderCreator:discoverBlizzardLogger:streamingURLProvider:lazyUserTrackedLogger:contentObjectResolver:offPlatformLinkGenerationService:spotlightDataFetcher:storiesConfigProvider:snapchatterObservableRepository:subscriptionStore:]
// Type encoding: @248@0:8@16@24@32@40@48@56q64@72@80q88^?96@?104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240
// Implementation: 0x107a42418

// -[SCLongformShowOperaDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x107a42ad0

// -[SCLongformShowOperaDataSource setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a42ad8

// -[SCLongformShowOperaDataSource registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107a42b54

// -[SCLongformShowOperaDataSource operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a42bc4

// -[SCLongformShowOperaDataSource _updateViewLocationIfNeeded:withPage:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107a42c64

// -[SCLongformShowOperaDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107a42d1c

// -[SCLongformShowOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a42d98

// -[SCLongformShowOperaDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a42e60

// -[SCLongformShowOperaDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a42f4c

// -[SCLongformShowOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a42fe4

// -[SCLongformShowOperaDataSource _lastViewedIntervalForSnap:show:cachedWatchState:editionId:]
// Type encoding: {?=@B}48@0:8@16@24@32@40
// Implementation: 0x107a434bc

// -[SCLongformShowOperaDataSource _pagePropertiesForLongformSnap:completion:editionId:uniqueIdentifier:show:shouldEnableCommentsOnStory:]
// Type encoding: v60@0:8@16@?24@32@40@48B56
// Implementation: 0x107a4376c

// -[SCLongformShowOperaDataSource _pagePropertiesForPremiumPublisherSnap:completion:editionId:uniqueIdentifier:dataSource:]
// Type encoding: v56@0:8@16@?24@32@40@48
// Implementation: 0x107a43e4c

// -[SCLongformShowOperaDataSource _pagesPropertiesForSnapPlayableDataModel:completion:mediaIsLoaded:mediaIsLoading:fullSnapDocDataModel:dataSource:isLongformShowSubscriptionSnap:]
// Type encoding: v60@0:8@16@?24B32B36@40@48B56
// Implementation: 0x107a44034

// -[SCLongformShowOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107a44550

// -[SCLongformShowOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4461c

// -[SCLongformShowOperaDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a44620

// -[SCLongformShowOperaDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a44670

// -[SCLongformShowOperaDataSource _showDataSourceForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a44774

// -[SCLongformShowOperaDataSource _longformShowOperaGroupIdForPage:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a44938

// -[SCLongformShowOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a449d4

// -[SCLongformShowOperaDataSource didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107a44b10

// -[SCLongformShowOperaDataSource _handleReadReceiptUpdateForDedupFp:editionId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107a44c2c

// -[SCLongformShowOperaDataSource _updateWithWatchState:uniqueIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a44f50

// -[SCLongformShowOperaDataSource _groupIdsFromOperaPlaylist]
// Type encoding: @16@0:8
// Implementation: 0x107a44fe0

// -[SCLongformShowOperaDataSource prefetchRequestFromPlaylistItem:prefetchSignals:importance:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107a4515c

// -[SCLongformShowOperaDataSource startPrefetchForPlaylistItem:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107a45164

// -[SCLongformShowOperaDataSource prefetchRequestForPlaylistItem:requestImportance:trigger:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x107a451cc

// -[SCLongformShowOperaDataSource generateHLSPrefetchRequestForForGroup:requestImportance:trigger:completion:completionQueue:]
// Type encoding: v56@0:8@16q24q32@?40@48
// Implementation: 0x107a45258

// -[SCLongformShowOperaDataSource _prefetchRequestForStoryId:requestImportance:trigger:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x107a45378

// -[SCLongformShowOperaDataSource _cancelQueuedRequestForSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a45464

// -[SCLongformShowOperaDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x107a45564

// -[SCLongformShowOperaDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a4557c

// -[SCLongformShowOperaDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107a45588

// -[SCLongformShowOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a455a0

// -[SCLongformShowOperaDataSource operaViewController]
// Type encoding: @16@0:8
// Implementation: 0x107a455ac

// -[SCLongformShowOperaDataSource setOperaViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a455c4

// -[SCLongformShowOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a455d0

@end
