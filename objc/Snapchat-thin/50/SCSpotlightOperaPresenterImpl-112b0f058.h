// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightOperaPresenterImpl
// Superclass: NSObject
// Address: 0x112b0f058

@interface SCSpotlightOperaPresenterImpl

// Property: delegate; attributes: T@"<SCTopicPageOperaPresenterDelegate>",W,N,V_delegate
// Property: useSoundBlock; attributes: T@?,C,N,V_useSoundBlock
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightOperaPresenterImpl initWithStoriesPluginCreator:storiesManagementPluginCreator:otherSharedPluginsCreator:spotlightManagementPlaybackDataProvider:circumstanceEngine:spotlightConfigProvider:storiesConfigProvider:networkRequester:bitmojiFriendAvatarProvider:bitmojiAvatarProvider:adConfigProvider:snapchattersDataFetcher:operaSessionScopeExposer:operaSessionScopeServices:spotlightScopeExposer:networkConnectivityMonitor:locationProvider:adRenderDataParser:spotlightScopeServices:]
// Type encoding: @168@0:8@?16@?24@?32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x106a7f24c

// -[SCSpotlightOperaPresenterImpl presentTopic:displayName:topicStories:startingIndexPath:presentingViewController:viewLocation:baseView:pageSessionId:topicStoryType:]
// Type encoding: v88@0:8@16@24@32@40@48q56@64@72q80
// Implementation: 0x106a7f678

// -[SCSpotlightOperaPresenterImpl updateTopicStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7fc30

// -[SCSpotlightOperaPresenterImpl _updatePlaylistGroupDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a7fe94

// -[SCSpotlightOperaPresenterImpl presentSpotlightManagementWithStoryId:presentingViewController:baseView:playbackCompletion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106a7fedc

// -[SCSpotlightOperaPresenterImpl presentSingleSpotlightSnapWithSnapId:presentingViewController:sourcePage:playbackCompletion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106a802cc

// -[SCSpotlightOperaPresenterImpl presentSpotlightSnapWithSnapId:presentingViewController:sourcePage:startTimeMs:playbackCompletion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x106a80494

// -[SCSpotlightOperaPresenterImpl operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a80688

// -[SCSpotlightOperaPresenterImpl operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a806b4

// -[SCSpotlightOperaPresenterImpl operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a806b8

// -[SCSpotlightOperaPresenterImpl operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a80938

// -[SCSpotlightOperaPresenterImpl operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a80940

// -[SCSpotlightOperaPresenterImpl operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a80944

// -[SCSpotlightOperaPresenterImpl operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a80948

// -[SCSpotlightOperaPresenterImpl operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8094c

// -[SCSpotlightOperaPresenterImpl operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106a80990

// -[SCSpotlightOperaPresenterImpl operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a80b48

// -[SCSpotlightOperaPresenterImpl _cleanupOpera]
// Type encoding: v16@0:8
// Implementation: 0x106a80b4c

// -[SCSpotlightOperaPresenterImpl _installUseSoundStripIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106a80bcc

// -[SCSpotlightOperaPresenterImpl _setUseSoundStripHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x106a811a4

// -[SCSpotlightOperaPresenterImpl _removeUseSoundStrip]
// Type encoding: v16@0:8
// Implementation: 0x106a81228

// -[SCSpotlightOperaPresenterImpl removeSpotlightScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8125c

// -[SCSpotlightOperaPresenterImpl _cleanupSpotlightScope]
// Type encoding: v16@0:8
// Implementation: 0x106a8129c

// -[SCSpotlightOperaPresenterImpl _presentSingleSnapWithStory:presentingViewController:sourcePage:playbackCompletion:]
// Type encoding: v48@0:8@16@24q32@?40
// Implementation: 0x106a812e4

// -[SCSpotlightOperaPresenterImpl _presentSnapWithStory:presentingViewController:sourcePage:startTimeMs:playbackCompletion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x106a81440

// -[SCSpotlightOperaPresenterImpl _fetchSingleSnapDiscoverFeedStoryWithSnapId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106a81624

// -[SCSpotlightOperaPresenterImpl _showStoryExpiredErrorOverViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a8176c

// -[SCSpotlightOperaPresenterImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x106a818d4

// -[SCSpotlightOperaPresenterImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106a818ec

// -[SCSpotlightOperaPresenterImpl useSoundBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106a818f8

// -[SCSpotlightOperaPresenterImpl setUseSoundBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106a81900

// -[SCSpotlightOperaPresenterImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a81908

@end
