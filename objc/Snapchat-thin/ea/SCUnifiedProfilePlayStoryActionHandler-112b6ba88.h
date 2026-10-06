// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfilePlayStoryActionHandler
// Superclass: NSObject
// Address: 0x112b6ba88

@interface SCUnifiedProfilePlayStoryActionHandler

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedProfilePlayStoryActionHandler initWithUserSession:remoteStoriesDataProvider:storiesMediaCoordinator:readReceiptCoordinator:startChatDelegate:navigationDelegate:displayContentDelegate:circumstanceEngine:snapchattersSynchronousDataFetcher:externalLinkSendingService:safetyReportScopeExposer:saveFriendStoryOperaPluginProvider:discoverOperaPluginCreator:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:optInDataProvider:webBrowsingScopeExposer:discoverFeedEventsController:]
// Type encoding: @224@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216
// Implementation: 0x107a30f90

// -[SCUnifiedProfilePlayStoryActionHandler initWithUserSession:myStoriesPlaybackDataProvider:playbackManagementDataProvider:myStoriesDataCoordinator:storiesDataCoordinator:remoteStoriesDataProvider:storiesMediaCoordinator:readReceiptCoordinator:saveStoryScopeExposer:deleteStorySnapScopeExposer:storyShareScopeExposer:friendProfileScopeExposer:myStorySettingsScopeExposer:customStoryMenuScopeExposer:webBrowsingScopeExposer:customStoryMembersScopeExposer:storyPrivacySettingsScopeExposer:standardExternalContentShareScopeExposer:safetyReportScopeExposer:startChatDelegate:navigationDelegate:spotlightNavigationDelegate:displayContentDelegate:circumstanceEngine:snapchattersSynchronousDataFetcher:customStoriesDataFetcher:customStoriesDataSyncer:customStoriesDataMutator:snapchattersDataFetcher:snapchattersPublicInfoFetcher:blockedSnapchatterFetcher:storiesBlizzardLogger:notificationPool:externalLinkSendingService:saveFriendStoryOperaPluginProvider:plusServices:activityFeedScopeExposer:snapProPreferencesManager:snapProUserProfileIdProvider:snapProProfilesProvider:spotlightRepliesScopeExposer:profileManagementScopeExposer:discoverOperaPluginCreator:storyBoostService:applicationLifecycleEvents:resourceDownloader:bloopsReportScopeExposer:featureSettingsService:temporaryFileWriter:ourStoriesAttributionManager:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:contentProductPlaybackScopeExposer:contentProductPlaybackScopeServices:optInDataProvider:spotlightDataFetcher:discoverFeedEventsController:storiesConfigProvider:]
// Type encoding: @496@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488
// Implementation: 0x107a31068

// -[SCUnifiedProfilePlayStoryActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a31f30

// -[SCUnifiedProfilePlayStoryActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a31f38

// -[SCUnifiedProfilePlayStoryActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107a31f40

// -[SCUnifiedProfilePlayStoryActionHandler updateOperaDismissBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a32b04

// -[SCUnifiedProfilePlayStoryActionHandler isPresentingStory]
// Type encoding: B16@0:8
// Implementation: 0x107a32b54

// -[SCUnifiedProfilePlayStoryActionHandler _operaPresenter]
// Type encoding: @16@0:8
// Implementation: 0x107a32bb4

// -[SCUnifiedProfilePlayStoryActionHandler _playStoryForSnapchatter:baseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a32bcc

// -[SCUnifiedProfilePlayStoryActionHandler _playMyStoryFromBaseView:storyType:storyId:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isForPendingSnapProSnap:]
// Type encoding: v64@0:8@16q24@32@40B48B52B56B60
// Implementation: 0x107a32da8

// -[SCUnifiedProfilePlayStoryActionHandler _playPendingSnapProSnapFromBaseView:storyType:storyId:startingClientId:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x107a332a4

// -[SCUnifiedProfilePlayStoryActionHandler _playDocObjectMyStory:fromBaseView:storyType:storyId:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isForPendingSnapProSnap:]
// Type encoding: v72@0:8@16@24q32@40@48B56B60B64B68
// Implementation: 0x107a33698

// -[SCUnifiedProfilePlayStoryActionHandler _playDocObjectMyStory:serverIdToViewState:fromBaseView:storyType:storyId:startingClientId:showManagementOnOpen:isForSingleSnap:isForSpotlightManagement:isForPendingSnapProSnap:]
// Type encoding: v80@0:8@16@24@32q40@48@56B64B68B72B76
// Implementation: 0x107a339fc

// -[SCUnifiedProfilePlayStoryActionHandler _playStoryWithStoriesSummaryInfo:baseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a33f04

// -[SCUnifiedProfilePlayStoryActionHandler _presentOperaWithConfig:story:baseView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a341f4

// -[SCUnifiedProfilePlayStoryActionHandler _cleanUpOperaPresenter]
// Type encoding: v16@0:8
// Implementation: 0x107a34470

// -[SCUnifiedProfilePlayStoryActionHandler _cleanUpContentProductPlaybackScope]
// Type encoding: v16@0:8
// Implementation: 0x107a34498

// -[SCUnifiedProfilePlayStoryActionHandler _showActivityFeedForProfileId:snapId:businessProfileAndUserData:onLoadEventId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x107a344e0

// -[SCUnifiedProfilePlayStoryActionHandler _showPublicProfileManagementForProfileId:businessProfileAndUserData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a347c8

// -[SCUnifiedProfilePlayStoryActionHandler _presentRepliesTrayWithSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a34a3c

// -[SCUnifiedProfilePlayStoryActionHandler _launchActivityFeedForProfileId:snapId:onLoadEventId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a34d04

// -[SCUnifiedProfilePlayStoryActionHandler _launchPublicProfileManagementForProfileId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a34ef8

// -[SCUnifiedProfilePlayStoryActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a35050

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a350e8

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a35124

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a35158

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a35184

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a351b0

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a351b4

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a351b8

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a351ec

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a351f0

// -[SCUnifiedProfilePlayStoryActionHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a351f4

// -[SCUnifiedProfilePlayStoryActionHandler activityFeedDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x107a351f8

// -[SCUnifiedProfilePlayStoryActionHandler activityFeedNeedsRemoval]
// Type encoding: v16@0:8
// Implementation: 0x107a35254

// -[SCUnifiedProfilePlayStoryActionHandler didCompleteSpotlightRepliesScope]
// Type encoding: v16@0:8
// Implementation: 0x107a35358

// -[SCUnifiedProfilePlayStoryActionHandler modalPresentationOnCommentsTrayDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x107a353ac

// -[SCUnifiedProfilePlayStoryActionHandler modalDismissalOnCommentsTrayDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x107a353d8

// -[SCUnifiedProfilePlayStoryActionHandler impalaProfileDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x107a35404

// -[SCUnifiedProfilePlayStoryActionHandler impalaProfileNeedsRemoval]
// Type encoding: v16@0:8
// Implementation: 0x107a3544c

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a35528

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a3554c

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a35550

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a35554

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenter:didBeginPlayingStory:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a35558

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107a3555c

// -[SCUnifiedProfilePlayStoryActionHandler playbackPresenterDidCancelDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a35560

// -[SCUnifiedProfilePlayStoryActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107a35564

// -[SCUnifiedProfilePlayStoryActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a3557c

// -[SCUnifiedProfilePlayStoryActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a35588

// +[SCUnifiedProfilePlayStoryActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107a31f24

@end
