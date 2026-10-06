// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebViewPreloadWorker
// Superclass: NSObject
// Address: 0x112a61ea8

@interface SCAdWebViewPreloadWorker

// Property: workerId; attributes: T@"NSString",R,C,N,V_workerId
// Property: preloadedUrl; attributes: T@"NSString",C,N,V_preloadedUrl
// Property: wkWebView; attributes: T@"SCWebView",&,N,V_wkWebView
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebViewPreloadWorker initWithWorkerId:preloadWorkerDelegate:browserViewProvider:webViewPool:grapheneRegistry:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10577add4

// -[SCAdWebViewPreloadWorker preloadWebsite:]
// Type encoding: v24@0:8@16
// Implementation: 0x10577af08

// -[SCAdWebViewPreloadWorker _preloadUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10577b024

// -[SCAdWebViewPreloadWorker webView]
// Type encoding: @16@0:8
// Implementation: 0x10577b0bc

// -[SCAdWebViewPreloadWorker webView:didFinishNavigation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10577b2c4

// -[SCAdWebViewPreloadWorker webView:didFailNavigation:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10577b420

// -[SCAdWebViewPreloadWorker workerId]
// Type encoding: @16@0:8
// Implementation: 0x10577b4f0

// -[SCAdWebViewPreloadWorker preloadedUrl]
// Type encoding: @16@0:8
// Implementation: 0x10577b4f8

// -[SCAdWebViewPreloadWorker setPreloadedUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10577b500

// -[SCAdWebViewPreloadWorker wkWebView]
// Type encoding: @16@0:8
// Implementation: 0x10577b508

// -[SCAdWebViewPreloadWorker setWkWebView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10577b510

// -[SCAdWebViewPreloadWorker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10577b540

@end
