// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublisherStoriesDeepLinkHandler
// Superclass: NSObject
// Address: 0x112b5fcd8

@interface SCPublisherStoriesDeepLinkHandler

// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPublisherStoriesDeepLinkHandler initWithUserSession:presentingViewController:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:snapchattersDataFetcher:circumstanceEngine:networkConnectivityMonitorServices:locationProvider:legacyMediaFetcher:impalaPublicProfilePresentationHandler:operaSessionScopeExposer:contentPlaybackScopeExposer:contentProductPlaybackScopeServices:storiesExperimentServices:storiesMetricServices:adRenderDataParser:]
// Type encoding: @160@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152
// Implementation: 0x1071b6b3c

// -[SCPublisherStoriesDeepLinkHandler handlePublisherDeepLinkURLWithProfile:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b6ee8

// -[SCPublisherStoriesDeepLinkHandler handlePublisherDeepLinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b766c

// -[SCPublisherStoriesDeepLinkHandler _handlePublisherHTTPDeepLinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b7e40

// -[SCPublisherStoriesDeepLinkHandler _onResolvedBusinessProfile:playStoryBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071b83ac

// -[SCPublisherStoriesDeepLinkHandler _showGenericError]
// Type encoding: v16@0:8
// Implementation: 0x1071b8520

// -[SCPublisherStoriesDeepLinkHandler _showStoryExpiredError]
// Type encoding: v16@0:8
// Implementation: 0x1071b8588

// -[SCPublisherStoriesDeepLinkHandler _showAlertWithTitle:overViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b85f0

// -[SCPublisherStoriesDeepLinkHandler _lookupInfoForBusinessProfileId:onLookupCompletionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071b8748

// -[SCPublisherStoriesDeepLinkHandler _handleImpalaBusinessProfileHandler:onLookupCompletionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071b88d0

// -[SCPublisherStoriesDeepLinkHandler _handleProfileForBusinessProfileAndUserData:onLookupCompletionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071b8a30

// -[SCPublisherStoriesDeepLinkHandler _presentShowProfileForBusinessProfileId:showId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b8aa4

// -[SCPublisherStoriesDeepLinkHandler _convertStoryToPlayableModel:overrideFirstSnapId:overrideResumeTimestamp:bitmojiAvatarIds:onPlayableDataModelResolvedBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1071b8c1c

// -[SCPublisherStoriesDeepLinkHandler _fetchAndPlayStoryForPublisherId:storyId:overrideFirstSnapId:overrideResumeTimestamp:shouldUseShowsPlayer:bitmojiAvatarIds:onPlayableDataModelResolvedBlock:]
// Type encoding: v68@0:8@16@24@32@40B48@52@?60
// Implementation: 0x1071b8d94

// -[SCPublisherStoriesDeepLinkHandler _playStoryDataModel:context:deepLinkId:baseViewController:commerceSource:scanSource:storyId:]
// Type encoding: v72@0:8@16Q24@32@40q48q56@64
// Implementation: 0x1071b9050

// -[SCPublisherStoriesDeepLinkHandler _presentStoryPlaybackScope:baseViewController:deepLinkId:context:commerceSource:scanSource:storyId:]
// Type encoding: v72@0:8@16@24@32Q40q48q56@64
// Implementation: 0x1071b9168

// -[SCPublisherStoriesDeepLinkHandler _cleanupOpera]
// Type encoding: v16@0:8
// Implementation: 0x1071b943c

// -[SCPublisherStoriesDeepLinkHandler _fetchAndPlayStoryForPublisherId:storyId:snapId:overrideResumeTimestamp:context:deepLinkId:shouldUseShowsPlayer:baseViewController:commerceSource:scanSource:bitmojiAvatarIds:]
// Type encoding: v100@0:8@16@24@32@40Q48@56B64@68q76q84@92
// Implementation: 0x1071b9484

// -[SCPublisherStoriesDeepLinkHandler impalaPresentPublicProfileWithBusinessProfileId:isPublisherProfile:loggingInfo:presentingViewController:isNavigationStyleVertical:dismissBlock:]
// Type encoding: v56@0:8@16B24@28@36B44@?48
// Implementation: 0x1071b9754

// -[SCPublisherStoriesDeepLinkHandler _onFinishStoryPlayback]
// Type encoding: v16@0:8
// Implementation: 0x1071b979c

// -[SCPublisherStoriesDeepLinkHandler operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b984c

// -[SCPublisherStoriesDeepLinkHandler operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b9850

// -[SCPublisherStoriesDeepLinkHandler operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b9854

// -[SCPublisherStoriesDeepLinkHandler operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b9858

// -[SCPublisherStoriesDeepLinkHandler operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b985c

// -[SCPublisherStoriesDeepLinkHandler operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b9860

// -[SCPublisherStoriesDeepLinkHandler operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b9864

// -[SCPublisherStoriesDeepLinkHandler operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b99c0

// -[SCPublisherStoriesDeepLinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b99c4

// -[SCPublisherStoriesDeepLinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071b99c8

// -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b99cc

// -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidFinishDismissing:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b9a18

// -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidFailToPresent:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b9a1c

// -[SCPublisherStoriesDeepLinkHandler playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071b9a20

// -[SCPublisherStoriesDeepLinkHandler playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071b9a24

// -[SCPublisherStoriesDeepLinkHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x1071b9a28

// -[SCPublisherStoriesDeepLinkHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b9a40

// -[SCPublisherStoriesDeepLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071b9a4c

// +[SCPublisherStoriesDeepLinkHandler resolveDiscoverURL:requestManager:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1071b818c

@end
