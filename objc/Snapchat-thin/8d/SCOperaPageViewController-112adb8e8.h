// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPageViewController
// Superclass: UIViewController
// Address: 0x112adb8e8

@interface SCOperaPageViewController

// Property: page; attributes: T@"SCOperaPage",R,N,V_page
// Property: viewModel; attributes: T@"SCOperaPageViewModel",R,N,V_viewModel
// Property: configuration; attributes: T@"SCOperaConfiguration",R,N,V_configuration
// Property: operaDependencies; attributes: T@"SCOperaDependencies",R,N,V_operaDependencies
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",R,N,V_eventAnnouncer
// Property: eventPublisher; attributes: T@"SCOperaEventPublisher",R,N,V_eventPublisher
// Property: delegate; attributes: T@"<SCOperaPageViewControllerDelegate>",R,W,N,V_delegate
// Property: pageableViewControllerDelegate; attributes: T@"<SCOperaPageableViewControllerDelegate>",W,N,V_pageableViewControllerDelegate
// Property: layerTypeToFloatingLayerVCs; attributes: T@"NSDictionary",W,N,V_layerTypeToFloatingLayerVCs
// Property: didSendCloseViewEvent; attributes: TB,N,V_didSendCloseViewEvent
// Property: shouldNotReloadLayers; attributes: TB,N,V_shouldNotReloadLayers
// Property: containerView; attributes: T@"UIView",R,N,V_containerView
// Property: attachmentBackgroundView; attributes: T@"UIView",R,N
// Property: hasRoundedCornersForAttachment; attributes: TB,N,V_hasRoundedCornersForAttachment
// Property: overridePausedState; attributes: TB,R,N,V_overridePausedState
// Property: operaScrollViewOffsetForPageView; attributes: T{CGPoint=dd},N,V_operaScrollViewOffsetForPageView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPageViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:legacySessionStateContainer:eventAnnouncer:eventPublisher:layerViewControllerManager:viewModel:delegate:trackerService:playbackSessionIdProviding:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x106338020

// -[SCOperaPageViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106338774

// -[SCOperaPageViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x1063387fc

// -[SCOperaPageViewController _createPageLayoutGuides]
// Type encoding: v16@0:8
// Implementation: 0x106338850

// -[SCOperaPageViewController _updateFullPageLayoutGuideIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106338a20

// -[SCOperaPageViewController _updateFullPageLayoutWithSafeAreaGuideIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106338a54

// -[SCOperaPageViewController _updateFullPageLayoutWithoutSafeAreaGuideIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106338cbc

// -[SCOperaPageViewController viewDidLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x106338e70

// -[SCOperaPageViewController _updateBackdropViewOnViewLayout:]
// Type encoding: v80@0:8{SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}16
// Implementation: 0x1063390c8

// -[SCOperaPageViewController _updateMediaFrameWithResponsiveLayout:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8^{SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}16
// Implementation: 0x10633926c

// -[SCOperaPageViewController _setMediaFrameWithResponsiveLayout:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}24@0:8^{SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}16
// Implementation: 0x106339270

// -[SCOperaPageViewController _computeAttachmentContainerFrameWithMediaFrame:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x1063395b0

// -[SCOperaPageViewController _baseBoundsExcludingPresentedVCSize]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106339638

// -[SCOperaPageViewController _baseBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x1063396f8

// -[SCOperaPageViewController _baseBoundsForBackdrop]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106339728

// -[SCOperaPageViewController _responsiveLayoutRulesForPage]
// Type encoding: @16@0:8
// Implementation: 0x1063397f8

// -[SCOperaPageViewController _responsiveLayoutConfigForBaseBounds:]
// Type encoding: {SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106339880

// -[SCOperaPageViewController _responsiveLayoutTypeSupported:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106339b4c

// -[SCOperaPageViewController _defaultResponsiveLayoutConfigForBaseBounds:layoutRules:]
// Type encoding: {SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x106339cbc

// -[SCOperaPageViewController _applyResponsiveLayoutConfigForLayerViewControllers:]
// Type encoding: v80@0:8{SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}16
// Implementation: 0x106339e58

// -[SCOperaPageViewController _resizeSwipeUpViewLayerWithRespectToContentHeight:]
// Type encoding: v24@0:8d16
// Implementation: 0x106339fd0

// -[SCOperaPageViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10633a240

// -[SCOperaPageViewController _loadScrollView]
// Type encoding: v16@0:8
// Implementation: 0x10633a3a8

// -[SCOperaPageViewController _loadContainerView]
// Type encoding: v16@0:8
// Implementation: 0x10633a540

// -[SCOperaPageViewController _updateCornerOverlayViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10633a708

// -[SCOperaPageViewController updatePageLayersSnapshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633a818

// -[SCOperaPageViewController logPageProperties]
// Type encoding: v16@0:8
// Implementation: 0x10633a96c

// -[SCOperaPageViewController _updateViewWithHorizontalPageOffset:isCurrentPage:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10633a970

// -[SCOperaPageViewController _scaleForHorizontalTransition:]
// Type encoding: d24@0:8d16
// Implementation: 0x10633a9c8

// -[SCOperaPageViewController _alphaForHorizontalTransition:]
// Type encoding: d24@0:8d16
// Implementation: 0x10633aa04

// -[SCOperaPageViewController setHasRoundedCornersForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633aa1c

// -[SCOperaPageViewController setContainerViewYOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10633ab44

// -[SCOperaPageViewController setContainerViewXOffset:]
// Type encoding: v24@0:8d16
// Implementation: 0x10633aca8

// -[SCOperaPageViewController _isAttachmentBackgroundTransparent]
// Type encoding: B16@0:8
// Implementation: 0x10633ae00

// -[SCOperaPageViewController attachmentBackgroundView]
// Type encoding: @16@0:8
// Implementation: 0x10633af04

// -[SCOperaPageViewController _loadPage]
// Type encoding: v16@0:8
// Implementation: 0x10633afe4

// -[SCOperaPageViewController _setupBackdropView]
// Type encoding: v16@0:8
// Implementation: 0x10633b22c

// -[SCOperaPageViewController _activatePageGestureRecognizers:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633b3b0

// -[SCOperaPageViewController _reactivateGestureRecognizers]
// Type encoding: v16@0:8
// Implementation: 0x10633b5ec

// -[SCOperaPageViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633b708

// -[SCOperaPageViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633b768

// -[SCOperaPageViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633b7d0

// -[SCOperaPageViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633b830

// -[SCOperaPageViewController beginAppearanceTransition:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10633b890

// -[SCOperaPageViewController endAppearanceTransition]
// Type encoding: v16@0:8
// Implementation: 0x10633b904

// -[SCOperaPageViewController willMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633b958

// -[SCOperaPageViewController didMoveToParentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633b9d4

// -[SCOperaPageViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x10633ba50

// -[SCOperaPageViewController viewWillBeginTransitionIn:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633bbfc

// -[SCOperaPageViewController viewDidCancelTransitionIn]
// Type encoding: v16@0:8
// Implementation: 0x10633bd28

// -[SCOperaPageViewController viewWillBeginTransitionOut]
// Type encoding: v16@0:8
// Implementation: 0x10633be40

// -[SCOperaPageViewController viewDidCancelTransitionOut:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633bf30

// -[SCOperaPageViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x10633c060

// -[SCOperaPageViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10633c26c

// -[SCOperaPageViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10633c38c

// -[SCOperaPageViewController viewWillFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10633c484

// -[SCOperaPageViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x10633c5e8

// -[SCOperaPageViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x10633c8ac

// -[SCOperaPageViewController setPausedForAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633cac8

// -[SCOperaPageViewController isPausedForAttachment]
// Type encoding: B16@0:8
// Implementation: 0x10633cc8c

// -[SCOperaPageViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x10633cc9c

// -[SCOperaPageViewController start]
// Type encoding: v16@0:8
// Implementation: 0x10633ce7c

// -[SCOperaPageViewController stop]
// Type encoding: v16@0:8
// Implementation: 0x10633cf6c

// -[SCOperaPageViewController overridePlaybackToLastPositionForResume]
// Type encoding: v16@0:8
// Implementation: 0x10633d074

// -[SCOperaPageViewController mediaIsBeingPreparedForDisplay]
// Type encoding: B16@0:8
// Implementation: 0x10633d188

// -[SCOperaPageViewController setVolume:]
// Type encoding: v24@0:8d16
// Implementation: 0x10633d2dc

// -[SCOperaPageViewController setMuted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10633d2ec

// -[SCOperaPageViewController setImageForBackdrop:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633d2fc

// -[SCOperaPageViewController isPaused]
// Type encoding: B16@0:8
// Implementation: 0x10633d3b8

// -[SCOperaPageViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x10633d484

// -[SCOperaPageViewController progressUpdateTracker]
// Type encoding: @16@0:8
// Implementation: 0x10633d6c8

// -[SCOperaPageViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x10633d6f8

// -[SCOperaPageViewController _enablePageabilityOverwriteForRelativePosition:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10633d8bc

// -[SCOperaPageViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:]
// Type encoding: q48@0:8Q16q24q32@40
// Implementation: 0x10633da08

// -[SCOperaPageViewController _pageDisablesPagingForPosition:gestureRecognizer:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x10633dc6c

// -[SCOperaPageViewController _anyOfLayerViewControllersDisablePagingForPosition:navigationStyle:swipeDirection:gestureRecognizer:]
// Type encoding: B48@0:8Q16q24q32@40
// Implementation: 0x10633deb4

// -[SCOperaPageViewController _anyOfLayerViewControllersDisablePagingForPosition:gestureRecognizer:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x10633e0d8

// -[SCOperaPageViewController canHandleRoundCorner]
// Type encoding: B16@0:8
// Implementation: 0x10633e2c4

// -[SCOperaPageViewController didUpdateBottomPageViewProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633e3c8

// -[SCOperaPageViewController _announceDidFullyAppearEventIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10633e4d8

// -[SCOperaPageViewController _pageLayersSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x10633eca4

// -[SCOperaPageViewController _applyTransformForOffset:relativePosition:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10633ecd4

// -[SCOperaPageViewController _viewDidFullyAppearWithLayerVCs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10633efc4

// -[SCOperaPageViewController _verifyLayerVCViewsVisibleWhenViewFullyAppeared]
// Type encoding: B16@0:8
// Implementation: 0x10633f440

// -[SCOperaPageViewController loadingIndicatorController:didStartLoadingOnPageWithId:fromLayer:reason:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x10633f73c

// -[SCOperaPageViewController loadingIndicatorController:didFinishLoadingOnPageWithId:fromLayer:reason:]
// Type encoding: v48@0:8@16@24Q32q40
// Implementation: 0x10633f7c4

// -[SCOperaPageViewController loadingIndicatorController:didStartPlayingOnPageWithId:fromLayer:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10633f8b4

// -[SCOperaPageViewController maskableFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10633f920

// -[SCOperaPageViewController mediaViewFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x10633fa0c

// -[SCOperaPageViewController mediaHeightToWidthAspectRatio]
// Type encoding: d16@0:8
// Implementation: 0x10633fd58

// -[SCOperaPageViewController _shrinkMediaContainerLayersWithScale:duration:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x10633fecc

// -[SCOperaPageViewController isOverlay]
// Type encoding: B16@0:8
// Implementation: 0x1063400dc

// -[SCOperaPageViewController _didLongPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063400e4

// -[SCOperaPageViewController operaPageGestureRecognizers:shouldRecognizeGesture:recognizer:]
// Type encoding: B40@0:8@16q24@32
// Implementation: 0x106340470

// -[SCOperaPageViewController operaPageGestureRecognizers:didBeginGestureWithType:recognizer:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1063406c0

// -[SCOperaPageViewController operaPageGestureRecognizers:didChangeStateWithType:recognizer:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1063407a4

// -[SCOperaPageViewController operaPageGestureRecognizers:didEndGestureWithType:recognizer:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106340910

// -[SCOperaPageViewController operaPageGestureRecognizers:didCancellGestureWithType:recognizer:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1063409f4

// -[SCOperaPageViewController pageableViewControllerVolumeHelperDidChangeVolume:]
// Type encoding: v24@0:8@16
// Implementation: 0x106340aa8

// -[SCOperaPageViewController displayMediaLogIfAvailable]
// Type encoding: v16@0:8
// Implementation: 0x106340bb0

// -[SCOperaPageViewController _triggerViewDidFullyAppearAfterBlockingExperienceIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106340bb4

// -[SCOperaPageViewController _reloadLayerViewControllers]
// Type encoding: v16@0:8
// Implementation: 0x106340c4c

// -[SCOperaPageViewController _buildLayerVCsWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x106340fd0

// -[SCOperaPageViewController _createLayerViewControllerForLayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x106341600

// -[SCOperaPageViewController _customSetupForLayerViewControllerIfNeeded:layer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106341634

// -[SCOperaPageViewController _shouldSkipAddingLayerViewControllerForLayer:]
// Type encoding: B24@0:8@16
// Implementation: 0x1063418f8

// -[SCOperaPageViewController _setupNewChildViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063419d8

// -[SCOperaPageViewController _setupLayoutForLayerViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106341b34

// -[SCOperaPageViewController _layoutGuideForContainerOption:]
// Type encoding: @24@0:8q16
// Implementation: 0x106341c38

// -[SCOperaPageViewController _clearLayerViewControllers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106341c78

// -[SCOperaPageViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x106341f8c

// -[SCOperaPageViewController _loadIndicatorParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634259c

// -[SCOperaPageViewController _layerVCForLayer:inLayerVCs:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1063429b0

// -[SCOperaPageViewController pageIsFullyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x106342b44

// -[SCOperaPageViewController pageIsPartiallyVisible:]
// Type encoding: B24@0:8@16
// Implementation: 0x106342bb8

// -[SCOperaPageViewController relativePositionForPageId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x106342c2c

// -[SCOperaPageViewController safeInsetsForPage]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x106342ca0

// -[SCOperaPageViewController currentDataSaverModeStrategy]
// Type encoding: Q16@0:8
// Implementation: 0x106342cb8

// -[SCOperaPageViewController preloadVideoPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106342cf4

// -[SCOperaPageViewController releaseVideoPlayer]
// Type encoding: v16@0:8
// Implementation: 0x106342d9c

// -[SCOperaPageViewController rotateBasedOnOrientation]
// Type encoding: v16@0:8
// Implementation: 0x106342e44

// -[SCOperaPageViewController autoAdvanceTimerDidFire]
// Type encoding: v16@0:8
// Implementation: 0x106342f34

// -[SCOperaPageViewController shareableMedias]
// Type encoding: @16@0:8
// Implementation: 0x10634304c

// -[SCOperaPageViewController shareableMediaSnapshotsWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x10634322c

// -[SCOperaPageViewController actionBarContentViewForConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x106343420

// -[SCOperaPageViewController shouldHideActionBar]
// Type encoding: B16@0:8
// Implementation: 0x1063434a8

// -[SCOperaPageViewController _isAttachment]
// Type encoding: B16@0:8
// Implementation: 0x1063435bc

// -[SCOperaPageViewController _isExtendedAttachment]
// Type encoding: B16@0:8
// Implementation: 0x106343664

// -[SCOperaPageViewController _updateActionBarContentViews]
// Type encoding: v16@0:8
// Implementation: 0x106343814

// -[SCOperaPageViewController _actionBarContentViewsForLayerVCsForConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063438d4

// -[SCOperaPageViewController _enumerateActionBarContentProviders:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1063439e8

// -[SCOperaPageViewController blockingViewWasHidden:]
// Type encoding: v24@0:8@16
// Implementation: 0x106343b50

// -[SCOperaPageViewController blockingViewDidStartHiding:]
// Type encoding: v24@0:8@16
// Implementation: 0x106343c1c

// -[SCOperaPageViewController blockingLayerIsBlockingOtherLayersFromDisplaying]
// Type encoding: B16@0:8
// Implementation: 0x106343ca4

// -[SCOperaPageViewController blockingLayerIsBlocking]
// Type encoding: B16@0:8
// Implementation: 0x106343dd8

// -[SCOperaPageViewController _topMostBlockingLayerVC]
// Type encoding: @16@0:8
// Implementation: 0x106343ee0

// -[SCOperaPageViewController didTryPagingWhenPagingDisabled:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106343ff8

// -[SCOperaPageViewController viewForZoomingInScrollView:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063442b4

// -[SCOperaPageViewController scrollViewDidZoom:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063442e4

// -[SCOperaPageViewController scrollViewDidEndZooming:withView:atScale:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x106344524

// -[SCOperaPageViewController scrollViewWillBeginZooming:withView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106344714

// -[SCOperaPageViewController _toggleVisibilityOfMediaContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106344734

// -[SCOperaPageViewController didUpdateViewProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x106344a14

// -[SCOperaPageViewController _updatePageSafeInsets:]
// Type encoding: v20@0:8B16
// Implementation: 0x106344e8c

// -[SCOperaPageViewController pageDidScrollToVerticalOffset:relativePosition:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x10634504c

// -[SCOperaPageViewController pageDidScrollToHorizontalOffset:isCurrentPage:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10634517c

// -[SCOperaPageViewController isLongPressGestureRecognized]
// Type encoding: B16@0:8
// Implementation: 0x1063453e0

// -[SCOperaPageViewController timeSinceMostRecentPageOpenEvent]
// Type encoding: d16@0:8
// Implementation: 0x106345430

// -[SCOperaPageViewController _shouldSetupAutoAdvanceTimer]
// Type encoding: B16@0:8
// Implementation: 0x1063454a4

// -[SCOperaPageViewController _pauseAutoAdvanceTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063454f8

// -[SCOperaPageViewController _resumeAutoAdvanceTimer]
// Type encoding: v16@0:8
// Implementation: 0x106345564

// -[SCOperaPageViewController restartTimer]
// Type encoding: v16@0:8
// Implementation: 0x1063455c0

// -[SCOperaPageViewController _setupAutoAdvanceTimerIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1063455f8

// -[SCOperaPageViewController _createAutoAdvanceTimerWithInterval:]
// Type encoding: v24@0:8d16
// Implementation: 0x106345684

// -[SCOperaPageViewController _cleanupAutoAdvanceTimer]
// Type encoding: v16@0:8
// Implementation: 0x106345718

// -[SCOperaPageViewController _cleanupProgressUpdatesObserver]
// Type encoding: v16@0:8
// Implementation: 0x10634574c

// -[SCOperaPageViewController updatePropertiesWithLooping:]
// Type encoding: v20@0:8B16
// Implementation: 0x106345780

// -[SCOperaPageViewController updatePropertiesWithViewerIsDismissing:]
// Type encoding: v20@0:8B16
// Implementation: 0x1063458ac

// -[SCOperaPageViewController _updatePropertiesWithPageDidShrink:]
// Type encoding: v20@0:8B16
// Implementation: 0x106345998

// -[SCOperaPageViewController _resetZoomToMinimumIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10634614c

// -[SCOperaPageViewController _currentTimeStamp]
// Type encoding: d16@0:8
// Implementation: 0x106346180

// -[SCOperaPageViewController _layersContainerView]
// Type encoding: @16@0:8
// Implementation: 0x106346184

// -[SCOperaPageViewController _pageGestureContainerView]
// Type encoding: @16@0:8
// Implementation: 0x1063461f0

// -[SCOperaPageViewController _updateFloatingLayersForCurrentDisplayingPage]
// Type encoding: v16@0:8
// Implementation: 0x106346244

// -[SCOperaPageViewController _updateFloatingLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106346358

// -[SCOperaPageViewController _shouldUpdateActionMenuStyleVersion]
// Type encoding: B16@0:8
// Implementation: 0x1063466e0

// -[SCOperaPageViewController _shouldSetPinchGestureTargetForLayer:viewController:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1063467b8

// -[SCOperaPageViewController _layerVCsOnPage]
// Type encoding: @16@0:8
// Implementation: 0x106346894

// -[SCOperaPageViewController _validateFloatingLayerVCs]
// Type encoding: B16@0:8
// Implementation: 0x106346970

// -[SCOperaPageViewController _notifyLayerOfViewWillFullyAppearIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106346a10

// -[SCOperaPageViewController _notifyLayerOfViewDidFullyAppearIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106346a70

// -[SCOperaPageViewController _showBlur]
// Type encoding: v16@0:8
// Implementation: 0x106346ad0

// -[SCOperaPageViewController _hideBlur]
// Type encoding: v16@0:8
// Implementation: 0x106346c7c

// -[SCOperaPageViewController hideChrome:]
// Type encoding: v20@0:8B16
// Implementation: 0x106346c8c

// -[SCOperaPageViewController overridePauseStateToPause]
// Type encoding: v16@0:8
// Implementation: 0x10634716c

// -[SCOperaPageViewController overridePauseStateToResume]
// Type encoding: v16@0:8
// Implementation: 0x1063471d4

// -[SCOperaPageViewController seekTo:]
// Type encoding: v24@0:8d16
// Implementation: 0x10634723c

// -[SCOperaPageViewController _setupProgressUpdateTracker]
// Type encoding: v16@0:8
// Implementation: 0x106347360

// -[SCOperaPageViewController _cleanupProgressUpdateTracking]
// Type encoding: v16@0:8
// Implementation: 0x1063473d0

// -[SCOperaPageViewController _setPlaybackAnalyticsTrackerForLayers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106347460

// -[SCOperaPageViewController _clearPlaybackAnalyticsTrackerForAllLayers]
// Type encoding: v16@0:8
// Implementation: 0x1063475a0

// -[SCOperaPageViewController _setupTrackableLayerWithLayerVCs:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063476b8

// -[SCOperaPageViewController _setupEventPublisherWithLayerVCs:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063478d8

// -[SCOperaPageViewController zoomScrollView:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x106347a44

// -[SCOperaPageViewController _setupScrollViewForZoomIfNeededWithPercent:]
// Type encoding: v24@0:8d16
// Implementation: 0x106347a88

// -[SCOperaPageViewController _zoomScrollViewWithPercent:animated:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x106347b7c

// -[SCOperaPageViewController _zoomToActionMenuV2WithPercent:animated:completion:]
// Type encoding: v36@0:8d16B24@?28
// Implementation: 0x1063482c4

// -[SCOperaPageViewController _mediaContentScaleWithPercentInActionMenu:]
// Type encoding: d24@0:8d16
// Implementation: 0x106348824

// -[SCOperaPageViewController _isRotationMediaContent]
// Type encoding: B16@0:8
// Implementation: 0x106348944

// -[SCOperaPageViewController _removeActionMenuMaskViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1063489b8

// -[SCOperaPageViewController _attachActionMenuMaskViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106348a30

// -[SCOperaPageViewController _actionMenuOptionsNumber]
// Type encoding: q16@0:8
// Implementation: 0x106348b80

// -[SCOperaPageViewController _actionMenuContentSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x106348ce4

// -[SCOperaPageViewController visiblityInView:]
// Type encoding: d24@0:8@16
// Implementation: 0x106348dbc

// -[SCOperaPageViewController sendViewCloseEvent]
// Type encoding: v16@0:8
// Implementation: 0x106348eb8

// -[SCOperaPageViewController fromView:convertPointToContainerView:]
// Type encoding: {CGPoint=dd}40@0:8@16{CGPoint=dd}24
// Implementation: 0x106348f5c

// -[SCOperaPageViewController fromView:edgeInsetsForPointToPageViewBounds:]
// Type encoding: {UIEdgeInsets=dddd}40@0:8@16{CGPoint=dd}24
// Implementation: 0x106348ff0

// -[SCOperaPageViewController _toggleCriticalMode]
// Type encoding: v16@0:8
// Implementation: 0x1063490fc

// -[SCOperaPageViewController _addCriticalModeContext]
// Type encoding: v16@0:8
// Implementation: 0x106349190

// -[SCOperaPageViewController _removeCriticalModeContext]
// Type encoding: v16@0:8
// Implementation: 0x106349278

// -[SCOperaPageViewController movingViewsForFadeTransition]
// Type encoding: @16@0:8
// Implementation: 0x106349360

// -[SCOperaPageViewController fadingViewsForFadeTransition]
// Type encoding: @16@0:8
// Implementation: 0x1063494e0

// -[SCOperaPageViewController _displayContentBlockingMessageIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106349660

// -[SCOperaPageViewController _presentedVCSizeRequiresResize:]
// Type encoding: B24@0:8d16
// Implementation: 0x1063497b4

// -[SCOperaPageViewController resizeMedia:animationDuration:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x106349834

// -[SCOperaPageViewController _resizeLayoutConfigForBaseBounds:]
// Type encoding: {SCOperaResponsiveLayoutConfig=q{CGRect={CGPoint=dd}{CGSize=dd}}B@B}48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x106349ae8

// -[SCOperaPageViewController additionalS2RDebugOutput]
// Type encoding: @16@0:8
// Implementation: 0x106349d00

// -[SCOperaPageViewController logShakeToReportState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106349d88

// -[SCOperaPageViewController responsiveLayoutDebugInfo]
// Type encoding: @16@0:8
// Implementation: 0x10634a310

// -[SCOperaPageViewController layerViewControllersInfoForCurrentPage]
// Type encoding: @16@0:8
// Implementation: 0x10634a4f4

// -[SCOperaPageViewController currentPlayerStatus]
// Type encoding: @16@0:8
// Implementation: 0x10634a72c

// -[SCOperaPageViewController page]
// Type encoding: @16@0:8
// Implementation: 0x10634a898

// -[SCOperaPageViewController viewModel]
// Type encoding: @16@0:8
// Implementation: 0x10634a8a8

// -[SCOperaPageViewController configuration]
// Type encoding: @16@0:8
// Implementation: 0x10634a8b8

// -[SCOperaPageViewController operaDependencies]
// Type encoding: @16@0:8
// Implementation: 0x10634a8c8

// -[SCOperaPageViewController eventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x10634a8d8

// -[SCOperaPageViewController eventPublisher]
// Type encoding: @16@0:8
// Implementation: 0x10634a8e8

// -[SCOperaPageViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x10634a8f8

// -[SCOperaPageViewController pageableViewControllerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10634a918

// -[SCOperaPageViewController setPageableViewControllerDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634a938

// -[SCOperaPageViewController layerTypeToFloatingLayerVCs]
// Type encoding: @16@0:8
// Implementation: 0x10634a94c

// -[SCOperaPageViewController setLayerTypeToFloatingLayerVCs:]
// Type encoding: v24@0:8@16
// Implementation: 0x10634a96c

// -[SCOperaPageViewController didSendCloseViewEvent]
// Type encoding: B16@0:8
// Implementation: 0x10634a980

// -[SCOperaPageViewController setDidSendCloseViewEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x10634a990

// -[SCOperaPageViewController shouldNotReloadLayers]
// Type encoding: B16@0:8
// Implementation: 0x10634a9a0

// -[SCOperaPageViewController setShouldNotReloadLayers:]
// Type encoding: v20@0:8B16
// Implementation: 0x10634a9b0

// -[SCOperaPageViewController containerView]
// Type encoding: @16@0:8
// Implementation: 0x10634a9c0

// -[SCOperaPageViewController hasRoundedCornersForAttachment]
// Type encoding: B16@0:8
// Implementation: 0x10634a9d0

// -[SCOperaPageViewController overridePausedState]
// Type encoding: B16@0:8
// Implementation: 0x10634a9e0

// -[SCOperaPageViewController operaScrollViewOffsetForPageView]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10634a9f0

// -[SCOperaPageViewController setOperaScrollViewOffsetForPageView:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10634aa04

// -[SCOperaPageViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10634aa18

// +[SCOperaPageViewController pageViewControllerWithConfiguration:layerViewControllerConfiguration:operaDependencies:legacySessionStateContainer:eventAnnouncer:eventPublisher:layerViewControllerManager:viewModel:delegate:trackerService:playbackSessionIdProviding:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x106337eb4

@end
