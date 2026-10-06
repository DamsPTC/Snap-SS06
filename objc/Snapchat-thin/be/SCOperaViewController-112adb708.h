// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaViewController
// Superclass: SCDeckBaseViewController
// Address: 0x112adb708

@interface SCOperaViewController

// Property: shakeToReportOperaSessionId; attributes: T@"NSString",R,C,N
// Property: shakeToReportSummarySnapshot; attributes: T@"SCOperaShakeToReportSummaryInfo",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",R,N,V_eventAnnouncer
// Property: eventPublisher; attributes: T@"SCOperaEventPublisher",R,N,V_eventPublisher
// Property: transitionAnimator; attributes: T@"<SCViewControllerTransitionAnimating>",R,N
// Property: currentViewModel; attributes: T@"SCOperaPageViewModel",&,N
// Property: shouldResizeWhenTransitionedToSize; attributes: TB,N,V_shouldResizeWhenTransitionedToSize
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: disableSwipeDownToDismiss; attributes: TB,N,V_disableSwipeDownToDismiss
// Property: lastInteraction; attributes: T@"SCOperaViewInteractionData",R,N,V_lastInteraction
// Property: interactionObservable; attributes: T@"SCObservable",R,N
// Property: isDataSaverModeEnabled; attributes: TB,R,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N
// Property: navigation; attributes: T@"<SCOperaNavigating>",R,N
// Property: viewPlayManaging; attributes: T@"<SCOperaViewPlayManaging>",R,N
// Property: modalPresentation; attributes: T@"<SCModalPresentation>",R,N
// Property: viewModelConnectionsCallbackControlling; attributes: T@"<SCOperaPageViewModelConnectionsCallbackControlling>",R,N
// Property: pageProviding; attributes: T@"<SCOperaCurrentPageProviding>",R,N
// Property: viewParamsProviding; attributes: T@"<SCOperaCurrentViewParamsProviding>",R,N
// Property: shareableMediaItemsProviding; attributes: T@"<SCOperaShareableMediaItemsProviding>",R,N
// Property: zooming; attributes: T@"<SCOperaZooming>",R,N
// Property: eventAnnouncing; attributes: T@"<SCOperaEventAnnouncing>",R,N
// Property: legacySessionStateContaining; attributes: T@"<SCOperaLegacySessionStateContaining>",R,N
// Property: interactionStateProviding; attributes: T@"<SCOperaInteractionStateProviding>",R,N
// Property: uiViewControllerProviding; attributes: T@"<SCOperaUIViewControllerProviding>",R,N
// Property: customVolumeControlling; attributes: T@"<SCCustomVolumeControlling>",R,N
// Property: transitionAnimating; attributes: T@"<SCViewControllerTransitionAnimating>",R,N
// Property: resizing; attributes: T@"<SCOperaResizing>",R,N
// Property: extendedTouchHandling; attributes: T@"<SCOperaExtendedTouchHandling>",R,N
// Property: dataSaverModeController; attributes: T@"<SCOperaDataSaverModeControlling>",R,N
// Property: operaDependencies; attributes: T@"SCOperaDependencies",R,N,V_operaDependencies
// Property: configuration; attributes: T@"SCOperaConfiguration",R,N,V_configuration
// Property: pageViewModelManipulator; attributes: T@"<SCOperaPageViewModelManipulator>",R,N
// Property: operaSessionId; attributes: T@"NSString",R,C,N,V_operaSessionId
// Property: operaAnalyticsEventObservable; attributes: T@"SCObservable",R,N
// Property: analyticsEventObservable; attributes: T@"SCObservable",R,N

// -[SCOperaViewController shakeToReportSummarySnapshot]
// Type encoding: @16@0:8
// Implementation: 0x106335650

// -[SCOperaViewController shakeToReportOperaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x106335654

// -[SCOperaViewController _captureShakeToReportSummaryInfo]
// Type encoding: v16@0:8
// Implementation: 0x106335658

// -[SCOperaViewController _setShakeToReportSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106335780

// -[SCOperaViewController _shakeToReportSummaryInfo]
// Type encoding: @16@0:8
// Implementation: 0x106335790

// -[SCOperaViewController initWithConfiguration:operaDependencies:initialViewModel:sessions:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106321798

// -[SCOperaViewController initWithConfiguration:operaDependencies:initialViewModel:eventAnnouncer:eventPublisher:trackerService:operaSessionId:operaSessionContext:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106321aa4

// -[SCOperaViewController initWithConfiguration:operaDependencies:eventAnnouncer:eventPublisher:viewModelsManager:customVolumeController:notificationCenter:sharedResourceManager:viewControllerCacheManager:trackerService:operaSessionId:operaSessionContext:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x106321e30

// -[SCOperaViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106322c40

// -[SCOperaViewController addObservers]
// Type encoding: v16@0:8
// Implementation: 0x106322d68

// -[SCOperaViewController removeObservers]
// Type encoding: v16@0:8
// Implementation: 0x106322ef8

// -[SCOperaViewController _observePlaybackDebugInfo]
// Type encoding: v16@0:8
// Implementation: 0x106322f78

// -[SCOperaViewController _currentPlaybackDidUpdateWithLog:]
// Type encoding: v24@0:8@16
// Implementation: 0x106322f7c

// -[SCOperaViewController updateModelsToPreload:]
// Type encoding: v24@0:8@16
// Implementation: 0x106322f80

// -[SCOperaViewController prefersStatusBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x106322f90

// -[SCOperaViewController preferredStatusBarStyle]
// Type encoding: q16@0:8
// Implementation: 0x106323004

// -[SCOperaViewController _currentPagePreferredStatusBarStyleNumber]
// Type encoding: @16@0:8
// Implementation: 0x10632308c

// -[SCOperaViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106323154

// -[SCOperaViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106323320

// -[SCOperaViewController operaView]
// Type encoding: @16@0:8
// Implementation: 0x106323598

// -[SCOperaViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632359c

// -[SCOperaViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632390c

// -[SCOperaViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063239fc

// -[SCOperaViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106323b34

// -[SCOperaViewController presentViewController:animated:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x106323d4c

// -[SCOperaViewController dismissViewControllerAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106323d80

// -[SCOperaViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x106323e14

// -[SCOperaViewController viewDidFullyDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106324014

// -[SCOperaViewController _teardown]
// Type encoding: v16@0:8
// Implementation: 0x106324368

// -[SCOperaViewController viewWillFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106324814

// -[SCOperaViewController viewEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1063248f4

// -[SCOperaViewController viewWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106324b7c

// -[SCOperaViewController willMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106324e3c

// -[SCOperaViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106324eb8

// -[SCOperaViewController didBecomeActivePostponed]
// Type encoding: v16@0:8
// Implementation: 0x106324fcc

// -[SCOperaViewController didBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x1063250f8

// -[SCOperaViewController viewWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1063251b0

// -[SCOperaViewController _shouldPauseCurrentPageWithOverlay]
// Type encoding: B16@0:8
// Implementation: 0x106325460

// -[SCOperaViewController didTakeScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x10632550c

// -[SCOperaViewController didTakeScreenRecord]
// Type encoding: v16@0:8
// Implementation: 0x1063255a4

// -[SCOperaViewController _isPresentingSilentlyPresentedViewControllerIncludingPause:]
// Type encoding: B20@0:8B16
// Implementation: 0x10632563c

// -[SCOperaViewController _isPresentingSilentlyPresentedAndPauseOperaViewController]
// Type encoding: B16@0:8
// Implementation: 0x106325778

// -[SCOperaViewController _isPresentedViewControllerAlwaysSilentlyPresented]
// Type encoding: B16@0:8
// Implementation: 0x1063257dc

// -[SCOperaViewController _isPresentingSilentlyPresentedResumable]
// Type encoding: B16@0:8
// Implementation: 0x10632585c

// -[SCOperaViewController _presentedViewControllerOrTopVCForSilentlyPresentedProtocol]
// Type encoding: @16@0:8
// Implementation: 0x1063258dc

// -[SCOperaViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106325ad4

// -[SCOperaViewController pauseWithOverlay:caller:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106325b20

// -[SCOperaViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x106325c00

// -[SCOperaViewController restartTimer]
// Type encoding: v16@0:8
// Implementation: 0x106325c80

// -[SCOperaViewController setLooping:]
// Type encoding: v20@0:8B16
// Implementation: 0x106325cb0

// -[SCOperaViewController setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x106325ce8

// -[SCOperaViewController setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x106325cf8

// -[SCOperaViewController setCurrentViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106325d08

// -[SCOperaViewController operaPageSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106325d60

// -[SCOperaViewController operaScrollViewContentOffsetForCurrentViewModel]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x106325d74

// -[SCOperaViewController shouldLayoutPageViewController:atOffset:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x106325d88

// -[SCOperaViewController _addPageViewController:atOffset:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x106325d8c

// -[SCOperaViewController pageProviding]
// Type encoding: @16@0:8
// Implementation: 0x106326230

// -[SCOperaViewController currentPage]
// Type encoding: @16@0:8
// Implementation: 0x106326234

// -[SCOperaViewController currentPageAttachment]
// Type encoding: @16@0:8
// Implementation: 0x106326284

// -[SCOperaViewController isCurrentPageLoading]
// Type encoding: B16@0:8
// Implementation: 0x1063262f4

// -[SCOperaViewController hasCurrentPageStartedPlayback]
// Type encoding: B16@0:8
// Implementation: 0x10632635c

// -[SCOperaViewController durationForDismissal]
// Type encoding: d16@0:8
// Implementation: 0x1063263c4

// -[SCOperaViewController shouldDismissOnlyOperaOwnedPresentedViewControllerOnDismiss]
// Type encoding: B16@0:8
// Implementation: 0x106326414

// -[SCOperaViewController pageableViewControllerVolumeHelperDidChangeVolume:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063264bc

// -[SCOperaViewController currentViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106326500

// -[SCOperaViewController currentPageIsAd]
// Type encoding: B16@0:8
// Implementation: 0x106326510

// -[SCOperaViewController pageIsAd:]
// Type encoding: B24@0:8@16
// Implementation: 0x106326574

// -[SCOperaViewController currentPageViewController]
// Type encoding: @16@0:8
// Implementation: 0x106326588

// -[SCOperaViewController currentFullyAppearedPageViewController]
// Type encoding: @16@0:8
// Implementation: 0x10632658c

// -[SCOperaViewController pageViewControllerForOperaViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063265bc

// -[SCOperaViewController pageViewControllerForPageID:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063265c0

// -[SCOperaViewController pageabilityForRelativePosition:swipeDirection:gestureRecognizer:]
// Type encoding: q40@0:8Q16q24@32
// Implementation: 0x1063265c4

// -[SCOperaViewController floatingLayerViewControllers]
// Type encoding: @16@0:8
// Implementation: 0x10632667c

// -[SCOperaViewController pageViewControllerForViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10632668c

// -[SCOperaViewController dummyPageViewControllers]
// Type encoding: @16@0:8
// Implementation: 0x106326690

// -[SCOperaViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x1063266c0

// -[SCOperaViewController lastViewInteraction]
// Type encoding: @16@0:8
// Implementation: 0x10632672c

// -[SCOperaViewController setLastViewInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632675c

// -[SCOperaViewController _isUserNavigationInteraction:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1063267c4

// -[SCOperaViewController _autoResumeIfPausedForUserNavigationInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106326850

// -[SCOperaViewController interactionObservable]
// Type encoding: @16@0:8
// Implementation: 0x106326954

// -[SCOperaViewController shouldNotPassCurrentPageWithScrollRelativePosition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106326984

// -[SCOperaViewController shouldDeferUpdatingPageViewControllers]
// Type encoding: B16@0:8
// Implementation: 0x106326988

// -[SCOperaViewController isDismissing]
// Type encoding: B16@0:8
// Implementation: 0x106326998

// -[SCOperaViewController operaViewControllerView]
// Type encoding: @16@0:8
// Implementation: 0x1063269a8

// -[SCOperaViewController operaPresentedViewController]
// Type encoding: @16@0:8
// Implementation: 0x1063269ac

// -[SCOperaViewController isFullyVisible]
// Type encoding: B16@0:8
// Implementation: 0x1063269b0

// -[SCOperaViewController isSwipeDownToDismissDisabled]
// Type encoding: B16@0:8
// Implementation: 0x1063269c0

// -[SCOperaViewController viewModelsManagerDidUpdateViewModel]
// Type encoding: v16@0:8
// Implementation: 0x1063269c4

// -[SCOperaViewController _prepareNewCurrentPageViewController]
// Type encoding: v16@0:8
// Implementation: 0x106326adc

// -[SCOperaViewController _currentPageVCDidStartDisplaying]
// Type encoding: v16@0:8
// Implementation: 0x106326df4

// -[SCOperaViewController viewModelsManagerDidHitDismissViewModel]
// Type encoding: v16@0:8
// Implementation: 0x106326e44

// -[SCOperaViewController viewModelsManagerDidPageToNilViewModel]
// Type encoding: v16@0:8
// Implementation: 0x106326e48

// -[SCOperaViewController viewModelsManagerWillForcePagingFromViewModel:toViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106326eb0

// -[SCOperaViewController viewModelsManagerDidUpdateLoadedPageIDs]
// Type encoding: v16@0:8
// Implementation: 0x106326eb4

// -[SCOperaViewController viewModelsManagerDidChangeCurrentViewModel]
// Type encoding: v16@0:8
// Implementation: 0x106326f24

// -[SCOperaViewController _informCurrentPageVCVisibilityIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106326f6c

// -[SCOperaViewController _informNeighborPageVCsVisibility]
// Type encoding: v16@0:8
// Implementation: 0x106327028

// -[SCOperaViewController _informNeighborPageVCVisibilityForRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106327218

// -[SCOperaViewController _notifyPageableViewController:neighborViewDidFullyAppearWithCurrentViewRelativePosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1063272c0

// -[SCOperaViewController _preloadOrReleaseNeighbourVideoPlayers]
// Type encoding: v16@0:8
// Implementation: 0x1063272d4

// -[SCOperaViewController _informCurrentPageVCDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1063275e8

// -[SCOperaViewController _loadPageViewsBasedOnViewModels]
// Type encoding: v16@0:8
// Implementation: 0x106327640

// -[SCOperaViewController _logDummyPagesInfoIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063278f8

// -[SCOperaViewController _buildPageVCsForViewModels:modelIDToPageVCMap:needToCreateDummyPageVCIfNecessary:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x106327a7c

// -[SCOperaViewController _pageViewControllerForViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106327d84

// -[SCOperaViewController _pageViewControllerForPageID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106327fb4

// -[SCOperaViewController _updateOperaScrollViewAndAddPageVCs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632803c

// -[SCOperaViewController _updateAttachmentInteraction]
// Type encoding: v16@0:8
// Implementation: 0x106328114

// -[SCOperaViewController _setContainerViewOffsetForPageVC:baseOffset:]
// Type encoding: v40@0:8@16{CGSize=dd}24
// Implementation: 0x1063282bc

// -[SCOperaViewController _addOperaPageViewControllers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106328328

// -[SCOperaViewController _updateActionBar]
// Type encoding: v16@0:8
// Implementation: 0x106328534

// -[SCOperaViewController _addActionBarViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106328690

// -[SCOperaViewController _enumeratePageViewControllers:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106328760

// -[SCOperaViewController _actionBarBackgroundStyle]
// Type encoding: q16@0:8
// Implementation: 0x106328914

// -[SCOperaViewController _updateOffsetInActionBarWithDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x106328940

// -[SCOperaViewController _updatePageIDToPageVCMapWithDimensionToPageIdToPageVCMap:preloadedPageVCMap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106328abc

// -[SCOperaViewController shareableMedias]
// Type encoding: @16@0:8
// Implementation: 0x106328fa4

// -[SCOperaViewController shareableMediaSnapshotsWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x106328fe8

// -[SCOperaViewController _pageVCForRelativePosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106329054

// -[SCOperaViewController _viewModelForRelativePosition:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1063290a4

// -[SCOperaViewController navigationManagerDidFinishScrollingToTargetPage:didScrollCallback:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10632920c

// -[SCOperaViewController navigationManagerWillEndDragging:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063292a8

// -[SCOperaViewController operaViewContentViewDidRefreshDisplay:]
// Type encoding: v24@0:8@16
// Implementation: 0x106329370

// -[SCOperaViewController operaViewDidBeginPress:gestureRecognizer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063293c8

// -[SCOperaViewController operaViewDidEndPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063296b4

// -[SCOperaViewController _sendPageDirectionEventWithPreviousViewModel:nextViewModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10632974c

// -[SCOperaViewController _sendPageDirectionEventWithPreviousViewModel:nextViewModel:callback:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106329754

// -[SCOperaViewController _announceFailedToNavigateEventIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063299bc

// -[SCOperaViewController _createBaseEventParamsForCurrentPage]
// Type encoding: @16@0:8
// Implementation: 0x106329a80

// -[SCOperaViewController _setInteractionParamsForNavigationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106329b0c

// -[SCOperaViewController navigationManager:didTapToRelativePosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106329f44

// -[SCOperaViewController navigationManager:handledInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106329fc8

// -[SCOperaViewController navigationManager:wantsToDismissAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10632a00c

// -[SCOperaViewController navigationManagerShouldDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632a014

// -[SCOperaViewController navigationManagerOperaScrollViewDidScroll:direction:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10632a018

// -[SCOperaViewController _shouldPerformForceUpdateOfPageViewControllers]
// Type encoding: B16@0:8
// Implementation: 0x10632a070

// -[SCOperaViewController _advanceToNextPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632a0e4

// -[SCOperaViewController _sendWillClosePageViewForAnotherPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632a0ec

// -[SCOperaViewController _advanceToNextPage:ignoreSettingLastInteraction:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10632a23c

// -[SCOperaViewController _didHitDismissViewModel]
// Type encoding: v16@0:8
// Implementation: 0x10632a5cc

// -[SCOperaViewController _goBackToPreviousPage]
// Type encoding: v16@0:8
// Implementation: 0x10632a6a4

// -[SCOperaViewController _shouldNotPassCurrentPageWithScrollRelativePosition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10632a964

// -[SCOperaViewController _currentPageVCOffset]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10632aadc

// -[SCOperaViewController _currentPageVC]
// Type encoding: @16@0:8
// Implementation: 0x10632ab40

// -[SCOperaViewController currentPageID]
// Type encoding: @16@0:8
// Implementation: 0x10632ab98

// -[SCOperaViewController shouldDismissOnViewModel:]
// Type encoding: B24@0:8@16
// Implementation: 0x10632ac08

// -[SCOperaViewController overridePauseStateToPause]
// Type encoding: v16@0:8
// Implementation: 0x10632ace0

// -[SCOperaViewController overridePauseStateToResume]
// Type encoding: v16@0:8
// Implementation: 0x10632ad10

// -[SCOperaViewController seekTo:]
// Type encoding: v24@0:8d16
// Implementation: 0x10632ad40

// -[SCOperaViewController setPauseCurrentPageViewForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632ad80

// -[SCOperaViewController registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x10632adb8

// -[SCOperaViewController registeredEventsForOperaSessionUILifecycleTracker]
// Type encoding: @16@0:8
// Implementation: 0x10632b3a4

// -[SCOperaViewController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10632b464

// -[SCOperaViewController extendedTouchHandling]
// Type encoding: @16@0:8
// Implementation: 0x10632d12c

// -[SCOperaViewController registerGesture:blockingView:extendedInsets:defersInBoundsTouches:]
// Type encoding: v68@0:8@16@24{UIEdgeInsets=dddd}32B64
// Implementation: 0x10632d130

// -[SCOperaViewController unregisterGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632d228

// -[SCOperaViewController _handlePlaybackEventForPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10632d238

// -[SCOperaViewController _updateAttachmentExtendedModeOnTransitionFromPage:toPage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10632dbe0

// -[SCOperaViewController _updateAttachmentExtendedModeIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632dca4

// -[SCOperaViewController _extendedAttachmentFrameModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10632dde4

// -[SCOperaViewController _verticalNeighborModelForId:isTopSnap:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10632dec4

// -[SCOperaViewController _shareWebpageURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632df78

// -[SCOperaViewController _interactionEventWithType:params:]
// Type encoding: @32@0:8Q16@24
// Implementation: 0x10632e118

// -[SCOperaViewController presentWithTransitionAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632e278

// -[SCOperaViewController presentFromViewController:config:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10632e318

// -[SCOperaViewController setBaseViewFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x10632e55c

// -[SCOperaViewController setBaseView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632e56c

// -[SCOperaViewController updateBaseView:baseViewOrientation:topInset:transitionMode:]
// Type encoding: v48@0:8@16q24d32q40
// Implementation: 0x10632e660

// -[SCOperaViewController transitionAnimator]
// Type encoding: @16@0:8
// Implementation: 0x10632e6d8

// -[SCOperaViewController dismiss]
// Type encoding: v16@0:8
// Implementation: 0x10632e708

// -[SCOperaViewController dismissWithLastInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632e73c

// -[SCOperaViewController removeBlurOverlay]
// Type encoding: v16@0:8
// Implementation: 0x10632e768

// -[SCOperaViewController dismissWithAnimation:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632e798

// -[SCOperaViewController logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10632e898

// -[SCOperaViewController didTriggerEventWithEventName:announcerIdentifier:extraData:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10632ec84

// -[SCOperaViewController maskableFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10632f170

// -[SCOperaViewController viewControllerTransitionAnimatorWillBeginPresenting]
// Type encoding: v16@0:8
// Implementation: 0x10632f2a4

// -[SCOperaViewController viewControllerTransitionAnimatorDidFinishPresenting]
// Type encoding: v16@0:8
// Implementation: 0x10632f340

// -[SCOperaViewController viewControllerTransitionAnimatorDidBeginDismissing]
// Type encoding: v16@0:8
// Implementation: 0x10632f54c

// -[SCOperaViewController viewControllerTransitionAnimatorDidBeginDismissingWithInteraction:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10632f654

// -[SCOperaViewController viewControllerTransitionAnimatorWillBeginAnimatingToDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10632f6a4

// -[SCOperaViewController viewControllerTransitionAnimatorDidCancelDismissing]
// Type encoding: v16@0:8
// Implementation: 0x10632f860

// -[SCOperaViewController viewControllerTransitionAnimatorDidFinishDismissing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10632f968

// -[SCOperaViewController viewControllerTransitionAnimatorShouldBeginAuxViewActionWithDirection:gestureRecognizer:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10632fb04

// -[SCOperaViewController viewControllerTransitionAnimatorShouldBeginDismissingWithDirection:gestureRecognizer:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x10632fc2c

// -[SCOperaViewController _isPreventingTheScrubberGesture:]
// Type encoding: B24@0:8@16
// Implementation: 0x10632fcc4

// -[SCOperaViewController _configureFadeTransitionForDismissalAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10632fdb0

// -[SCOperaViewController _forwardDirection]
// Type encoding: q16@0:8
// Implementation: 0x10632fe40

// -[SCOperaViewController _enableFadeTransitionForDismissalAnimation:fadingViews:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10632fe70

// -[SCOperaViewController _disableFadeTransitionForDismissalAnimation]
// Type encoding: v16@0:8
// Implementation: 0x10632ff00

// -[SCOperaViewController attachmentInteractionController:shouldBeginWithSwipeDirection:gestureRecognizer:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x10632ff10

// -[SCOperaViewController attachmentInteractionControllerDidDismissAttachment:swipeDirection:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x106330068

// -[SCOperaViewController attachmentInteractionController:didUpdateSwipeAngle:withVerticalTranslation:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x1063300cc

// -[SCOperaViewController attachmentInteractionController:didUpdateAttachmentViewAnchorPointY:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106330218

// -[SCOperaViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x106330314

// -[SCOperaViewController deviceOrientationDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106330320

// -[SCOperaViewController pageIsFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063303dc

// -[SCOperaViewController pageIsPartiallyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x106330488

// -[SCOperaViewController relativePositionForPageId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106330570

// -[SCOperaViewController safeInsetsForPage]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x106330914

// -[SCOperaViewController setPausedForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x106330924

// -[SCOperaViewController setImageForBackdrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633095c

// -[SCOperaViewController isPaused]
// Type encoding: B16@0:8
// Implementation: 0x106330960

// -[SCOperaViewController pageIsAttachmentPage:]
// Type encoding: B24@0:8@16
// Implementation: 0x10633097c

// -[SCOperaViewController navigationIntentManagerNavigateImmediatelyToNextPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063309f0

// -[SCOperaViewController didReceiveAudioSessionActivatedSignal]
// Type encoding: v16@0:8
// Implementation: 0x1063309fc

// -[SCOperaViewController didReceiveAudioSessionDeactivatedSignal]
// Type encoding: v16@0:8
// Implementation: 0x106330b2c

// -[SCOperaViewController _shouldPauseForAudioInterruption]
// Type encoding: B16@0:8
// Implementation: 0x106330b9c

// -[SCOperaViewController audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x106330c04

// -[SCOperaViewController audioSession:didEndInterruption:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106330cd4

// -[SCOperaViewController audioSessionRouteDidChangeReasonNewDeviceAvailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106330e34

// -[SCOperaViewController audioSessionRouteDidChangeReasonOldDeviceUnavailable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106330e3c

// -[SCOperaViewController audioSession:didChangeVolume:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106330ec8

// -[SCOperaViewController _applyWorkaroundForAudioSessionRouteConnectedOrDisconneted:connected:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106330ed8

// -[SCOperaViewController _addFloatingLayer:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106330f38

// -[SCOperaViewController _updateFloatingLayer:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063310e4

// -[SCOperaViewController _clearUpPreviousDummyPageViews]
// Type encoding: v16@0:8
// Implementation: 0x1063313b0

// -[SCOperaViewController _dummyPageViewControllerForViewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106331524

// -[SCOperaViewController zoomIn:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10633160c

// -[SCOperaViewController hideChrome:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063316d0

// -[SCOperaViewController setHeightWithHeight:animationDuration:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x106331738

// -[SCOperaViewController setOperaSizeWithSize:coordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x106331858

// -[SCOperaViewController navigation]
// Type encoding: @16@0:8
// Implementation: 0x1063318d4

// -[SCOperaViewController viewParamsProviding]
// Type encoding: @16@0:8
// Implementation: 0x1063318d8

// -[SCOperaViewController viewPlayManaging]
// Type encoding: @16@0:8
// Implementation: 0x1063318dc

// -[SCOperaViewController viewControllerTransitionAnimatorDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1063318e0

// -[SCOperaViewController viewDismissing]
// Type encoding: @16@0:8
// Implementation: 0x1063318e4

// -[SCOperaViewController shareableMediaItemsProviding]
// Type encoding: @16@0:8
// Implementation: 0x1063318e8

// -[SCOperaViewController zooming]
// Type encoding: @16@0:8
// Implementation: 0x1063318ec

// -[SCOperaViewController viewModelConnectionsCallbackControlling]
// Type encoding: @16@0:8
// Implementation: 0x1063318f0

// -[SCOperaViewController modalPresentation]
// Type encoding: @16@0:8
// Implementation: 0x1063318f4

// -[SCOperaViewController eventAnnouncing]
// Type encoding: @16@0:8
// Implementation: 0x1063318f8

// -[SCOperaViewController legacySessionStateContaining]
// Type encoding: @16@0:8
// Implementation: 0x106331928

// -[SCOperaViewController interactionStateProviding]
// Type encoding: @16@0:8
// Implementation: 0x106331958

// -[SCOperaViewController pageNameLogging]
// Type encoding: @16@0:8
// Implementation: 0x10633195c

// -[SCOperaViewController transitionAnimating]
// Type encoding: @16@0:8
// Implementation: 0x106331960

// -[SCOperaViewController resizing]
// Type encoding: @16@0:8
// Implementation: 0x106331990

// -[SCOperaViewController uiViewControllerProviding]
// Type encoding: @16@0:8
// Implementation: 0x106331994

// -[SCOperaViewController customVolumeControlling]
// Type encoding: @16@0:8
// Implementation: 0x106331998

// -[SCOperaViewController uiViewController]
// Type encoding: @16@0:8
// Implementation: 0x1063319c8

// -[SCOperaViewController dataSaverModeController]
// Type encoding: @16@0:8
// Implementation: 0x1063319cc

// -[SCOperaViewController operaAnalyticsEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1063319d0

// -[SCOperaViewController analyticsEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x106331a40

// -[SCOperaViewController pageViewModelManipulator]
// Type encoding: @16@0:8
// Implementation: 0x106331ab0

// -[SCOperaViewController dismissPageViewModel]
// Type encoding: @16@0:8
// Implementation: 0x106331ab4

// -[SCOperaViewController clearPage:withReason:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106331ac0

// -[SCOperaViewController isDataSaverModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106331acc

// -[SCOperaViewController enableDataSaverModeWithOption:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106331b04

// -[SCOperaViewController disableDataSaverMode]
// Type encoding: v16@0:8
// Implementation: 0x106331b08

// -[SCOperaViewController setOption:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106331b38

// -[SCOperaViewController currentDataSaverModeStrategy]
// Type encoding: Q16@0:8
// Implementation: 0x106331bf4

// -[SCOperaViewController _updateOperaDataSaverModeStrategy:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106331c04

// -[SCOperaViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x106331c14

// -[SCOperaViewController navigateToNextGroupAnimated:interaction:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106331c58

// -[SCOperaViewController navigateToPreviousGroupAnimated:interaction:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106331c94

// -[SCOperaViewController navigateToParentAnimated:interaction:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106331cd0

// -[SCOperaViewController navigateToAttachmentAnimated:interaction:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106331d0c

// -[SCOperaViewController navigateToAttachmentAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106331d48

// -[SCOperaViewController resetCurrentScrolling]
// Type encoding: v16@0:8
// Implementation: 0x106331d5c

// -[SCOperaViewController navigateToNextPageWithInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106331d6c

// -[SCOperaViewController navigateToPreviousPageWithInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x106331e1c

// -[SCOperaViewController startInteractiveTransitionInDirection:velocity:touchPoint:]
// Type encoding: @56@0:8Q16{CGPoint=dd}24{CGPoint=dd}40
// Implementation: 0x106331ec8

// -[SCOperaViewController requestCallbackWhenViewModelConnectionIsStable:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106331ed8

// -[SCOperaViewController _invokeCallbacksImmediately]
// Type encoding: v16@0:8
// Implementation: 0x10633203c

// -[SCOperaViewController modalPresentationDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106332160

// -[SCOperaViewController modalDismissalDidEnd]
// Type encoding: v16@0:8
// Implementation: 0x106332200

// -[SCOperaViewController viewWillTransitionToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x1063322a0

// -[SCOperaViewController _transitionedToSize:withTransitionCoordinator:]
// Type encoding: v40@0:8{CGSize=dd}16@32
// Implementation: 0x106332344

// -[SCOperaViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x106332584

// -[SCOperaViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x106332684

// -[SCOperaViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x106332690

// -[SCOperaViewController jiraMetaInfo]
// Type encoding: @16@0:8
// Implementation: 0x1063326f4

// -[SCOperaViewController pageViewControllerDidLoadView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063326fc

// -[SCOperaViewController pageViewControllerDidTeardown:]
// Type encoding: v24@0:8@16
// Implementation: 0x106332774

// -[SCOperaViewController pageViewControllerWillDealloc:]
// Type encoding: v24@0:8@16
// Implementation: 0x106332784

// -[SCOperaViewController pageViewController:notifyLayerViewController:neighborViewDidFullyAppearWithCurrentViewRelativePosition:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x106332794

// -[SCOperaViewController pageViewControllerDidCancelTransition:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063327a0

// -[SCOperaViewController selfOrWeakProxyToSelf]
// Type encoding: @16@0:8
// Implementation: 0x1063327a8

// -[SCOperaViewController _startIgnoringSIGPIPE:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063327e0

// -[SCOperaViewController _stopIgnoringSIGPIPE:]
// Type encoding: v24@0:8@16
// Implementation: 0x106332814

// -[SCOperaViewController _pauseExternallyLegacy:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633284c

// -[SCOperaViewController _resumeExternallyLegacy]
// Type encoding: v16@0:8
// Implementation: 0x1063328bc

// -[SCOperaViewController _onTapBackward]
// Type encoding: v16@0:8
// Implementation: 0x106332a8c

// -[SCOperaViewController _onTapToAdvance]
// Type encoding: v16@0:8
// Implementation: 0x106332a90

// -[SCOperaViewController _tapToAdvanceDelaySecForCurrentPage]
// Type encoding: d16@0:8
// Implementation: 0x106332b44

// -[SCOperaViewController _fullyVisiblePageForTargetContentOffset]
// Type encoding: @16@0:8
// Implementation: 0x106332cbc

// -[SCOperaViewController _validateOperaDependencies]
// Type encoding: v16@0:8
// Implementation: 0x106333088

// -[SCOperaViewController _restoreNativeVolumeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10633312c

// -[SCOperaViewController _shouldKeepMuteOverrideOnDismiss]
// Type encoding: B16@0:8
// Implementation: 0x1063331bc

// -[SCOperaViewController _addSnapchatSessions]
// Type encoding: v16@0:8
// Implementation: 0x106333248

// -[SCOperaViewController _setNeedsUpdatePageVCsBasedOnViewModels]
// Type encoding: v16@0:8
// Implementation: 0x1063333d8

// -[SCOperaViewController _viewDidAppearImpl]
// Type encoding: v16@0:8
// Implementation: 0x106333418

// -[SCOperaViewController _validateOperaBoundsOnViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x106333810

// -[SCOperaViewController _callViewDidAppearImplIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063338c0

// -[SCOperaViewController traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106333a00

// -[SCOperaViewController _updateStatusBarAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106333a4c

// -[SCOperaViewController _pauseIfAppIsInBackground]
// Type encoding: v16@0:8
// Implementation: 0x106333bd8

// -[SCOperaViewController _applyPausedUIIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106333c7c

// -[SCOperaViewController _showPauseOverlays]
// Type encoding: v16@0:8
// Implementation: 0x106333cec

// -[SCOperaViewController _hidePauseOverlays]
// Type encoding: v16@0:8
// Implementation: 0x106334058

// -[SCOperaViewController _isPaused]
// Type encoding: B16@0:8
// Implementation: 0x106334088

// -[SCOperaViewController _overridePlaybackToLastPositionForResume]
// Type encoding: v16@0:8
// Implementation: 0x1063340bc

// -[SCOperaViewController _resumeIfNotInBackground]
// Type encoding: v16@0:8
// Implementation: 0x106334100

// -[SCOperaViewController _pageSizePlusMarginForCurrentViewBounds]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106334134

// -[SCOperaViewController _operaScrollViewContentSizeForPageSize:]
// Type encoding: {CGSize=dd}32@0:8{CGSize=dd}16
// Implementation: 0x1063341b4

// -[SCOperaViewController _trackPageTransitionIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063341c4

// -[SCOperaViewController _updateLastInteractionWithType:params:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10633426c

// -[SCOperaViewController _setupPauseController]
// Type encoding: v16@0:8
// Implementation: 0x106334444

// -[SCOperaViewController _startOptimisticResumeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106334750

// -[SCOperaViewController _revertOptimisticResumeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106334900

// -[SCOperaViewController _setupPresentedViewControllerPeriodicObserving]
// Type encoding: v16@0:8
// Implementation: 0x106334990

// -[SCOperaViewController _presentedViewControllerShouldPauseOperaVC]
// Type encoding: B16@0:8
// Implementation: 0x106334bdc

// -[SCOperaViewController baseLayerTypeForRelativePosition:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x106334c98

// -[SCOperaViewController isLongFormShowAtRelativePosition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106334d9c

// -[SCOperaViewController isAdAtRelativePosition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106334e30

// -[SCOperaViewController _guessLayerTypeWhenBaseLayerTypeIsMissing:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106334e94

// -[SCOperaViewController _viewModelForRelativePositionOrCurrentViewModel:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106335060

// -[SCOperaViewController _initPlayerPreloadConfig]
// Type encoding: v16@0:8
// Implementation: 0x10633509c

// -[SCOperaViewController _addDeallocMarkerViewForUITests]
// Type encoding: v16@0:8
// Implementation: 0x106335140

// -[SCOperaViewController lastInteraction]
// Type encoding: @16@0:8
// Implementation: 0x10633522c

// -[SCOperaViewController operaDependencies]
// Type encoding: @16@0:8
// Implementation: 0x10633523c

// -[SCOperaViewController configuration]
// Type encoding: @16@0:8
// Implementation: 0x10633524c

// -[SCOperaViewController disableSwipeDownToDismiss]
// Type encoding: B16@0:8
// Implementation: 0x10633525c

// -[SCOperaViewController setDisableSwipeDownToDismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633526c

// -[SCOperaViewController operaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10633527c

// -[SCOperaViewController eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x10633528c

// -[SCOperaViewController eventPublisher]
// Type encoding: @16@0:8
// Implementation: 0x10633529c

// -[SCOperaViewController shouldResizeWhenTransitionedToSize]
// Type encoding: B16@0:8
// Implementation: 0x1063352ac

// -[SCOperaViewController setShouldResizeWhenTransitionedToSize:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063352bc

// -[SCOperaViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1063352cc

@end
