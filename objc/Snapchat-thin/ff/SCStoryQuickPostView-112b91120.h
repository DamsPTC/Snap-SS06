// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryQuickPostView
// Superclass: UIView
// Address: 0x112b91120

@interface SCStoryQuickPostView

// Property: addToMyStory; attributes: TB,N,V_addToMyStory
// Property: topicsCollection; attributes: T@"<SCTopicTracking>",&,N,V_topicsCollection
// Property: tableView; attributes: T@"UITableView",R,N,V_tableView
// Property: storyQuickPostDelegate; attributes: T@"<SCStoryQuickPostDelegate>",W,N,V_storyQuickPostDelegate
// Property: presenterViewController; attributes: T@"UIViewController",W,N,V_presenterViewController
// Property: hideSnapMap; attributes: TB,N,V_hideSnapMap
// Property: mediaSupportsSpotlightSection; attributes: TB,N,V_mediaSupportsSpotlightSection
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryQuickPostView initWithUserSession:customStoriesDataFetcher:customStoriesDataMutator:customStoriesOnboardingPresenter:snapProProfilesProvider:snapProUserProfileIdProvider:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:includePublicStories:circumstanceEngine:complianceEngine:featureSettingsService:viewController:webBrowsingScopeExposer:storyPrivacySettingManager:notificationManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:quickPostTooltipsService:sendToOnboardingScopeExposer:previewABProvider:snapSource:customStoryMenuScopeLauncher:customStoryMenuScopeServices:]
// Type encoding: @208@0:8@16@24@32@40@48@56@64@72B80B84@88@96@104@112@120@128@136@144@152@160@168@176q184@192@200
// Implementation: 0x107fc33a0

// -[SCStoryQuickPostView initWithUserSession:customStoriesDataFetcher:customStoriesDataMutator:customStoriesOnboardingPresenter:snapProProfilesProvider:snapProUserProfileIdProvider:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:includePublicStories:circumstanceEngine:complianceEngine:featureSettingsService:viewController:webBrowsingScopeExposer:webBrowsingScopeServices:storyPrivacySettingManager:notificationManager:ourStoriesOnboardingManager:ourStoriesAttributionManager:quickPostTooltipsService:sendToOnboardingScopeExposer:sendToOnboardingScopeServices:previewABProvider:snapSource:customStoryMenuScopeLauncher:customStoryMenuScopeServices:]
// Type encoding: @224@0:8@16@24@32@40@48@56@64@72B80B84@88@96@104@112@120@128@136@144@152@160@168@176@184@192q200@208@216
// Implementation: 0x107fc341c

// -[SCStoryQuickPostView selectBusinessProfileStoryOrHostedStory:recentlyPostedToMyStory:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x107fc4164

// -[SCStoryQuickPostView preSelectVisibleCustomStoriesWithPublicationIds:myStoryRecentlyPosted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fc435c

// -[SCStoryQuickPostView showFirstTimePrivateStoryPreselectionModalIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x107fc449c

// -[SCStoryQuickPostView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107fc4748

// -[SCStoryQuickPostView didMoveToSuperview]
// Type encoding: v16@0:8
// Implementation: 0x107fc474c

// -[SCStoryQuickPostView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107fc4798

// -[SCStoryQuickPostView setTopicsCollection:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc47e8

// -[SCStoryQuickPostView _updateSpotlightSubtext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc4b3c

// -[SCStoryQuickPostView _updateOurStoryDisplayNameAndSubtextWithPlaceTag:placeTag:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fc4bf0

// -[SCStoryQuickPostView _selectVisibleCustomStoryIdsIfNecessary:customStoryIdsToSelect:myStoryRecentlyPosted:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x107fc4de8

// -[SCStoryQuickPostView _refreshOurStoryTopics]
// Type encoding: v16@0:8
// Implementation: 0x107fc5004

// -[SCStoryQuickPostView _setSpotlightSubtext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc5124

// -[SCStoryQuickPostView _reloadTableView]
// Type encoding: v16@0:8
// Implementation: 0x107fc5218

// -[SCStoryQuickPostView customStoriesSelected]
// Type encoding: @16@0:8
// Implementation: 0x107fc5228

// -[SCStoryQuickPostView ourStorySelected]
// Type encoding: @16@0:8
// Implementation: 0x107fc52dc

// -[SCStoryQuickPostView businessProfilesSelected]
// Type encoding: @16@0:8
// Implementation: 0x107fc5480

// -[SCStoryQuickPostView _updateTotalStoriesCount]
// Type encoding: v16@0:8
// Implementation: 0x107fc5608

// -[SCStoryQuickPostView addToOurStory]
// Type encoding: B16@0:8
// Implementation: 0x107fc5704

// -[SCStoryQuickPostView contentHeight]
// Type encoding: d16@0:8
// Implementation: 0x107fc5730

// -[SCStoryQuickPostView setHideSnapMap:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fc5750

// -[SCStoryQuickPostView setMediaSupportsSpotlightSection:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fc57ac

// -[SCStoryQuickPostView _onSnapProProfilesUpdated:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc5840

// -[SCStoryQuickPostView _canSelectMyStory]
// Type encoding: B16@0:8
// Implementation: 0x107fc5bd4

// -[SCStoryQuickPostView _storiesRecipientCount]
// Type encoding: Q16@0:8
// Implementation: 0x107fc5c38

// -[SCStoryQuickPostView _sendDidUpdateRecipients]
// Type encoding: v16@0:8
// Implementation: 0x107fc5cb4

// -[SCStoryQuickPostView _standardProfileDisplayName:isHost:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107fc5d6c

// -[SCStoryQuickPostView _myStoryFriendsDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x107fc5da0

// -[SCStoryQuickPostView _isStandardMyPublicProfile:]
// Type encoding: B24@0:8@16
// Implementation: 0x107fc5da4

// -[SCStoryQuickPostView standardTierEligibleDefaultSelectingProfileStory]
// Type encoding: B16@0:8
// Implementation: 0x107fc5dc4

// -[SCStoryQuickPostView _rankBusinessStoryAfterMyStoryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107fc5de8

// -[SCStoryQuickPostView _publicStorySubtext:isHost:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107fc5df8

// -[SCStoryQuickPostView _myStorySubtext]
// Type encoding: @16@0:8
// Implementation: 0x107fc5e20

// -[SCStoryQuickPostView didUpdateCustomStoriesWithPublicationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc5ec8

// -[SCStoryQuickPostView didUpdatePostableStories]
// Type encoding: v16@0:8
// Implementation: 0x107fc5f68

// -[SCStoryQuickPostView _appendNewPostableCustomStories]
// Type encoding: v16@0:8
// Implementation: 0x107fc5f6c

// -[SCStoryQuickPostView _handleAppendNewPostableCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc60ac

// -[SCStoryQuickPostView _updateCustomStories]
// Type encoding: v16@0:8
// Implementation: 0x107fc63dc

// -[SCStoryQuickPostView _handleUpdatePostableCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc651c

// -[SCStoryQuickPostView numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x107fc6584

// -[SCStoryQuickPostView tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x107fc658c

// -[SCStoryQuickPostView tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107fc659c

// -[SCStoryQuickPostView tableView:willDisplayCell:forRowAtIndexPath:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107fc69e4

// -[SCStoryQuickPostView _myStoryRowsRange]
// Type encoding: {_NSRange=QQ}16@0:8
// Implementation: 0x107fc6cdc

// -[SCStoryQuickPostView _visibleCustomStoryIds]
// Type encoding: @16@0:8
// Implementation: 0x107fc6dcc

// -[SCStoryQuickPostView _visibleCustomStoryIdsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107fc6ee4

// -[SCStoryQuickPostView _visibleCustomStoryIdsWithCompletionHelper:postableCustomStories:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x107fc7100

// -[SCStoryQuickPostView _spotlightStoryCount]
// Type encoding: Q16@0:8
// Implementation: 0x107fc7194

// -[SCStoryQuickPostView storyRowTypeOfRowAtIndexPath:resolvedIndex:]
// Type encoding: Q32@0:8@16^Q24
// Implementation: 0x107fc71a4

// -[SCStoryQuickPostView _customStoryAtIndex:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107fc731c

// -[SCStoryQuickPostView tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x107fc73c0

// -[SCStoryQuickPostView tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fc73cc

// -[SCStoryQuickPostView didSelectCellAtIndexPath:withCell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fc7454

// -[SCStoryQuickPostView didSelectPostMyStoryCell]
// Type encoding: v16@0:8
// Implementation: 0x107fc7610

// -[SCStoryQuickPostView _toggleOurStory]
// Type encoding: v16@0:8
// Implementation: 0x107fc7770

// -[SCStoryQuickPostView continueSendingAfterRemovingUnavailable]
// Type encoding: B16@0:8
// Implementation: 0x107fc7788

// -[SCStoryQuickPostView _preSelectCustomStories:myStoryRecentlyPosted:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fc7bf8

// -[SCStoryQuickPostView _didSelectPostCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc7c38

// -[SCStoryQuickPostView _didSelectPostCustomStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc7d30

// -[SCStoryQuickPostView _showTrustAndSafetyPromptForCommunityStoryWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc7f58

// -[SCStoryQuickPostView _showTrustAndSafetyPromptForSharedStoryWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc8254

// -[SCStoryQuickPostView _handleBlockedUsersForSharedStoryWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc84d8

// -[SCStoryQuickPostView _showBlockedUsersPromptForSharedStoryWithBlockedSnapchatters:storyMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fc8694

// -[SCStoryQuickPostView _addBlockedUsersExceptionForShareStoryWithStoryMetadata:blockedSnapchatters:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107fc88e8

// -[SCStoryQuickPostView _didConfirmToSelectSharedStoryWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc8aa8

// -[SCStoryQuickPostView _showFirstTimePostingCustomStoryAlertIfNecessaryWithCustomStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc8c30

// -[SCStoryQuickPostView _showMembersListForCustomStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc8df4

// -[SCStoryQuickPostView didDismissCustomStoryMembers]
// Type encoding: v16@0:8
// Implementation: 0x107fc8f28

// -[SCStoryQuickPostView _didSelectPostSpotlightCell]
// Type encoding: v16@0:8
// Implementation: 0x107fc8f38

// -[SCStoryQuickPostView _setSpotlightSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fc90a4

// -[SCStoryQuickPostView _didAcceptSendForSpotlight]
// Type encoding: v16@0:8
// Implementation: 0x107fc90b4

// -[SCStoryQuickPostView _didCancelSpotlightAcceptance:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fc90fc

// -[SCStoryQuickPostView _didSelectPostOurStoryCell]
// Type encoding: v16@0:8
// Implementation: 0x107fc9140

// -[SCStoryQuickPostView _shareAnonymouslySpotlightEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107fc9198

// -[SCStoryQuickPostView _spotlightHintSubtext]
// Type encoding: @16@0:8
// Implementation: 0x107fc91e0

// -[SCStoryQuickPostView _snapMapHintSubtext:]
// Type encoding: @24@0:8@16
// Implementation: 0x107fc9244

// -[SCStoryQuickPostView _enableQuickPostPrivacyModal]
// Type encoding: B16@0:8
// Implementation: 0x107fc926c

// -[SCStoryQuickPostView _enablePreselectOnlyVisibleCustomStories]
// Type encoding: B16@0:8
// Implementation: 0x107fc928c

// -[SCStoryQuickPostView _enableSafeCopyOnSelectedCustomStories]
// Type encoding: B16@0:8
// Implementation: 0x107fc92ac

// -[SCStoryQuickPostView _didAcceptSendForOurStory]
// Type encoding: v16@0:8
// Implementation: 0x107fc92cc

// -[SCStoryQuickPostView _didSelectBusinessProfileHandler:withTapOnCell:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fc9318

// -[SCStoryQuickPostView _selectBusinessProfileHandler:isPreselect:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107fc9320

// -[SCStoryQuickPostView _updateOurStoriesWithTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc956c

// -[SCStoryQuickPostView _generateShareAnonymouslyMetadata]
// Type encoding: @16@0:8
// Implementation: 0x107fc95a4

// -[SCStoryQuickPostView _selectedMyPublicProfileId]
// Type encoding: @16@0:8
// Implementation: 0x107fc95cc

// -[SCStoryQuickPostView _initGesture]
// Type encoding: v16@0:8
// Implementation: 0x107fc9740

// -[SCStoryQuickPostView _longPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc97ac

// -[SCStoryQuickPostView _presentCustomStoryMenuWithPublicationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc9894

// -[SCStoryQuickPostView didCompleteCustomStoryMenuScope]
// Type encoding: v16@0:8
// Implementation: 0x107fc99a8

// -[SCStoryQuickPostView didRemoveCustomStoryWithPublicationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc99b8

// -[SCStoryQuickPostView logStoriesSelectionWithLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc9b94

// -[SCStoryQuickPostView logPublicStoryMetricsWithIsSending:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fc9c30

// -[SCStoryQuickPostView _logPublicStoryAvailableWithCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x107fc9d74

// -[SCStoryQuickPostView webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc9e64

// -[SCStoryQuickPostView addToMyStory]
// Type encoding: B16@0:8
// Implementation: 0x107fc9ebc

// -[SCStoryQuickPostView setAddToMyStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fc9ecc

// -[SCStoryQuickPostView topicsCollection]
// Type encoding: @16@0:8
// Implementation: 0x107fc9edc

// -[SCStoryQuickPostView tableView]
// Type encoding: @16@0:8
// Implementation: 0x107fc9eec

// -[SCStoryQuickPostView storyQuickPostDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107fc9efc

// -[SCStoryQuickPostView setStoryQuickPostDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc9f1c

// -[SCStoryQuickPostView presenterViewController]
// Type encoding: @16@0:8
// Implementation: 0x107fc9f30

// -[SCStoryQuickPostView setPresenterViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fc9f50

// -[SCStoryQuickPostView hideSnapMap]
// Type encoding: B16@0:8
// Implementation: 0x107fc9f64

// -[SCStoryQuickPostView mediaSupportsSpotlightSection]
// Type encoding: B16@0:8
// Implementation: 0x107fc9f74

// -[SCStoryQuickPostView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fc9f84

@end
