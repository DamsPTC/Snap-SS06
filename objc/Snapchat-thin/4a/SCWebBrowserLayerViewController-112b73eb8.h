// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowserLayerViewController
// Superclass: SCOperaLayerViewController
// Address: 0x112b73eb8

@interface SCWebBrowserLayerViewController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebBrowserLayerViewController initWithConfiguration:layerViewControllerConfiguration:operaDependencies:eventAnnouncer:webBrowsingMultiScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:adConfigProvider:userAdIdProvider:trackSeqNumProvider:circumstanceEngine:browserPrivacyConsentInfoManager:webViewRetainer:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x107b95dd8

// -[SCWebBrowserLayerViewController _allowPreloading]
// Type encoding: B16@0:8
// Implementation: 0x107b96348

// -[SCWebBrowserLayerViewController _allowPrefetching]
// Type encoding: B16@0:8
// Implementation: 0x107b963cc

// -[SCWebBrowserLayerViewController viewWillFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b964b8

// -[SCWebBrowserLayerViewController viewDidFullyAppear]
// Type encoding: v16@0:8
// Implementation: 0x107b965d0

// -[SCWebBrowserLayerViewController neighborViewDidFullyAppearWithCurrentViewRelativePosition:neighborsInfoProvider:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107b96970

// -[SCWebBrowserLayerViewController viewDidPartiallyAppearWithCurrentViewRelativePosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b969c8

// -[SCWebBrowserLayerViewController layerViewContainerOption]
// Type encoding: q16@0:8
// Implementation: 0x107b96a20

// -[SCWebBrowserLayerViewController viewWillFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b96a28

// -[SCWebBrowserLayerViewController viewDidFullyDisappear]
// Type encoding: v16@0:8
// Implementation: 0x107b96a98

// -[SCWebBrowserLayerViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x107b96d78

// -[SCWebBrowserLayerViewController teardown]
// Type encoding: v16@0:8
// Implementation: 0x107b96dc0

// -[SCWebBrowserLayerViewController isRecyclable]
// Type encoding: B16@0:8
// Implementation: 0x107b96e54

// -[SCWebBrowserLayerViewController _resetOperaPageMetrics]
// Type encoding: v16@0:8
// Implementation: 0x107b96e5c

// -[SCWebBrowserLayerViewController _resetLoadingMetricsAlsoResetCurrentInteractiveWebViewIndex:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b96ed4

// -[SCWebBrowserLayerViewController pageabilityForRelativePosition:gestureRecognizer:]
// Type encoding: q32@0:8Q16@24
// Implementation: 0x107b96f80

// -[SCWebBrowserLayerViewController didReceiveUpdateProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b97050

// -[SCWebBrowserLayerViewController _updateWebViewUrlWithProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b97054

// -[SCWebBrowserLayerViewController canHandleRoundCorner]
// Type encoding: B16@0:8
// Implementation: 0x107b97274

// -[SCWebBrowserLayerViewController currentViewParameters]
// Type encoding: @16@0:8
// Implementation: 0x107b9727c

// -[SCWebBrowserLayerViewController _lastInteractedItemIndexEventParam]
// Type encoding: @16@0:8
// Implementation: 0x107b97da0

// -[SCWebBrowserLayerViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x107b97ed8

// -[SCWebBrowserLayerViewController updateViewWithPreviousLayer:currentLayer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b97f2c

// -[SCWebBrowserLayerViewController operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b98088

// -[SCWebBrowserLayerViewController _isTriggeringAttachmentForNewScb:]
// Type encoding: B24@0:8@16
// Implementation: 0x107b9852c

// -[SCWebBrowserLayerViewController _isOperaEventForCurrentAd:page:params:assertCurrentAd:]
// Type encoding: B44@0:8@16@24@32B40
// Implementation: 0x107b98644

// -[SCWebBrowserLayerViewController _profileIcon]
// Type encoding: @16@0:8
// Implementation: 0x107b988d8

// -[SCWebBrowserLayerViewController _defaultURL]
// Type encoding: @16@0:8
// Implementation: 0x107b98998

// -[SCWebBrowserLayerViewController _announceRetargetPromptRenderedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b989f8

// -[SCWebBrowserLayerViewController _presentRetargetPromptIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b98d04

// -[SCWebBrowserLayerViewController _didTapOnNotification]
// Type encoding: v16@0:8
// Implementation: 0x107b99328

// -[SCWebBrowserLayerViewController _didTapOnExbButtonWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b993b4

// -[SCWebBrowserLayerViewController _didSwipeToDismissWithReason:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107b995c8

// -[SCWebBrowserLayerViewController _removeBrowser]
// Type encoding: v16@0:8
// Implementation: 0x107b99758

// -[SCWebBrowserLayerViewController _removeWebBrowsingScopes]
// Type encoding: v16@0:8
// Implementation: 0x107b997c0

// -[SCWebBrowserLayerViewController _detachScopeBasedBrowserVC]
// Type encoding: v16@0:8
// Implementation: 0x107b998f4

// -[SCWebBrowserLayerViewController _stopPresentingScopeBasedBrowserVC]
// Type encoding: v16@0:8
// Implementation: 0x107b99928

// -[SCWebBrowserLayerViewController _prewarmWebViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107b99968

// -[SCWebBrowserLayerViewController _initBrowser]
// Type encoding: v16@0:8
// Implementation: 0x107b99a9c

// -[SCWebBrowserLayerViewController _presentBrowserWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b99b70

// -[SCWebBrowserLayerViewController _presentScopeBasedBrowserWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b99bf8

// -[SCWebBrowserLayerViewController _setBrowserOffScreenForOpera:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b99f30

// -[SCWebBrowserLayerViewController _onBrowserCompletion:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b99f90

// -[SCWebBrowserLayerViewController _announceInitBrowser]
// Type encoding: v16@0:8
// Implementation: 0x107b9a048

// -[SCWebBrowserLayerViewController webBrowserDidTapDismissWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107b9a218

// -[SCWebBrowserLayerViewController didOpenExternalBrowser:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9a300

// -[SCWebBrowserLayerViewController webBrowserDidOpenDeepLinkWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9a310

// -[SCWebBrowserLayerViewController webBrowserDidReceiveContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9a384

// -[SCWebBrowserLayerViewController _announceWebViewContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9a388

// -[SCWebBrowserLayerViewController _announceGAHitFromContextIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9a4fc

// -[SCWebBrowserLayerViewController _announceLoadMilestonesFromContextIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9a5ec

// -[SCWebBrowserLayerViewController _announceLoadMilestone:event:reachedAt:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x107b9a760

// -[SCWebBrowserLayerViewController _browserType]
// Type encoding: q16@0:8
// Implementation: 0x107b9a7f4

// -[SCWebBrowserLayerViewController _isExternalBrowser]
// Type encoding: B16@0:8
// Implementation: 0x107b9a86c

// -[SCWebBrowserLayerViewController _interactiveIndexWebViewExtendedLifecycleEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107b9a888

// -[SCWebBrowserLayerViewController _webBrowserConfig]
// Type encoding: @16@0:8
// Implementation: 0x107b9a8d4

// -[SCWebBrowserLayerViewController _preloadWebviewAd]
// Type encoding: v16@0:8
// Implementation: 0x107b9b320

// -[SCWebBrowserLayerViewController _shouldIgnoreSafeAreaInsets]
// Type encoding: B16@0:8
// Implementation: 0x107b9b3d0

// -[SCWebBrowserLayerViewController _loadDefaultURL]
// Type encoding: v16@0:8
// Implementation: 0x107b9b4c4

// -[SCWebBrowserLayerViewController _loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9b570

// -[SCWebBrowserLayerViewController _loadURLInBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9b670

// -[SCWebBrowserLayerViewController _removeNewSCB]
// Type encoding: v16@0:8
// Implementation: 0x107b9b7dc

// -[SCWebBrowserLayerViewController _loadInNewSCB:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9b8ac

// -[SCWebBrowserLayerViewController _signalDelayLoadPromise]
// Type encoding: v16@0:8
// Implementation: 0x107b9bc74

// -[SCWebBrowserLayerViewController _announcePerformanceMetricsIfReady]
// Type encoding: v16@0:8
// Implementation: 0x107b9bcd8

// -[SCWebBrowserLayerViewController _loadPrefetchHints]
// Type encoding: v16@0:8
// Implementation: 0x107b9bdb8

// -[SCWebBrowserLayerViewController _announcePrefetchHintsLoad]
// Type encoding: v16@0:8
// Implementation: 0x107b9bf1c

// -[SCWebBrowserLayerViewController _handleTopSnapWebURLChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9c048

// -[SCWebBrowserLayerViewController webBrowserDidLoadPrefetchHints]
// Type encoding: v16@0:8
// Implementation: 0x107b9c080

// -[SCWebBrowserLayerViewController webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9c084

// -[SCWebBrowserLayerViewController webBrowser:didFinishLoadWithSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b9c104

// -[SCWebBrowserLayerViewController webBrowserDidRedirect:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9c2d8

// -[SCWebBrowserLayerViewController webBrowser:didReceivePerfEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b9c38c

// -[SCWebBrowserLayerViewController webBrowserInterimUpdate:performanceMetrics:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x107b9c51c

// -[SCWebBrowserLayerViewController webBrowserDidFinalizeJavaScriptMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9c690

// -[SCWebBrowserLayerViewController webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:]
// Type encoding: v40@0:8@16d24B32B36
// Implementation: 0x107b9c6d8

// -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveStart]
// Type encoding: v16@0:8
// Implementation: 0x107b9c98c

// -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9ca30

// -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveNetworkError]
// Type encoding: v16@0:8
// Implementation: 0x107b9cc00

// -[SCWebBrowserLayerViewController exbInAppHtmlUrlResolveRedirectHintsMismatch]
// Type encoding: v16@0:8
// Implementation: 0x107b9cca4

// -[SCWebBrowserLayerViewController exbOnSubNav]
// Type encoding: v16@0:8
// Implementation: 0x107b9cd48

// -[SCWebBrowserLayerViewController exbUrlLoad]
// Type encoding: v16@0:8
// Implementation: 0x107b9ce34

// -[SCWebBrowserLayerViewController detectCidParamsDrop:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9ced8

// -[SCWebBrowserLayerViewController webBrowserDidAttemptDeeplink]
// Type encoding: v16@0:8
// Implementation: 0x107b9cfd4

// -[SCWebBrowserLayerViewController webBrowserDidDeeplinkWithSucceeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9d078

// -[SCWebBrowserLayerViewController webBrowserDidInterceptPixelRequest:]
// Type encoding: v24@0:8d16
// Implementation: 0x107b9d134

// -[SCWebBrowserLayerViewController webBrowser:didUpdateProgress:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x107b9d2a4

// -[SCWebBrowserLayerViewController webBrowserDidTapOpenInBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9d3ec

// -[SCWebBrowserLayerViewController webBrowser:didReceiveResponse:url:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x107b9d460

// -[SCWebBrowserLayerViewController webBrowser:didDetectErrors:loadPrefetchedHtml:jsErrorCount:]
// Type encoding: v40@0:8@16@24B32i36
// Implementation: 0x107b9d5ec

// -[SCWebBrowserLayerViewController webBrowserDidStartNavigation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9d840

// -[SCWebBrowserLayerViewController webBrowserDidCommitNavigation:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9d8ac

// -[SCWebBrowserLayerViewController webBrowser:onEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b9d918

// -[SCWebBrowserLayerViewController webBrowser:onUserInteractionEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b9da4c

// -[SCWebBrowserLayerViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b9db7c

// -[SCWebBrowserLayerViewController urlInterceptorConfigUpdates]
// Type encoding: @16@0:8
// Implementation: 0x107b9dc04

// -[SCWebBrowserLayerViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b9dc74

// +[SCWebBrowserLayerViewController _registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x107b9613c

@end
