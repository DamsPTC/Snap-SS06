// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacySingleStoryOperaDataSource
// Superclass: NSObject
// Address: 0x112b607c8

@interface SCLegacySingleStoryOperaDataSource

// Property: rootViewModel; attributes: T@"SCOperaPageViewModel",R,N
// Property: lastViewModel; attributes: T@"SCOperaPageViewModel",R,N,V_lastViewModel
// Property: generatedViewModels; attributes: T@"NSMutableArray",&,N,V_generatedViewModels
// Property: delegate; attributes: T@"<SCLegacySingleStoryOperaDataSourceDelegate>",W,N,V_delegate
// Property: friendStories; attributes: T@"FriendStories",&,N,V_friendStories
// Property: story; attributes: T@"<SCLegacyStory>",&,N,V_story
// Property: operaViewController; attributes: T@"<SCOperaControlling>",W,N,V_operaViewController
// Property: storiesMediaManager; attributes: T@"SCLegacyStoriesOperaMediaManager",&,N,V_storiesMediaManager
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: proxyController; attributes: T@"<SCWebProxyControlling>",?,R,N
// Property: urlProvider; attributes: T@"<SCWebProxyURLProviding>",?,R,N
// Property: extraInfoProvider; attributes: T@"<SCStreamingRequestExtraInfoProviding>",?,R,W,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacySingleStoryOperaDataSource initWithFriendStories:viewingType:firstStoryToDisplay:isInStoryPlaylistMode:isInOperaPlaylistMode:userSession:navigationServices:viewLocation:chromeAvatarProvider:circumstanceEngine:musicContentRestrictionServices:streamingURLProvider:snapchattersSynchronousDataFetcher:snapchatterObservableRepository:lazyDiscoverFeedEventsController:]
// Type encoding: @128@0:8@16q24@32B40B44@48@56q64@72@80@88@96@104@112@120
// Implementation: 0x1071f7548

// -[SCLegacySingleStoryOperaDataSource initWithStory:showViewersTable:viewingType:isInOperaPlaylistMode:userSession:navigationServices:viewLocation:chromeAvatarProvider:circumstanceEngine:musicContentRestrictionServices:streamingURLProvider:snapchattersSynchronousDataFetcher:snapchatterObservableRepository:lazyDiscoverFeedEventsController:]
// Type encoding: @120@0:8@16B24q28B36@40@48q56@64@72@80@88@96@104@112
// Implementation: 0x1071f77e8

// -[SCLegacySingleStoryOperaDataSource initWithChromeAvatarProvider:musicContentRestrictionServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071f79d8

// -[SCLegacySingleStoryOperaDataSource startToPlayStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f7b08

// -[SCLegacySingleStoryOperaDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1071f7b30

// -[SCLegacySingleStoryOperaDataSource buildViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1071f7b78

// -[SCLegacySingleStoryOperaDataSource skipStory:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071f7e64

// -[SCLegacySingleStoryOperaDataSource injectStory:afterStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f80ec

// -[SCLegacySingleStoryOperaDataSource indexOfStoryRelativeToInitialStory:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071f8470

// -[SCLegacySingleStoryOperaDataSource rootViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1071f849c

// -[SCLegacySingleStoryOperaDataSource _updateFriendStoriesSnapLoggingInfos:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f84c4

// -[SCLegacySingleStoryOperaDataSource _friendStoriesArrayDidChange:friendStories:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f86f0

// -[SCLegacySingleStoryOperaDataSource _updateStoriesAndViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1071f8958

// -[SCLegacySingleStoryOperaDataSource _clearPageForViewModel:reason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f8a08

// -[SCLegacySingleStoryOperaDataSource _dismissOperaPageViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1071f8acc

// -[SCLegacySingleStoryOperaDataSource viewModelForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f8b30

// -[SCLegacySingleStoryOperaDataSource storyForViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f8b84

// -[SCLegacySingleStoryOperaDataSource _removeStoryFromStoriesViewingOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f8bf4

// -[SCLegacySingleStoryOperaDataSource _updateStoriesViewingOrderBasedOnFriendStories]
// Type encoding: v16@0:8
// Implementation: 0x1071f8d64

// -[SCLegacySingleStoryOperaDataSource _useStoriesDisplayOrderToInsertStory:intoStoriesArray:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f9220

// -[SCLegacySingleStoryOperaDataSource _updateViewModelsBasedOnCurrentDisplayOrderWithViewModelConnectionUpdate:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f930c

// -[SCLegacySingleStoryOperaDataSource _buildViewModelForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f96d4

// -[SCLegacySingleStoryOperaDataSource _pagesPropertiesForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f98c0

// -[SCLegacySingleStoryOperaDataSource _removeViewModelForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f9cac

// -[SCLegacySingleStoryOperaDataSource viewModelWithNextViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f9f2c

// -[SCLegacySingleStoryOperaDataSource _updateFirstStoryToDisplay]
// Type encoding: v16@0:8
// Implementation: 0x1071fa080

// -[SCLegacySingleStoryOperaDataSource _setFirstStoryToDisplayToDefaultValue]
// Type encoding: v16@0:8
// Implementation: 0x1071fa134

// -[SCLegacySingleStoryOperaDataSource _updatePageForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fa18c

// -[SCLegacySingleStoryOperaDataSource story:didChangeMediaState:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1071faa7c

// -[SCLegacySingleStoryOperaDataSource _invokeFirstStoryPreparationCompleteIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071faad8

// -[SCLegacySingleStoryOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fac18

// -[SCLegacySingleStoryOperaDataSource _storyToInsertAfterStoryWithClientId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fb4fc

// -[SCLegacySingleStoryOperaDataSource loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fb578

// -[SCLegacySingleStoryOperaDataSource _firstStoryToDisplayForOperaPlaylist]
// Type encoding: @16@0:8
// Implementation: 0x1071fb67c

// -[SCLegacySingleStoryOperaDataSource _playlistItemIdForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fb86c

// -[SCLegacySingleStoryOperaDataSource storyForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fb874

// -[SCLegacySingleStoryOperaDataSource teardownStoryForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fb8c8

// -[SCLegacySingleStoryOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071fb908

// -[SCLegacySingleStoryOperaDataSource extraPropertiesForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071fba3c

// -[SCLegacySingleStoryOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1071fbba8

// -[SCLegacySingleStoryOperaDataSource _prepareMediaForStory:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071fbc3c

// -[SCLegacySingleStoryOperaDataSource _nextStoryAfterStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fbf18

// -[SCLegacySingleStoryOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc0b0

// -[SCLegacySingleStoryOperaDataSource _announcePlaylistItemMediaStateChangeForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc13c

// -[SCLegacySingleStoryOperaDataSource streamingURLForRequestInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fc3ac

// -[SCLegacySingleStoryOperaDataSource lastViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1071fc418

// -[SCLegacySingleStoryOperaDataSource generatedViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1071fc420

// -[SCLegacySingleStoryOperaDataSource setGeneratedViewModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc428

// -[SCLegacySingleStoryOperaDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x1071fc458

// -[SCLegacySingleStoryOperaDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc470

// -[SCLegacySingleStoryOperaDataSource friendStories]
// Type encoding: @16@0:8
// Implementation: 0x1071fc47c

// -[SCLegacySingleStoryOperaDataSource setFriendStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc484

// -[SCLegacySingleStoryOperaDataSource story]
// Type encoding: @16@0:8
// Implementation: 0x1071fc4b4

// -[SCLegacySingleStoryOperaDataSource setStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc4bc

// -[SCLegacySingleStoryOperaDataSource operaViewController]
// Type encoding: @16@0:8
// Implementation: 0x1071fc4ec

// -[SCLegacySingleStoryOperaDataSource setOperaViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc504

// -[SCLegacySingleStoryOperaDataSource storiesMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x1071fc510

// -[SCLegacySingleStoryOperaDataSource setStoriesMediaManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc518

// -[SCLegacySingleStoryOperaDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1071fc548

// -[SCLegacySingleStoryOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fc560

// -[SCLegacySingleStoryOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071fc56c

// +[SCLegacySingleStoryOperaDataSource announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1071f753c

@end
