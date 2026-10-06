// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesTrayViewController
// Superclass: UIViewController
// Address: 0x112b93808

@interface SCStoriesTrayViewController

// Property: delegate; attributes: T@"<SCStoriesTrayViewControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesTrayViewController initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:snapchatterPublicInfoFetcher:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:circumstanceEngine:complianceEngine:featureSettingsService:viewController:ourStoriesOnboardingManager:ourStoriesAttributionManager:bitmojiSelfieFetcher:bitmojiSelfieRequest:preselectedPublicationIds:topicsCollection:customStoriesOnboardingPresenter:webBrowsingScopeExposer:storyPrivacySettingManager:quickPostTooltipsService:sendToOnboardingScopeExposer:hideSnapMap:valdiRuntimeProvider:quickPostTrayRefreshEnabled:quickPostPreselectRefreshEnabled:snapSource:includePublicStories:resourceDownloader:performer:spotlightAutoShareService:creatorInfoProvider:]
// Type encoding: @276@0:8@16@24@32@40@48@56@64@72@80B88@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204B212@216B224B228q232B240@244@252@260@268
// Implementation: 0x10803aec8

// -[SCStoriesTrayViewController initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:snapchatterPublicInfoFetcher:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:circumstanceEngine:complianceEngine:featureSettingsService:viewController:ourStoriesOnboardingManager:ourStoriesAttributionManager:bitmojiSelfieFetcher:bitmojiSelfieRequest:preselectedPublicationIds:topicsCollection:customStoriesOnboardingPresenter:webBrowsingScopeExposer:webBrowsingScopeServices:storyPrivacySettingManager:quickPostTooltipsService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:hideSnapMap:valdiRuntimeProvider:quickPostTrayRefreshEnabled:quickPostPreselectRefreshEnabled:snapSource:includePublicStories:resourceDownloader:performer:spotlightAutoShareService:creatorInfoProvider:]
// Type encoding: @292@0:8@16@24@32@40@48@56@64@72@80B88@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204@212@220B228@232B240B244q248B256@260@268@276@284
// Implementation: 0x10803af80

// -[SCStoriesTrayViewController setupViews]
// Type encoding: v16@0:8
// Implementation: 0x10803b9ac

// -[SCStoriesTrayViewController tray:canUseGestureToExpandOrCollapse:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10803c788

// -[SCStoriesTrayViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803c790

// -[SCStoriesTrayViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803c7e8

// -[SCStoriesTrayViewController _storyTypesFromSelectedRows]
// Type encoding: @16@0:8
// Implementation: 0x10803c8f8

// -[SCStoriesTrayViewController _displayPrivateStoryPreselectionOnboardingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10803ca4c

// -[SCStoriesTrayViewController _sendButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x10803cb6c

// -[SCStoriesTrayViewController _isEligibleForCrossPosting]
// Type encoding: B16@0:8
// Implementation: 0x10803cd14

// -[SCStoriesTrayViewController _isStoryEligibleForCrossPosting:]
// Type encoding: B24@0:8@16
// Implementation: 0x10803cd70

// -[SCStoriesTrayViewController _updateCrossPostIconsIdEligibleForCrossPosting]
// Type encoding: v16@0:8
// Implementation: 0x10803ce6c

// -[SCStoriesTrayViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10803cfc4

// -[SCStoriesTrayViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10803d1c0

// -[SCStoriesTrayViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10803d1d0

// -[SCStoriesTrayViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x10803d1d8

// -[SCStoriesTrayViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10803d200

// -[SCStoriesTrayViewController _deselectConflictingStoryRowsForSelectedRow:inSection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10803d484

// -[SCStoriesTrayViewController _handleFanPassMutualExclusivityForSelectedRow:inSection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10803d778

// -[SCStoriesTrayViewController tableView:didDeselectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10803d9a0

// -[SCStoriesTrayViewController tableView:willDisplayCell:forRowAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10803da7c

// -[SCStoriesTrayViewController _didSelectRow:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10803db2c

// -[SCStoriesTrayViewController fetchBitmojiSelfieImage:]
// Type encoding: @24@0:8@?16
// Implementation: 0x10803dd28

// -[SCStoriesTrayViewController fetchImageWithUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10803ded8

// -[SCStoriesTrayViewController spotlightIconCOF]
// Type encoding: @16@0:8
// Implementation: 0x10803e400

// -[SCStoriesTrayViewController tray:positionDidChange:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10803e424

// -[SCStoriesTrayViewController tray:heightForPosition:]
// Type encoding: d32@0:8@16Q24
// Implementation: 0x10803e428

// -[SCStoriesTrayViewController presentUsingTray:inContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10803e45c

// -[SCStoriesTrayViewController _trayHeightForRowCount:]
// Type encoding: d24@0:8Q16
// Implementation: 0x10803e754

// -[SCStoriesTrayViewController _setupPreselectionForRowData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10803e80c

// -[SCStoriesTrayViewController _moveSelectedRowsToTop]
// Type encoding: v16@0:8
// Implementation: 0x10803eb5c

// -[SCStoriesTrayViewController logStoriesSelectionWithLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10803ed10

// -[SCStoriesTrayViewController logPublicStoryMetricsWithIsSending:]
// Type encoding: v20@0:8B16
// Implementation: 0x10803ef68

// -[SCStoriesTrayViewController _logPublicStoryAvailableWithValue:]
// Type encoding: v24@0:8q16
// Implementation: 0x10803f098

// -[SCStoriesTrayViewController _incrementPublicStoryAvailableFirstTimeWithSnapSource:value:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10803f1ec

// -[SCStoriesTrayViewController _selectedBusinessStoryCount]
// Type encoding: q16@0:8
// Implementation: 0x10803f204

// -[SCStoriesTrayViewController _availableBusinessStoryCount]
// Type encoding: q16@0:8
// Implementation: 0x10803f314

// -[SCStoriesTrayViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10803f424

// -[SCStoriesTrayViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10803f444

// -[SCStoriesTrayViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10803f458

@end
