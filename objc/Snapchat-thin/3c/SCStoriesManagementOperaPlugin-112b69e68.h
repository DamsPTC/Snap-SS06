// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesManagementOperaPlugin
// Superclass: NSObject
// Address: 0x112b69e68

@interface SCStoriesManagementOperaPlugin

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesManagementOperaPlugin initWithUserSession:storyId:storyType:variant:myStoriesDataCoordinator:storiesDataCoordinator:snapViewerDataCoordinator:storiesMediaCoordinator:playbackManagementDataProvider:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:friendProfileScopeExposer:myStorySettingsScopeExposer:myStorySettingsScopeServices:customStoryMenuScopeExposer:webBrowsingScopeExposer:operaPageProviderObservable:isSingleSnap:mergeMultiSnapOurStories:shouldShowViewersListOnOpen:navigationServices:spotlightNavigationDelegate:storiesCachedSummaryInfoProvider:snapchatterFetcher:grapheneMetricsEmitter:circumstanceEngine:snapchattersSynchronousDataFetcher:standardExternalContentShareScopeExposer:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:plusServices:storyBoostService:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:isPendingSnapProSnap:isJoinedPlayback:ourStoriesAttributionManager:storiesConfigProvider:pageLauncher:optInDataProvider:profileProvider:avatarFactory:ourStorySnapPlaybackInfos:settingsScopeServices:customStoryMenuScopeServices:]
// Type encoding: @396@0:8@16@24q32q40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168B176B180B184@188@196@204@212@220@228@236@244@252@260@268@276@284@292@300@308B316B320@324@332@340@348@356@364@372@380@388
// Implementation: 0x107a0a27c

// -[SCStoriesManagementOperaPlugin addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0b1e8

// -[SCStoriesManagementOperaPlugin removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0b1f0

// -[SCStoriesManagementOperaPlugin extraPropertiesForDataModel:item:baseOperaPage:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x107a0b1f8

// -[SCStoriesManagementOperaPlugin _addStoryManagementPropertiesToProperties:currentSnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a0b8d8

// -[SCStoriesManagementOperaPlugin _viewerInfoPropertiesFromStorySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a0bca4

// -[SCStoriesManagementOperaPlugin _refreshViewerInfoPropertiesWithCurrentViewerProperties:snapViewersByViewerSnapId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a0be7c

// -[SCStoriesManagementOperaPlugin _refreshViewerInfoPropertiesWithCurrentViewerProperties:snapViewersListByViewerSnapId:snapchatterByUserId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a0c59c

// -[SCStoriesManagementOperaPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a0cba4

// -[SCStoriesManagementOperaPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107a0d354

// -[SCStoriesManagementOperaPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0d5a0

// -[SCStoriesManagementOperaPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0d5ac

// -[SCStoriesManagementOperaPlugin extraPropertiesProvider]
// Type encoding: @16@0:8
// Implementation: 0x107a0d63c

// -[SCStoriesManagementOperaPlugin didUpdateSCStoriesPlaybackUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0d640

// -[SCStoriesManagementOperaPlugin deleteSnap]
// Type encoding: v16@0:8
// Implementation: 0x107a0d96c

// -[SCStoriesManagementOperaPlugin saveSnap]
// Type encoding: v16@0:8
// Implementation: 0x107a0da7c

// -[SCStoriesManagementOperaPlugin sendSnap]
// Type encoding: v16@0:8
// Implementation: 0x107a0db8c

// -[SCStoriesManagementOperaPlugin dismissActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x107a0dc6c

// -[SCStoriesManagementOperaPlugin unifiedActionMenuPresenterDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0dc7c

// -[SCStoriesManagementOperaPlugin _presentActionMenuForOurStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0dc8c

// -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0ddb8

// -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogForSubmittedStatusWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0de6c

// -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogForAcceptedStatusWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0e3e4

// -[SCStoriesManagementOperaPlugin _showSpotlightSnapStatusDialogForRejectedStatusWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0ea54

// -[SCStoriesManagementOperaPlugin _handleTapWatchSpotlightNowWithCurrentSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0f1e8

// -[SCStoriesManagementOperaPlugin _deleteSnapWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0f458

// -[SCStoriesManagementOperaPlugin _saveSnapWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0f5a0

// -[SCStoriesManagementOperaPlugin _retryPostWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0f6ac

// -[SCStoriesManagementOperaPlugin _presentActionMenuWithSnap:customStoryOwnerId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a0f778

// -[SCStoriesManagementOperaPlugin _handleDeletingSnapsWithClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0f898

// -[SCStoriesManagementOperaPlugin storyManagementWillDeleteSnapsWithClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0fd10

// -[SCStoriesManagementOperaPlugin storyManagementActionHandlerViewControllerForPresentation]
// Type encoding: @16@0:8
// Implementation: 0x107a0fd14

// -[SCStoriesManagementOperaPlugin storyManagementActionHandlerViewerDidUpdateForCurrentStory]
// Type encoding: v16@0:8
// Implementation: 0x107a0fd74

// -[SCStoriesManagementOperaPlugin dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0fd88

// -[SCStoriesManagementOperaPlugin _logSpotlightSnapStatusWithActionType:snapId:snapStatus:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x107a0fddc

// -[SCStoriesManagementOperaPlugin _avatarViewModelWithBitmojiId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107a0fe4c

// -[SCStoriesManagementOperaPlugin _removeDialogAndResumeOpera]
// Type encoding: v16@0:8
// Implementation: 0x107a10014

// -[SCStoriesManagementOperaPlugin _resumeOpera]
// Type encoding: v16@0:8
// Implementation: 0x107a10040

// -[SCStoriesManagementOperaPlugin _pauseOpera:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a100d0

// -[SCStoriesManagementOperaPlugin _presentGuidelineWebviewWithSnap:snapStatus:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107a10194

// -[SCStoriesManagementOperaPlugin _showSettingsWithSnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a103d8

// -[SCStoriesManagementOperaPlugin settingsScopeWantsDismiss]
// Type encoding: v16@0:8
// Implementation: 0x107a105c8

// -[SCStoriesManagementOperaPlugin settingsScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x107a1064c

// -[SCStoriesManagementOperaPlugin _applicationWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x107a106d4

// -[SCStoriesManagementOperaPlugin updateWithOperaPageProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a10724

// -[SCStoriesManagementOperaPlugin _updatePagePropertiesForStoriesViewStatsWithPageProperties:currentSnap:baseOperaPage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a10754

// -[SCStoriesManagementOperaPlugin _updateSnapViewersByViewerSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a10aac

// -[SCStoriesManagementOperaPlugin _shouldShowViewStatsLayerForOurStorySnap:]
// Type encoding: B24@0:8@16
// Implementation: 0x107a10b94

// -[SCStoriesManagementOperaPlugin webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a10bb4

// -[SCStoriesManagementOperaPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a10bfc

// +[SCStoriesManagementOperaPlugin announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a0b1dc

@end
