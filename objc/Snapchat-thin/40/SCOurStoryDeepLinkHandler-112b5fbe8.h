// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOurStoryDeepLinkHandler
// Superclass: NSObject
// Address: 0x112b5fbe8

@interface SCOurStoryDeepLinkHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOurStoryDeepLinkHandler initWithUserSession:presentingViewController:navigationDelegate:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:storiesMediaCoordinator:startChatDelegate:readReceiptCoordinator:cachedViewStateProvider:adConfigProvider:circumstanceEngine:snapchattersSynchronousDataFetcher:grapheneRegistry:snapchattersDataFetcher:externalLinkSendingService:safetyReportScopeExposer:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:discoverPluginsCreator:deepLinkHandlerScopeDelegate:spotlightRepliesScopeExposer:bloopsReportScopeExposer:networkConnectivityMonitor:locationProvider:notificationOSSettingsRetriever:offPlatformShareServices:storiesConfigProvider:repliesViewCountManager:spotlightDataFetcher:spotlightShareSender:spotlightPlatformAnalyticsCreator:adRenderDataParser:discoverFeedEventsController:countryCodeProvider:pageLauncher:]
// Type encoding: @312@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304
// Implementation: 0x1071b2128

// -[SCOurStoryDeepLinkHandler handleDeepLinkURL:additionalInfo:isSingleSpotlightSnap:pageType:commentsDefaultTab:baseViewRef:storyPlayerModerationData:prependedCommentIds:hashtag:musicId:]
// Type encoding: v88@0:8@16@24B32q36i44@48@56@64@72@80
// Implementation: 0x1071b2808

// -[SCOurStoryDeepLinkHandler _fetchStoryForCompositeStoryId:pageType:baseViewRef:storyPlayerModerationData:prependedCommentIds:hasExplicitTrendingTopic:]
// Type encoding: v60@0:8@16q24@32@40@48B56
// Implementation: 0x1071b29bc

// -[SCOurStoryDeepLinkHandler _fetchTrendingTopicContinuationStoriesWithHashtag:musicId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b2dd8

// -[SCOurStoryDeepLinkHandler _handleTrendingTopicContinuationResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b301c

// -[SCOurStoryDeepLinkHandler _mergeTrendingNotifTopicContinuationStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b3218

// -[SCOurStoryDeepLinkHandler _showGenericError]
// Type encoding: v16@0:8
// Implementation: 0x1071b3664

// -[SCOurStoryDeepLinkHandler _showStoryExpiredError]
// Type encoding: v16@0:8
// Implementation: 0x1071b36cc

// -[SCOurStoryDeepLinkHandler _showAlertWithTitle:overViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b373c

// -[SCOurStoryDeepLinkHandler _convertStoryToPlayableDataModel:onPlayableDataModelResolvedBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1071b38a0

// -[SCOurStoryDeepLinkHandler _playStoryDataModel:story:pageType:baseViewRef:storyPlayerModerationData:prependedCommentIds:hasExplicitTrendingTopic:]
// Type encoding: v68@0:8@16@24q32@40@48@56B64
// Implementation: 0x1071b39fc

// -[SCOurStoryDeepLinkHandler _feedPageSectionFromBroadcastViewLocation:]
// Type encoding: q24@0:8q16
// Implementation: 0x1071b424c

// -[SCOurStoryDeepLinkHandler _presentStory:allDataModels:plugins:pageType:baseView:sessionContext:hasExplicitTrendingTopic:]
// Type encoding: v68@0:8@16@24@32q40@48@56B64
// Implementation: 0x1071b425c

// -[SCOurStoryDeepLinkHandler _cleanUpOperaPresenter]
// Type encoding: v16@0:8
// Implementation: 0x1071b4470

// -[SCOurStoryDeepLinkHandler _creatorProfileIdFromStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071b4528

// -[SCOurStoryDeepLinkHandler _launchRepliesTray:prependedCommentIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b45dc

// -[SCOurStoryDeepLinkHandler operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b47cc

// -[SCOurStoryDeepLinkHandler operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b4840

// -[SCOurStoryDeepLinkHandler operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b4888

// -[SCOurStoryDeepLinkHandler operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b488c

// -[SCOurStoryDeepLinkHandler operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b4890

// -[SCOurStoryDeepLinkHandler operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b4894

// -[SCOurStoryDeepLinkHandler operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b4898

// -[SCOurStoryDeepLinkHandler operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071b489c

// -[SCOurStoryDeepLinkHandler operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b48a0

// -[SCOurStoryDeepLinkHandler operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071b48a4

// -[SCOurStoryDeepLinkHandler removeContentForCreatorId:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071b48a8

// -[SCOurStoryDeepLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071b48ac

@end
