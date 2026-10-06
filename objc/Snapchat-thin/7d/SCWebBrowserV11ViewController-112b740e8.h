// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowserV11ViewController
// Superclass: UIViewController
// Address: 0x112b740e8

@interface SCWebBrowserV11ViewController

// Property: webview; attributes: T@"SCWebView",&,N,G_webview,V_webview
// Property: safeBrowsingWarningView; attributes: T@"SCSafeBrowsingWarningView",&,N,V_safeBrowsingWarningView
// Property: jsBridge; attributes: T@"SCWebBrowsingJavaScriptBridge",&,N,V_jsBridge
// Property: performanceMetricsScript; attributes: T@"SCWebBrowsingScriptPerformanceMetrics",W,N,V_performanceMetricsScript
// Property: getPerformanceEntriesScript; attributes: T@"SCWebBrowsingScriptGetPerformanceEntries",W,N,V_getPerformanceEntriesScript
// Property: scrollingScript; attributes: T@"SCWebBrowsingScriptScrolling",W,N,V_scrollingScript
// Property: gaMetricsScript; attributes: T@"SCWebBrowsingScriptGAMetrics",W,N,V_gaMetricsScript
// Property: urlInterceptor; attributes: T@"<SCWebBrowsingDeeplinkHandling>",&,N,V_urlInterceptor
// Property: safeBrowsingChecker; attributes: T@"<SCSafeBrowsingURLChecking>",&,N,V_safeBrowsingChecker
// Property: additionalScriptControllers; attributes: T@"NSArray",&,N,V_additionalScriptControllers
// Property: popupBridge; attributes: T@"POPPopupBridge",&,N,V_popupBridge
// Property: urlHandler; attributes: T@"<SCWebURLOpening>",W,N,V_urlHandler
// Property: isKeyboardShowing; attributes: TB,N,V_isKeyboardShowing
// Property: isPrefetchHintsLoadTriggered; attributes: TB,N,V_isPrefetchHintsLoadTriggered
// Property: isLoadingPrefetchHints; attributes: TB,N,V_isLoadingPrefetchHints
// Property: hasResetWKWebview; attributes: TB,N,V_hasResetWKWebview
// Property: navigationCountBeforeInitialHtmlResolve; attributes: TQ,N,V_navigationCountBeforeInitialHtmlResolve
// Property: finalURLForInitialRedirectChain; attributes: T@"NSURL",&,N,V_finalURLForInitialRedirectChain
// Property: latestNavigationTimeBeforeInitialHtmlResolve; attributes: T@"NSDate",&,N,V_latestNavigationTimeBeforeInitialHtmlResolve
// Property: isOpeningExb; attributes: TB,N,V_isOpeningExb
// Property: desiredURL; attributes: T@"NSURL",C,N,V_desiredURL
// Property: landingPageUrl; attributes: T@"NSURL",&,N,V_landingPageUrl
// Property: initialLoadStatusCode; attributes: T@"NSNumber",&,N,V_initialLoadStatusCode
// Property: didCompleteInitialLoad; attributes: TB,N,V_didCompleteInitialLoad
// Property: queueRunningWhileVisible; attributes: T@"NSObject<OS_dispatch_queue>",&,N,V_queueRunningWhileVisible
// Property: isViewVisible; attributes: TB,N,V_isViewVisible
// Property: isOffScreen; attributes: TB,N,V_isOffScreen
// Property: isFirstTimeOnScreen; attributes: TB,N,V_isFirstTimeOnScreen
// Property: isBrowserDismissed; attributes: TB,N,V_isBrowserDismissed
// Property: isVisibleQueueSuspended; attributes: TB,N,V_isVisibleQueueSuspended
// Property: onKeyboardHideBlock; attributes: T@?,C,N,V_onKeyboardHideBlock
// Property: isNavigationInProgress; attributes: TB,N,V_isNavigationInProgress
// Property: committedNavigationCount; attributes: TQ,N,V_committedNavigationCount
// Property: lastLoadWasDeeplink; attributes: TB,N,V_lastLoadWasDeeplink
// Property: shouldDismissBrowserOnBackground; attributes: TB,N,V_shouldDismissBrowserOnBackground
// Property: navigationDecisionHandlers; attributes: T@"NSMutableSet",&,N,V_navigationDecisionHandlers
// Property: connectionErrorActionSheet; attributes: T@"SIGActionSheet",W,N,V_connectionErrorActionSheet
// Property: javaScriptMetrics; attributes: T@"NSDictionary",C,N,V_javaScriptMetrics
// Property: isScrolledToTop; attributes: TB,N,V_isScrolledToTop
// Property: lastReportedProgress; attributes: Td,N,V_lastReportedProgress
// Property: cardTransition; attributes: T@"<SIGCardTransition>",R,N,V_cardTransition
// Property: requestInterceptor; attributes: T@"<SCAdPixelRequestIntercepting>",&,N,V_requestInterceptor
// Property: metricHelper; attributes: T@"SCWebBrowsingMetricHelper",&,N,V_metricHelper
// Property: mediaPlaybackHelper; attributes: T@"SCWebBrowserMediaPlaybackHelper",&,N,V_mediaPlaybackHelper
// Property: grapheneRegistry; attributes: T@"SCLazy",&,N,V_grapheneRegistry
// Property: webViewPool; attributes: T@"SCLazy",&,N,V_webViewPool
// Property: webViewScriptFileCache; attributes: T@"SCLazy",&,N,V_webViewScriptFileCache
// Property: shareHandler; attributes: T@"<SCWebBrowsingShareHandling>",&,N,V_shareHandler
// Property: crashLogger; attributes: T@"<SCCrashLogging>",&,N,V_crashLogger
// Property: thirdPartyLoginHandler; attributes: T@"<SCWebBrowsingThirdPartyLoginHandling>",&,N,V_thirdPartyLoginHandler
// Property: thirdPartyLoginPlugInExposer; attributes: T@"SCPlugInScopeExposer",&,N,V_thirdPartyLoginPlugInExposer
// Property: thirdPartyLoginSaberPluginScopeServices; attributes: T@"<SCWebBrowsingThirdPartyLoginSaberPluginScopeBuilding>",&,N,V_thirdPartyLoginSaberPluginScopeServices
// Property: tapGestureRecognizer; attributes: T@"UITapGestureRecognizer",&,N,V_tapGestureRecognizer
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",&,N,V_panGestureRecognizer
// Property: panGestureStartTimestampMillis; attributes: Td,N,V_panGestureStartTimestampMillis
// Property: panGestureStartLocation; attributes: T{CGPoint=dd},N,V_panGestureStartLocation
// Property: didTapGestureTriggered; attributes: TB,N,V_didTapGestureTriggered
// Property: didBrowseFeatureTriggered; attributes: TB,N,V_didBrowseFeatureTriggered
// Property: exbResolvedFinalHtmlUrl; attributes: T@"NSURL",&,N,V_exbResolvedFinalHtmlUrl
// Property: subresouceNetworkErrors; attributes: T@"NSMutableArray",&,N,V_subresouceNetworkErrors
// Property: jsErrorCounter; attributes: Ti,N,V_jsErrorCounter
// Property: initialPageLoaded; attributes: TB,N,V_initialPageLoaded
// Property: prefetchHintsNavigationActionSkipped; attributes: TB,N,V_prefetchHintsNavigationActionSkipped
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: adId; attributes: T@"NSString",R,C,N
// Property: adServeItemId; attributes: T@"NSString",R,C,N
// Property: currentSharableUrl; attributes: T@"NSURL",R,C,N
// Property: initialLandingPageEstimatedProgress; attributes: Td,R,N,V_initialLandingPageEstimatedProgress
// Property: estimatedProgress; attributes: Td,R,N
// Property: config; attributes: T@"SCWebBrowserConfig",R,N,V_config
// Property: hasSubsequentNavigation; attributes: TB,R,N
// Property: topViewController; attributes: T@"UIViewController",W,N,V_topViewController
// Property: enableExtendedLifecycleV2; attributes: TB,R,N
// Property: landingPageServerRedirectCount; attributes: T@"NSNumber",&,N,VlandingPageServerRedirectCount
// Property: landingPageServerRedirectResolvedTsMs; attributes: T@"NSNumber",R,N,VlandingPageServerRedirectResolvedTsMs
// Property: landingPageServerRedirectResolvedUrl; attributes: T@"NSString",R,C,N,VlandingPageServerRedirectResolvedUrl
// Property: eventDelegate; attributes: T@"<SCWebviewEventDelegate>",W,N,V_eventDelegate
// Property: delegate; attributes: T@"<SCWebBrowsingDelegate>",W,N,V_delegate
// Property: didFullyAppearTimestampMs; attributes: T@"NSNumber",&,N,V_didFullyAppearTimestampMs
// Property: currentUrl; attributes: T@"NSString",R,C,N
// Property: finalResolvedUrl; attributes: T@"NSString",R,C,N
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCWebBrowserV11ViewController initWithConfig:delegate:eventDelegate:safeBrowsingChecker:urlInterceptor:additionalScriptControllers:requestInterceptor:grapheneRegistry:webViewPool:webViewScriptFileCache:shareHandler:crashLogger:thirdPartyLoginPlugInExposer:thirdPartyLoginSaberPluginScopeServices:uiContainer:mainQueuePerformer:runtime:alertPresenterFactory:actionSheetPresenterFactory:notificationPresenterFactory:cofStore:browserPrivacyConsentInfoManager:notificationPool:bitmojiAvatarProvider:cofConfigProvider:deckHierarchyFactory:webBrowsingSecureGuard:valdiRuntimeProvider:adTrackSeqNumProvider:userPreferences:webBrowsingBrowserLogger:]
// Type encoding: @264@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256
// Implementation: 0x107ba0820

// -[SCWebBrowserV11ViewController hasSubsequentNavigation]
// Type encoding: B16@0:8
// Implementation: 0x107ba1338

// -[SCWebBrowserV11ViewController _composerBrowserViewModel]
// Type encoding: @16@0:8
// Implementation: 0x107ba1348

// -[SCWebBrowserV11ViewController _composerBrowserViewContext]
// Type encoding: @16@0:8
// Implementation: 0x107ba1524

// -[SCWebBrowserV11ViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x107ba2eac

// -[SCWebBrowserV11ViewController attachUI:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba3368

// -[SCWebBrowserV11ViewController detachUI:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ba3374

// -[SCWebBrowserV11ViewController landingPageServerRedirectCount]
// Type encoding: @16@0:8
// Implementation: 0x107ba33ac

// -[SCWebBrowserV11ViewController landingPageServerRedirectResolvedTsMs]
// Type encoding: @16@0:8
// Implementation: 0x107ba3400

// -[SCWebBrowserV11ViewController landingPageServerRedirectResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba34b0

// -[SCWebBrowserV11ViewController currentUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba3544

// -[SCWebBrowserV11ViewController currentSharableUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba35a8

// -[SCWebBrowserV11ViewController finalResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba35ac

// -[SCWebBrowserV11ViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba35f0

// -[SCWebBrowserV11ViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba3680

// -[SCWebBrowserV11ViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba3878

// -[SCWebBrowserV11ViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba391c

// -[SCWebBrowserV11ViewController updateExitMethod:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ba399c

// -[SCWebBrowserV11ViewController setIsOffScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba39ac

// -[SCWebBrowserV11ViewController setIsOffScreenForOpera:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba3acc

// -[SCWebBrowserV11ViewController _openBrowserSession]
// Type encoding: v16@0:8
// Implementation: 0x107ba3b34

// -[SCWebBrowserV11ViewController _closeBrowserSession]
// Type encoding: v16@0:8
// Implementation: 0x107ba3b54

// -[SCWebBrowserV11ViewController _setCommonAndLogOpenBrowser]
// Type encoding: v16@0:8
// Implementation: 0x107ba3b74

// -[SCWebBrowserV11ViewController _logCloseBrowser]
// Type encoding: v16@0:8
// Implementation: 0x107ba3d44

// -[SCWebBrowserV11ViewController _logBrowserAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba3df0

// -[SCWebBrowserV11ViewController _logSharedActionWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba3e00

// -[SCWebBrowserV11ViewController dismiss]
// Type encoding: v16@0:8
// Implementation: 0x107ba3eb8

// -[SCWebBrowserV11ViewController isScrolledToTop]
// Type encoding: B16@0:8
// Implementation: 0x107ba3ef4

// -[SCWebBrowserV11ViewController pause]
// Type encoding: v16@0:8
// Implementation: 0x107ba4048

// -[SCWebBrowserV11ViewController _keyboardDidHide]
// Type encoding: v16@0:8
// Implementation: 0x107ba404c

// -[SCWebBrowserV11ViewController _keyboardDidShow]
// Type encoding: v16@0:8
// Implementation: 0x107ba40c4

// -[SCWebBrowserV11ViewController _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x107ba40cc

// -[SCWebBrowserV11ViewController _appWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x107ba4170

// -[SCWebBrowserV11ViewController _appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x107ba4260

// -[SCWebBrowserV11ViewController loadPrefetchHints:baseURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ba42cc

// -[SCWebBrowserV11ViewController _shouldInterceptForAmazonHandshake:]
// Type encoding: B24@0:8@16
// Implementation: 0x107ba43a8

// -[SCWebBrowserV11ViewController loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba44a8

// -[SCWebBrowserV11ViewController loadHTMLString:baseURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ba47dc

// -[SCWebBrowserV11ViewController loadURLRequest:withCookies:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107ba4978

// -[SCWebBrowserV11ViewController _logSkoPresentEvent]
// Type encoding: v16@0:8
// Implementation: 0x107ba4cc4

// -[SCWebBrowserV11ViewController _onUpdatePrivacyFromSource:consentValue:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x107ba4e00

// -[SCWebBrowserV11ViewController _logPrivacyPromptEventWithEventType:consentValue:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107ba4f2c

// -[SCWebBrowserV11ViewController _viewIsOnScreen]
// Type encoding: v16@0:8
// Implementation: 0x107ba5088

// -[SCWebBrowserV11ViewController _endBrowserSessionAndDismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba524c

// -[SCWebBrowserV11ViewController _reportInitialPageLoadErrors]
// Type encoding: v16@0:8
// Implementation: 0x107ba52e4

// -[SCWebBrowserV11ViewController _loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba53b4

// -[SCWebBrowserV11ViewController _dismiss:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba54b8

// -[SCWebBrowserV11ViewController _performDismiss]
// Type encoding: v16@0:8
// Implementation: 0x107ba5704

// -[SCWebBrowserV11ViewController _handleDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x107ba57e0

// -[SCWebBrowserV11ViewController _loadURLWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba5860

// -[SCWebBrowserV11ViewController _showUnsafeURLViewForType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107ba5dc4

// -[SCWebBrowserV11ViewController _updateProgress]
// Type encoding: v16@0:8
// Implementation: 0x107ba6124

// -[SCWebBrowserV11ViewController _updateProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ba6238

// -[SCWebBrowserV11ViewController _updateInitialLandingPageEstimatedProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ba6284

// -[SCWebBrowserV11ViewController _publishLoadProgressUpdateEvent:]
// Type encoding: v24@0:8d16
// Implementation: 0x107ba6374

// -[SCWebBrowserV11ViewController reset:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba644c

// -[SCWebBrowserV11ViewController _updateVisibleQueueStatus]
// Type encoding: v16@0:8
// Implementation: 0x107ba6634

// -[SCWebBrowserV11ViewController estimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107ba66e8

// -[SCWebBrowserV11ViewController adId]
// Type encoding: @16@0:8
// Implementation: 0x107ba6744

// -[SCWebBrowserV11ViewController adServeItemId]
// Type encoding: @16@0:8
// Implementation: 0x107ba67a8

// -[SCWebBrowserV11ViewController _trackCommon:eventType:]
// Type encoding: @32@0:8d16q24
// Implementation: 0x107ba680c

// -[SCWebBrowserV11ViewController _webviewConfig:eventType:]
// Type encoding: @32@0:8d16q24
// Implementation: 0x107ba6bd4

// -[SCWebBrowserV11ViewController _webviewOperationEventWithEventType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107ba712c

// -[SCWebBrowserV11ViewController _webviewOperationEventWithInitWebviewEvent]
// Type encoding: @16@0:8
// Implementation: 0x107ba7138

// -[SCWebBrowserV11ViewController _webviewOperationEventNavigationFailWithnavigationErrorCode:]
// Type encoding: @24@0:8@16
// Implementation: 0x107ba7198

// -[SCWebBrowserV11ViewController _webviewOperationEventWithEventType:navigationErrorCode:url:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x107ba71a8

// -[SCWebBrowserV11ViewController dynamicScriptConfigString]
// Type encoding: @16@0:8
// Implementation: 0x107ba7418

// -[SCWebBrowserV11ViewController dynamicScriptConfig]
// Type encoding: @16@0:8
// Implementation: 0x107ba7568

// -[SCWebBrowserV11ViewController enableExtendedLifecycleV2]
// Type encoding: B16@0:8
// Implementation: 0x107ba75e4

// -[SCWebBrowserV11ViewController observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x107ba7640

// -[SCWebBrowserV11ViewController _updateHeaderTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba794c

// -[SCWebBrowserV11ViewController _handleWebViewURLChange]
// Type encoding: v16@0:8
// Implementation: 0x107ba79a4

// -[SCWebBrowserV11ViewController _handleWebViewURLChangeV2]
// Type encoding: v16@0:8
// Implementation: 0x107ba7d64

// -[SCWebBrowserV11ViewController _publishWebViewBrowseEvent]
// Type encoding: v16@0:8
// Implementation: 0x107ba8124

// -[SCWebBrowserV11ViewController _handleWebViewBackForwardStateChange]
// Type encoding: v16@0:8
// Implementation: 0x107ba81fc

// -[SCWebBrowserV11ViewController _navigationChanged]
// Type encoding: v16@0:8
// Implementation: 0x107ba8200

// -[SCWebBrowserV11ViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107ba82ac

// -[SCWebBrowserV11ViewController resetWkWebView]
// Type encoding: v16@0:8
// Implementation: 0x107ba8500

// -[SCWebBrowserV11ViewController canGoBack]
// Type encoding: B16@0:8
// Implementation: 0x107ba86c4

// -[SCWebBrowserV11ViewController canGoForward]
// Type encoding: B16@0:8
// Implementation: 0x107ba8700

// -[SCWebBrowserV11ViewController toolbarBackButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x107ba873c

// -[SCWebBrowserV11ViewController toolbarForwardButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x107ba87b0

// -[SCWebBrowserV11ViewController toolbarSendButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x107ba8824

// -[SCWebBrowserV11ViewController toolbarShareButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x107ba8878

// -[SCWebBrowserV11ViewController scrollViewDidEndDragging:willDecelerate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107ba88cc

// -[SCWebBrowserV11ViewController _performRefreshReload]
// Type encoding: v16@0:8
// Implementation: 0x107ba8954

// -[SCWebBrowserV11ViewController toolbarReloadButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x107ba8974

// -[SCWebBrowserV11ViewController toolbarOpenInBrowserButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x107ba8a08

// -[SCWebBrowserV11ViewController _sendURL]
// Type encoding: v16@0:8
// Implementation: 0x107ba8ab0

// -[SCWebBrowserV11ViewController didSendWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba8b90

// -[SCWebBrowserV11ViewController _shareCellPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba8c14

// -[SCWebBrowserV11ViewController _copyLinkCellPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba8ce4

// -[SCWebBrowserV11ViewController _copyLink]
// Type encoding: v16@0:8
// Implementation: 0x107ba8d7c

// -[SCWebBrowserV11ViewController _browserCellPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba8df8

// -[SCWebBrowserV11ViewController _openInBrowser]
// Type encoding: v16@0:8
// Implementation: 0x107ba8f18

// -[SCWebBrowserV11ViewController _cancelCellPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba907c

// -[SCWebBrowserV11ViewController _onOpenBookmarkPage]
// Type encoding: v16@0:8
// Implementation: 0x107ba90b0

// -[SCWebBrowserV11ViewController _onDismissBookmarkPage]
// Type encoding: v16@0:8
// Implementation: 0x107ba90e0

// -[SCWebBrowserV11ViewController _onAddBookmark:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107ba9110

// -[SCWebBrowserV11ViewController _onRemoveBookmark]
// Type encoding: v16@0:8
// Implementation: 0x107ba92d0

// -[SCWebBrowserV11ViewController _onActionMenuOpen]
// Type encoding: v16@0:8
// Implementation: 0x107ba931c

// -[SCWebBrowserV11ViewController _onClearCache]
// Type encoding: v16@0:8
// Implementation: 0x107ba934c

// -[SCWebBrowserV11ViewController _onUpdateEnabledHistoryFromSetting:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba9388

// -[SCWebBrowserV11ViewController _onBookMarkMenuEnableRecentPage]
// Type encoding: v16@0:8
// Implementation: 0x107ba93f4

// -[SCWebBrowserV11ViewController _onUpdatePrivacyConsentFromPrompt:]
// Type encoding: v20@0:8B16
// Implementation: 0x107ba9454

// -[SCWebBrowserV11ViewController _showShareActivity]
// Type encoding: v16@0:8
// Implementation: 0x107ba94d8

// -[SCWebBrowserV11ViewController _shouldPresentPrivacyPrompt]
// Type encoding: B16@0:8
// Implementation: 0x107ba97d0

// -[SCWebBrowserV11ViewController _getAuthorizePromise]
// Type encoding: @16@0:8
// Implementation: 0x107ba9858

// -[SCWebBrowserV11ViewController _webview]
// Type encoding: @16@0:8
// Implementation: 0x107ba9938

// -[SCWebBrowserV11ViewController _initializeWebView]
// Type encoding: @16@0:8
// Implementation: 0x107ba9a88

// -[SCWebBrowserV11ViewController _createTextInputAccessoryView]
// Type encoding: @16@0:8
// Implementation: 0x107ba9e14

// -[SCWebBrowserV11ViewController _createAutofillKeyboardAccessoryContext]
// Type encoding: @16@0:8
// Implementation: 0x107ba9ebc

// -[SCWebBrowserV11ViewController getAutofillUserInfoWithServices]
// Type encoding: @16@0:8
// Implementation: 0x107baa554

// -[SCWebBrowserV11ViewController _setUpWebView:webViewConfiguration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107baa9c4

// -[SCWebBrowserV11ViewController _isThirdPartyLoginPlugInEnabled]
// Type encoding: B16@0:8
// Implementation: 0x107bab540

// -[SCWebBrowserV11ViewController _setUpThirdPartyLoginPlugInIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107bab5a8

// -[SCWebBrowserV11ViewController _tearDownThirdPartyLoginPlugInIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x107bab7bc

// -[SCWebBrowserV11ViewController setJavaScriptMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bab840

// -[SCWebBrowserV11ViewController _logPerfMetricsToAsm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107babcb0

// -[SCWebBrowserV11ViewController _showConnectionError]
// Type encoding: v16@0:8
// Implementation: 0x107bac358

// -[SCWebBrowserV11ViewController _connectionErrorRetryPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bac58c

// -[SCWebBrowserV11ViewController _retry]
// Type encoding: v16@0:8
// Implementation: 0x107bac628

// -[SCWebBrowserV11ViewController _connectionErrorIgnorePressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bac6f0

// -[SCWebBrowserV11ViewController _connectionErrorExitPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bac724

// -[SCWebBrowserV11ViewController _isScCidAbsentOrEmpty:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bac838

// -[SCWebBrowserV11ViewController _shouldAppendClickId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bac9c0

// -[SCWebBrowserV11ViewController _shouldAppendGaUtmForOrganicAndReloadUrl:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bacbcc

// -[SCWebBrowserV11ViewController _shouldAppendGaUtmForMapsAndReloadUrl:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bacd00

// -[SCWebBrowserV11ViewController _appendGaUtmForOrganicAndReloadUrl:decisionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107bacdd0

// -[SCWebBrowserV11ViewController _handleNavigationFailedWithShouldShowConnectionError:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bace7c

// -[SCWebBrowserV11ViewController _handleNavigationError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bad040

// -[SCWebBrowserV11ViewController actionSheetDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bad1bc

// -[SCWebBrowserV11ViewController goBackFromSafeBrowsing]
// Type encoding: v16@0:8
// Implementation: 0x107bad254

// -[SCWebBrowserV11ViewController learnMoreFromSafeBrowsing]
// Type encoding: v16@0:8
// Implementation: 0x107bad434

// -[SCWebBrowserV11ViewController webViewDidClose:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bad584

// -[SCWebBrowserV11ViewController webView:createWebViewWithConfiguration:forNavigationAction:windowFeatures:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107bad58c

// -[SCWebBrowserV11ViewController _logCreateWebViewForNavigationAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bad6bc

// -[SCWebBrowserV11ViewController webView:didFinishNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bad878

// -[SCWebBrowserV11ViewController webView:didCommitNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107badb04

// -[SCWebBrowserV11ViewController _updateUrlInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107badd44

// -[SCWebBrowserV11ViewController _getSharableUrl]
// Type encoding: @16@0:8
// Implementation: 0x107bade1c

// -[SCWebBrowserV11ViewController _destinationUrl]
// Type encoding: @16@0:8
// Implementation: 0x107badeb8

// -[SCWebBrowserV11ViewController _appendClickIdIfNecessary:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bae0bc

// -[SCWebBrowserV11ViewController _trackUtmNotPropagatedIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bae210

// -[SCWebBrowserV11ViewController _appendGaUtmsIfNecessary:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bae2e0

// -[SCWebBrowserV11ViewController _openExbAndDismissBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bae3a4

// -[SCWebBrowserV11ViewController webView:decidePolicyForNavigationAction:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107bae494

// -[SCWebBrowserV11ViewController _universalLinkExceptionList]
// Type encoding: @16@0:8
// Implementation: 0x107baf6b8

// -[SCWebBrowserV11ViewController _isOrganicUniversalLinkException:]
// Type encoding: B24@0:8@16
// Implementation: 0x107baf6cc

// -[SCWebBrowserV11ViewController _handleDeeplinkIntercepted:didIntercept:isMainFrame:decisionHandler:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x107baf7f8

// -[SCWebBrowserV11ViewController _continueNavigation:isMainFrame:decisionHandler:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x107bafa30

// -[SCWebBrowserV11ViewController _safeBrowsingSucceededWithURLType:url:decisionHandler:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x107baffa0

// -[SCWebBrowserV11ViewController _safeBrowsingFailedWithDecisionHandler:error:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x107bb0110

// -[SCWebBrowserV11ViewController _isHypertextURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x107bb024c

// -[SCWebBrowserV11ViewController webView:didFailProvisionalNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107bb02cc

// -[SCWebBrowserV11ViewController webView:didFailNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107bb03b8

// -[SCWebBrowserV11ViewController webView:didStartProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb0410

// -[SCWebBrowserV11ViewController _notifyUrlLoadEventStream:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb05d8

// -[SCWebBrowserV11ViewController webView:didReceiveServerRedirectForProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb0858

// -[SCWebBrowserV11ViewController webView:decidePolicyForNavigationResponse:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107bb08d8

// -[SCWebBrowserV11ViewController _openExternalBrowserForUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb10dc

// -[SCWebBrowserV11ViewController _handleOpenExbResult:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107bb12c4

// -[SCWebBrowserV11ViewController _reportExbOpenFail]
// Type encoding: v16@0:8
// Implementation: 0x107bb1300

// -[SCWebBrowserV11ViewController cardTransitionShouldBeginWithView:touchLocation:]
// Type encoding: B40@0:8@16{CGPoint=dd}24
// Implementation: 0x107bb13e8

// -[SCWebBrowserV11ViewController cardToExpandTransition]
// Type encoding: @16@0:8
// Implementation: 0x107bb13f0

// -[SCWebBrowserV11ViewController cardTransitionWillBeginWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb13f4

// -[SCWebBrowserV11ViewController cardTransitionDidUpdateProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x107bb1400

// -[SCWebBrowserV11ViewController cardTransitionEndedWithView:transitionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107bb1494

// -[SCWebBrowserV11ViewController popupBridge:requestsPresentationOfViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb1540

// -[SCWebBrowserV11ViewController popupBridge:requestsDismissalOfViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb17bc

// -[SCWebBrowserV11ViewController gaMetricsScriptDidReceiveHit:hitTimestampMs:isPageView:pageURLString:]
// Type encoding: v44@0:8@16d24B32@36
// Implementation: 0x107bb19ac

// -[SCWebBrowserV11ViewController _newURLToLoadWithRetainedQueryItemsIfNecessary:url:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x107bb1c38

// -[SCWebBrowserV11ViewController performanceEntriesReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb1ee8

// -[SCWebBrowserV11ViewController publishToTrace:entries:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x107bb1f74

// -[SCWebBrowserV11ViewController lifecycleMarkerHtmlLoaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb23b0

// -[SCWebBrowserV11ViewController lifecycleMarkerDomContentLoaded:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb24e8

// -[SCWebBrowserV11ViewController lifecycleMarkerFirstContentfulPaint:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2634

// -[SCWebBrowserV11ViewController lifecycleMarkerFullLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2760

// -[SCWebBrowserV11ViewController notifyEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2898

// -[SCWebBrowserV11ViewController webviewErrorDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2990

// -[SCWebBrowserV11ViewController adobePingWithUrl:timestampMs:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb2a48

// -[SCWebBrowserV11ViewController didReceivePostClickEvent:topicType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb2b64

// -[SCWebBrowserV11ViewController handleAutofillBlurEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2cd8

// -[SCWebBrowserV11ViewController handleAutofillFieldsDetected:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2d4c

// -[SCWebBrowserV11ViewController handleAutofillFocusInEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2e20

// -[SCWebBrowserV11ViewController handleAutofillFormSubmit:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2eb8

// -[SCWebBrowserV11ViewController handleUrlParameterModificationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb2f8c

// -[SCWebBrowserV11ViewController _logSpectrumAutofillEventWithEventType:saveSource:formTypes:fields:]
// Type encoding: v40@0:8i16i20@24@32
// Implementation: 0x107bb3540

// -[SCWebBrowserV11ViewController thirdPartyLoginHandler:loadURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bb35e4

// -[SCWebBrowserV11ViewController dismissBrowserForThirdPartyLoginHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb3644

// -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnUserInteraction]
// Type encoding: B16@0:8
// Implementation: 0x107bb3664

// -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewUserEvent]
// Type encoding: B16@0:8
// Implementation: 0x107bb36ac

// -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewConfigEvent]
// Type encoding: B16@0:8
// Implementation: 0x107bb36f0

// -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewAsmEvent]
// Type encoding: B16@0:8
// Implementation: 0x107bb3734

// -[SCWebBrowserV11ViewController _shouldNotifyDelegateOnWebviewOperationEvent]
// Type encoding: B16@0:8
// Implementation: 0x107bb3778

// -[SCWebBrowserV11ViewController _notifyDelegateOnFeatureInteractionIfNeeded:timestamp:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x107bb37bc

// -[SCWebBrowserV11ViewController _onBrowserFeature:timestamp:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x107bb3878

// -[SCWebBrowserV11ViewController _onPrivacyBrowserFeature:timestamp:privacyConsent:]
// Type encoding: v36@0:8q16d24B32
// Implementation: 0x107bb3888

// -[SCWebBrowserV11ViewController _onBrowserFeature:timestamp:link:]
// Type encoding: v40@0:8q16d24@32
// Implementation: 0x107bb38f8

// -[SCWebBrowserV11ViewController _onBrowserFeature:linkSource:timestamp:link:]
// Type encoding: v48@0:8q16q24d32@40
// Implementation: 0x107bb3908

// -[SCWebBrowserV11ViewController _onBrowserFeature:linkSource:timestamp:link:privacyConsent:]
// Type encoding: v56@0:8q16q24d32@40@48
// Implementation: 0x107bb3910

// -[SCWebBrowserV11ViewController _onViewDidAppearWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x107bb3ab0

// -[SCWebBrowserV11ViewController _onViewDidDismissWithTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x107bb3cb8

// -[SCWebBrowserV11ViewController dictionaryFromAutofillContactInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x107bb3ee8

// -[SCWebBrowserV11ViewController _onAutofill:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb41d0

// -[SCWebBrowserV11ViewController _clearForm:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb43c0

// -[SCWebBrowserV11ViewController _onBlur]
// Type encoding: v16@0:8
// Implementation: 0x107bb4434

// -[SCWebBrowserV11ViewController _onResume]
// Type encoding: v16@0:8
// Implementation: 0x107bb448c

// -[SCWebBrowserV11ViewController _onConfigEventType:timestamp:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x107bb44a8

// -[SCWebBrowserV11ViewController _handleTap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4544

// -[SCWebBrowserV11ViewController _handlePan:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb474c

// -[SCWebBrowserV11ViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107bb4a44

// -[SCWebBrowserV11ViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x107bb4a78

// -[SCWebBrowserV11ViewController evaluateJavaScript:scriptController:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107bb4a80

// -[SCWebBrowserV11ViewController shouldBeSilentlyPresentedAndPauseOpera]
// Type encoding: B16@0:8
// Implementation: 0x107bb4a94

// -[SCWebBrowserV11ViewController shouldAlwaysBeSilentlyPresented]
// Type encoding: B16@0:8
// Implementation: 0x107bb4a9c

// -[SCWebBrowserV11ViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x107bb4aa4

// -[SCWebBrowserV11ViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x107bb4ab0

// -[SCWebBrowserV11ViewController defaultSubProjectName]
// Type encoding: @16@0:8
// Implementation: 0x107bb4abc

// -[SCWebBrowserV11ViewController setWebview:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4ac8

// -[SCWebBrowserV11ViewController config]
// Type encoding: @16@0:8
// Implementation: 0x107bb4b08

// -[SCWebBrowserV11ViewController initialLandingPageEstimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107bb4b18

// -[SCWebBrowserV11ViewController topViewController]
// Type encoding: @16@0:8
// Implementation: 0x107bb4b28

// -[SCWebBrowserV11ViewController setTopViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4b48

// -[SCWebBrowserV11ViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107bb4b5c

// -[SCWebBrowserV11ViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4b7c

// -[SCWebBrowserV11ViewController eventDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107bb4b90

// -[SCWebBrowserV11ViewController setEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4bb0

// -[SCWebBrowserV11ViewController didFullyAppearTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x107bb4bc4

// -[SCWebBrowserV11ViewController setDidFullyAppearTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4bd4

// -[SCWebBrowserV11ViewController setLandingPageServerRedirectCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4c14

// -[SCWebBrowserV11ViewController safeBrowsingWarningView]
// Type encoding: @16@0:8
// Implementation: 0x107bb4c54

// -[SCWebBrowserV11ViewController setSafeBrowsingWarningView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4c64

// -[SCWebBrowserV11ViewController jsBridge]
// Type encoding: @16@0:8
// Implementation: 0x107bb4ca4

// -[SCWebBrowserV11ViewController setJsBridge:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4cb4

// -[SCWebBrowserV11ViewController performanceMetricsScript]
// Type encoding: @16@0:8
// Implementation: 0x107bb4cf4

// -[SCWebBrowserV11ViewController setPerformanceMetricsScript:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4d14

// -[SCWebBrowserV11ViewController getPerformanceEntriesScript]
// Type encoding: @16@0:8
// Implementation: 0x107bb4d28

// -[SCWebBrowserV11ViewController setGetPerformanceEntriesScript:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4d48

// -[SCWebBrowserV11ViewController scrollingScript]
// Type encoding: @16@0:8
// Implementation: 0x107bb4d5c

// -[SCWebBrowserV11ViewController setScrollingScript:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4d7c

// -[SCWebBrowserV11ViewController gaMetricsScript]
// Type encoding: @16@0:8
// Implementation: 0x107bb4d90

// -[SCWebBrowserV11ViewController setGaMetricsScript:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4db0

// -[SCWebBrowserV11ViewController urlInterceptor]
// Type encoding: @16@0:8
// Implementation: 0x107bb4dc4

// -[SCWebBrowserV11ViewController setUrlInterceptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4dd4

// -[SCWebBrowserV11ViewController safeBrowsingChecker]
// Type encoding: @16@0:8
// Implementation: 0x107bb4e14

// -[SCWebBrowserV11ViewController setSafeBrowsingChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4e24

// -[SCWebBrowserV11ViewController additionalScriptControllers]
// Type encoding: @16@0:8
// Implementation: 0x107bb4e64

// -[SCWebBrowserV11ViewController setAdditionalScriptControllers:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4e74

// -[SCWebBrowserV11ViewController popupBridge]
// Type encoding: @16@0:8
// Implementation: 0x107bb4eb4

// -[SCWebBrowserV11ViewController setPopupBridge:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4ec4

// -[SCWebBrowserV11ViewController urlHandler]
// Type encoding: @16@0:8
// Implementation: 0x107bb4f04

// -[SCWebBrowserV11ViewController setUrlHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4f24

// -[SCWebBrowserV11ViewController isKeyboardShowing]
// Type encoding: B16@0:8
// Implementation: 0x107bb4f38

// -[SCWebBrowserV11ViewController setIsKeyboardShowing:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb4f48

// -[SCWebBrowserV11ViewController isPrefetchHintsLoadTriggered]
// Type encoding: B16@0:8
// Implementation: 0x107bb4f58

// -[SCWebBrowserV11ViewController setIsPrefetchHintsLoadTriggered:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb4f68

// -[SCWebBrowserV11ViewController isLoadingPrefetchHints]
// Type encoding: B16@0:8
// Implementation: 0x107bb4f78

// -[SCWebBrowserV11ViewController setIsLoadingPrefetchHints:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb4f88

// -[SCWebBrowserV11ViewController hasResetWKWebview]
// Type encoding: B16@0:8
// Implementation: 0x107bb4f98

// -[SCWebBrowserV11ViewController setHasResetWKWebview:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb4fa8

// -[SCWebBrowserV11ViewController navigationCountBeforeInitialHtmlResolve]
// Type encoding: Q16@0:8
// Implementation: 0x107bb4fb8

// -[SCWebBrowserV11ViewController setNavigationCountBeforeInitialHtmlResolve:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107bb4fc8

// -[SCWebBrowserV11ViewController finalURLForInitialRedirectChain]
// Type encoding: @16@0:8
// Implementation: 0x107bb4fd8

// -[SCWebBrowserV11ViewController setFinalURLForInitialRedirectChain:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb4fe8

// -[SCWebBrowserV11ViewController latestNavigationTimeBeforeInitialHtmlResolve]
// Type encoding: @16@0:8
// Implementation: 0x107bb5028

// -[SCWebBrowserV11ViewController setLatestNavigationTimeBeforeInitialHtmlResolve:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5038

// -[SCWebBrowserV11ViewController isOpeningExb]
// Type encoding: B16@0:8
// Implementation: 0x107bb5078

// -[SCWebBrowserV11ViewController setIsOpeningExb:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5088

// -[SCWebBrowserV11ViewController desiredURL]
// Type encoding: @16@0:8
// Implementation: 0x107bb5098

// -[SCWebBrowserV11ViewController setDesiredURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb50a8

// -[SCWebBrowserV11ViewController landingPageUrl]
// Type encoding: @16@0:8
// Implementation: 0x107bb50b4

// -[SCWebBrowserV11ViewController setLandingPageUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb50c4

// -[SCWebBrowserV11ViewController initialLoadStatusCode]
// Type encoding: @16@0:8
// Implementation: 0x107bb5104

// -[SCWebBrowserV11ViewController setInitialLoadStatusCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5114

// -[SCWebBrowserV11ViewController didCompleteInitialLoad]
// Type encoding: B16@0:8
// Implementation: 0x107bb5154

// -[SCWebBrowserV11ViewController setDidCompleteInitialLoad:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5164

// -[SCWebBrowserV11ViewController queueRunningWhileVisible]
// Type encoding: @16@0:8
// Implementation: 0x107bb5174

// -[SCWebBrowserV11ViewController setQueueRunningWhileVisible:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5184

// -[SCWebBrowserV11ViewController isViewVisible]
// Type encoding: B16@0:8
// Implementation: 0x107bb51c4

// -[SCWebBrowserV11ViewController setIsViewVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb51d4

// -[SCWebBrowserV11ViewController isOffScreen]
// Type encoding: B16@0:8
// Implementation: 0x107bb51e4

// -[SCWebBrowserV11ViewController isFirstTimeOnScreen]
// Type encoding: B16@0:8
// Implementation: 0x107bb51f4

// -[SCWebBrowserV11ViewController setIsFirstTimeOnScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5204

// -[SCWebBrowserV11ViewController isBrowserDismissed]
// Type encoding: B16@0:8
// Implementation: 0x107bb5214

// -[SCWebBrowserV11ViewController setIsBrowserDismissed:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5224

// -[SCWebBrowserV11ViewController isVisibleQueueSuspended]
// Type encoding: B16@0:8
// Implementation: 0x107bb5234

// -[SCWebBrowserV11ViewController setIsVisibleQueueSuspended:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5244

// -[SCWebBrowserV11ViewController onKeyboardHideBlock]
// Type encoding: @?16@0:8
// Implementation: 0x107bb5254

// -[SCWebBrowserV11ViewController setOnKeyboardHideBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107bb5264

// -[SCWebBrowserV11ViewController isNavigationInProgress]
// Type encoding: B16@0:8
// Implementation: 0x107bb5270

// -[SCWebBrowserV11ViewController setIsNavigationInProgress:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5280

// -[SCWebBrowserV11ViewController committedNavigationCount]
// Type encoding: Q16@0:8
// Implementation: 0x107bb5290

// -[SCWebBrowserV11ViewController setCommittedNavigationCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107bb52a0

// -[SCWebBrowserV11ViewController lastLoadWasDeeplink]
// Type encoding: B16@0:8
// Implementation: 0x107bb52b0

// -[SCWebBrowserV11ViewController setLastLoadWasDeeplink:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb52c0

// -[SCWebBrowserV11ViewController shouldDismissBrowserOnBackground]
// Type encoding: B16@0:8
// Implementation: 0x107bb52d0

// -[SCWebBrowserV11ViewController setShouldDismissBrowserOnBackground:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb52e0

// -[SCWebBrowserV11ViewController navigationDecisionHandlers]
// Type encoding: @16@0:8
// Implementation: 0x107bb52f0

// -[SCWebBrowserV11ViewController setNavigationDecisionHandlers:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5300

// -[SCWebBrowserV11ViewController connectionErrorActionSheet]
// Type encoding: @16@0:8
// Implementation: 0x107bb5340

// -[SCWebBrowserV11ViewController setConnectionErrorActionSheet:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5360

// -[SCWebBrowserV11ViewController javaScriptMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107bb5374

// -[SCWebBrowserV11ViewController setIsScrolledToTop:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb5384

// -[SCWebBrowserV11ViewController lastReportedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107bb5394

// -[SCWebBrowserV11ViewController setLastReportedProgress:]
// Type encoding: v24@0:8d16
// Implementation: 0x107bb53a4

// -[SCWebBrowserV11ViewController cardTransition]
// Type encoding: @16@0:8
// Implementation: 0x107bb53b4

// -[SCWebBrowserV11ViewController requestInterceptor]
// Type encoding: @16@0:8
// Implementation: 0x107bb53c4

// -[SCWebBrowserV11ViewController setRequestInterceptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb53d4

// -[SCWebBrowserV11ViewController metricHelper]
// Type encoding: @16@0:8
// Implementation: 0x107bb5414

// -[SCWebBrowserV11ViewController setMetricHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5424

// -[SCWebBrowserV11ViewController mediaPlaybackHelper]
// Type encoding: @16@0:8
// Implementation: 0x107bb5464

// -[SCWebBrowserV11ViewController setMediaPlaybackHelper:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5474

// -[SCWebBrowserV11ViewController grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x107bb54b4

// -[SCWebBrowserV11ViewController setGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb54c4

// -[SCWebBrowserV11ViewController webViewPool]
// Type encoding: @16@0:8
// Implementation: 0x107bb5504

// -[SCWebBrowserV11ViewController setWebViewPool:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5514

// -[SCWebBrowserV11ViewController webViewScriptFileCache]
// Type encoding: @16@0:8
// Implementation: 0x107bb5554

// -[SCWebBrowserV11ViewController setWebViewScriptFileCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5564

// -[SCWebBrowserV11ViewController shareHandler]
// Type encoding: @16@0:8
// Implementation: 0x107bb55a4

// -[SCWebBrowserV11ViewController setShareHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb55b4

// -[SCWebBrowserV11ViewController crashLogger]
// Type encoding: @16@0:8
// Implementation: 0x107bb55f4

// -[SCWebBrowserV11ViewController setCrashLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5604

// -[SCWebBrowserV11ViewController thirdPartyLoginHandler]
// Type encoding: @16@0:8
// Implementation: 0x107bb5644

// -[SCWebBrowserV11ViewController setThirdPartyLoginHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5654

// -[SCWebBrowserV11ViewController thirdPartyLoginPlugInExposer]
// Type encoding: @16@0:8
// Implementation: 0x107bb5694

// -[SCWebBrowserV11ViewController setThirdPartyLoginPlugInExposer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb56a4

// -[SCWebBrowserV11ViewController thirdPartyLoginSaberPluginScopeServices]
// Type encoding: @16@0:8
// Implementation: 0x107bb56e4

// -[SCWebBrowserV11ViewController setThirdPartyLoginSaberPluginScopeServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb56f4

// -[SCWebBrowserV11ViewController tapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x107bb5734

// -[SCWebBrowserV11ViewController setTapGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5744

// -[SCWebBrowserV11ViewController panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x107bb5784

// -[SCWebBrowserV11ViewController setPanGestureRecognizer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb5794

// -[SCWebBrowserV11ViewController panGestureStartTimestampMillis]
// Type encoding: d16@0:8
// Implementation: 0x107bb57d4

// -[SCWebBrowserV11ViewController setPanGestureStartTimestampMillis:]
// Type encoding: v24@0:8d16
// Implementation: 0x107bb57e4

// -[SCWebBrowserV11ViewController panGestureStartLocation]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107bb57f4

// -[SCWebBrowserV11ViewController setPanGestureStartLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x107bb5808

// -[SCWebBrowserV11ViewController didTapGestureTriggered]
// Type encoding: B16@0:8
// Implementation: 0x107bb581c

// -[SCWebBrowserV11ViewController setDidTapGestureTriggered:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb582c

// -[SCWebBrowserV11ViewController didBrowseFeatureTriggered]
// Type encoding: B16@0:8
// Implementation: 0x107bb583c

// -[SCWebBrowserV11ViewController setDidBrowseFeatureTriggered:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb584c

// -[SCWebBrowserV11ViewController exbResolvedFinalHtmlUrl]
// Type encoding: @16@0:8
// Implementation: 0x107bb585c

// -[SCWebBrowserV11ViewController setExbResolvedFinalHtmlUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb586c

// -[SCWebBrowserV11ViewController subresouceNetworkErrors]
// Type encoding: @16@0:8
// Implementation: 0x107bb58ac

// -[SCWebBrowserV11ViewController setSubresouceNetworkErrors:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bb58bc

// -[SCWebBrowserV11ViewController jsErrorCounter]
// Type encoding: i16@0:8
// Implementation: 0x107bb58fc

// -[SCWebBrowserV11ViewController setJsErrorCounter:]
// Type encoding: v20@0:8i16
// Implementation: 0x107bb590c

// -[SCWebBrowserV11ViewController initialPageLoaded]
// Type encoding: B16@0:8
// Implementation: 0x107bb591c

// -[SCWebBrowserV11ViewController setInitialPageLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb592c

// -[SCWebBrowserV11ViewController prefetchHintsNavigationActionSkipped]
// Type encoding: B16@0:8
// Implementation: 0x107bb593c

// -[SCWebBrowserV11ViewController setPrefetchHintsNavigationActionSkipped:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bb594c

// -[SCWebBrowserV11ViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bb595c

// +[SCWebBrowserV11ViewController isPreloadingSupported]
// Type encoding: B16@0:8
// Implementation: 0x107ba3388

// +[SCWebBrowserV11ViewController browserName]
// Type encoding: @16@0:8
// Implementation: 0x107ba3390

// +[SCWebBrowserV11ViewController browserType]
// Type encoding: q16@0:8
// Implementation: 0x107ba339c

// +[SCWebBrowserV11ViewController isJavaScriptMetricsSupported]
// Type encoding: B16@0:8
// Implementation: 0x107ba33a4

@end
