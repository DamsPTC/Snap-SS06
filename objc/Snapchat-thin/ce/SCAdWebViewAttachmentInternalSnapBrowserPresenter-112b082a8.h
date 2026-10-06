// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebViewAttachmentInternalSnapBrowserPresenter
// Superclass: NSObject
// Address: 0x112b082a8

@interface SCAdWebViewAttachmentInternalSnapBrowserPresenter

// Property: delegate; attributes: T@"<SCAdWebViewAttachmentBrowserPresenting>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter initWithAttachment:uiContainer:urlInterceptor:adCrashLogger:browserScopeExposer:timeProvider:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1069831dc

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter canHandleAttachment:]
// Type encoding: B24@0:8@16
// Implementation: 0x106983444

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x106983498

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter dismissAttachment]
// Type encoding: v16@0:8
// Implementation: 0x1069834d0

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter presentAttachment]
// Type encoding: v16@0:8
// Implementation: 0x106983680

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069838fc

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserPresented:]
// Type encoding: v24@0:8@16
// Implementation: 0x106983ae8

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:didReceiveResponse:url:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x106983b4c

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidReceiveGAHit:hitTimestampMs:isPageView:isLandingPage:]
// Type encoding: v40@0:8@16d24B32B36
// Implementation: 0x106983bcc

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidInterceptPixelRequest:]
// Type encoding: v24@0:8d16
// Implementation: 0x106983cd4

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserInterimUpdate:performanceMetrics:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x106983d88

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _onWebBrowser:performanceMetrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106983dfc

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _webViewLatencyValue:startTimestamp:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x106984510

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowserDidFinalizeJavaScriptMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106984548

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:onEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069845bc

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:onUserInteractionEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10698460c

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter webBrowser:didFinishLoadWithSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10698465c

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _onBrowserExposed:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069846b0

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _didFailToPresent:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069847c8

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x106984838

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter eventHandler]
// Type encoding: @?16@0:8
// Implementation: 0x1069848b4

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _createWebBrowserConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069848fc

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter _onWebBrowserSessionEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106984d90

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x106984e14

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106984e2c

// -[SCAdWebViewAttachmentInternalSnapBrowserPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106984e38

@end
