// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebViewAttachmentPresenter
// Superclass: NSObject
// Address: 0x112b082f8

@interface SCAdWebViewAttachmentPresenter

// Property: delegate; attributes: T@"<SCAdAttachmentPresenterDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdWebViewAttachmentPresenter initWithAttachment:uiContainer:urlInterceptor:delegate:adCrashLogger:browserScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x106984ee4

// -[SCAdWebViewAttachmentPresenter initWithAttachment:uiContainer:urlInterceptor:delegate:adCrashLogger:internalSnapBrowserPresenter:externalBrowserPresenter:webBrowsingConfigProvider:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x106985354

// -[SCAdWebViewAttachmentPresenter canHandleAttachment:]
// Type encoding: B24@0:8@16
// Implementation: 0x10698549c

// -[SCAdWebViewAttachmentPresenter isPresenting]
// Type encoding: B16@0:8
// Implementation: 0x1069854bc

// -[SCAdWebViewAttachmentPresenter presentAttachment]
// Type encoding: v16@0:8
// Implementation: 0x1069854f8

// -[SCAdWebViewAttachmentPresenter dismissAttachment]
// Type encoding: v16@0:8
// Implementation: 0x10698557c

// -[SCAdWebViewAttachmentPresenter activePresenter]
// Type encoding: @16@0:8
// Implementation: 0x106985650

// -[SCAdWebViewAttachmentPresenter webBrowserDidPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069856d0

// -[SCAdWebViewAttachmentPresenter webBrowserDidDismissWithAdAttachmentLoadingMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106985758

// -[SCAdWebViewAttachmentPresenter webBrowserDidFailToPresent:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106985804

// -[SCAdWebViewAttachmentPresenter webBrowserDidFailToDismiss:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069858b4

// -[SCAdWebViewAttachmentPresenter webBrowserPresenterDidTrigger]
// Type encoding: v16@0:8
// Implementation: 0x106985964

// -[SCAdWebViewAttachmentPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x106985a30

// -[SCAdWebViewAttachmentPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106985a48

// -[SCAdWebViewAttachmentPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106985a54

// +[SCAdWebViewAttachmentPresenter presenterWithAttachment:uiContainer:urlInterceptor:delegate:adCrashLogger:browserScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:pixelMatchingMetricsManager:pixelServeItemSyncManager:webBrowsingConfigProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1069851f4

@end
