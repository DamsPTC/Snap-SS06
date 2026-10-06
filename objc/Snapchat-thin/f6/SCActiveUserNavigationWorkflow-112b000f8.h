// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCActiveUserNavigationWorkflow
// Superclass: NSObject
// Address: 0x112b000f8

@interface SCActiveUserNavigationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: router; attributes: T@"<SCActiveUserRouter>",R,W,N,V_router
// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: navigationState; attributes: T@"<SCNavigationState>",R,N,V_navigationState
// Property: currentPageTracker; attributes: T@"<SCCurrentPageTracker>",R,N,V_currentPageTracker
// Property: grapheneRegistry; attributes: T@"SCLazy",R,N,V_grapheneRegistry
// Property: preparedNavForForeground; attributes: TB,N,GhasPreparedNavForForeground,V_preparedNavForForeground
// Property: lensUnlocker; attributes: T@"SCLazy",R,W,N,V_lensUnlocker
// Property: legacyCurrentConversationId; attributes: T@"SCChatIdentifier",&,N,V_legacyCurrentConversationId
// Property: permissionRequestService; attributes: T@"SCLazy",R,N,V_permissionRequestService
// Property: userTrackedLogger; attributes: T@"SCLazy",R,N,V_userTrackedLogger
// Property: legacyCurrentConversationDeepLinkURL; attributes: T@"SCDeepLinkURL",&,N,V_legacyCurrentConversationDeepLinkURL
// Property: legacyCurrentConversationSourceType; attributes: Tq,N,V_legacyCurrentConversationSourceType
// Property: legacyCurrentConversationEntryEvent; attributes: Tq,N,V_legacyCurrentConversationEntryEvent
// Property: talkNotificationsHandler; attributes: T@"SCLazy",R,W,N,V_talkNotificationsHandler
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",R,N,V_circumstanceEngine
// Property: storiesConfigProvider; attributes: T@"SCLazy",R,N,V_storiesConfigProvider
// Property: plusAppStartServices; attributes: T@"SCPlusAppStartServices",R,N,V_plusAppStartServices
// Property: mapNotificationService; attributes: T@"_TtC25SCMapNotificationServices25SCMapNotificationServices",&,N,V_mapNotificationService
// Property: captureDeviceManager; attributes: T@"SCLazy",R,N,V_captureDeviceManager
// Property: addFriendSheetScopeExposer; attributes: T@"SCScopeExposer",&,N,V_addFriendSheetScopeExposer
// Property: addFriendSheetScopeServices; attributes: T@"SCAddFriendSheetScopeServices",&,N,V_addFriendSheetScopeServices
// Property: featureStartupEventBus; attributes: T@"<SCFeatureStartupEventBus>",&,N,V_featureStartupEventBus
// Property: pageLauncher; attributes: T@"SCLazy",&,N,V_pageLauncher
// Property: contentPostSendUpsellScopeExposer; attributes: T@"SCScopeExposer",&,N,V_contentPostSendUpsellScopeExposer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCActiveUserNavigationWorkflow navigateToChatViewAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106813820

// -[SCActiveUserNavigationWorkflow navigateToChatViewAnimated:deepLinkURL:pannableCellController:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10681382c

// -[SCActiveUserNavigationWorkflow navigateToChatViewAnimated:inExistingContext:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106813948

// -[SCActiveUserNavigationWorkflow presentChatViewWithPannableCellController:]
// Type encoding: @24@0:8@16
// Implementation: 0x106813a4c

// -[SCActiveUserNavigationWorkflow setConversationByChatIdentifier:deepLinkURL:chatPageSource:navigationAction:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x106813b44

// -[SCActiveUserNavigationWorkflow handleInAppNotificationPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068130bc

// -[SCActiveUserNavigationWorkflow handleInAppNotificationDismissed:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106813374

// -[SCActiveUserNavigationWorkflow handleInAppNotificationDisplayInterrupted:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1068134a4

// -[SCActiveUserNavigationWorkflow _logNotificationTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068134a8

// -[SCActiveUserNavigationWorkflow _logBlizzardInAppNotificationTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068135a8

// -[SCActiveUserNavigationWorkflow _getJsonFromDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10681376c

// -[SCActiveUserNavigationWorkflow setDisposableObserverLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106812fa0

// -[SCActiveUserNavigationWorkflow didTapProfileHeaderButton]
// Type encoding: v16@0:8
// Implementation: 0x106812fb0

// -[SCActiveUserNavigationWorkflow didTapSearchHeaderButton]
// Type encoding: v16@0:8
// Implementation: 0x106812fe0

// -[SCActiveUserNavigationWorkflow didTapAddFriendsHeaderButton]
// Type encoding: v16@0:8
// Implementation: 0x10681301c

// -[SCActiveUserNavigationWorkflow didTapNotificationCenterButtonWithBellIconLastSeenTimestamp:bellIconIsBadged:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10681304c

// -[SCActiveUserNavigationWorkflow handleApplicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10681292c

// -[SCActiveUserNavigationWorkflow handleApplicationWillEnterForegroundFromNotification:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106812930

// -[SCActiveUserNavigationWorkflow handleActionedAppNotification:didHandleNavigation:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106812ab0

// -[SCActiveUserNavigationWorkflow handleActionedShortcutItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106812b5c

// -[SCActiveUserNavigationWorkflow handleApplicationWillEnterForegroundFromMessageIntent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106812f1c

// -[SCActiveUserNavigationWorkflow visiblePageType]
// Type encoding: Q16@0:8
// Implementation: 0x1068128f0

// -[SCActiveUserNavigationWorkflow canPerformNavigation]
// Type encoding: B16@0:8
// Implementation: 0x10680eef8

// -[SCActiveUserNavigationWorkflow canPerformNavigationWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10680ef00

// -[SCActiveUserNavigationWorkflow isProfilePresented]
// Type encoding: B16@0:8
// Implementation: 0x10680f100

// -[SCActiveUserNavigationWorkflow presentFarLeftVCAnimated:deepLinkURL:additionalInfo:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10680f13c

// -[SCActiveUserNavigationWorkflow presentLeftVCAnimated:deepLinkURL:additionalInfo:completion:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x10680f244

// -[SCActiveUserNavigationWorkflow presentMiddleVCAnimated:deepLinkURL:additionalInfo:completion:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x10680f41c

// -[SCActiveUserNavigationWorkflow presentRightVCAnimated:deepLinkURL:additionalInfo:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10680f574

// -[SCActiveUserNavigationWorkflow presentFarRightVCAnimated:deepLinkURL:additionalInfo:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10680f700

// -[SCActiveUserNavigationWorkflow presentOnCurrentVCAnimated:deepLinkURL:additionalInfo:completion:]
// Type encoding: v44@0:8B16@20@28@?36
// Implementation: 0x10680f8b4

// -[SCActiveUserNavigationWorkflow visibleViewController]
// Type encoding: @16@0:8
// Implementation: 0x10680f930

// -[SCActiveUserNavigationWorkflow prepareToNavigateToDeepLink:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10680f974

// -[SCActiveUserNavigationWorkflow modalContainer:]
// Type encoding: @20@0:8B16
// Implementation: 0x10680fab8

// -[SCActiveUserNavigationWorkflow topmostViewController]
// Type encoding: @16@0:8
// Implementation: 0x10680fb00

// -[SCActiveUserNavigationWorkflow _shouldNavigateToTopicPageForDeeplinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10680fb44

// -[SCActiveUserNavigationWorkflow _shouldNavigateToFriendsFeedForDiscoverDeeplinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10680fb90

// -[SCActiveUserNavigationWorkflow _pendingDeferredModalContainers]
// Type encoding: @16@0:8
// Implementation: 0x1008ed6c4

// -[SCActiveUserNavigationWorkflow _setOrEnqueueSetOfPresentingViewControllerForModalContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680fc34

// -[SCActiveUserNavigationWorkflow _wireUpAnyEnqueuedDeferredModalContainers]
// Type encoding: v16@0:8
// Implementation: 0x1008ed4bc

// -[SCActiveUserNavigationWorkflow endAddFriendSheetScope]
// Type encoding: v16@0:8
// Implementation: 0x10680fcd4

// -[SCActiveUserNavigationWorkflow _handleDeepLinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10680fd5c

// -[SCActiveUserNavigationWorkflow _shouldUsePageLauncherForLenses]
// Type encoding: B16@0:8
// Implementation: 0x106811088

// -[SCActiveUserNavigationWorkflow _handleDeepLinkVCInfo:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068110d4

// -[SCActiveUserNavigationWorkflow _handleDeepLinkLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068111dc

// -[SCActiveUserNavigationWorkflow _handleDeeplinkProfile:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10681156c

// -[SCActiveUserNavigationWorkflow _profileDeepLinkLaunchBehaviorFromDeeplink:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106811a70

// -[SCActiveUserNavigationWorkflow _handleDeeplinkCommerce:]
// Type encoding: v24@0:8@16
// Implementation: 0x106811ae8

// -[SCActiveUserNavigationWorkflow _handleDeepLinkMemories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106811d6c

// -[SCActiveUserNavigationWorkflow _handleMapDeepLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10681243c

// -[SCActiveUserNavigationWorkflow _handleDiscoverDeeplinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106812648

// -[SCActiveUserNavigationWorkflow _handleSpotlightDiscoverDeeplinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068126bc

// -[SCActiveUserNavigationWorkflow _presentAddFriendPromptWithDeepLink:isLens:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1068126c4

// -[SCActiveUserNavigationWorkflow contentPostSendUpsellFlowDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x1068086f8

// -[SCActiveUserNavigationWorkflow didCancelFromPreview:]
// Type encoding: v24@0:8@16
// Implementation: 0x106808324

// -[SCActiveUserNavigationWorkflow didCancelFromPreview:withCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10680832c

// -[SCActiveUserNavigationWorkflow didSendSnapsAndPostToStory:storyTypes:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1068083a8

// -[SCActiveUserNavigationWorkflow didSendToGallery]
// Type encoding: v16@0:8
// Implementation: 0x106808654

// -[SCActiveUserNavigationWorkflow didPostStoryWithStoryTypes:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068086b8

// -[SCActiveUserNavigationWorkflow leftCameraBackButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106808290

// -[SCActiveUserNavigationWorkflow cameraDismissRequested:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106808294

// -[SCActiveUserNavigationWorkflow activate]
// Type encoding: v16@0:8
// Implementation: 0x1068082a8

// -[SCActiveUserNavigationWorkflow didBeginRecording]
// Type encoding: v16@0:8
// Implementation: 0x1068082d8

// -[SCActiveUserNavigationWorkflow toggleTimerMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068082e0

// -[SCActiveUserNavigationWorkflow toggleSearchBarAndBitmojiVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068082e8

// -[SCActiveUserNavigationWorkflow toggleButtonVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x1068082ec

// -[SCActiveUserNavigationWorkflow initWithRouter:userSession:userSessionContext:launchNotification:launchedInBackground:navigationState:timeProvider:lensUnlocker:featureSettingsService:permissionRequestService:profileNavigationEvents:talkNotificationsHandler:circumstanceEngine:mapNotificationService:captureDeviceManager:storiesFeatureNavigationRouter:pagePageViewReporter:chatNotificationDestinationProvider:grapheneRegistry:notificationLifecycleEvents:addFriendSheetScopeExposer:addFriendSheetScopeServices:plusAppStartServices:plusSubscriptionInfoProvider:appStartExperimentReader:featureStartupEventBus:pageLauncher:sendToFeedLogger:contentPostSendUpsellScopeExposer:simpleSnapchatExperimentConfigProvider:currentPageTracker:cameraRequestHandler:cameraHardwareConfiguration:userTrackedLogger:]
// Type encoding: @284@0:8@16@24@32@40B48@52@60@68@76@84@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204@212@220@228@236@244@252@260@268@276
// Implementation: 0x100598c84

// -[SCActiveUserNavigationWorkflow begin]
// Type encoding: v16@0:8
// Implementation: 0x10059998c

// -[SCActiveUserNavigationWorkflow userBackgroundedApp]
// Type encoding: v16@0:8
// Implementation: 0x1068045fc

// -[SCActiveUserNavigationWorkflow userForegroundedApp:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1068046fc

// -[SCActiveUserNavigationWorkflow _appLaunchedToNonCameraScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x106804a74

// -[SCActiveUserNavigationWorkflow userPressedNotification:isInAppNotification:didHandleNavigation:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106804b24

// -[SCActiveUserNavigationWorkflow _navigateToDestination:isInAppNotification:canNavigateToNotification:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106804fd4

// -[SCActiveUserNavigationWorkflow resetNavigationStackIfPossible:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x106805e80

// -[SCActiveUserNavigationWorkflow userTappedDeepLink:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106806048

// -[SCActiveUserNavigationWorkflow _shouldExitDestinationOnBackgrounded:navigationStackSnapShot:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106806220

// -[SCActiveUserNavigationWorkflow _shouldExitDestinationOnForegrounded:timeInBackground:navigationStackSnapShot:]
// Type encoding: B40@0:8@16d24@32
// Implementation: 0x106806498

// -[SCActiveUserNavigationWorkflow _findInheritedBackgroundExitBehaviorDestination:navigationStackSnapShot:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1068067b0

// -[SCActiveUserNavigationWorkflow _targetDestinationWithShouldExit:]
// Type encoding: @24@0:8@?16
// Implementation: 0x106806890

// -[SCActiveUserNavigationWorkflow _resolvedPostLoginLaunchTab]
// Type encoding: q16@0:8
// Implementation: 0x1005b1a14

// -[SCActiveUserNavigationWorkflow _popToNavigationDestination:becauseOfEvent:notificationId:completion:]
// Type encoding: v48@0:8@16Q24@32@?40
// Implementation: 0x106806948

// -[SCActiveUserNavigationWorkflow _performDeferredNavigation:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106806e18

// -[SCActiveUserNavigationWorkflow _handleChatNotificationDestination:notification:isInAppNotification:canNavigateToNotification:]
// Type encoding: v40@0:8q16@24B32B36
// Implementation: 0x106806e5c

// -[SCActiveUserNavigationWorkflow _showConversationForNotification:isInAppNotification:canNavigateToNotification:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1068070a8

// -[SCActiveUserNavigationWorkflow _showFriendsFeedWithNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680723c

// -[SCActiveUserNavigationWorkflow _handleFriendingNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106807300

// -[SCActiveUserNavigationWorkflow _handleImpalaNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x106807568

// -[SCActiveUserNavigationWorkflow _notificationHandledByPayoutsNotificationHandling:]
// Type encoding: B24@0:8@16
// Implementation: 0x106807650

// -[SCActiveUserNavigationWorkflow _handleNavigateToChatForNotification:isInAppNotification:canNavigateToNotification:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x106807740

// -[SCActiveUserNavigationWorkflow _notificationsHandledByCommunitySnapNotificationHandling:isInAppNotification:canNavigateToNotification:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x1068078a8

// -[SCActiveUserNavigationWorkflow _handledMemoriesNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680795c

// -[SCActiveUserNavigationWorkflow _createMapDestinationForPlaceNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x106807ab4

// -[SCActiveUserNavigationWorkflow _createMapDestinationForMapNotification:]
// Type encoding: @24@0:8@16
// Implementation: 0x106807d24

// -[SCActiveUserNavigationWorkflow _getSourcePageContextForMapNotification:]
// Type encoding: q24@0:8@16
// Implementation: 0x106807e34

// -[SCActiveUserNavigationWorkflow userDidDismissProfile]
// Type encoding: v16@0:8
// Implementation: 0x106807e9c

// -[SCActiveUserNavigationWorkflow searchWorkflowDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106807ea0

// -[SCActiveUserNavigationWorkflow router]
// Type encoding: @16@0:8
// Implementation: 0x1008ed620

// -[SCActiveUserNavigationWorkflow userSession]
// Type encoding: @16@0:8
// Implementation: 0x106807ed0

// -[SCActiveUserNavigationWorkflow navigationState]
// Type encoding: @16@0:8
// Implementation: 0x106807ee8

// -[SCActiveUserNavigationWorkflow currentPageTracker]
// Type encoding: @16@0:8
// Implementation: 0x106807ef0

// -[SCActiveUserNavigationWorkflow grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x106807ef8

// -[SCActiveUserNavigationWorkflow hasPreparedNavForForeground]
// Type encoding: B16@0:8
// Implementation: 0x106807f00

// -[SCActiveUserNavigationWorkflow setPreparedNavForForeground:]
// Type encoding: v20@0:8B16
// Implementation: 0x1005b1a0c

// -[SCActiveUserNavigationWorkflow lensUnlocker]
// Type encoding: @16@0:8
// Implementation: 0x106807f08

// -[SCActiveUserNavigationWorkflow legacyCurrentConversationId]
// Type encoding: @16@0:8
// Implementation: 0x106807f20

// -[SCActiveUserNavigationWorkflow setLegacyCurrentConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106807f28

// -[SCActiveUserNavigationWorkflow permissionRequestService]
// Type encoding: @16@0:8
// Implementation: 0x106807f58

// -[SCActiveUserNavigationWorkflow userTrackedLogger]
// Type encoding: @16@0:8
// Implementation: 0x106807f60

// -[SCActiveUserNavigationWorkflow legacyCurrentConversationDeepLinkURL]
// Type encoding: @16@0:8
// Implementation: 0x106807f68

// -[SCActiveUserNavigationWorkflow setLegacyCurrentConversationDeepLinkURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106807f70

// -[SCActiveUserNavigationWorkflow legacyCurrentConversationSourceType]
// Type encoding: q16@0:8
// Implementation: 0x106807fa0

// -[SCActiveUserNavigationWorkflow setLegacyCurrentConversationSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005992e0

// -[SCActiveUserNavigationWorkflow legacyCurrentConversationEntryEvent]
// Type encoding: q16@0:8
// Implementation: 0x106807fa8

// -[SCActiveUserNavigationWorkflow setLegacyCurrentConversationEntryEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x1005992e8

// -[SCActiveUserNavigationWorkflow talkNotificationsHandler]
// Type encoding: @16@0:8
// Implementation: 0x106807fb0

// -[SCActiveUserNavigationWorkflow circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106807fc8

// -[SCActiveUserNavigationWorkflow storiesConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x106807fd0

// -[SCActiveUserNavigationWorkflow plusAppStartServices]
// Type encoding: @16@0:8
// Implementation: 0x106807fd8

// -[SCActiveUserNavigationWorkflow mapNotificationService]
// Type encoding: @16@0:8
// Implementation: 0x106807fe0

// -[SCActiveUserNavigationWorkflow setMapNotificationService:]
// Type encoding: v24@0:8@16
// Implementation: 0x106807fe8

// -[SCActiveUserNavigationWorkflow captureDeviceManager]
// Type encoding: @16@0:8
// Implementation: 0x106808018

// -[SCActiveUserNavigationWorkflow addFriendSheetScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x106808020

// -[SCActiveUserNavigationWorkflow setAddFriendSheetScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106808028

// -[SCActiveUserNavigationWorkflow addFriendSheetScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x106808058

// -[SCActiveUserNavigationWorkflow setAddFriendSheetScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106808060

// -[SCActiveUserNavigationWorkflow featureStartupEventBus]
// Type encoding: @16@0:8
// Implementation: 0x106808090

// -[SCActiveUserNavigationWorkflow setFeatureStartupEventBus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005992f0

// -[SCActiveUserNavigationWorkflow pageLauncher]
// Type encoding: @16@0:8
// Implementation: 0x106808098

// -[SCActiveUserNavigationWorkflow setPageLauncher:]
// Type encoding: v24@0:8@16
// Implementation: 0x100599320

// -[SCActiveUserNavigationWorkflow contentPostSendUpsellScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x1068080a0

// -[SCActiveUserNavigationWorkflow setContentPostSendUpsellScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068080a8

// -[SCActiveUserNavigationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068080d8

@end
