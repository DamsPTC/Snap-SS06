// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleDiscoverPublisherOperaDataSource
// Superclass: NSObject
// Address: 0x112b6ed78

@interface SCSingleDiscoverPublisherOperaDataSource

// Property: storyPlayableDataModel; attributes: T@"SCDiscoverPublisherStoryPlayableDataModel",&,N,V_storyPlayableDataModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleDiscoverPublisherOperaDataSource initWithStoryPlayableDataModel:playlistItemController:snapDocConfigurer:discoverFeedDataFetcher:discoverFeedEventsController:pagePropertiesManager:cachedViewStateProvider:readReceiptCoordinator:viewLocation:creatorSettingsFetcher:circumstanceEngine:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72q80@88@96
// Implementation: 0x107ab2f70

// -[SCSingleDiscoverPublisherOperaDataSource updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ab3218

// -[SCSingleDiscoverPublisherOperaDataSource updateSubtitleAssetWithDSnapID:enabled:languageId:subtitleAsset:]
// Type encoding: v44@0:8@16B24@28@36
// Implementation: 0x107ab3250

// -[SCSingleDiscoverPublisherOperaDataSource _updateAssetKeyForDSnapIDIfNecessary:assetKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ab345c

// -[SCSingleDiscoverPublisherOperaDataSource disableAutoProgressingForIdentifier:isNext:isCurrent:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x107ab34fc

// -[SCSingleDiscoverPublisherOperaDataSource _markSnapWithDisabledAutoProgression:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab35cc

// -[SCSingleDiscoverPublisherOperaDataSource resetAutoProgression]
// Type encoding: v16@0:8
// Implementation: 0x107ab3624

// -[SCSingleDiscoverPublisherOperaDataSource _configurationWithViewLocation:circumstanceEngine:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x107ab376c

// -[SCSingleDiscoverPublisherOperaDataSource _nextStorySnapAfterStorySnapIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab3798

// -[SCSingleDiscoverPublisherOperaDataSource _prevStorySnapBeforeStorySnapIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab390c

// -[SCSingleDiscoverPublisherOperaDataSource _updatePlaylistItemWithStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab3a38

// -[SCSingleDiscoverPublisherOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab3ab0

// -[SCSingleDiscoverPublisherOperaDataSource loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab42bc

// -[SCSingleDiscoverPublisherOperaDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ab44d0

// -[SCSingleDiscoverPublisherOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107ab4524

// -[SCSingleDiscoverPublisherOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab46ec

// -[SCSingleDiscoverPublisherOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ab481c

// -[SCSingleDiscoverPublisherOperaDataSource _completeOnMainThreadForSnapPlayableDataModel:pageProperties:attachmentPageProperties:mediaIsLoaded:error:completion:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x107ab49f8

// -[SCSingleDiscoverPublisherOperaDataSource _editionChannelSubscribeStateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x107ab4ce8

// -[SCSingleDiscoverPublisherOperaDataSource mediaLoadDidFailFor:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ab4cec

// -[SCSingleDiscoverPublisherOperaDataSource _playlistItemDidUpdateForSnapPlayableDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab4d70

// -[SCSingleDiscoverPublisherOperaDataSource _fetchMediaIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab4e08

// -[SCSingleDiscoverPublisherOperaDataSource _fetchForSnapPlayableDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab5044

// -[SCSingleDiscoverPublisherOperaDataSource _updatePlaylistIfMediaIsNotPrepared:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab5274

// -[SCSingleDiscoverPublisherOperaDataSource _mediaIsLoadedForSnapPlayableDataModel:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ab5314

// -[SCSingleDiscoverPublisherOperaDataSource _prefetchForSnapPlayableDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ab556c

// -[SCSingleDiscoverPublisherOperaDataSource prefetchItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ab5730

// -[SCSingleDiscoverPublisherOperaDataSource cancelQueuedRequestForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab5958

// -[SCSingleDiscoverPublisherOperaDataSource _prepareSnapDocMediaAssetsForSnapDoc:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ab5a0c

// -[SCSingleDiscoverPublisherOperaDataSource generateSnapDocPrefetchRequestsWithStartPosition:prefetchSignalsList:importanceList:maxNumberOfItems:completion:completionQueue:]
// Type encoding: v64@0:8@16@24@32Q40@?48@56
// Implementation: 0x107ab5c20

// -[SCSingleDiscoverPublisherOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107ab6090

// -[SCSingleDiscoverPublisherOperaDataSource _extraPropertiesForSnapPlayableDataModel:fullSnapDocDataModel:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107ab6208

// -[SCSingleDiscoverPublisherOperaDataSource _didGetPagePropertiesForPlayableDataModelIdentifier:pageProperties:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107ab6440

// -[SCSingleDiscoverPublisherOperaDataSource storyPlayableDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107ab6560

// -[SCSingleDiscoverPublisherOperaDataSource setStoryPlayableDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ab6568

// -[SCSingleDiscoverPublisherOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ab6598

// +[SCSingleDiscoverPublisherOperaDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107ab2f64

@end
