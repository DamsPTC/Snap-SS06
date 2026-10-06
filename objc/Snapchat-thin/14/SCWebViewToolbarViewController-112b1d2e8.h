// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebViewToolbarViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112b1d2e8

@interface SCWebViewToolbarViewController

// Property: backButton; attributes: T@"UIButton",&,N,V_backButton
// Property: forwardButton; attributes: T@"UIButton",&,N,V_forwardButton
// Property: refreshButton; attributes: T@"UIButton",&,N,V_refreshButton
// Property: request; attributes: T@"NSURLRequest",&,N,V_request
// Property: cookies; attributes: T@"NSArray",&,N,V_cookies
// Property: webView; attributes: T@"WKWebView",&,N,V_webView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[SCWebViewToolbarViewController initWithURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b94830

// -[SCWebViewToolbarViewController initWithURL:cookies:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b94838

// -[SCWebViewToolbarViewController initWithURLRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b948b4

// -[SCWebViewToolbarViewController initWithURLRequest:cookies:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106b948bc

// -[SCWebViewToolbarViewController loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b94950

// -[SCWebViewToolbarViewController loadURLRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b94994

// -[SCWebViewToolbarViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106b949e8

// -[SCWebViewToolbarViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106b94aa0

// -[SCWebViewToolbarViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106b95d44

// -[SCWebViewToolbarViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b95d98

// -[SCWebViewToolbarViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x106b95dcc

// -[SCWebViewToolbarViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b95dd8

// -[SCWebViewToolbarViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x106b95ddc

// -[SCWebViewToolbarViewController setBackButtonEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b95f20

// -[SCWebViewToolbarViewController setForwardButtonEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b95f58

// -[SCWebViewToolbarViewController setRefreshOrStopButtonEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b95f90

// -[SCWebViewToolbarViewController updateRefreshButtonStateLoading:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b95fc8

// -[SCWebViewToolbarViewController backPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b960c4

// -[SCWebViewToolbarViewController forwardPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b96140

// -[SCWebViewToolbarViewController refreshPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b961bc

// -[SCWebViewToolbarViewController webView:didStartProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b96230

// -[SCWebViewToolbarViewController webView:didReceiveServerRedirectForProvisionalNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b96240

// -[SCWebViewToolbarViewController webView:didFinishNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b96250

// -[SCWebViewToolbarViewController webView:didFailNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b96260

// -[SCWebViewToolbarViewController webView:didFailProvisionalNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b96270

// -[SCWebViewToolbarViewController webViewWebContentProcessDidTerminate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b96280

// -[SCWebViewToolbarViewController webView:decidePolicyForNavigationAction:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106b96290

// -[SCWebViewToolbarViewController webView:decidePolicyForNavigationResponse:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106b96350

// -[SCWebViewToolbarViewController updateStateForWebView:showActivityIndicator:isLoading:showError:]
// Type encoding: v36@0:8@16B24B28B32
// Implementation: 0x106b96360

// -[SCWebViewToolbarViewController _loadWebViewWithRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9645c

// -[SCWebViewToolbarViewController webView]
// Type encoding: @16@0:8
// Implementation: 0x106b967dc

// -[SCWebViewToolbarViewController setWebView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b967ec

// -[SCWebViewToolbarViewController backButton]
// Type encoding: @16@0:8
// Implementation: 0x106b9682c

// -[SCWebViewToolbarViewController setBackButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9683c

// -[SCWebViewToolbarViewController forwardButton]
// Type encoding: @16@0:8
// Implementation: 0x106b9687c

// -[SCWebViewToolbarViewController setForwardButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9688c

// -[SCWebViewToolbarViewController refreshButton]
// Type encoding: @16@0:8
// Implementation: 0x106b968cc

// -[SCWebViewToolbarViewController setRefreshButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b968dc

// -[SCWebViewToolbarViewController request]
// Type encoding: @16@0:8
// Implementation: 0x106b9691c

// -[SCWebViewToolbarViewController setRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9692c

// -[SCWebViewToolbarViewController cookies]
// Type encoding: @16@0:8
// Implementation: 0x106b9696c

// -[SCWebViewToolbarViewController setCookies:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b9697c

// -[SCWebViewToolbarViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b969bc

@end
