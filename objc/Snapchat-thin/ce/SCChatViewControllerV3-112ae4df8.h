// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatViewControllerV3
// Superclass: UIViewController
// Address: 0x112ae4df8

@interface SCChatViewControllerV3

// Property: customStatusBarStyleForViewController; attributes: Tq,N,V_customStatusBarStyleForViewController
// Property: longPressGestureRecognizer; attributes: T@"UILongPressGestureRecognizer",&,N,V_longPressGestureRecognizer
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",&,N,V_panGestureRecognizer
// Property: dismissSubmenuGestureRecognizer; attributes: T@"UIGestureRecognizer",&,N,V_dismissSubmenuGestureRecognizer
// Property: tableDelegate; attributes: T@"SCChatTableViewV3Delegate",&,N,V_tableDelegate
// Property: tableView; attributes: T@"SCChatBaseTableView",&,N,V_tableView
// Property: activeChatIdentifier; attributes: T@"SCChatIdentifier",R,C,N,V_activeChatIdentifier
// Property: parentDelegate; attributes: T@"<SCChatViewControllerParentDelegate>",W,N,V_parentDelegate
// Property: presenceContainer; attributes: T@"UIView",&,N,V_presenceContainer
// Property: presenceInformation; attributes: T@"SCChatPresenceInformation",R,N,V_presenceInformation
// Property: talkChatViewLifeCycleListener; attributes: T@"SCTalkUIChatViewLifeCycleListener",&,N,V_talkChatViewLifeCycleListener
// Property: delegate; attributes: T@"<SCStartChatDelegate><SCMessagePluginChatPresenting>",W,N,V_delegate
// Property: baseDelegate; attributes: T@"<SCChatViewControllerV3Delegate>",W,N,V_baseDelegate
// Property: sourceNotification; attributes: T@"SCAppNotification",&,N,V_sourceNotification
// Property: stackChatsDelegate; attributes: T@"<SCStackChatsDelegate>",W,N,V_stackChatsDelegate
// Property: ignoreScreenshot; attributes: TB,N,V_ignoreScreenshot
// Property: ignoreScreenRecord; attributes: TB,N,V_ignoreScreenRecord
// Property: handleLifecycleWhenCentered; attributes: TB,N,V_handleLifecycleWhenCentered
// Property: configuration; attributes: T@"SCChatConfiguration",&,N,V_configuration
// Property: conversationManager; attributes: T@"<SCChatConversationManager>",&,N,V_conversationManager
// Property: snapchatterPublicInfoFetcher; attributes: T@"SCLazy",&,N,V_snapchatterPublicInfoFetcher
// Property: snapchattersDataFetcher; attributes: T@"SCLazy",&,N,V_snapchattersDataFetcher
// Property: snapchattersDataMutator; attributes: T@"SCLazy",&,N,V_snapchattersDataMutator
// Property: groupsDataCreator; attributes: T@"SCLazy",&,N,V_groupsDataCreator
// Property: groupsDataFetcher; attributes: T@"SCLazy",&,N,V_groupsDataFetcher
// Property: groupSnapchatterRepository; attributes: T@"SCLazy",&,N,V_groupSnapchatterRepository
// Property: talkUIScopeExposer; attributes: T@"SCMultiScopeExposer",&,N,V_talkUIScopeExposer
// Property: contentDelivery; attributes: T@"SCLazy",&,N,V_contentDelivery
// Property: featureSettingsService; attributes: T@"SCLazy",&,N,V_featureSettingsService
// Property: callStateProvider; attributes: T@"SCLazy",&,N,V_callStateProvider
// Property: presenceStateProvider; attributes: T@"SCLazy",&,N,V_presenceStateProvider
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: snapTokenProvider; attributes: T@"SCLazy",&,N,V_snapTokenProvider
// Property: snapchatterUserInfoProvider; attributes: T@"SCLazy",&,N,V_snapchatterUserInfoProvider
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",&,N,V_circumstanceEngine
// Property: tableContainerView; attributes: T@"UIView",&,N,V_tableContainerView
// Property: header; attributes: T@"SCChatViewHeader",&,N,V_header
// Property: callButtonsContainer; attributes: T@"<SCUIContainer>",&,N,V_callButtonsContainer
// Property: spotlightHeaderButtonContainer; attributes: T@"<SCUIContainer>",&,N,V_spotlightHeaderButtonContainer
// Property: presenceBarContainer; attributes: T@"<SCUIContainer>",&,N,V_presenceBarContainer
// Property: chatInputController; attributes: T@"UIViewController<SCChatInputContext>",&,N,V_chatInputController
// Property: lifeCycleAnnouncer; attributes: T@"SCChatViewLifeCycleListenerAnnouncer",&,N,V_lifeCycleAnnouncer
// Property: remoteUsersPresenceInformationSubject; attributes: T@"SCBehaviorSubject",&,N,V_remoteUsersPresenceInformationSubject
// Property: grapheneRegistry; attributes: T@"SCLazy",&,N,V_grapheneRegistry
// Property: blizzardLogger; attributes: T@"SCLazy",&,N,V_blizzardLogger
// Property: customStatusBarStyleContextController; attributes: T@"SCLazy",R,W,N,V_customStatusBarStyleContextController
// Property: isOperaShowing; attributes: TB,R,N,V_isOperaShowing
// Property: remoteUsersPresenceInformation; attributes: T@"SCChatPresenceInformation",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCChatViewControllerV3 pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1065314d8

// -[SCChatViewControllerV3 getPageName]
// Type encoding: @16@0:8
// Implementation: 0x1065314f4

// -[SCChatViewControllerV3 presentUnifiedProfileForSnapchatter:addSourceType:completion:sourcePage:]
// Type encoding: v48@0:8@16q24@?32q40
// Implementation: 0x106531500

// -[SCChatViewControllerV3 _presentUnifiedProfileForSnapchatter:userId:addSourceType:completion:sourcePage:friendshipFlashbackId:]
// Type encoding: v64@0:8@16@24q32@?40q48@56
// Implementation: 0x106531594

// -[SCChatViewControllerV3 setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106531840

// -[SCChatViewControllerV3 initWithUserSession:usernameProvider:parentDelegate:groupsDataTracker:groupsDataCreator:groupsDataMutator:groupsDataFetcher:groupSnapchatterRepository:groupsCustomColorsFetcher:snapchatterServices:conversationManager:internalConversationServices:conversationDataFetcher:conversationUpdatesPublisher:myStoriesDataCoordinator:currentPageTracker:legacyChatTooltipService:soundEffects:chatMediaFetchingServices:loadMessageLogger:chatDisplayReadyLogger:convoLiveActivityManager:grapheneRegistry:blizzardLogger:customStatusBarStyleContextController:typingNotificationSender:pluginManager:accessoryPluginManager:inputPlugins:conversationUpdater:polaroidTooltipManager:feedPropertyLogger:friendsFeedDataCoordinator:circumstanceEngine:uberAvatarScopeServices:uberAvatarScopeExposer:storiesReplayManager:valdiRuntimeProvider:composerAnimatedImageViewFactory:cancelMenuActionSheetScopeServices:cancelMenuActionSheetScopeExposer:deepLinkHandling:webBrowserDeepLinkHandler:arroyoChatLogger:reactionsDetailScopeExposer:chatReplyScopeExposer:chatReplyComposeScopeServices:talkServices:talkUIScopeServices:talkUIScopeExposer:spotlightChatHeaderButtonScopeServices:downloaderServices:notificationPool:chatThreatsScanner:friendmojiFilteredContainer:friendProfileScopeExposer:groupProfileScopeExposer:chatContentDelivery:blockedExceptionAlertScopeExposer:blockedExceptionAlertScopeServices:chatCameraScopeExposer:chatCameraScopeServices:messagingExperimentService:sponsoredSnapAdResponseParser:postSnapProvider:navigationDelegate:contentDelivery:bitmojiAvatarBuilderScopeExposer:featureSettingsService:snapTokenProvider:snapchatterUserInfoProvider:userTraceLogger:settingsScopeLauncher:eraseMessageScopeExposer:snapReplayScopeExposer:messagingPlaybackScopeExposer:chatLockedConversationAlertScopeExposer:chatLockedConversationAlertScopeBuilderServices:merlinOnboardingScopeExposer:merlinBioPageScopeFactoryServices:nativeSessionManager:chatTooltipsService:merlinOnboardingStatusManager:streakRestorePurchaseScopeFactoryServices:memoriesExperimentService:lifecycleLogger:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:chatAttachmentHandlerScopeExposer:notificationPermissionUpdateEvents:chatActionMenuScopeExposer:chatActionMenuScopeServices:quotedMessageSubject:audioNotePlayer:networkConnectivityMonitor:application:chatMessageDisplayStateLogger:chatPageStoryPlayer:startupInfoService:mapUpsellRequestService:shareLocationFlowFactoryServices:nativePostSnapInteractionEvents:keepSnapsInChatUpsellScopeExposer:keepSnapsInChatUpsellScopeServices:adResponseProvider:adConfigProviderV2:nglStudySettings:preferences:backgroundPerformer:sponsoredSnapConversationSeqNumProvider:streakMilestoneFriendProfileScopeExposer:bitmojiFriendProfileSharingScopeServices:mapExternalUrlServices:pageLauncher:saturnUpsellTrayScopeExposer:saturnExperimentProvider:saturnSocialContextProvider:applicationStateProvider:]
// Type encoding: @968@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664@672@680@688@696@704@712@720@728@736@744@752@760@768@776@784@792@800@808@816@824@832@840@848@856@864@872@880@888@896@904@912@920@928@936@944@952@960
// Implementation: 0x1065318b4

// -[SCChatViewControllerV3 loadView]
// Type encoding: v16@0:8
// Implementation: 0x106534d60

// -[SCChatViewControllerV3 _chatThreatsWorkflowWithChatThreatsScanner:]
// Type encoding: @24@0:8@16
// Implementation: 0x106534ef0

// -[SCChatViewControllerV3 _startObservingQuotedMessageData]
// Type encoding: v16@0:8
// Implementation: 0x106534fd4

// -[SCChatViewControllerV3 _activateQuotedMessageUpdates]
// Type encoding: v16@0:8
// Implementation: 0x106535178

// -[SCChatViewControllerV3 _deactivateQuotedMessageUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10653518c

// -[SCChatViewControllerV3 _clearChatReplyUI]
// Type encoding: v16@0:8
// Implementation: 0x1065351ac

// -[SCChatViewControllerV3 dismissChatReplyScope]
// Type encoding: v16@0:8
// Implementation: 0x106535220

// -[SCChatViewControllerV3 _updateChatReplyUIWithQuotedMessageData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653526c

// -[SCChatViewControllerV3 dismissReactionsDetailScope]
// Type encoding: v16@0:8
// Implementation: 0x10653547c

// -[SCChatViewControllerV3 additionalS2RDebugOutput]
// Type encoding: @16@0:8
// Implementation: 0x1065354f0

// -[SCChatViewControllerV3 _addListeners]
// Type encoding: v16@0:8
// Implementation: 0x1065355d8

// -[SCChatViewControllerV3 _initHeader]
// Type encoding: v16@0:8
// Implementation: 0x106535614

// -[SCChatViewControllerV3 _isSpotlightChatHeaderButtonEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1065357e8

// -[SCChatViewControllerV3 _attachSpotlightChatHeaderButton]
// Type encoding: v16@0:8
// Implementation: 0x106535838

// -[SCChatViewControllerV3 spotlightInChatContextParamsForCurrentConversation]
// Type encoding: @16@0:8
// Implementation: 0x10653591c

// -[SCChatViewControllerV3 _initChatTable]
// Type encoding: v16@0:8
// Implementation: 0x106535b74

// -[SCChatViewControllerV3 _initMixins]
// Type encoding: v16@0:8
// Implementation: 0x106536308

// -[SCChatViewControllerV3 _initGestures]
// Type encoding: v16@0:8
// Implementation: 0x1065364f0

// -[SCChatViewControllerV3 gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10653669c

// -[SCChatViewControllerV3 handleDismissSubmenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065366b8

// -[SCChatViewControllerV3 _setPluginDependencies]
// Type encoding: v16@0:8
// Implementation: 0x1065366c8

// -[SCChatViewControllerV3 viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106536870

// -[SCChatViewControllerV3 viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1065368ec

// -[SCChatViewControllerV3 viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106536944

// -[SCChatViewControllerV3 _updateFrameBasedInsetIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1065369ec

// -[SCChatViewControllerV3 preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x106536b88

// -[SCChatViewControllerV3 _setPreferredScreenEdgesDeferringSystemGesturesToAll:]
// Type encoding: v20@0:8B16
// Implementation: 0x106536b8c

// -[SCChatViewControllerV3 preferredScreenEdgesDeferringSystemGestures]
// Type encoding: Q16@0:8
// Implementation: 0x106536b9c

// -[SCChatViewControllerV3 shortDescription]
// Type encoding: @16@0:8
// Implementation: 0x106536bb8

// -[SCChatViewControllerV3 isRTL]
// Type encoding: B16@0:8
// Implementation: 0x106536c4c

// -[SCChatViewControllerV3 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106536c74

// -[SCChatViewControllerV3 prepareToBeVisible]
// Type encoding: v16@0:8
// Implementation: 0x106536ce8

// -[SCChatViewControllerV3 viewDidAppearAtOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106536d54

// -[SCChatViewControllerV3 _initTableContentInsetUpdater]
// Type encoding: v16@0:8
// Implementation: 0x106536f04

// -[SCChatViewControllerV3 _handleDeepLinkAfterViewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x106536f5c

// -[SCChatViewControllerV3 _handleDeepLinkWithActiveConversationSet]
// Type encoding: v16@0:8
// Implementation: 0x1065370e0

// -[SCChatViewControllerV3 _handleDeepLinkBeforeVisible]
// Type encoding: v16@0:8
// Implementation: 0x1065371a4

// -[SCChatViewControllerV3 setActiveConversationById:deeplinkType:conversationSource:configuration:metricsTracker:]
// Type encoding: v56@0:8@16Q24q32@40@48
// Implementation: 0x10653726c

// -[SCChatViewControllerV3 setChatPageSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1065373f8

// -[SCChatViewControllerV3 setDeepLinkType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106537440

// -[SCChatViewControllerV3 unsetActiveConversation]
// Type encoding: v16@0:8
// Implementation: 0x106537450

// -[SCChatViewControllerV3 conversationId]
// Type encoding: @16@0:8
// Implementation: 0x1065376d0

// -[SCChatViewControllerV3 conversationViewModel]
// Type encoding: @16@0:8
// Implementation: 0x1065376d4

// -[SCChatViewControllerV3 isChatOpenForNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x106537704

// -[SCChatViewControllerV3 didConversationViewModelChange:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106537a4c

// -[SCChatViewControllerV3 _scrollToFirstUnreadIfNecessary:existingConversationViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106538244

// -[SCChatViewControllerV3 _updateInputBarWithConversationSubtypeMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065382d8

// -[SCChatViewControllerV3 _updatePresenceBarVisibility]
// Type encoding: v16@0:8
// Implementation: 0x106538460

// -[SCChatViewControllerV3 _updateDisabledInputFooter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106538528

// -[SCChatViewControllerV3 _presentLockedConversationAlertIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x106538724

// -[SCChatViewControllerV3 setSourceNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065387f0

// -[SCChatViewControllerV3 _updateWithFirstRenderConversationViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065388d0

// -[SCChatViewControllerV3 _enqueueStopThrottleForCATM]
// Type encoding: v16@0:8
// Implementation: 0x1065388d4

// -[SCChatViewControllerV3 didInitialConversationFetchFailForChatIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106538934

// -[SCChatViewControllerV3 _addConversationUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106538a50

// -[SCChatViewControllerV3 _updatePlaceholderText]
// Type encoding: v16@0:8
// Implementation: 0x106538ab4

// -[SCChatViewControllerV3 _notifyChildrenWithUpdatedViewModel:metricsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106538e10

// -[SCChatViewControllerV3 shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x106538ed4

// -[SCChatViewControllerV3 prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x106538edc

// -[SCChatViewControllerV3 traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106538f2c

// -[SCChatViewControllerV3 _publishConversationViewVisibilityChanged:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065390e4

// -[SCChatViewControllerV3 viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1065391a0

// -[SCChatViewControllerV3 viewDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x106539238

// -[SCChatViewControllerV3 _pluginPresentationTrackingContainerWrapping:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065393b4

// -[SCChatViewControllerV3 _willPresentFullScreenView]
// Type encoding: v16@0:8
// Implementation: 0x106539538

// -[SCChatViewControllerV3 _pluginUIContainerDidAttachUI]
// Type encoding: v16@0:8
// Implementation: 0x106539570

// -[SCChatViewControllerV3 _pluginUIContainerDidDetachUI]
// Type encoding: v16@0:8
// Implementation: 0x1065395bc

// -[SCChatViewControllerV3 _pluginUIContainerDidDetachUIRequiringChatRevealed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1065395c4

// -[SCChatViewControllerV3 willEndDisplayingAllCells]
// Type encoding: v16@0:8
// Implementation: 0x106539674

// -[SCChatViewControllerV3 _willDisplayCells:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653982c

// -[SCChatViewControllerV3 resetMediaCellsOnForeground]
// Type encoding: v16@0:8
// Implementation: 0x106539994

// -[SCChatViewControllerV3 viewWillEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1065399b4

// -[SCChatViewControllerV3 releaseMemory]
// Type encoding: v16@0:8
// Implementation: 0x106539c34

// -[SCChatViewControllerV3 viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106539c8c

// -[SCChatViewControllerV3 viewDidFullyAppearFromStack:fromBackground:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x106539d14

// -[SCChatViewControllerV3 _showNetworkConnectivityStatusIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10653a368

// -[SCChatViewControllerV3 viewDidFullyDisappearFromStack:]
// Type encoding: v20@0:8B16
// Implementation: 0x10653a42c

// -[SCChatViewControllerV3 viewDidSwipeIn]
// Type encoding: v16@0:8
// Implementation: 0x10653a5dc

// -[SCChatViewControllerV3 _setUnreadViewedCounts]
// Type encoding: v16@0:8
// Implementation: 0x10653a644

// -[SCChatViewControllerV3 viewDidSwipeOut]
// Type encoding: v16@0:8
// Implementation: 0x10653a6a4

// -[SCChatViewControllerV3 viewDidPopFromStack]
// Type encoding: v16@0:8
// Implementation: 0x10653a824

// -[SCChatViewControllerV3 resumeConversation]
// Type encoding: v16@0:8
// Implementation: 0x10653a97c

// -[SCChatViewControllerV3 _resumeConversationIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10653a9d0

// -[SCChatViewControllerV3 suspendConversation]
// Type encoding: v16@0:8
// Implementation: 0x10653aa30

// -[SCChatViewControllerV3 activeConversationId]
// Type encoding: @16@0:8
// Implementation: 0x10653aa84

// -[SCChatViewControllerV3 canBeShown]
// Type encoding: B16@0:8
// Implementation: 0x10653aa94

// -[SCChatViewControllerV3 allowMessageReleasing]
// Type encoding: v16@0:8
// Implementation: 0x10653aaac

// -[SCChatViewControllerV3 blockMessageReleasing]
// Type encoding: v16@0:8
// Implementation: 0x10653aabc

// -[SCChatViewControllerV3 chatInputController]
// Type encoding: @16@0:8
// Implementation: 0x10653aacc

// -[SCChatViewControllerV3 _conversationSubtypeMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10653ab14

// -[SCChatViewControllerV3 _messagePluginActiveConversationInformation]
// Type encoding: @16@0:8
// Implementation: 0x10653acfc

// -[SCChatViewControllerV3 _initInputController]
// Type encoding: v16@0:8
// Implementation: 0x10653b3b0

// -[SCChatViewControllerV3 _initInsetUpdaterWithSizeEvents:accessorySizeEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653b9f8

// -[SCChatViewControllerV3 longPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653bc7c

// -[SCChatViewControllerV3 onTapOnWhitespaceAroundStackedCell:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653bd80

// -[SCChatViewControllerV3 cellHandleTap:gestureRecognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653be38

// -[SCChatViewControllerV3 updateScrollEnabled:reason:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x10653bff4

// -[SCChatViewControllerV3 _chatTableViewIsScrolling]
// Type encoding: B16@0:8
// Implementation: 0x10653c050

// -[SCChatViewControllerV3 onDoubleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653c0c4

// -[SCChatViewControllerV3 longPressGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10653c744

// -[SCChatViewControllerV3 dismissCameraScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653c774

// -[SCChatViewControllerV3 _launchChatCameraScopeWithConfiguration:quickStickerImage:cameraViewType:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10653c7cc

// -[SCChatViewControllerV3 _hasSendingMessageInBlockForPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x10653c984

// -[SCChatViewControllerV3 gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10653ca7c

// -[SCChatViewControllerV3 gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10653cb14

// -[SCChatViewControllerV3 gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10653cb80

// -[SCChatViewControllerV3 messageIndexForTouchPoint:viewModel:includeWhitespace:]
// Type encoding: Q44@0:8{CGPoint=dd}16@32B40
// Implementation: 0x10653ce10

// -[SCChatViewControllerV3 _messageIndexForTouchPoint:stackedCell:includeWhitespace:]
// Type encoding: Q44@0:8{CGPoint=dd}16@32B40
// Implementation: 0x10653cf24

// -[SCChatViewControllerV3 _modalDidOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653cff4

// -[SCChatViewControllerV3 _modalDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653d034

// -[SCChatViewControllerV3 saveMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653d07c

// -[SCChatViewControllerV3 unsaveMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653d0f8

// -[SCChatViewControllerV3 captureWorkflowDidDismissWithDidSendSnap:]
// Type encoding: v20@0:8B16
// Implementation: 0x10653d174

// -[SCChatViewControllerV3 dismissFullScreenView]
// Type encoding: v16@0:8
// Implementation: 0x10653d254

// -[SCChatViewControllerV3 shouldDisableFullScreen]
// Type encoding: B16@0:8
// Implementation: 0x10653d2f4

// -[SCChatViewControllerV3 _playChatSentSoundMaybe]
// Type encoding: v16@0:8
// Implementation: 0x10653d338

// -[SCChatViewControllerV3 _playChatSoundMaybe:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10653d340

// -[SCChatViewControllerV3 _isPlayingMedia]
// Type encoding: B16@0:8
// Implementation: 0x10653d414

// -[SCChatViewControllerV3 updateTableContainerViewBottomConstraint]
// Type encoding: v16@0:8
// Implementation: 0x10653d45c

// -[SCChatViewControllerV3 _enableKeyboardConditionallyOnChatEntry]
// Type encoding: v16@0:8
// Implementation: 0x10653d764

// -[SCChatViewControllerV3 _republishVisibleCellsAfterEntryScroll]
// Type encoding: v16@0:8
// Implementation: 0x10653d8b8

// -[SCChatViewControllerV3 _enableKeyboardIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10653d93c

// -[SCChatViewControllerV3 _enableKeyboardAsynchronously]
// Type encoding: v16@0:8
// Implementation: 0x10653d988

// -[SCChatViewControllerV3 _enableKeyboardAsynchronously:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10653d990

// -[SCChatViewControllerV3 _enableKeyboardAsynchronouslyForLegacyOS]
// Type encoding: v16@0:8
// Implementation: 0x10653da00

// -[SCChatViewControllerV3 _enableKeyboardIfNecessaryAsynchronouslyForLegacyOS]
// Type encoding: v16@0:8
// Implementation: 0x10653da4c

// -[SCChatViewControllerV3 _subscribeToInputStateEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653da98

// -[SCChatViewControllerV3 _subscribeToKeyboardDidHideEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653dcf0

// -[SCChatViewControllerV3 _keyboardDidFullyHide]
// Type encoding: v16@0:8
// Implementation: 0x10653de00

// -[SCChatViewControllerV3 _inputContextWillTransitionFromState:toState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10653de5c

// -[SCChatViewControllerV3 _inputContextDidTransitionFromState:toState:]
// Type encoding: v32@0:8Q16Q24
// Implementation: 0x10653dea0

// -[SCChatViewControllerV3 _subscribeToInputSizeEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653df80

// -[SCChatViewControllerV3 _inputContextSizeDidChange:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x10653e0cc

// -[SCChatViewControllerV3 _subscribeToInputTypingEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e1a4

// -[SCChatViewControllerV3 inputContext:textViewShouldBeginEditing:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10653e44c

// -[SCChatViewControllerV3 inputContext:willActivateItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653e454

// -[SCChatViewControllerV3 isPartiallyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10653e4c0

// -[SCChatViewControllerV3 pluginDidAttemptToEditMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e504

// -[SCChatViewControllerV3 pluginDidAttemptToSendMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e508

// -[SCChatViewControllerV3 _playSoundAndDidAttemptSendMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e5c4

// -[SCChatViewControllerV3 didAttemptToSendMessage]
// Type encoding: v16@0:8
// Implementation: 0x10653e640

// -[SCChatViewControllerV3 pluginWillPresentFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e6c4

// -[SCChatViewControllerV3 pluginDidDismissFullscreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e6c8

// -[SCChatViewControllerV3 plugin:didEditMessage:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10653e724

// -[SCChatViewControllerV3 plugin:didSendMessage:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10653e728

// -[SCChatViewControllerV3 pluginDidAttachToAccessoryContainer]
// Type encoding: v16@0:8
// Implementation: 0x10653e72c

// -[SCChatViewControllerV3 pluginDidDetachFromAccessoryContainer]
// Type encoding: v16@0:8
// Implementation: 0x10653e760

// -[SCChatViewControllerV3 pluginDidSelectInputItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653e794

// -[SCChatViewControllerV3 _updateChatTypingStateWithState:activityType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653e798

// -[SCChatViewControllerV3 recipient]
// Type encoding: @16@0:8
// Implementation: 0x10653e828

// -[SCChatViewControllerV3 recipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x10653e87c

// -[SCChatViewControllerV3 replyParametersWithNavigationType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10653e88c

// -[SCChatViewControllerV3 isGroupConversation]
// Type encoding: B16@0:8
// Implementation: 0x10653eac8

// -[SCChatViewControllerV3 resolveConversationId:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10653ebd4

// -[SCChatViewControllerV3 stackedTableViewCell:didSelectIndex:viewModel:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x10653ec2c

// -[SCChatViewControllerV3 didLongPressOnMessageViewModel:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653ecb4

// -[SCChatViewControllerV3 isValidInternalDeepLinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10653ecb8

// -[SCChatViewControllerV3 didTapDeepLinkWithUrl:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10653ed24

// -[SCChatViewControllerV3 _addTeamSnapchatQueryParamToURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10653eeac

// -[SCChatViewControllerV3 _onCellWhitespaceTap:cell:point:selectedIndex:gestureRecognizer:]
// Type encoding: v64@0:8@16@24{CGPoint=dd}32q48@56
// Implementation: 0x10653efc0

// -[SCChatViewControllerV3 _tapToLoadMediaViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653f400

// -[SCChatViewControllerV3 scrollViewDidScroll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653f4ec

// -[SCChatViewControllerV3 scrollViewDidEndScrollingAnimation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653f4fc

// -[SCChatViewControllerV3 scrollViewWillBeginDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653f50c

// -[SCChatViewControllerV3 scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10653f598

// -[SCChatViewControllerV3 handleTapOnHeaderWithAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653f648

// -[SCChatViewControllerV3 _launchMyAIModelSelectionPaywall]
// Type encoding: v16@0:8
// Implementation: 0x10653fb6c

// -[SCChatViewControllerV3 _launchMerlinBioPage]
// Type encoding: v16@0:8
// Implementation: 0x10653fc70

// -[SCChatViewControllerV3 _launchSaturnWithSaturnUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10653fd20

// -[SCChatViewControllerV3 _copySaturnLinkForDeferredOpen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654003c

// -[SCChatViewControllerV3 _launchSaturnUpsellTrayForConversationId:recipientUserId:displayName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065400c4

// -[SCChatViewControllerV3 _presentSaturnUpsellTrayWithSocialContext:forConversationId:displayName:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065403e4

// -[SCChatViewControllerV3 saturnUpsellTrayDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106540654

// -[SCChatViewControllerV3 _launchStreakMilestoneSnapWithPoseId:myAvatarId:friendAvatarId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065406ac

// -[SCChatViewControllerV3 _launchMapWithUserIds:friendViewSource:mapOpenSource:grapheneSource:pageContext:]
// Type encoding: v56@0:8@16q24q32Q40q48
// Implementation: 0x106540824

// -[SCChatViewControllerV3 _presentProfileForChat]
// Type encoding: v16@0:8
// Implementation: 0x106540aa8

// -[SCChatViewControllerV3 _cleanupUnifiedProfile]
// Type encoding: v16@0:8
// Implementation: 0x106540b3c

// -[SCChatViewControllerV3 headerTextViewTextEditingDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106540be4

// -[SCChatViewControllerV3 headerTextViewTextEditingDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x106540c08

// -[SCChatViewControllerV3 _updateGroupNameInHeader]
// Type encoding: v16@0:8
// Implementation: 0x106540c38

// -[SCChatViewControllerV3 handleAddFriendButtonTappedWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106540f24

// -[SCChatViewControllerV3 handleTapOnStoryWithStoryId:avatarBaseView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065410fc

// -[SCChatViewControllerV3 headerUiContainer]
// Type encoding: @16@0:8
// Implementation: 0x1065413ec

// -[SCChatViewControllerV3 headerDidChangeHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106541420

// -[SCChatViewControllerV3 headerDidRenderSubtextWithType:isAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106541478

// -[SCChatViewControllerV3 willDisplayBanner:]
// Type encoding: v24@0:8q16
// Implementation: 0x106541768

// -[SCChatViewControllerV3 didTapBanner:]
// Type encoding: v24@0:8q16
// Implementation: 0x106541ba0

// -[SCChatViewControllerV3 didTapDismissBanner:]
// Type encoding: v24@0:8q16
// Implementation: 0x106541cd0

// -[SCChatViewControllerV3 _registerChatLocationUpsellBannerWasShown]
// Type encoding: v16@0:8
// Implementation: 0x106541eb4

// -[SCChatViewControllerV3 _registerChatLocationUpsellBannerActionWasDismissed]
// Type encoding: v16@0:8
// Implementation: 0x106541f58

// -[SCChatViewControllerV3 _registerChatArrivalNotificationUpsellBannerWasShown]
// Type encoding: v16@0:8
// Implementation: 0x106541ff8

// -[SCChatViewControllerV3 _locationUpsellBannerWasTapped]
// Type encoding: v16@0:8
// Implementation: 0x10654209c

// -[SCChatViewControllerV3 _arrivalNotificationUpsellBannerWasTapped]
// Type encoding: v16@0:8
// Implementation: 0x106542280

// -[SCChatViewControllerV3 _logUpsellBannerWasSeenForFriendId:bannerType:bannerSessionId:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x1065422bc

// -[SCChatViewControllerV3 _logUpsellBannerAction:bannerSessionId:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x106542374

// -[SCChatViewControllerV3 shareLocationFlowScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x1065423f4

// -[SCChatViewControllerV3 playbackPresenterDidTearDown:playbackScope:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654240c

// -[SCChatViewControllerV3 _dismissContentPlaybackScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x106542414

// -[SCChatViewControllerV3 playbackPresenter:didBeginPlayingStory:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106542468

// -[SCChatViewControllerV3 playbackPresenterWillBeginPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106542874

// -[SCChatViewControllerV3 playbackPresenterDidFinishPresenting:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106542878

// -[SCChatViewControllerV3 playbackPresenterWillBeginDismissing:transitionAnimator:playbackScope:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10654288c

// -[SCChatViewControllerV3 willDisplayAlertView]
// Type encoding: v16@0:8
// Implementation: 0x10654289c

// -[SCChatViewControllerV3 didDismissAlertView]
// Type encoding: v16@0:8
// Implementation: 0x1065428cc

// -[SCChatViewControllerV3 gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065428d0

// -[SCChatViewControllerV3 _shouldActivePlaybackConfigurationIgnoreScreenshot]
// Type encoding: B16@0:8
// Implementation: 0x106542a60

// -[SCChatViewControllerV3 _shouldPresentingOperaContentIgnoreScreenshot]
// Type encoding: B16@0:8
// Implementation: 0x106542b3c

// -[SCChatViewControllerV3 _shouldNotifyParticipantOfChatScreenshot]
// Type encoding: B16@0:8
// Implementation: 0x106542b40

// -[SCChatViewControllerV3 _handleScreenCaptureWithType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106542bd0

// -[SCChatViewControllerV3 userDidTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x106542c6c

// -[SCChatViewControllerV3 userDidScreenRecord]
// Type encoding: v16@0:8
// Implementation: 0x106542ca4

// -[SCChatViewControllerV3 _messageViewModelForCell:]
// Type encoding: @24@0:8@16
// Implementation: 0x106542d2c

// -[SCChatViewControllerV3 _updatedViewModelForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x106542dc4

// -[SCChatViewControllerV3 _messageViewModelForIndexPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x106542e2c

// -[SCChatViewControllerV3 addLifeCycleListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106542e94

// -[SCChatViewControllerV3 removeLifeCycleListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x106542ea4

// -[SCChatViewControllerV3 disableTableViewInteractionBeforeChatNotesRecording]
// Type encoding: v16@0:8
// Implementation: 0x106542eb4

// -[SCChatViewControllerV3 enableTableViewInteractionAfterChatNotesRecording]
// Type encoding: v16@0:8
// Implementation: 0x106542ec8

// -[SCChatViewControllerV3 didRequestRetryFailedMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106542edc

// -[SCChatViewControllerV3 _retryFailedMessageWithMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106542f58

// -[SCChatViewControllerV3 didSelectPreserveMessageForMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106542fd0

// -[SCChatViewControllerV3 didShowCompleteDisplayForMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065430a8

// -[SCChatViewControllerV3 didShowPendingDisplayForMessageId:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106543130

// -[SCChatViewControllerV3 didConsumeMediaForId:analyticsMessageId:conversationId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065431b8

// -[SCChatViewControllerV3 _isOneOnOneConversationActiveForConversationId:]
// Type encoding: B24@0:8@16
// Implementation: 0x106543408

// -[SCChatViewControllerV3 mediaWillGoFullscreen]
// Type encoding: v16@0:8
// Implementation: 0x1065434e4

// -[SCChatViewControllerV3 mediaDidGoFullscreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x106543514

// -[SCChatViewControllerV3 mediaDidDismissFullscreen]
// Type encoding: v16@0:8
// Implementation: 0x106543518

// -[SCChatViewControllerV3 isPlayingSnap]
// Type encoding: B16@0:8
// Implementation: 0x10654351c

// -[SCChatViewControllerV3 isPlayingStoriesFromChatHeader]
// Type encoding: B16@0:8
// Implementation: 0x10654360c

// -[SCChatViewControllerV3 mediaBoundingFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10654366c

// -[SCChatViewControllerV3 _screenFrameExcludingHeader]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106543670

// -[SCChatViewControllerV3 activeGroupId]
// Type encoding: @16@0:8
// Implementation: 0x10654376c

// -[SCChatViewControllerV3 currentGroup]
// Type encoding: @16@0:8
// Implementation: 0x10654377c

// -[SCChatViewControllerV3 chatRecipientUserId]
// Type encoding: @16@0:8
// Implementation: 0x106543810

// -[SCChatViewControllerV3 _goRightWithAnimation:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106543858

// -[SCChatViewControllerV3 navigationController:animationControllerForOperation:fromViewController:toViewController:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x1065438d8

// -[SCChatViewControllerV3 didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1065438e0

// -[SCChatViewControllerV3 _didLeaveGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065438f0

// -[SCChatViewControllerV3 _updateFriendmojiOnStickerAccessoryActivation]
// Type encoding: v16@0:8
// Implementation: 0x106543b20

// -[SCChatViewControllerV3 _requestGroupFriendmojiUpdateOnStickerAccessoryActivation]
// Type encoding: v16@0:8
// Implementation: 0x106543b40

// -[SCChatViewControllerV3 _updateFriendmoji]
// Type encoding: v16@0:8
// Implementation: 0x106543b54

// -[SCChatViewControllerV3 _updateOneOnOneFriendmoji]
// Type encoding: v16@0:8
// Implementation: 0x106543ba8

// -[SCChatViewControllerV3 _updateGroupFriendmoji]
// Type encoding: v16@0:8
// Implementation: 0x106543e2c

// -[SCChatViewControllerV3 _updateFriendmojiWithLastParticipant:bitmojiUsersForPicker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106544404

// -[SCChatViewControllerV3 didGrantBlockExceptionForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654461c

// -[SCChatViewControllerV3 blockedExceptionAlertScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654473c

// -[SCChatViewControllerV3 _operaPresenterWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106544794

// -[SCChatViewControllerV3 _operaPresenterDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x10654487c

// -[SCChatViewControllerV3 _operaPresenterDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106544880

// -[SCChatViewControllerV3 multiDirectionalUIContainerDidDetachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654499c

// -[SCChatViewControllerV3 _overlayDismissalRevealsChat]
// Type encoding: B16@0:8
// Implementation: 0x106544a44

// -[SCChatViewControllerV3 tableView]
// Type encoding: @16@0:8
// Implementation: 0x106544b04

// -[SCChatViewControllerV3 updateTableContentInset:]
// Type encoding: v24@0:8d16
// Implementation: 0x106544b34

// -[SCChatViewControllerV3 _updateStatusBarForFullScreenPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106544bf4

// -[SCChatViewControllerV3 isFullScreenPlayerShown]
// Type encoding: B16@0:8
// Implementation: 0x106544bf8

// -[SCChatViewControllerV3 _saveItemAtIndexPath:withSelectedIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106544c14

// -[SCChatViewControllerV3 _batchToggleSaveForStackedViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106544edc

// -[SCChatViewControllerV3 _setShouldAnimateOnSave:forIndexPath:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1065450ac

// -[SCChatViewControllerV3 _performTapGestureAtIndexPath:selectedIndex:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106545130

// -[SCChatViewControllerV3 _performRetryForFailedSendIfApplicableAtIndexPath:]
// Type encoding: B24@0:8@16
// Implementation: 0x106545188

// -[SCChatViewControllerV3 currentGroupForGroupConversation]
// Type encoding: @16@0:8
// Implementation: 0x106545258

// -[SCChatViewControllerV3 messageViewModelWithMessageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106545268

// -[SCChatViewControllerV3 dismissActionMenu:]
// Type encoding: v20@0:8B16
// Implementation: 0x106545404

// -[SCChatViewControllerV3 replayScopeWillDisplayAlertView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654541c

// -[SCChatViewControllerV3 replayScopeDidCompleteWorkflow:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654545c

// -[SCChatViewControllerV3 replayScope:didReplaySnapsInConversation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065454c4

// -[SCChatViewControllerV3 shouldSuppressKeyboard]
// Type encoding: B16@0:8
// Implementation: 0x1065454c8

// -[SCChatViewControllerV3 didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065455ac

// -[SCChatViewControllerV3 didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1065455b0

// -[SCChatViewControllerV3 _didEndSnapchattersUpdateDataRequest:withSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065456dc

// -[SCChatViewControllerV3 _didDeleteOrBlockSnapchatter]
// Type encoding: v16@0:8
// Implementation: 0x106545a04

// -[SCChatViewControllerV3 _presentBlockedExceptionAlertForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106545bcc

// -[SCChatViewControllerV3 _dismissChatViewsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106545ca0

// -[SCChatViewControllerV3 _dismissChatViewControllerIfInChatWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106545f48

// -[SCChatViewControllerV3 imageForRightButtonInState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106545f90

// -[SCChatViewControllerV3 imageForXButtonInState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106546028

// -[SCChatViewControllerV3 backgroundColorForHeader]
// Type encoding: @16@0:8
// Implementation: 0x106546050

// -[SCChatViewControllerV3 imageForLeftButtonInState:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106546060

// -[SCChatViewControllerV3 iconForPlaceholderAttributedString]
// Type encoding: @16@0:8
// Implementation: 0x1065460f8

// -[SCChatViewControllerV3 _pencilIconPadding]
// Type encoding: d16@0:8
// Implementation: 0x106546250

// -[SCChatViewControllerV3 textColorForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106546274

// -[SCChatViewControllerV3 textColorForPlaceholderInHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106546284

// -[SCChatViewControllerV3 fontForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x106546294

// -[SCChatViewControllerV3 fontForPlaceholderInHeader]
// Type encoding: @16@0:8
// Implementation: 0x1065462a4

// -[SCChatViewControllerV3 tintColorForHeader]
// Type encoding: @16@0:8
// Implementation: 0x1065462b4

// -[SCChatViewControllerV3 titleForHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065462c4

// -[SCChatViewControllerV3 isInChatCreationMode]
// Type encoding: B16@0:8
// Implementation: 0x10654630c

// -[SCChatViewControllerV3 borderColor]
// Type encoding: @16@0:8
// Implementation: 0x106546314

// -[SCChatViewControllerV3 borderThickness]
// Type encoding: d16@0:8
// Implementation: 0x106546324

// -[SCChatViewControllerV3 hasUnreadMessages]
// Type encoding: B16@0:8
// Implementation: 0x10654632c

// -[SCChatViewControllerV3 cell:didFinishAnimationForMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065463a4

// -[SCChatViewControllerV3 openReactionDetailViewForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106546400

// -[SCChatViewControllerV3 _exposeReactionsDetailScopeForMessageWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106546504

// -[SCChatViewControllerV3 didReactToMessageFromBelowMessage:conversationId:reactionType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065466f8

// -[SCChatViewControllerV3 didRemoveReactionFromBelowMessage:conversationId:reactionType:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106546854

// -[SCChatViewControllerV3 didFinishReplayAnimationForMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x106546998

// -[SCChatViewControllerV3 groupProfileWillDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065469f4

// -[SCChatViewControllerV3 groupProfileDidDimiss:withRequestedFriendshipProfile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106546a50

// -[SCChatViewControllerV3 groupProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106546a54

// -[SCChatViewControllerV3 groupProfileDidDimiss:withRequestedProfile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106546b14

// -[SCChatViewControllerV3 groupProfileWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106546b2c

// -[SCChatViewControllerV3 groupProfileDidDismiss:withRequestedCallInChat:media:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x106546b30

// -[SCChatViewControllerV3 friendProfileDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106546b38

// -[SCChatViewControllerV3 friendProfileDidDismiss:withRequestedChat:deeplinkType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106546b94

// -[SCChatViewControllerV3 friendProfileDidDismiss:withRequestedCallInChat:media:]
// Type encoding: B40@0:8@16@24Q32
// Implementation: 0x106546c0c

// -[SCChatViewControllerV3 friendProfileWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x106546cf4

// -[SCChatViewControllerV3 _presentGroupUnifiedProfileWithGroupId:friendshipFlashbackId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106546cf8

// -[SCChatViewControllerV3 _pressCameraFromUnifiedProfile]
// Type encoding: v16@0:8
// Implementation: 0x106546e7c

// -[SCChatViewControllerV3 _switchToGroupChatWithGroupId:deepLinkURL:chatPageSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x106546ebc

// -[SCChatViewControllerV3 _hasVisibleImmutableViewModelCells]
// Type encoding: B16@0:8
// Implementation: 0x106546f60

// -[SCChatViewControllerV3 defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x10654711c

// -[SCChatViewControllerV3 defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x1065471fc

// -[SCChatViewControllerV3 jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x106547204

// -[SCChatViewControllerV3 operaPresenterWillBeginPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065472ec

// -[SCChatViewControllerV3 operaPresenterDidFinishPresenting:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106547310

// -[SCChatViewControllerV3 operaPresenterWillBeginDismissing:transitionAnimator:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106547314

// -[SCChatViewControllerV3 operaPresenterDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547324

// -[SCChatViewControllerV3 operaPresenterWillBeginAnimatingToDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547338

// -[SCChatViewControllerV3 operaPresenterDidFailToPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547348

// -[SCChatViewControllerV3 operaPresenterDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547358

// -[SCChatViewControllerV3 operaPresenterDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547368

// -[SCChatViewControllerV3 operaPresenter:didBeginPlayingPlaylistGroupDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106547378

// -[SCChatViewControllerV3 operaPresenter:didFinishViewingPlaylistGroupDataModel:nextGroupDataModel:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10654738c

// -[SCChatViewControllerV3 didPressCreateAvatarButton]
// Type encoding: v16@0:8
// Implementation: 0x106547390

// -[SCChatViewControllerV3 bitmojiCreateFlowDidCompleteWithAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654742c

// -[SCChatViewControllerV3 _presentLockedConversationAlert]
// Type encoding: v16@0:8
// Implementation: 0x106547484

// -[SCChatViewControllerV3 _presentMerlinOnboardingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106547598

// -[SCChatViewControllerV3 _presentMerlinGroupOnboardingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1065476b8

// -[SCChatViewControllerV3 _presentMerlinMentionOnboardingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106547730

// -[SCChatViewControllerV3 _presentMerlinOnboardingType:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x1065477f4

// -[SCChatViewControllerV3 _isMerlinOneOnOne]
// Type encoding: B16@0:8
// Implementation: 0x1065479f0

// -[SCChatViewControllerV3 _isMerlinGroupConversationWithMerlinParticipant]
// Type encoding: B16@0:8
// Implementation: 0x106547a5c

// -[SCChatViewControllerV3 settingsScopeWantsDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106547cac

// -[SCChatViewControllerV3 settingsScopeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106547d04

// -[SCChatViewControllerV3 setVerticalScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106547d40

// -[SCChatViewControllerV3 presentPlaybackScopeWithConversationId:senderUserId:configuration:transitionConfiguration:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106547db4

// -[SCChatViewControllerV3 playbackScopeWillBeginPresenting:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547fd8

// -[SCChatViewControllerV3 playbackScopeDidFinishPresenting:]
// Type encoding: v24@0:8@16
// Implementation: 0x106547ffc

// -[SCChatViewControllerV3 playbackScopeWillBeginDismissing:mediaId:transitionAnimator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106548030

// -[SCChatViewControllerV3 playbackScopeDidCancelDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106548480

// -[SCChatViewControllerV3 playbackScopeDidFinishDismissing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106548494

// -[SCChatViewControllerV3 playbackScopeDidTearDown:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065484a4

// -[SCChatViewControllerV3 playbackScopeUnableToStartPresenting]
// Type encoding: v16@0:8
// Implementation: 0x10654853c

// -[SCChatViewControllerV3 playbackScopeUnableToContinuePresenting]
// Type encoding: v16@0:8
// Implementation: 0x1065485bc

// -[SCChatViewControllerV3 presentPlaybackWithBaseView:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106548608

// -[SCChatViewControllerV3 talkTypingActivitySubject]
// Type encoding: @16@0:8
// Implementation: 0x106548c4c

// -[SCChatViewControllerV3 _initTalkUIIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106548cac

// -[SCChatViewControllerV3 talkChatViewLifeCycleListener]
// Type encoding: @16@0:8
// Implementation: 0x106548e60

// -[SCChatViewControllerV3 _initPresenceContainer]
// Type encoding: v16@0:8
// Implementation: 0x106548e98

// -[SCChatViewControllerV3 setActiveTalkSessionForConversationWithId:startingCallWithMedia:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106548efc

// -[SCChatViewControllerV3 setActiveTalkSessionForConversationWithId:startingCallWithMedia:isHangout:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x106548f04

// -[SCChatViewControllerV3 setupPresenceContainer]
// Type encoding: v16@0:8
// Implementation: 0x10654915c

// -[SCChatViewControllerV3 _updatePresenceContainerLayout]
// Type encoding: v16@0:8
// Implementation: 0x1065491dc

// -[SCChatViewControllerV3 talkUIScope:didUpdateRemoteUsersPresentOnWeb:remoteUsersPresentOnMobile:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106549384

// -[SCChatViewControllerV3 talkUIScope:updateScrollLock:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106549444

// -[SCChatViewControllerV3 talkUIScope:didTapPresencePillForUserId:username:longPressed:completion:]
// Type encoding: v52@0:8@16@24@32B40@?44
// Implementation: 0x10654948c

// -[SCChatViewControllerV3 _didTapPresencePillForSnapchatter:longPressed:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106549764

// -[SCChatViewControllerV3 remoteUsersPresenceInformation]
// Type encoding: @16@0:8
// Implementation: 0x106549a18

// -[SCChatViewControllerV3 tableInsetUpdater]
// Type encoding: @16@0:8
// Implementation: 0x106549a48

// -[SCChatViewControllerV3 chatInputView]
// Type encoding: @16@0:8
// Implementation: 0x106549a78

// -[SCChatViewControllerV3 isHeaderShown]
// Type encoding: B16@0:8
// Implementation: 0x106549abc

// -[SCChatViewControllerV3 _chatHeaderVerticalTranslationUp]
// Type encoding: d16@0:8
// Implementation: 0x106549ad8

// -[SCChatViewControllerV3 _showStatusBar]
// Type encoding: v16@0:8
// Implementation: 0x106549bbc

// -[SCChatViewControllerV3 _initInputControllerV3]
// Type encoding: v16@0:8
// Implementation: 0x106549bfc

// -[SCChatViewControllerV3 _createDisabledInputConversationFooterView]
// Type encoding: @16@0:8
// Implementation: 0x106549e64

// -[SCChatViewControllerV3 rightButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10654a0d8

// -[SCChatViewControllerV3 _dismissChatWithExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x10654a0e0

// -[SCChatViewControllerV3 _showBlurOverlayOnView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654a1e8

// -[SCChatViewControllerV3 showBlurOverlay]
// Type encoding: v16@0:8
// Implementation: 0x10654a374

// -[SCChatViewControllerV3 hideBlurOverlay]
// Type encoding: v16@0:8
// Implementation: 0x10654a3b0

// -[SCChatViewControllerV3 _setIgnoreScreenCaptures:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654a3f4

// -[SCChatViewControllerV3 blueOverlay]
// Type encoding: @16@0:8
// Implementation: 0x10654a454

// -[SCChatViewControllerV3 setBlueOverlayAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x10654a558

// -[SCChatViewControllerV3 contextOperaPluginWillPresent:presentationContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654a5c0

// -[SCChatViewControllerV3 contextOperaPluginWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654a5f0

// -[SCChatViewControllerV3 actionSheetWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x10654a650

// -[SCChatViewControllerV3 actionSheetWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10654a680

// -[SCChatViewControllerV3 resetTransitionState]
// Type encoding: v16@0:8
// Implementation: 0x10654a684

// -[SCChatViewControllerV3 setHeaderButtonsAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x10654a720

// -[SCChatViewControllerV3 setChatEntryEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x10654a760

// -[SCChatViewControllerV3 unifiedProfileWillAppear]
// Type encoding: v16@0:8
// Implementation: 0x10654a770

// -[SCChatViewControllerV3 unifiedProfileDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10654a7d4

// -[SCChatViewControllerV3 presentingVC]
// Type encoding: @16@0:8
// Implementation: 0x10654a844

// -[SCChatViewControllerV3 switchChatTo:userId:deepLinkURL:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10654a8cc

// -[SCChatViewControllerV3 switchChatTo:deepLinkURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654a964

// -[SCChatViewControllerV3 _presentProfileForSnapchatter:addSource:page:completion:]
// Type encoding: v48@0:8@16q24q32@?40
// Implementation: 0x10654a9dc

// -[SCChatViewControllerV3 chatIsFullyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10654aa6c

// -[SCChatViewControllerV3 chatIsPartiallyVisible]
// Type encoding: B16@0:8
// Implementation: 0x10654aab0

// -[SCChatViewControllerV3 _handleSourceNotificationIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10654aaf4

// -[SCChatViewControllerV3 setCustomStatusBarStyleForViewController:]
// Type encoding: v24@0:8q16
// Implementation: 0x10654aaf8

// -[SCChatViewControllerV3 lockedConversationAlertScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654ab5c

// -[SCChatViewControllerV3 merlinOnboardingNeedsDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654abb4

// -[SCChatViewControllerV3 _dismissMerlinOnboardingScope]
// Type encoding: v16@0:8
// Implementation: 0x10654abd8

// -[SCChatViewControllerV3 merlinBioPageDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10654ac3c

// -[SCChatViewControllerV3 _dismissMerlinBioPage]
// Type encoding: v16@0:8
// Implementation: 0x10654ac40

// -[SCChatViewControllerV3 _initChatWallpapers]
// Type encoding: v16@0:8
// Implementation: 0x10654ace4

// -[SCChatViewControllerV3 _updateViewWithWallpaper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654ae98

// -[SCChatViewControllerV3 _logWallpaperLoadLatency]
// Type encoding: v16@0:8
// Implementation: 0x10654b098

// -[SCChatViewControllerV3 _updateChatWithWallpaper:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654b0d8

// -[SCChatViewControllerV3 _pulseWallpaperBackgroundWithExistingConversationViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654b3ac

// -[SCChatViewControllerV3 _pulseWallpaperBackground]
// Type encoding: v16@0:8
// Implementation: 0x10654b434

// -[SCChatViewControllerV3 _endWallpaperBackgroundPulse]
// Type encoding: v16@0:8
// Implementation: 0x10654b61c

// -[SCChatViewControllerV3 _makeChatWallpaperLoadingIndicator]
// Type encoding: @16@0:8
// Implementation: 0x10654b6f4

// -[SCChatViewControllerV3 _makeChatWallpaperImageView]
// Type encoding: @16@0:8
// Implementation: 0x10654b8ec

// -[SCChatViewControllerV3 _showStreakRestore]
// Type encoding: v16@0:8
// Implementation: 0x10654bbcc

// -[SCChatViewControllerV3 _presentStreakRestoreDirectFlow]
// Type encoding: v16@0:8
// Implementation: 0x10654bbd0

// -[SCChatViewControllerV3 _trackStreakRestoreEvent:conversationViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654bd20

// -[SCChatViewControllerV3 streakRestorePurchaseDismissedWithDidRestore:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654be50

// -[SCChatViewControllerV3 updateInputText:select:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10654be54

// -[SCChatViewControllerV3 htmlContentPlaybackStarted]
// Type encoding: v16@0:8
// Implementation: 0x10654bec4

// -[SCChatViewControllerV3 didTapOnQuotedMessageWithMessageId:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654bef4

// -[SCChatViewControllerV3 _didTapOnQuotedMessageWithMessageId:cell:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654bfbc

// -[SCChatViewControllerV3 _saveOrUnsaveCell:failToScrollReason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10654c104

// -[SCChatViewControllerV3 _scrollToRowAtIndexPath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654c204

// -[SCChatViewControllerV3 _iconXSignFillImage]
// Type encoding: @16@0:8
// Implementation: 0x10654c2a0

// -[SCChatViewControllerV3 _presentChatActionMenuTray:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654c320

// -[SCChatViewControllerV3 _presentActionMenuForMessage:focusedMessageContent:focusedMessageCell:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10654c664

// -[SCChatViewControllerV3 didDismissActionMenu]
// Type encoding: v16@0:8
// Implementation: 0x10654c9d8

// -[SCChatViewControllerV3 presentActionMenuForMessage:focusedMessageContent:focusedContextParams:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10654cb14

// -[SCChatViewControllerV3 cancelMenuActionSheetDidDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654cbbc

// -[SCChatViewControllerV3 plusSubscribeDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10654cc14

// -[SCChatViewControllerV3 _subscribeToNativePostSnapInteractionEvents]
// Type encoding: v16@0:8
// Implementation: 0x10654cc6c

// -[SCChatViewControllerV3 _notifyContentPresentationListeners]
// Type encoding: v16@0:8
// Implementation: 0x10654cf60

// -[SCChatViewControllerV3 _incrementSponsoredSnapSeqNumIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10654d05c

// -[SCChatViewControllerV3 chatAttachmentLaunchedMap]
// Type encoding: v16@0:8
// Implementation: 0x10654d12c

// -[SCChatViewControllerV3 chatAttachmentDismissedMap]
// Type encoding: v16@0:8
// Implementation: 0x10654d15c

// -[SCChatViewControllerV3 _shouldOpenToFirstUnread]
// Type encoding: B16@0:8
// Implementation: 0x10654d18c

// -[SCChatViewControllerV3 _shouldDisableKeyboardOnChatEntry]
// Type encoding: B16@0:8
// Implementation: 0x10654d22c

// -[SCChatViewControllerV3 delegate]
// Type encoding: @16@0:8
// Implementation: 0x10654d2ac

// -[SCChatViewControllerV3 lifeCycleAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x10654d2cc

// -[SCChatViewControllerV3 setLifeCycleAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d2dc

// -[SCChatViewControllerV3 customStatusBarStyleContextController]
// Type encoding: @16@0:8
// Implementation: 0x10654d31c

// -[SCChatViewControllerV3 conversationManager]
// Type encoding: @16@0:8
// Implementation: 0x10654d33c

// -[SCChatViewControllerV3 setConversationManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d34c

// -[SCChatViewControllerV3 snapchatterPublicInfoFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10654d38c

// -[SCChatViewControllerV3 setSnapchatterPublicInfoFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d39c

// -[SCChatViewControllerV3 talkUIScopeExposer]
// Type encoding: @16@0:8
// Implementation: 0x10654d3dc

// -[SCChatViewControllerV3 setTalkUIScopeExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d3ec

// -[SCChatViewControllerV3 snapchattersDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10654d42c

// -[SCChatViewControllerV3 setSnapchattersDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d43c

// -[SCChatViewControllerV3 snapchattersDataMutator]
// Type encoding: @16@0:8
// Implementation: 0x10654d47c

// -[SCChatViewControllerV3 setSnapchattersDataMutator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d48c

// -[SCChatViewControllerV3 groupsDataCreator]
// Type encoding: @16@0:8
// Implementation: 0x10654d4cc

// -[SCChatViewControllerV3 setGroupsDataCreator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d4dc

// -[SCChatViewControllerV3 groupsDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10654d51c

// -[SCChatViewControllerV3 setGroupsDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d52c

// -[SCChatViewControllerV3 groupSnapchatterRepository]
// Type encoding: @16@0:8
// Implementation: 0x10654d56c

// -[SCChatViewControllerV3 setGroupSnapchatterRepository:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d57c

// -[SCChatViewControllerV3 featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x10654d5bc

// -[SCChatViewControllerV3 setFeatureSettingsService:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d5cc

// -[SCChatViewControllerV3 callStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x10654d60c

// -[SCChatViewControllerV3 setCallStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d61c

// -[SCChatViewControllerV3 presenceStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x10654d65c

// -[SCChatViewControllerV3 setPresenceStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d66c

// -[SCChatViewControllerV3 snapchatterUserInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x10654d6ac

// -[SCChatViewControllerV3 setSnapchatterUserInfoProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d6bc

// -[SCChatViewControllerV3 circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x10654d6fc

// -[SCChatViewControllerV3 setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d70c

// -[SCChatViewControllerV3 activeChatIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10654d74c

// -[SCChatViewControllerV3 parentDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10654d75c

// -[SCChatViewControllerV3 setParentDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d77c

// -[SCChatViewControllerV3 presenceContainer]
// Type encoding: @16@0:8
// Implementation: 0x10654d790

// -[SCChatViewControllerV3 setPresenceContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d7a0

// -[SCChatViewControllerV3 presenceInformation]
// Type encoding: @16@0:8
// Implementation: 0x10654d7e0

// -[SCChatViewControllerV3 setTalkChatViewLifeCycleListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d7f0

// -[SCChatViewControllerV3 baseDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10654d830

// -[SCChatViewControllerV3 setBaseDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d850

// -[SCChatViewControllerV3 sourceNotification]
// Type encoding: @16@0:8
// Implementation: 0x10654d864

// -[SCChatViewControllerV3 stackChatsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10654d874

// -[SCChatViewControllerV3 setStackChatsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d894

// -[SCChatViewControllerV3 ignoreScreenshot]
// Type encoding: B16@0:8
// Implementation: 0x10654d8a8

// -[SCChatViewControllerV3 setIgnoreScreenshot:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654d8b8

// -[SCChatViewControllerV3 ignoreScreenRecord]
// Type encoding: B16@0:8
// Implementation: 0x10654d8c8

// -[SCChatViewControllerV3 setIgnoreScreenRecord:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654d8d8

// -[SCChatViewControllerV3 handleLifecycleWhenCentered]
// Type encoding: B16@0:8
// Implementation: 0x10654d8e8

// -[SCChatViewControllerV3 setHandleLifecycleWhenCentered:]
// Type encoding: v20@0:8B16
// Implementation: 0x10654d8f8

// -[SCChatViewControllerV3 configuration]
// Type encoding: @16@0:8
// Implementation: 0x10654d908

// -[SCChatViewControllerV3 setConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d918

// -[SCChatViewControllerV3 contentDelivery]
// Type encoding: @16@0:8
// Implementation: 0x10654d958

// -[SCChatViewControllerV3 setContentDelivery:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d968

// -[SCChatViewControllerV3 userSession]
// Type encoding: @16@0:8
// Implementation: 0x10654d9a8

// -[SCChatViewControllerV3 setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654d9b8

// -[SCChatViewControllerV3 snapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x10654d9f8

// -[SCChatViewControllerV3 setSnapTokenProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654da08

// -[SCChatViewControllerV3 tableContainerView]
// Type encoding: @16@0:8
// Implementation: 0x10654da48

// -[SCChatViewControllerV3 setTableContainerView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654da58

// -[SCChatViewControllerV3 header]
// Type encoding: @16@0:8
// Implementation: 0x10654da98

// -[SCChatViewControllerV3 setHeader:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654daa8

// -[SCChatViewControllerV3 callButtonsContainer]
// Type encoding: @16@0:8
// Implementation: 0x10654dae8

// -[SCChatViewControllerV3 setCallButtonsContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654daf8

// -[SCChatViewControllerV3 spotlightHeaderButtonContainer]
// Type encoding: @16@0:8
// Implementation: 0x10654db38

// -[SCChatViewControllerV3 setSpotlightHeaderButtonContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654db48

// -[SCChatViewControllerV3 presenceBarContainer]
// Type encoding: @16@0:8
// Implementation: 0x10654db88

// -[SCChatViewControllerV3 setPresenceBarContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654db98

// -[SCChatViewControllerV3 setChatInputController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654dbd8

// -[SCChatViewControllerV3 remoteUsersPresenceInformationSubject]
// Type encoding: @16@0:8
// Implementation: 0x10654dc18

// -[SCChatViewControllerV3 setRemoteUsersPresenceInformationSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654dc28

// -[SCChatViewControllerV3 grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x10654dc68

// -[SCChatViewControllerV3 setGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654dc78

// -[SCChatViewControllerV3 blizzardLogger]
// Type encoding: @16@0:8
// Implementation: 0x10654dcb8

// -[SCChatViewControllerV3 setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654dcc8

// -[SCChatViewControllerV3 isOperaShowing]
// Type encoding: B16@0:8
// Implementation: 0x10654dd08

// -[SCChatViewControllerV3 customStatusBarStyleForViewController]
// Type encoding: q16@0:8
// Implementation: 0x10654dd18

// -[SCChatViewControllerV3 setLongPressGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654dd28

// -[SCChatViewControllerV3 panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10654dd68

// -[SCChatViewControllerV3 setPanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654dd78

// -[SCChatViewControllerV3 dismissSubmenuGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10654ddb8

// -[SCChatViewControllerV3 setDismissSubmenuGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654ddc8

// -[SCChatViewControllerV3 tableDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10654de08

// -[SCChatViewControllerV3 setTableDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654de18

// -[SCChatViewControllerV3 setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10654de58

// -[SCChatViewControllerV3 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10654de98

// +[SCChatViewControllerV3 pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1065314ec

@end
