// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaWebViewWrapper
// Superclass: NSObject
// Address: 0x112b736e8

@interface SCOperaWebViewWrapper

// Property: _id; attributes: T@"NSString",R,C,N,V__id
// Property: webView; attributes: T@"SCOperaWebView",R,N,V_webView
// Property: delegate; attributes: T@"<SCOperaWebViewWrapperDelegate>",W,N,V_delegate
// Property: pageLoadErrorCount; attributes: Tq,R,N,V_pageLoadErrorCount
// Property: pageLoadCount; attributes: Tq,R,N,V_pageLoadCount
// Property: firstPageErrorCode; attributes: T@"NSNumber",R,N,V_firstPageErrorCode
// Property: firstPageHttpStatusCode; attributes: T@"NSNumber",R,N,V_firstPageHttpStatusCode
// Property: redirectCount; attributes: Tq,R,N,V_redirectCount
// Property: didLoadStart; attributes: TB,R,N,V_didLoadStart
// Property: didLoadSucceed; attributes: TB,R,N,V_didLoadSucceed
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaWebViewWrapper initWithUrlInterceptor:enableJavaScriptBridge:safeBrowsingChecker:configDict:audioSession:]
// Type encoding: @52@0:8@16B24@28@36@44
// Implementation: 0x107b6dd30

// -[SCOperaWebViewWrapper resetWebViewWithConfigDict:enableJavaScriptBridge:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107b6dee4

// -[SCOperaWebViewWrapper tearDown]
// Type encoding: v16@0:8
// Implementation: 0x107b6e59c

// -[SCOperaWebViewWrapper dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107b6e624

// -[SCOperaWebViewWrapper showPendingUI]
// Type encoding: v16@0:8
// Implementation: 0x107b6e818

// -[SCOperaWebViewWrapper webView:decidePolicyForNavigationAction:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107b6e924

// -[SCOperaWebViewWrapper webView:shouldStartLoadWithRequest:navigationType:]
// Type encoding: B40@0:8@16@24q32
// Implementation: 0x107b6ef6c

// -[SCOperaWebViewWrapper webView:didUpdateProgress:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x107b6f344

// -[SCOperaWebViewWrapper webViewDidStartLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b6f38c

// -[SCOperaWebViewWrapper webViewDidFinishLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b6f408

// -[SCOperaWebViewWrapper webView:didReceiveServerRedirectForProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6f4e0

// -[SCOperaWebViewWrapper webView:didCommitNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6f4f8

// -[SCOperaWebViewWrapper webView:didReceiveResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6f504

// -[SCOperaWebViewWrapper webView:didFailLoadWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6f594

// -[SCOperaWebViewWrapper _shouldOverrideAllowlisted]
// Type encoding: B16@0:8
// Implementation: 0x107b6f88c

// -[SCOperaWebViewWrapper showSafeBrowsingWarning:urlType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107b6f8a8

// -[SCOperaWebViewWrapper showConnectionError]
// Type encoding: v16@0:8
// Implementation: 0x107b6f920

// -[SCOperaWebViewWrapper showGeneralError]
// Type encoding: v16@0:8
// Implementation: 0x107b6f954

// -[SCOperaWebViewWrapper webBrowsingURLInterceptor:didClickCancelForLeavingAppForURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6f988

// -[SCOperaWebViewWrapper webBrowsingURLInterceptor:didClickOKForLeavingAppForURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6f9c0

// -[SCOperaWebViewWrapper urlInterceptorConfigUpdates]
// Type encoding: @16@0:8
// Implementation: 0x107b6f9f8

// -[SCOperaWebViewWrapper runSafeBrowsingCheckOnUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b6fa08

// -[SCOperaWebViewWrapper _didCheckSafeBrowsingForURL:urlType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107b6fca8

// -[SCOperaWebViewWrapper _navigationItemForURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b6fcfc

// -[SCOperaWebViewWrapper _navigationActionItemForTargetId:]
// Type encoding: @24@0:8@16
// Implementation: 0x107b6fdd8

// -[SCOperaWebViewWrapper _updateNavigationItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b6fe90

// -[SCOperaWebViewWrapper _updateNavigationActionItem:targetId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107b6ff8c

// -[SCOperaWebViewWrapper _checkSafeBrowsingForURL:webView:targetId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b70044

// -[SCOperaWebViewWrapper _handleCheckResultForURL:webView:navigationAction:urlType:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x107b702cc

// -[SCOperaWebViewWrapper _cancelActionHandlersForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b705b4

// -[SCOperaWebViewWrapper notifyWebPageOnShow:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b707b4

// -[SCOperaWebViewWrapper notifyWebPageOnHide]
// Type encoding: v16@0:8
// Implementation: 0x107b7086c

// -[SCOperaWebViewWrapper notifyWebPageDidFinishLoad]
// Type encoding: v16@0:8
// Implementation: 0x107b7092c

// -[SCOperaWebViewWrapper _id]
// Type encoding: @16@0:8
// Implementation: 0x107b709a4

// -[SCOperaWebViewWrapper webView]
// Type encoding: @16@0:8
// Implementation: 0x107b709ac

// -[SCOperaWebViewWrapper delegate]
// Type encoding: @16@0:8
// Implementation: 0x107b709b4

// -[SCOperaWebViewWrapper setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b709cc

// -[SCOperaWebViewWrapper pageLoadErrorCount]
// Type encoding: q16@0:8
// Implementation: 0x107b709d8

// -[SCOperaWebViewWrapper pageLoadCount]
// Type encoding: q16@0:8
// Implementation: 0x107b709e0

// -[SCOperaWebViewWrapper firstPageErrorCode]
// Type encoding: @16@0:8
// Implementation: 0x107b709e8

// -[SCOperaWebViewWrapper firstPageHttpStatusCode]
// Type encoding: @16@0:8
// Implementation: 0x107b709f0

// -[SCOperaWebViewWrapper redirectCount]
// Type encoding: q16@0:8
// Implementation: 0x107b709f8

// -[SCOperaWebViewWrapper didLoadStart]
// Type encoding: B16@0:8
// Implementation: 0x107b70a00

// -[SCOperaWebViewWrapper didLoadSucceed]
// Type encoding: B16@0:8
// Implementation: 0x107b70a08

// -[SCOperaWebViewWrapper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b70a10

@end
