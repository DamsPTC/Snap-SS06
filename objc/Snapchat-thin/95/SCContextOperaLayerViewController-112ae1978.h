// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextOperaLayerViewController
// Superclass: SCOperaLayerViewController
// Address: 0x112ae1978

@interface SCContextOperaLayerViewController

// Property: ctaHostView; attributes: T@"SCLazy",R,N,V_ctaHostView
// Property: headerContainer; attributes: T@"SCLazy",R,N,V_headerContainer
// Property: verticalActionsContainer; attributes: T@"SCLazy",R,N,V_verticalActionsContainer
// Property: fullPageLayoutGuide; attributes: T@"SCLazy",R,N,V_fullPageLayoutGuide
// Property: ctaHostViewPageLayoutGuide; attributes: T@"SCLazy",R,N,V_ctaHostViewPageLayoutGuide
// Property: safeAreaPageLayoutGuide; attributes: T@"SCLazy",R,N,V_safeAreaPageLayoutGuide
// Property: topLevelCardsLayoutGuide; attributes: T@"SCLazy",R,N,V_topLevelCardsLayoutGuide
// Property: repostedStoryViewLayoutGuide; attributes: T@"SCLazy",R,N,V_repostedStoryViewLayoutGuide
// Property: watchSpotlightActionLayoutGuide; attributes: T@"SCLazy",R,N,V_watchSpotlightActionLayoutGuide
// Property: aboveActionBarAccessoryLayoutGuide; attributes: T@"SCLazy",R,N,V_aboveActionBarAccessoryLayoutGuide
// Property: aboveActionBarFullPageLayoutGuide; attributes: T@"SCLazy",R,N,V_aboveActionBarFullPageLayoutGuide
// Property: isShowingInterstitialView; attributes: TB,R,N,V_isShowingInterstitialView
// Property: swipeUpGestureView; attributes: T@"UIView",W,N,V_swipeUpGestureView
// Property: presenterWantsActionBarHidden; attributes: TB,N,V_presenterWantsActionBarHidden
// Property: shouldHideActionTrayWhenNotCurrentPage; attributes: TB,N,V_shouldHideActionTrayWhenNotCurrentPage
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N
// Property: pageable; attributes: TB,N,V_pageable
// Property: page; attributes: T@"SCOperaPage",R,N
// Property: pageObservable; attributes: T@"SCObservable",R,N
// Property: eventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",R,N
// Property: accessoryViewPresented; attributes: TB,N,V_accessoryViewPresented

// -[SCContextOperaLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:userSession:experimentsProvider:contextSpotlightScopeExposer:contextSpotlightScopeServices:tappableElementsScopeExposer:pollsDynamicStickerScopeExposer:pollsDynamicStickerScopeServices:planDynamicStickerScopeExposer:planDynamicStickerScopeServices:viewLogger:contextServices:operaChromeScopeExposer:operaChromeScopeServices:dataPublisher:aifTopLevelCardsExperimentsService:performerProvider:customAppThemeProvider:lensPromptDataProvider:nglStudySettings:storiesConfigProvider:appStartExperimentReader:]
// Type encoding: @216@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208
// Implementation: 0x1064a3274

// -[SCContextOperaLayerViewController preparePresenters]
// Type encoding: v16@0:8
// Implementation: 0x1064a5ff4

// -[SCContextOperaLayerViewController enumeratePresentersUsingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1064a7234

// -[SCContextOperaLayerViewController registerCenterTapHandlers]
// Type encoding: v16@0:8
// Implementation: 0x1064a72d0

// -[SCContextOperaLayerViewController _shouldRenameSpotlightToReals]
// Type encoding: B16@0:8
// Implementation: 0x1064a73ac

// -[SCContextOperaLayerViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x1064a73cc

// -[SCContextOperaLayerViewController prepareOperaUIForSwipeUpContentPresented:shouldMute:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1064a7408

// -[SCContextOperaLayerViewController isSwipeUpAllowed]
// Type encoding: B16@0:8
// Implementation: 0x1064a741c

// -[SCContextOperaLayerViewController _setOperaUIPreparedForContentPresented:shouldPerformMuteUpdate:shouldMute:shouldPause:shouldHideHeader:]
// Type encoding: v36@0:8B16B20B24B28B32
// Implementation: 0x1064a756c

// -[SCContextOperaLayerViewController _contextMenuProvider]
// Type encoding: @16@0:8
// Implementation: 0x1064a7bec

// -[SCContextOperaLayerViewController setPageable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064a7c84

// -[SCContextOperaLayerViewController isPageable]
// Type encoding: B16@0:8
// Implementation: 0x1064a7ca0

// -[SCContextOperaLayerViewController requestNativeVolumeUI:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064a7cb8

// -[SCContextOperaLayerViewController resumePlaybackIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1064a7d28

// -[SCContextOperaLayerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x1064a7d60

// -[SCContextOperaLayerViewController viewWillLayoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x1064a7e00

// -[SCContextOperaLayerViewController didUpdateOperaPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064a811c

// -[SCContextOperaLayerViewController pageObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064a8194

// -[SCContextOperaLayerViewController updateViewWithPreviousLayer:currentLayer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064a81c4

// -[SCContextOperaLayerViewController updateViewWithHorizontalPageOffset:isCurrentPage:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1064a8cdc

// -[SCContextOperaLayerViewController updateViewWithVerticalPageOffset:relativePosition:]
// Type encoding: v32@0:8d16Q24
// Implementation: 0x1064a8db0

// -[SCContextOperaLayerViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x1064a8e14

// -[SCContextOperaLayerViewController resume]
// Type encoding: v16@0:8
// Implementation: 0x1064a8fa8

// -[SCContextOperaLayerViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064a901c

// -[SCContextOperaLayerViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x1064a9094

// -[SCContextOperaLayerViewController viewWillFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1064a9188

// -[SCContextOperaLayerViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1064a91dc

// -[SCContextOperaLayerViewController _resendViewPropertiesUsingViewPropertiesSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064a9284

// -[SCContextOperaLayerViewController didReceiveUpdateProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064a94c8

// -[SCContextOperaLayerViewController attachSwipeGesture]
// Type encoding: v16@0:8
// Implementation: 0x1064a9704

// -[SCContextOperaLayerViewController detatchSwipeGesture]
// Type encoding: v16@0:8
// Implementation: 0x1064a97a4

// -[SCContextOperaLayerViewController setPresenterWantsActionBarHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064a9844

// -[SCContextOperaLayerViewController pageabilityForRelativePosition:navigationStyle:swipeDirection:gestureRecognizer:]
// Type encoding: q48@0:8Q16q24q32@40
// Implementation: 0x1064a9864

// -[SCContextOperaLayerViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x1064a9b78

// -[SCContextOperaLayerViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x1064a9d1c

// -[SCContextOperaLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x1064a9dd8

// -[SCContextOperaLayerViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1064a9dec

// -[SCContextOperaLayerViewController pageSafeAreaInsetsDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1064a9e50

// -[SCContextOperaLayerViewController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064a9ec0

// -[SCContextOperaLayerViewController _performSnapBackActionFromPage:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064aab80

// -[SCContextOperaLayerViewController _sendSnapBackActionEnded]
// Type encoding: v16@0:8
// Implementation: 0x1064aaf30

// -[SCContextOperaLayerViewController _presentReplyBarFromPage:withActionType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1064aafa8

// -[SCContextOperaLayerViewController _operaDidStartScrolling]
// Type encoding: v16@0:8
// Implementation: 0x1064ab0d0

// -[SCContextOperaLayerViewController _operaDidEndScrolling]
// Type encoding: v16@0:8
// Implementation: 0x1064ab138

// -[SCContextOperaLayerViewController _shouldEnableVerticalActionsForSessionParams:isAd:launchSource:spotlightPresenterEnabled:]
// Type encoding: B40@0:8@16B24q28B36
// Implementation: 0x1064ab1bc

// -[SCContextOperaLayerViewController _attachPanGestureToActionBar]
// Type encoding: v16@0:8
// Implementation: 0x1064ab34c

// -[SCContextOperaLayerViewController _detachPanGestureFromActionBar]
// Type encoding: v16@0:8
// Implementation: 0x1064ab3c4

// -[SCContextOperaLayerViewController _isContextMenuPresented]
// Type encoding: B16@0:8
// Implementation: 0x1064ab434

// -[SCContextOperaLayerViewController _trayIsHidingActionBar]
// Type encoding: B16@0:8
// Implementation: 0x1064ab47c

// -[SCContextOperaLayerViewController updateLayerInteractiveVisibility:]
// Type encoding: v24@0:8d16
// Implementation: 0x1064ab498

// -[SCContextOperaLayerViewController _updateLayerVisibility]
// Type encoding: v16@0:8
// Implementation: 0x1064ab508

// -[SCContextOperaLayerViewController _setActionBarVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064ab548

// -[SCContextOperaLayerViewController _setVerticalActionsVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064ab58c

// -[SCContextOperaLayerViewController pageDidChangeResizingState:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064ab5d0

// -[SCContextOperaLayerViewController _setLayerVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064ab66c

// -[SCContextOperaLayerViewController _attachEventListeners]
// Type encoding: v16@0:8
// Implementation: 0x1064ab8c8

// -[SCContextOperaLayerViewController _presentersShouldAppear]
// Type encoding: v16@0:8
// Implementation: 0x1064abca8

// -[SCContextOperaLayerViewController _logContextViewMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1064abdc0

// -[SCContextOperaLayerViewController _logContextViewed]
// Type encoding: v16@0:8
// Implementation: 0x1064abeb0

// -[SCContextOperaLayerViewController gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1064abf88

// -[SCContextOperaLayerViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1064abf90

// -[SCContextOperaLayerViewController gestureRecognizer:shouldBeRequiredToFailByGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1064abf98

// -[SCContextOperaLayerViewController actionBarContentViewForConfiguration:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064abfa0

// -[SCContextOperaLayerViewController sendAttachmentButtonStyleViewProperty:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064ac0a0

// -[SCContextOperaLayerViewController presenterWillStartPresentation:shouldPerformMuteUpdate:shouldMute:shouldPause:]
// Type encoding: v36@0:8@16B24B28B32
// Implementation: 0x1064ac484

// -[SCContextOperaLayerViewController presenterDidEndPresentation:shouldPerformMuteUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1064ac4a0

// -[SCContextOperaLayerViewController showContextLayer]
// Type encoding: v16@0:8
// Implementation: 0x1064ac4e8

// -[SCContextOperaLayerViewController hideContextLayer]
// Type encoding: v16@0:8
// Implementation: 0x1064ac4f8

// -[SCContextOperaLayerViewController _actionNeedsUIUpdateForPresentation:]
// Type encoding: B24@0:8@16
// Implementation: 0x1064ac508

// -[SCContextOperaLayerViewController actionHandler:willStartAction:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064ac55c

// -[SCContextOperaLayerViewController _prepareForPresentationWithActionHandler:willStartAction:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064ac62c

// -[SCContextOperaLayerViewController actionHandler:didEndAction:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1064ac73c

// -[SCContextOperaLayerViewController _logURLTapWitAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064ac788

// -[SCContextOperaLayerViewController isRecyclable]
// Type encoding: B16@0:8
// Implementation: 0x1064ac984

// -[SCContextOperaLayerViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1064ac98c

// -[SCContextOperaLayerViewController isLegacyContextOperaRootCaptureWorkflowPresentingViewController]
// Type encoding: B16@0:8
// Implementation: 0x1064aca10

// -[SCContextOperaLayerViewController appearanceStateMachine:didMoveToState:fromState:]
// Type encoding: v40@0:8@16Q24Q32
// Implementation: 0x1064aca18

// -[SCContextOperaLayerViewController _logActionWithType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064acae8

// -[SCContextOperaLayerViewController pageable]
// Type encoding: B16@0:8
// Implementation: 0x1064acc00

// -[SCContextOperaLayerViewController accessoryViewPresented]
// Type encoding: B16@0:8
// Implementation: 0x1064acc10

// -[SCContextOperaLayerViewController setAccessoryViewPresented:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064acc20

// -[SCContextOperaLayerViewController swipeUpGestureView]
// Type encoding: @16@0:8
// Implementation: 0x1064acc30

// -[SCContextOperaLayerViewController setSwipeUpGestureView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064acc50

// -[SCContextOperaLayerViewController presenterWantsActionBarHidden]
// Type encoding: B16@0:8
// Implementation: 0x1064acc64

// -[SCContextOperaLayerViewController shouldHideActionTrayWhenNotCurrentPage]
// Type encoding: B16@0:8
// Implementation: 0x1064acc74

// -[SCContextOperaLayerViewController setShouldHideActionTrayWhenNotCurrentPage:]
// Type encoding: v20@0:8B16
// Implementation: 0x1064acc84

// -[SCContextOperaLayerViewController ctaHostView]
// Type encoding: @16@0:8
// Implementation: 0x1064acc94

// -[SCContextOperaLayerViewController headerContainer]
// Type encoding: @16@0:8
// Implementation: 0x1064acca4

// -[SCContextOperaLayerViewController verticalActionsContainer]
// Type encoding: @16@0:8
// Implementation: 0x1064accb4

// -[SCContextOperaLayerViewController fullPageLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064accc4

// -[SCContextOperaLayerViewController ctaHostViewPageLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064accd4

// -[SCContextOperaLayerViewController safeAreaPageLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064acce4

// -[SCContextOperaLayerViewController topLevelCardsLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064accf4

// -[SCContextOperaLayerViewController repostedStoryViewLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064acd04

// -[SCContextOperaLayerViewController watchSpotlightActionLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064acd14

// -[SCContextOperaLayerViewController aboveActionBarAccessoryLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064acd24

// -[SCContextOperaLayerViewController aboveActionBarFullPageLayoutGuide]
// Type encoding: @16@0:8
// Implementation: 0x1064acd34

// -[SCContextOperaLayerViewController isShowingInterstitialView]
// Type encoding: B16@0:8
// Implementation: 0x1064acd44

// -[SCContextOperaLayerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064acd54

@end
