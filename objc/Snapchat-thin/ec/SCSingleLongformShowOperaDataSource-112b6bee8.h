// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSingleLongformShowOperaDataSource
// Superclass: NSObject
// Address: 0x112b6bee8

@interface SCSingleLongformShowOperaDataSource

// Property: show; attributes: T@"SCLongformShowOperaDataModel",&,N,V_show
// Property: publisherPagePropertiesManager; attributes: T@"SCLazy",&,N,V_publisherPagePropertiesManager
// Property: subscriptionStore; attributes: T@"<SCCSubscriptionStore>",&,N,V_subscriptionStore
// Property: subscriptionSession; attributes: T@"SCDiscoverPublisherSubscriptionSession",&,N,V_subscriptionSession
// Property: snapDocConfigurer; attributes: T@"SCLazy",&,N,V_snapDocConfigurer
// Property: snapIdToPublisherSnapPlayableDataModel; attributes: T@"NSDictionary",C,N,V_snapIdToPublisherSnapPlayableDataModel
// Property: itemIdToSnap; attributes: T@"NSDictionary",C,N,V_itemIdToSnap
// Property: longformMediaPrefetcher; attributes: T@"<SCPlaybackMediaPrefetching>",&,N,V_longformMediaPrefetcher
// Property: streamingURLProvider; attributes: T@"<SCStreamingURLProviding>",&,N,V_streamingURLProvider
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: itemIdToError; attributes: T@"NSMutableDictionary",&,N,V_itemIdToError
// Property: storySessionId; attributes: T@"NSNumber",&,N,V_storySessionId
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: performer; attributes: T@"SCQueuePerformer",&,N,V_performer
// Property: lazyContentObjectResolver; attributes: T@"SCLazy",&,N,V_lazyContentObjectResolver
// Property: lazyDiscoverFeedDataFetcher; attributes: T@"SCLazy",&,N,V_lazyDiscoverFeedDataFetcher
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: storyPlayableDataModel; attributes: T@"SCDiscoverPublisherStoryPlayableDataModel",R,N,V_storyPlayableDataModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSingleLongformShowOperaDataSource initWithStorySessionId:snapDocConfigurer:bitmojiImageFetcher:discoverFeedDataFetcher:discoverFeedEventsController:operaEventAnnouncing:show:storyPlayableDataModel:publisherPagePropertiesManager:viewLocation:longformMediaPrefetcher:streamingURLProvider:circumstanceEngine:discoverBlizzardLogger:creatorSettingsFetcher:contentObjectResolver:subscriptionStore:]
// Type encoding: @152@0:8@16@24@32@40@48@56@64@72@80q88@96@104@112@120@128@136@144
// Implementation: 0x107a545f4

// -[SCSingleLongformShowOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a54ac8

// -[SCSingleLongformShowOperaDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a54fb0

// -[SCSingleLongformShowOperaDataSource publisherSnapPlayableDataModelForSnap:uniqueIdentifier:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107a5506c

// -[SCSingleLongformShowOperaDataSource updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a55224

// -[SCSingleLongformShowOperaDataSource prefetchSnapPlayableDataModel:completion:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x107a55314

// -[SCSingleLongformShowOperaDataSource prefetchRequestForSnapPlayableDataModel:requestImportance:trigger:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x107a556c8

// -[SCSingleLongformShowOperaDataSource operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a558e0

// -[SCSingleLongformShowOperaDataSource registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107a55aac

// -[SCSingleLongformShowOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x107a55b6c

// -[SCSingleLongformShowOperaDataSource _getDiscoverFeedStoryForPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a56108

// -[SCSingleLongformShowOperaDataSource _createOperaItemAttributionInfoForPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a561d0

// -[SCSingleLongformShowOperaDataSource _prepareLongformMediaWithItemId:error:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107a563e0

// -[SCSingleLongformShowOperaDataSource _updatePlaybackErrorIfNecessary:itemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a5640c

// -[SCSingleLongformShowOperaDataSource _fetchLongformMediaWithLongformSnap:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107a565b8

// -[SCSingleLongformShowOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a566f8

// -[SCSingleLongformShowOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a566fc

// -[SCSingleLongformShowOperaDataSource _didTapRetryButtonWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a56ef8

// -[SCSingleLongformShowOperaDataSource _didReceiveMediaFailsToDisplayWithPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a57238

// -[SCSingleLongformShowOperaDataSource _extraPropertiesForSnapPlayableDataModel:fullSnapDocDataModel:snap:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a57320

// -[SCSingleLongformShowOperaDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x107a57558

// -[SCSingleLongformShowOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a57570

// -[SCSingleLongformShowOperaDataSource storyPlayableDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107a5757c

// -[SCSingleLongformShowOperaDataSource show]
// Type encoding: @16@0:8
// Implementation: 0x107a57584

// -[SCSingleLongformShowOperaDataSource setShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a5758c

// -[SCSingleLongformShowOperaDataSource publisherPagePropertiesManager]
// Type encoding: @16@0:8
// Implementation: 0x107a575bc

// -[SCSingleLongformShowOperaDataSource setPublisherPagePropertiesManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a575c4

// -[SCSingleLongformShowOperaDataSource subscriptionStore]
// Type encoding: @16@0:8
// Implementation: 0x107a575f4

// -[SCSingleLongformShowOperaDataSource setSubscriptionStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a575fc

// -[SCSingleLongformShowOperaDataSource subscriptionSession]
// Type encoding: @16@0:8
// Implementation: 0x107a5762c

// -[SCSingleLongformShowOperaDataSource setSubscriptionSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a57634

// -[SCSingleLongformShowOperaDataSource snapDocConfigurer]
// Type encoding: @16@0:8
// Implementation: 0x107a57664

// -[SCSingleLongformShowOperaDataSource setSnapDocConfigurer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a5766c

// -[SCSingleLongformShowOperaDataSource snapIdToPublisherSnapPlayableDataModel]
// Type encoding: @16@0:8
// Implementation: 0x107a5769c

// -[SCSingleLongformShowOperaDataSource setSnapIdToPublisherSnapPlayableDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a576a4

// -[SCSingleLongformShowOperaDataSource itemIdToSnap]
// Type encoding: @16@0:8
// Implementation: 0x107a576ac

// -[SCSingleLongformShowOperaDataSource setItemIdToSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a576b4

// -[SCSingleLongformShowOperaDataSource longformMediaPrefetcher]
// Type encoding: @16@0:8
// Implementation: 0x107a576bc

// -[SCSingleLongformShowOperaDataSource setLongformMediaPrefetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a576c4

// -[SCSingleLongformShowOperaDataSource streamingURLProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a576f4

// -[SCSingleLongformShowOperaDataSource setStreamingURLProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a576fc

// -[SCSingleLongformShowOperaDataSource viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x107a5772c

// -[SCSingleLongformShowOperaDataSource setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x107a57734

// -[SCSingleLongformShowOperaDataSource itemIdToError]
// Type encoding: @16@0:8
// Implementation: 0x107a5773c

// -[SCSingleLongformShowOperaDataSource setItemIdToError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a57744

// -[SCSingleLongformShowOperaDataSource storySessionId]
// Type encoding: @16@0:8
// Implementation: 0x107a57774

// -[SCSingleLongformShowOperaDataSource setStorySessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a5777c

// -[SCSingleLongformShowOperaDataSource circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x107a577ac

// -[SCSingleLongformShowOperaDataSource setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a577b4

// -[SCSingleLongformShowOperaDataSource performer]
// Type encoding: @16@0:8
// Implementation: 0x107a577e4

// -[SCSingleLongformShowOperaDataSource setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a577ec

// -[SCSingleLongformShowOperaDataSource lazyContentObjectResolver]
// Type encoding: @16@0:8
// Implementation: 0x107a5781c

// -[SCSingleLongformShowOperaDataSource setLazyContentObjectResolver:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a57824

// -[SCSingleLongformShowOperaDataSource lazyDiscoverFeedDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x107a57854

// -[SCSingleLongformShowOperaDataSource setLazyDiscoverFeedDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a5785c

// -[SCSingleLongformShowOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a5788c

@end
