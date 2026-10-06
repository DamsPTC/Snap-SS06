// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyStoriesOperaDataSource
// Superclass: NSObject
// Address: 0x112b60818

@interface SCLegacyStoriesOperaDataSource

// Property: delegate; attributes: T@"<SCLegacyStoriesOperaDataSourceDelegate>",W,N,V_delegate
// Property: storiesMediaManager; attributes: T@"SCLegacyStoriesOperaMediaManager",R,N,V_storiesMediaManager
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: isInSingleStoryMode; attributes: TB,R,N,V_isInSingleStoryMode
// Property: viewModelConnectionsCallbackController; attributes: T@"<SCOperaPageViewModelConnectionsCallbackControlling>",W,N,V_viewModelConnectionsCallbackController
// Property: enableCriticalModeWhenLoading; attributes: TB,R,N,V_enableCriticalModeWhenLoading
// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: showViewersTable; attributes: TB,N,V_showViewersTable
// Property: viewingType; attributes: Tq,N,V_viewingType
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_eventAnnouncing
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyStoriesOperaDataSource initWithViewingType:showViewersTable:storyPlayMode:firstStoryToDisplay:userSession:navigationServices:viewLocation:friendStoriesSectionMap:enableCriticalModeWhenLoading:circumstanceEngine:musicContentRestrictionServices:streamingURLProvider:snapchattersSynchronousDataFetcher:snapchatterObservableRepository:imageDownloader:storiesCachedSummaryInfoProvider:lazyDiscoverFeedEventsController:]
// Type encoding: @144@0:8q16B24q28@36@44@52q60@68B76@80@88@96@104@112@120@128@136
// Implementation: 0x1071fc6f8

// -[SCLegacyStoriesOperaDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1071fca40

// -[SCLegacyStoriesOperaDataSource setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fca74

// -[SCLegacyStoriesOperaDataSource rootViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1071fcb90

// -[SCLegacyStoriesOperaDataSource prepareToViewStoryWhileOperaPresented:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fcb98

// -[SCLegacyStoriesOperaDataSource _updateLoadingLayerImageWithCurrentStory:nextViewModel:loadedStoryProperties:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071fcd18

// -[SCLegacyStoriesOperaDataSource updatePageForStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fcef8

// -[SCLegacyStoriesOperaDataSource updatePageForID:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fd030

// -[SCLegacyStoriesOperaDataSource initialPlaylistItemIDToDisplay]
// Type encoding: @16@0:8
// Implementation: 0x1071fd034

// -[SCLegacyStoriesOperaDataSource _operaViewModelForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fd03c

// -[SCLegacyStoriesOperaDataSource firstStoryToDisplay]
// Type encoding: @16@0:8
// Implementation: 0x1071fd0ac

// -[SCLegacyStoriesOperaDataSource viewModelForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fd130

// -[SCLegacyStoriesOperaDataSource didStartToPlayStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fd1a0

// -[SCLegacyStoriesOperaDataSource injectStory:afterStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071fd1a4

// -[SCLegacyStoriesOperaDataSource skipStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fd218

// -[SCLegacyStoriesOperaDataSource skipStory:synchronously:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071fd220

// -[SCLegacyStoriesOperaDataSource isLastStoryInFriendStories:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071fd284

// -[SCLegacyStoriesOperaDataSource prepareToViewStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fd35c

// -[SCLegacyStoriesOperaDataSource requestCallbackWhenViewModelConnectionIsStable:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071fd3a4

// -[SCLegacyStoriesOperaDataSource friendsPlayListCount]
// Type encoding: Q16@0:8
// Implementation: 0x1071fd418

// -[SCLegacyStoriesOperaDataSource indexOfFriendStoriesInPlaylist:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071fd420

// -[SCLegacyStoriesOperaDataSource indexOfStoryRelativeToInitialStory:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071fd428

// -[SCLegacyStoriesOperaDataSource _friendStoriesDataSourceForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fd490

// -[SCLegacyStoriesOperaDataSource isLastFriendStoriesToDisplay:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071fd59c

// -[SCLegacyStoriesOperaDataSource _currentViewLocationForUsername:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071fd5bc

// -[SCLegacyStoriesOperaDataSource mediaManager]
// Type encoding: @16@0:8
// Implementation: 0x1071fd610

// -[SCLegacyStoriesOperaDataSource canResolvePlaylistItemGroupDataModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071fd638

// -[SCLegacyStoriesOperaDataSource playlistItemGroupModelForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fd66c

// -[SCLegacyStoriesOperaDataSource _resolvePlaylistItemGroupDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fd874

// -[SCLegacyStoriesOperaDataSource needToPrepareMediaBeforeDisplay]
// Type encoding: B16@0:8
// Implementation: 0x1071fd91c

// -[SCLegacyStoriesOperaDataSource resolvePlaylistItemGroupWithMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fd924

// -[SCLegacyStoriesOperaDataSource loadMediaForPlaylistItemGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fd9b4

// -[SCLegacyStoriesOperaDataSource _friendStoriesDataSourceForUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fda2c

// -[SCLegacyStoriesOperaDataSource dataModelFor:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fdc68

// -[SCLegacyStoriesOperaDataSource dataModelForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fdc6c

// -[SCLegacyStoriesOperaDataSource _friendStoriesForUsername:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fdcc0

// -[SCLegacyStoriesOperaDataSource _storyForItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071fdcc8

// -[SCLegacyStoriesOperaDataSource pageDataForDataModel:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071fdd6c

// -[SCLegacyStoriesOperaDataSource extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1071fdde0

// -[SCLegacyStoriesOperaDataSource prepareMediaForItem:startWaitingForDownloadCallback:completion:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1071fded8

// -[SCLegacyStoriesOperaDataSource removeMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fdfa0

// -[SCLegacyStoriesOperaDataSource setEventAnnouncing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe030

// -[SCLegacyStoriesOperaDataSource registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1071fe0c4

// -[SCLegacyStoriesOperaDataSource operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071fe1a4

// -[SCLegacyStoriesOperaDataSource _loadStoriesIfNecessaryWhenStartToViewStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe400

// -[SCLegacyStoriesOperaDataSource _loadStoriesIfNecessaryWhenStartToPlayStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe454

// -[SCLegacyStoriesOperaDataSource _loadStoriesWithCurrentStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe484

// -[SCLegacyStoriesOperaDataSource _loadSingleStoryForViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe648

// -[SCLegacyStoriesOperaDataSource _inLineLoadFriendStories:startIndex:viewingType:viewLocation:]
// Type encoding: v48@0:8@16Q24q32q40
// Implementation: 0x1071fe738

// -[SCLegacyStoriesOperaDataSource delegate]
// Type encoding: @16@0:8
// Implementation: 0x1071fe784

// -[SCLegacyStoriesOperaDataSource setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe79c

// -[SCLegacyStoriesOperaDataSource storiesMediaManager]
// Type encoding: @16@0:8
// Implementation: 0x1071fe7a8

// -[SCLegacyStoriesOperaDataSource operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x1071fe7b0

// -[SCLegacyStoriesOperaDataSource isInSingleStoryMode]
// Type encoding: B16@0:8
// Implementation: 0x1071fe7c8

// -[SCLegacyStoriesOperaDataSource viewModelConnectionsCallbackController]
// Type encoding: @16@0:8
// Implementation: 0x1071fe7d0

// -[SCLegacyStoriesOperaDataSource setViewModelConnectionsCallbackController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe7e8

// -[SCLegacyStoriesOperaDataSource enableCriticalModeWhenLoading]
// Type encoding: B16@0:8
// Implementation: 0x1071fe7f4

// -[SCLegacyStoriesOperaDataSource playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x1071fe7fc

// -[SCLegacyStoriesOperaDataSource setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071fe814

// -[SCLegacyStoriesOperaDataSource showViewersTable]
// Type encoding: B16@0:8
// Implementation: 0x1071fe820

// -[SCLegacyStoriesOperaDataSource setShowViewersTable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071fe828

// -[SCLegacyStoriesOperaDataSource viewingType]
// Type encoding: q16@0:8
// Implementation: 0x1071fe830

// -[SCLegacyStoriesOperaDataSource setViewingType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071fe838

// -[SCLegacyStoriesOperaDataSource eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x1071fe840

// -[SCLegacyStoriesOperaDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071fe848

@end
