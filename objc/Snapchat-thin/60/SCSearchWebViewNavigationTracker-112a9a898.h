// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSearchWebViewNavigationTracker
// Superclass: NSObject
// Address: 0x112a9a898

@interface SCSearchWebViewNavigationTracker

// Property: delegate; attributes: T@"<SCSearchWebViewNavigationTrackerDelegate>",W,N,V_delegate
// Property: webView; attributes: T@"WKWebView",R,N,V_webView
// Property: hasCommittedNavigation; attributes: TB,R,N,V_hasCommittedNavigation
// Property: canGoBack; attributes: TB,R,N,V_canGoBack
// Property: externalLink; attributes: T@"NSURL",R,N,V_externalLink
// Property: currentUrl; attributes: T@"NSURL",R,N
// Property: currentNavigationType; attributes: T{?=@q},R,N,V_currentNavigationType
// Property: previousNavigationType; attributes: T{?=@q},R,N,V_previousNavigationType
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSearchWebViewNavigationTracker initWithWebView:safeBrowsingChecker:circumstanceEngine:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105d00378

// -[SCSearchWebViewNavigationTracker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x105d00494

// -[SCSearchWebViewNavigationTracker back]
// Type encoding: v16@0:8
// Implementation: 0x105d00508

// -[SCSearchWebViewNavigationTracker currentUrl]
// Type encoding: @16@0:8
// Implementation: 0x105d00528

// -[SCSearchWebViewNavigationTracker webView:decidePolicyForNavigationAction:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105d0056c

// -[SCSearchWebViewNavigationTracker webView:didStartProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d00914

// -[SCSearchWebViewNavigationTracker webView:didReceiveServerRedirectForProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d00918

// -[SCSearchWebViewNavigationTracker webView:didFailProvisionalNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d0091c

// -[SCSearchWebViewNavigationTracker webView:didCommitNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d00958

// -[SCSearchWebViewNavigationTracker webView:didFailNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d009e4

// -[SCSearchWebViewNavigationTracker _updateHasCommittedNavigation:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d00a64

// -[SCSearchWebViewNavigationTracker _navigationItemForURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d00a78

// -[SCSearchWebViewNavigationTracker _updateNavigationItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d00b54

// -[SCSearchWebViewNavigationTracker _checkSafeBrowsingForURL:webView:navigationAction:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d00c50

// -[SCSearchWebViewNavigationTracker _handleCheckResultForURL:webView:navigationAction:urlType:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x105d00e8c

// -[SCSearchWebViewNavigationTracker _initWebViewKVO]
// Type encoding: v16@0:8
// Implementation: 0x105d010c8

// -[SCSearchWebViewNavigationTracker _updateProgress]
// Type encoding: v16@0:8
// Implementation: 0x105d012b8

// -[SCSearchWebViewNavigationTracker _updateNavigationTypesWithURLString:navigationType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105d012f8

// -[SCSearchWebViewNavigationTracker delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d01384

// -[SCSearchWebViewNavigationTracker setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d0139c

// -[SCSearchWebViewNavigationTracker webView]
// Type encoding: @16@0:8
// Implementation: 0x105d013a8

// -[SCSearchWebViewNavigationTracker hasCommittedNavigation]
// Type encoding: B16@0:8
// Implementation: 0x105d013b0

// -[SCSearchWebViewNavigationTracker canGoBack]
// Type encoding: B16@0:8
// Implementation: 0x105d013b8

// -[SCSearchWebViewNavigationTracker externalLink]
// Type encoding: @16@0:8
// Implementation: 0x105d013c0

// -[SCSearchWebViewNavigationTracker currentNavigationType]
// Type encoding: {?=@q}16@0:8
// Implementation: 0x105d013c8

// -[SCSearchWebViewNavigationTracker previousNavigationType]
// Type encoding: {?=@q}16@0:8
// Implementation: 0x105d013f8

// -[SCSearchWebViewNavigationTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d01428

@end
