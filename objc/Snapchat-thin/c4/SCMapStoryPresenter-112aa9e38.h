// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapStoryPresenter
// Superclass: NSObject
// Address: 0x112aa9e38

@interface SCMapStoryPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCMapStoryPresenterDelegate>",W,N,Vdelegate

// -[SCMapStoryPresenter initWithUserSession:mapLoggerSession:navigationServices:storiesDataCoordinator:storiesPlaybackDataProvider:myStoriesPlaybackDataProvider:playbackManagementDataProvider:readReceiptCoordinator:storiesMediaCoordinator:myStoriesDataCoordinator:snapViewerDataCoordinator:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:friendProfileScopeExposer:myStorySettingsScopeExposer:myStorySettingsScopeServices:standardExternalContentShareScopeExposer:debugViewer:circumstanceEngine:adPluginProvider:mapStoryPlaybackScopeExposer:snapchattersSynchronousDataFetcher:webBrowsingScopeExposer:sharedStorySnapManager:safetyReportScopeExposer:externalLinkSendingService:contextOperaPluginProvider:operaSessionScopeExposer:operaSessionScopeServices:saveFriendStoryOperaPluginProvider:applicationLifecycleEvents:bloopsReportScopeExposer:temporaryFileWriter:notificationOSSettingsRetriever:offPlatformShareServices:spotlightShareSender:spotlightPlatformAnalyticsCreator:remixOperaPluginProvider:musicContentRestrictionServices:networkConnectivityMonitor:userBlizzardLogger:storiesUsageLogger:avatarFactory:pageLauncher:legacyStoryMediaCache:lazyDiscoverFeedEventsController:settingsScopeServices:storyShareScopeServices:lazyDiscoverFeedInteractionHistoryManager:]
// Type encoding: @424@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416
// Implementation: 0x105ee85e8

// -[SCMapStoryPresenter presentFriendStoryOnViewController:baseView:person:sourceType:mapStoryType:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x105ee8f98

// -[SCMapStoryPresenter clearTemporarilyCachedData]
// Type encoding: v16@0:8
// Implementation: 0x105ee90fc

// -[SCMapStoryPresenter dismissStory]
// Type encoding: v16@0:8
// Implementation: 0x105ee9104

// -[SCMapStoryPresenter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x105ee9150

// -[SCMapStoryPresenter _fetchMyStoryAndPresentOnViewController:storyId:baseView:sourceType:mapStoryType:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x105ee91a0

// -[SCMapStoryPresenter _fetchReadReceiptAndPlayMyStory:viewController:storyId:baseView:sourceType:mapStoryType:]
// Type encoding: v64@0:8@16@24@32@40q48q56
// Implementation: 0x105ee9388

// -[SCMapStoryPresenter _presentMyStory:serverIdToViewStates:viewController:baseView:sourceType:mapStoryType:]
// Type encoding: v64@0:8@16@24@32@40q48q56
// Implementation: 0x105ee96dc

// -[SCMapStoryPresenter _fetchSummaryInfoAndPresentStoryOnViewController:storyId:baseView:sourceType:mapStoryType:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x105ee98dc

// -[SCMapStoryPresenter _presentStoryWithSummaryInfo:baseView:sourceType:mapStoryType:viewController:]
// Type encoding: v56@0:8@16@24q32q40@48
// Implementation: 0x105ee9c68

// -[SCMapStoryPresenter friendStoryPresenterDidAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ee9e0c

// -[SCMapStoryPresenter friendStoryPresenterDidDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ee9e44

// -[SCMapStoryPresenter mapStoryDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105ee9e7c

// -[SCMapStoryPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x105ee9ee4

// -[SCMapStoryPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ee9efc

// -[SCMapStoryPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ee9f08

@end
