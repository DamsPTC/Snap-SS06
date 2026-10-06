// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPlaylistViewCoordinator
// Superclass: NSObject
// Address: 0x112adbb18

@interface SCOperaPlaylistViewCoordinator

// Property: delegate; attributes: T@"<SCOperaPlaylistViewCoordinatorDelegate>",W,N,V_delegate
// Property: operaVC; attributes: T@"SCOperaViewController",W,N,V_operaVC
// Property: operaConfiguration; attributes: T@"SCOperaConfiguration",W,N,V_operaConfiguration
// Property: pageFeatureDataProvider; attributes: T@"<SCOperaPageFeatureDataProvider>",&,N,V_pageFeatureDataProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPlaylistViewCoordinator initWithItemGroupDataModels:initialGroupDataModel:mediaTypeConfigurations:builtInMediaResolver:extraPropertiesProviders:eventAnnouncer:groupDisplaySquenceRule:preloadStrategy:configProvider:internalConfigProvider:itemLoadStateTracker:contentResolutionSignalCollector:]
// Type encoding: @112@0:8@16@24@32@40@48@56Q64q72@80@88@96@104
// Implementation: 0x10634f7a8

// -[SCOperaPlaylistViewCoordinator setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634fc90

// -[SCOperaPlaylistViewCoordinator setPageFeatureDataProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634fcd4

// -[SCOperaPlaylistViewCoordinator _setupPreloadConfigWithStrategy:forGroupDataModels:configProvider:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10634fcdc

// -[SCOperaPlaylistViewCoordinator _setUpPlaylistWithGroupDataModels:initialGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10634fd80

// -[SCOperaPlaylistViewCoordinator createInitialViewModel]
// Type encoding: @16@0:8
// Implementation: 0x10634fe74

// -[SCOperaPlaylistViewCoordinator updatePlaylistWithGroupDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x106350234

// -[SCOperaPlaylistViewCoordinator updatePlaylistWithGroupDataModels:initialGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063502d8

// -[SCOperaPlaylistViewCoordinator isMediaLoadedForItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063503c0

// -[SCOperaPlaylistViewCoordinator retrievePrefetchInfoForItemId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063503c8

// -[SCOperaPlaylistViewCoordinator fetchMediaForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106350448

// -[SCOperaPlaylistViewCoordinator prepareMediaForGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635058c

// -[SCOperaPlaylistViewCoordinator _loadMediaForPlaylistItemGroup:isFirstGroup:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106350770

// -[SCOperaPlaylistViewCoordinator teardown]
// Type encoding: v16@0:8
// Implementation: 0x1063507cc

// -[SCOperaPlaylistViewCoordinator prepareFirstPlaylistItemWithCompletion:startWaitingForDownloadCallback:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1063508a8

// -[SCOperaPlaylistViewCoordinator registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x1063509a4

// -[SCOperaPlaylistViewCoordinator operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106350c64

// -[SCOperaPlaylistViewCoordinator _triggerDidStartPlayingDelegateIfNecessaryWithEvent:page:params:itemDataModel:groupDataModel:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x106351ec0

// -[SCOperaPlaylistViewCoordinator _triggerDidStartPlayingDelegateWithItemDataModel:groupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063520e4

// -[SCOperaPlaylistViewCoordinator _shouldPrepareMediaUponEvent:item:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106352150

// -[SCOperaPlaylistViewCoordinator _updateViewModelsIfNecessaryOnEvent:page:playlistItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063521bc

// -[SCOperaPlaylistViewCoordinator _updateViewModelsBasedOnPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x1063526cc

// -[SCOperaPlaylistViewCoordinator _setupGroupsToBuild]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x106352e98

// -[SCOperaPlaylistViewCoordinator _resolveGroupsInRange:mediaLoadRange:]
// Type encoding: B48@0:8{_NSRange=QQ}16{_NSRange=QQ}32
// Implementation: 0x106353058

// -[SCOperaPlaylistViewCoordinator _updateConnectionsForPreviousGroup:previousGroupViewModel:currentGroup:currentGroupViewModel:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1063531bc

// -[SCOperaPlaylistViewCoordinator _buildViewModelsForGroup:isCurrentViewingGroup:preloadAccumulator:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x1063532dc

// -[SCOperaPlaylistViewCoordinator _viewModelsForPlaylistItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106353cac

// -[SCOperaPlaylistViewCoordinator _updateViewModelWithPlaylistItem:pageLayers:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106354154

// -[SCOperaPlaylistViewCoordinator _viewModelsForSubItemArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x106354944

// -[SCOperaPlaylistViewCoordinator _makeViewModelWithPageLayers:viewModel:item:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106354bac

// -[SCOperaPlaylistViewCoordinator _playlistBasedOnGroupDataModels:initialGroupDataModel:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106354fcc

// -[SCOperaPlaylistViewCoordinator _groupForDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063551e0

// -[SCOperaPlaylistViewCoordinator asyncUpdatePlaylistItemGroupForID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063552a8

// -[SCOperaPlaylistViewCoordinator _updateGroupsBasedOnGroupIdsToUpdate]
// Type encoding: v16@0:8
// Implementation: 0x106355548

// -[SCOperaPlaylistViewCoordinator _updateOperaViewIfNecessaryWithRemovedItem:group:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106355788

// -[SCOperaPlaylistViewCoordinator _preserveActivelyViewedGroup:ifOmittedFromGroups:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063559ec

// -[SCOperaPlaylistViewCoordinator _updatePlaylistWithGroups:initialPlaylistItemGroup:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106355bb8

// -[SCOperaPlaylistViewCoordinator _checkThatDynamicallyInsertedGroupsNotMatchingMainPlaylistGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635603c

// -[SCOperaPlaylistViewCoordinator _checkThatDynamicallyInsertedItemsNotMatchingMainPlaylistItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x106356040

// -[SCOperaPlaylistViewCoordinator _logIfGroupAlreadyExists:inGroups:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106356044

// -[SCOperaPlaylistViewCoordinator updatePlaylistWithBatchedUpdates:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106356048

// -[SCOperaPlaylistViewCoordinator playlistItemDidUpdateForID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106356108

// -[SCOperaPlaylistViewCoordinator invalidateGeneratedViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1063563d8

// -[SCOperaPlaylistViewCoordinator _regenerateViewModelForPlaylistItemWithID:reason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106356414

// -[SCOperaPlaylistViewCoordinator removePlaylistItemGroupForID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106356b54

// -[SCOperaPlaylistViewCoordinator removePlaylistItemForID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106356b5c

// -[SCOperaPlaylistViewCoordinator removePlaylistItemGroupForID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106356b64

// -[SCOperaPlaylistViewCoordinator removePlaylistItemForID:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063571e4

// -[SCOperaPlaylistViewCoordinator _removePlaylistItem:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1063573ec

// -[SCOperaPlaylistViewCoordinator _removePageForViewModel:item:reason:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106357744

// -[SCOperaPlaylistViewCoordinator insertPlaylistItem:beforePlaylistItem:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106357864

// -[SCOperaPlaylistViewCoordinator insertPlaylistItems:afterPlaylistItem:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106357a2c

// -[SCOperaPlaylistViewCoordinator insertPlaylistItemGroupModel:afterPlaylistItemGroup:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x106357ec0

// -[SCOperaPlaylistViewCoordinator insertPlaylistGroupDataModel:afterPlaylistItemGroup:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x106357f84

// -[SCOperaPlaylistViewCoordinator _insertPlaylistItemGroup:afterPlaylistItemGroup:error:]
// Type encoding: B40@0:8@16@24^@32
// Implementation: 0x106358048

// -[SCOperaPlaylistViewCoordinator insertSubPlaylistItems:afterSubPlaylistItem:completion:]
// Type encoding: B40@0:8@16@24@?32
// Implementation: 0x1063583a8

// -[SCOperaPlaylistViewCoordinator _viewModelWithNextViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106358834

// -[SCOperaPlaylistViewCoordinator playlistItemForItemID:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063589a4

// -[SCOperaPlaylistViewCoordinator playlistItemForPageID:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063589ac

// -[SCOperaPlaylistViewCoordinator dataModelForPlaylistItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063589b4

// -[SCOperaPlaylistViewCoordinator dataModelForPlaylistItemGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063589bc

// -[SCOperaPlaylistViewCoordinator initialPlaylistItemToDisplay]
// Type encoding: @16@0:8
// Implementation: 0x1063589c4

// -[SCOperaPlaylistViewCoordinator initialPlaylistItemToDisplayInGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063589ec

// -[SCOperaPlaylistViewCoordinator playlistItemGroupForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106358a34

// -[SCOperaPlaylistViewCoordinator playlist]
// Type encoding: @16@0:8
// Implementation: 0x106358a3c

// -[SCOperaPlaylistViewCoordinator setPlaylistCurrentItemId:withinGroupOnly:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x106358a64

// -[SCOperaPlaylistViewCoordinator setPlaylistCurrentItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106358eb8

// -[SCOperaPlaylistViewCoordinator _removeMediaForItem:pageId:reason:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106358ec0

// -[SCOperaPlaylistViewCoordinator _recordMediaPrepFailureForItem:preparationState:shouldUpdateViewModelIfFailed:]
// Type encoding: B36@0:8@16q24B32
// Implementation: 0x106358f4c

// -[SCOperaPlaylistViewCoordinator _resetMediaPrepFailureCountsForItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063590c0

// -[SCOperaPlaylistViewCoordinator _prepareMediaForItem:pageId:reason:shouldUpdateViewModelIfFailed:startWaitingForDownloadCallback:completion:]
// Type encoding: v60@0:8@16@24@32B40@?44@?52
// Implementation: 0x106359118

// -[SCOperaPlaylistViewCoordinator _emitSignalsIfNeededForItem:pageId:signal:reason:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x1063598fc

// -[SCOperaPlaylistViewCoordinator _resolvePlaylistItemGroup:forceResolve:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106359bcc

// -[SCOperaPlaylistViewCoordinator _firstPlaylistItemGroupIndexToBuild]
// Type encoding: q16@0:8
// Implementation: 0x10635a58c

// -[SCOperaPlaylistViewCoordinator _lastPlaylistItemGroupIndexToBuild]
// Type encoding: q16@0:8
// Implementation: 0x10635a708

// -[SCOperaPlaylistViewCoordinator _numOfViewModelsToPreloadInForwardDirection]
// Type encoding: q16@0:8
// Implementation: 0x10635a870

// -[SCOperaPlaylistViewCoordinator _numOfViewModelsToPreloadInBackwardDirection]
// Type encoding: q16@0:8
// Implementation: 0x10635a878

// -[SCOperaPlaylistViewCoordinator _indexOfFirstViewedPlaylistItemGroup]
// Type encoding: q16@0:8
// Implementation: 0x10635a880

// -[SCOperaPlaylistViewCoordinator _indexOfLastPlaylistItemGroup]
// Type encoding: q16@0:8
// Implementation: 0x10635a970

// -[SCOperaPlaylistViewCoordinator _nextGroupAfterGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10635a998

// -[SCOperaPlaylistViewCoordinator _playlistItemAfterItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10635aa58

// -[SCOperaPlaylistViewCoordinator _playlistItemBeforeItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x10635ab34

// -[SCOperaPlaylistViewCoordinator _normalizeIndexInPlaylist:]
// Type encoding: q24@0:8q16
// Implementation: 0x10635abd8

// -[SCOperaPlaylistViewCoordinator _logPagePropertiesUpdatesFrom:to:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635ac50

// -[SCOperaPlaylistViewCoordinator _cleanupPagePropertiesForDistantItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635ac54

// -[SCOperaPlaylistViewCoordinator _addViewModel:toPreloadSetIfNecessary:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635b1c4

// -[SCOperaPlaylistViewCoordinator setOperaVC:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635b2c0

// -[SCOperaPlaylistViewCoordinator _updateViewModelsToPreload:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635b32c

// -[SCOperaPlaylistViewCoordinator _logPlaylistGroups]
// Type encoding: v16@0:8
// Implementation: 0x10635b398

// -[SCOperaPlaylistViewCoordinator _logFullPlaylist]
// Type encoding: v16@0:8
// Implementation: 0x10635b490

// -[SCOperaPlaylistViewCoordinator _logGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635b58c

// -[SCOperaPlaylistViewCoordinator logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635b6d0

// -[SCOperaPlaylistViewCoordinator _logShakeToReportStateGroup:logger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635b800

// -[SCOperaPlaylistViewCoordinator _logShakeToReportStateGroupItem:inGroup:parent:logger:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10635bbb0

// -[SCOperaPlaylistViewCoordinator _logShakeToReportStateViewModel:logger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10635c23c

// -[SCOperaPlaylistViewCoordinator delegate]
// Type encoding: @16@0:8
// Implementation: 0x10635c6b4

// -[SCOperaPlaylistViewCoordinator operaVC]
// Type encoding: @16@0:8
// Implementation: 0x10635c6cc

// -[SCOperaPlaylistViewCoordinator operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10635c6e4

// -[SCOperaPlaylistViewCoordinator setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10635c6fc

// -[SCOperaPlaylistViewCoordinator pageFeatureDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x10635c708

// -[SCOperaPlaylistViewCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10635c710

@end
