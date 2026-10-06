// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: FBSDKWebDialogView
// Superclass: UIView
// Address: 0x1129e7788

@interface FBSDKWebDialogView

// Property: closeButton; attributes: T@"UIButton",&,N,V_closeButton
// Property: loadingView; attributes: T@"UIActivityIndicatorView",&,N,V_loadingView
// Property: webView; attributes: T@"<FBSDKWebView>",&,N,V_webView
// Property: delegate; attributes: T@"<FBSDKWebDialogViewDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[FBSDKWebDialogView initWithFrame:]
// Type encoding: @48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x104990ba0

// -[FBSDKWebDialogView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x104990e90

// -[FBSDKWebDialogView loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104990ef0

// -[FBSDKWebDialogView stopLoading]
// Type encoding: v16@0:8
// Implementation: 0x104990f98

// -[FBSDKWebDialogView drawRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x104990fec

// -[FBSDKWebDialogView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x104991124

// -[FBSDKWebDialogView _close:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049913e4

// -[FBSDKWebDialogView webView:didFailNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10499141c

// -[FBSDKWebDialogView webView:decidePolicyForNavigationAction:decisionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104991534

// -[FBSDKWebDialogView webView:didFinishNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1049918d4

// -[FBSDKWebDialogView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10499192c

// -[FBSDKWebDialogView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10499194c

// -[FBSDKWebDialogView closeButton]
// Type encoding: @16@0:8
// Implementation: 0x104991960

// -[FBSDKWebDialogView setCloseButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x104991970

// -[FBSDKWebDialogView loadingView]
// Type encoding: @16@0:8
// Implementation: 0x104991984

// -[FBSDKWebDialogView setLoadingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x104991994

// -[FBSDKWebDialogView webView]
// Type encoding: @16@0:8
// Implementation: 0x1049919a8

// -[FBSDKWebDialogView setWebView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1049919b8

// -[FBSDKWebDialogView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1049919cc

// +[FBSDKWebDialogView configureWithWebViewProvider:urlOpener:errorFactory:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104990aa4

// +[FBSDKWebDialogView webViewProvider]
// Type encoding: @16@0:8
// Implementation: 0x104990b4c

// +[FBSDKWebDialogView setWebViewProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x104990b58

// +[FBSDKWebDialogView urlOpener]
// Type encoding: @16@0:8
// Implementation: 0x104990b68

// +[FBSDKWebDialogView setUrlOpener:]
// Type encoding: v24@0:8@16
// Implementation: 0x104990b74

// +[FBSDKWebDialogView errorFactory]
// Type encoding: @16@0:8
// Implementation: 0x104990b84

// +[FBSDKWebDialogView setErrorFactory:]
// Type encoding: v24@0:8@16
// Implementation: 0x104990b90

@end
