// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedActionSheetActionHandler
// Superclass: NSObject
// Address: 0x112b65fe8

@interface SCDiscoverFeedActionSheetActionHandler

// Property: customStatusBarStyleContextController; attributes: T@"<SCCustomStatusBarStyleContextController>",W,N,V_customStatusBarStyleContextController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: actionMenuPresenter; attributes: T@"SCUnifiedActionMenuPresenter",W,N,V_actionMenuPresenter
// Property: presentingViewController; attributes: T@"UIViewController<SCPageNameLogging>",W,N,V_presentingViewController
// Property: containerViewController; attributes: T@"UIViewController<SCPageNameLogging>",?,W,N
// Property: deckContainerFactory; attributes: T@"<SCDeckContainerFactory>",?,W,N

// -[SCDiscoverFeedActionSheetActionHandler addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107986b54

// -[SCDiscoverFeedActionSheetActionHandler removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107986b5c

// -[SCDiscoverFeedActionSheetActionHandler didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107986b64

// -[SCDiscoverFeedActionSheetActionHandler initWithUserSession:story:navigationDelegate:subscribeStatusManager:notificationStatusManager:circumstanceEngine:sectionKey:storiesGrapheneMetricsEmitter:impalaProfilePresentHandler:creatorSettingsDataMutator:lazyDiscoverFeedDataMutator:lazyDiscoverFeedInteractionHistoryManager:lazyNotificationOptInRequestManager:lazyDiscoverFeedDataFetcher:lazyDiscoverFeedEventsLogger:lazyBitmojiImageFetcher:lazyBitmojiFriendAvatarProvider:lazyBitmojiAvatarProvider:lazySnapchattersDataFetcher:lazyAdConfigProvider:lazyAdReportPromotedStoryTileEventTrackerProvider:lazyImageDownloader:lazyUserSegmentsProvider:snapchattersDataMutator:snapchattersDataTracker:promotedStoryShareScopeExposer:promotedStoryShareScopeServices:promotedStoryReportScopeExposer:promotedStoryReportScopeServices:promotedStoryAdInfoScopeExposer:promotedStoryAdInfoScopeServices:promotedStoryHideScopeExposer:promotedStoryHideScopeServices:shareFriendScopeExposer:safetyReportScopeExposer:deeplinkSendToScopeExposer:adReportScopeExposer:snapTokenProvider:mixerEndpointManager:subscriptionWorkflow:alertPresenterFactory:grapheneRegistry:storiesConfigProvider:networkConnectivityMonitor:dsaExplainerScopeExposer:dsaExplainerScopeServices:contentBlocker:adRenderDataParser:customAppThemeProvider:locationProvider:]
// Type encoding: @416@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408
// Implementation: 0x107986b6c

// -[SCDiscoverFeedActionSheetActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107987594

// -[SCDiscoverFeedActionSheetActionHandler _sendCheetahHideRequestWithStoryDedupeFp:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107987dd8

// -[SCDiscoverFeedActionSheetActionHandler _submitHideRequestWithToken:forStory:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079885a0

// -[SCDiscoverFeedActionSheetActionHandler _handleHideResponse:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107988744

// -[SCDiscoverFeedActionSheetActionHandler _removeStoryFromDataStore:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079888cc

// -[SCDiscoverFeedActionSheetActionHandler _handleOptInNotificationWithActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079889f4

// -[SCDiscoverFeedActionSheetActionHandler _handleNotificationResponseWithSuccess:storyDedupeFp:newNotificationState:displayName:]
// Type encoding: v44@0:8B16Q20Q28@36
// Implementation: 0x107988cec

// -[SCDiscoverFeedActionSheetActionHandler _sendPublisherURLForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107988d98

// -[SCDiscoverFeedActionSheetActionHandler didDismissWithRecipientsCount:groupsCount:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x1079890fc

// -[SCDiscoverFeedActionSheetActionHandler _sendUserForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x107989188

// -[SCDiscoverFeedActionSheetActionHandler _dismissMenuAndSendPromotedStoryForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079894a4

// -[SCDiscoverFeedActionSheetActionHandler _sendPromotedStoryForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1079895c4

// -[SCDiscoverFeedActionSheetActionHandler _dismissPromotedStoryShare]
// Type encoding: v16@0:8
// Implementation: 0x10798977c

// -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerDidSendUsername]
// Type encoding: v16@0:8
// Implementation: 0x10798979c

// -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerDidCompleteExport:completed:activityError:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1079897a0

// -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerTappedExportURL]
// Type encoding: v16@0:8
// Implementation: 0x1079897a4

// -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerTappedSendUsername]
// Type encoding: v16@0:8
// Implementation: 0x1079897a8

// -[SCDiscoverFeedActionSheetActionHandler shareFriendActionManagerWillDismissSendUsername]
// Type encoding: v16@0:8
// Implementation: 0x1079897ac

// -[SCDiscoverFeedActionSheetActionHandler shareFriendWorkflowCompleted]
// Type encoding: v16@0:8
// Implementation: 0x1079897b0

// -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentPublicProfile:sourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1079897f8

// -[SCDiscoverFeedActionSheetActionHandler _presentPublicUserProfile:userId:businessId:sourceView:storyLoggingInfo:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1079899b8

// -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentRelatedAccountsViewController:sourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107989bd0

// -[SCDiscoverFeedActionSheetActionHandler _presentRelatedAccountsViewController:sourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107989d18

// -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentPublisherProfile:sourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10798a330

// -[SCDiscoverFeedActionSheetActionHandler _presentPublisherProfile:sourceView:storyLoggingInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10798a47c

// -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPresentShowProfile:sourceView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10798a594

// -[SCDiscoverFeedActionSheetActionHandler _presentShowProfile:sourceView:storyLoggingInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10798a6e0

// -[SCDiscoverFeedActionSheetActionHandler _handleCancelActionSheet]
// Type encoding: v16@0:8
// Implementation: 0x10798a7f8

// -[SCDiscoverFeedActionSheetActionHandler _storyWithDedupeFp:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10798a82c

// -[SCDiscoverFeedActionSheetActionHandler _creatorIdForStory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10798a87c

// -[SCDiscoverFeedActionSheetActionHandler _announceViewEvent:sourceView:storyLoggingInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10798a914

// -[SCDiscoverFeedActionSheetActionHandler _dismissActionSheetAndPlayStoryFromSourceView:storyDedupeFp:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10798ab2c

// -[SCDiscoverFeedActionSheetActionHandler _announcePlayStoryEventFromSourceView:storyDedupeFp:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10798ac58

// -[SCDiscoverFeedActionSheetActionHandler reportDidCompleteWithCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10798ae04

// -[SCDiscoverFeedActionSheetActionHandler reportDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10798ae7c

// -[SCDiscoverFeedActionSheetActionHandler _presentReportViewControllerForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798b028

// -[SCDiscoverFeedActionSheetActionHandler _presentReportPromotedStoryWithStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798ba30

// -[SCDiscoverFeedActionSheetActionHandler _presentAdInfoForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798be1c

// -[SCDiscoverFeedActionSheetActionHandler _exposeAdInfoScopeForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798bf44

// -[SCDiscoverFeedActionSheetActionHandler _presentHidePromotedStoryWithStory:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798c174

// -[SCDiscoverFeedActionSheetActionHandler _presentHideAlertAfterReportWithDisplayName:storyDedupeFp:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10798c3d4

// -[SCDiscoverFeedActionSheetActionHandler didFinishDismissingPublisherProfile]
// Type encoding: v16@0:8
// Implementation: 0x10798c6a0

// -[SCDiscoverFeedActionSheetActionHandler didFinishDismissingShowProfile]
// Type encoding: v16@0:8
// Implementation: 0x10798c6a4

// -[SCDiscoverFeedActionSheetActionHandler _setNeedsCustomStatusBarStyleContextUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10798c6a8

// -[SCDiscoverFeedActionSheetActionHandler _handleIncomingSubscribeActionWithDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798c6d4

// -[SCDiscoverFeedActionSheetActionHandler _handleSubscribeStoryDedupeFp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798cb08

// -[SCDiscoverFeedActionSheetActionHandler reportAdScopeDidComplete:didSubmit:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10798cb8c

// -[SCDiscoverFeedActionSheetActionHandler reportAdScopeDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10798cbc8

// -[SCDiscoverFeedActionSheetActionHandler adInfoScopeDidComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798cbcc

// -[SCDiscoverFeedActionSheetActionHandler hideAdScopeDidComplete:didSubmit:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10798cbfc

// -[SCDiscoverFeedActionSheetActionHandler hideAdScopeDidSubmitWithReasonId:comment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10798cc7c

// -[SCDiscoverFeedActionSheetActionHandler _presentDSAExplainer]
// Type encoding: v16@0:8
// Implementation: 0x10798cc80

// -[SCDiscoverFeedActionSheetActionHandler _exposeDSAExplainerScope]
// Type encoding: v16@0:8
// Implementation: 0x10798ce74

// -[SCDiscoverFeedActionSheetActionHandler didCompleteDSAExplainerScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798cf30

// -[SCDiscoverFeedActionSheetActionHandler _handleBlockActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798cf78

// -[SCDiscoverFeedActionSheetActionHandler _presentBlockDialogForActionDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798d098

// -[SCDiscoverFeedActionSheetActionHandler _didBlockUserWithStoryDedupeFp:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10798d57c

// -[SCDiscoverFeedActionSheetActionHandler actionMenuPresenter]
// Type encoding: @16@0:8
// Implementation: 0x10798d77c

// -[SCDiscoverFeedActionSheetActionHandler setActionMenuPresenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798d794

// -[SCDiscoverFeedActionSheetActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x10798d7a0

// -[SCDiscoverFeedActionSheetActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798d7b8

// -[SCDiscoverFeedActionSheetActionHandler customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x10798d7c4

// -[SCDiscoverFeedActionSheetActionHandler setCustomStatusBarStyleContextController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10798d7dc

// -[SCDiscoverFeedActionSheetActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10798d7e8

// +[SCDiscoverFeedActionSheetActionHandler announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107986b48

@end
