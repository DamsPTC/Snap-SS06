// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdWebTrackingHelper
// Superclass: NSObject
// Address: 0x112adeae8

@interface SCAdWebTrackingHelper


// -[SCAdWebTrackingHelper initWithGrapheneRegistry:interactionHistoryTracker:userTrackedLogger:userNotTrackedLogger:adShake2ReportLogger:adLifecycleTimestampsTracker:webviewMetricsValidator:queuePerformer:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10644a6fc

// -[SCAdWebTrackingHelper didReceiveWebViewContext:collectionItemIndex:adRequestClientId:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10644a8a4

// -[SCAdWebTrackingHelper didCloseWebViewWithTrackInfo:collectionItemIndex:adRequestClientId:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10644a8ac

// -[SCAdWebTrackingHelper didReceiveWebBrowserSessionEvent:collectionItemIndex:adRequestClientId:snapIndex:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10644a8b4

// -[SCAdWebTrackingHelper didSwipeUpRemoteWebPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10644a8bc

// -[SCAdWebTrackingHelper didLoadURLInBrowser:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10644a930

// -[SCAdWebTrackingHelper didLoadURLInExternalBrowser:snapIndex:attachmentTriggerType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x10644a9f4

// -[SCAdWebTrackingHelper didReceiveInitialResponse:url:adResponse:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10644aa4c

// -[SCAdWebTrackingHelper didInitialRedirect:]
// Type encoding: v24@0:8@16
// Implementation: 0x10644aba8

// -[SCAdWebTrackingHelper onLifecycleEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10644ac3c

// -[SCAdWebTrackingHelper didFinishInitialNavigation:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10644ac8c

// -[SCAdWebTrackingHelper didReceiveCloseEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10644ae00

// -[SCAdWebTrackingHelper emitWebExtEligibleWithAdResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10644aea8

// -[SCAdWebTrackingHelper emitThirdPartyAnalyticsMirrorEvent:event:timestampMs:browser3pAnalyticsType:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x10644af10

// -[SCAdWebTrackingHelper onWebBrowserEvent:identifier:snapIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x10644b2b0

// -[SCAdWebTrackingHelper didReceivePerformanceEntries:serveItemId:inputUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10644b4c8

// -[SCAdWebTrackingHelper didDetectWebviewErrors:adId:serveItemId:inputUrl:loadprefetchedHTML:jsErrorCount:]
// Type encoding: v56@0:8@16@24@32@40B48i52
// Implementation: 0x10644b650

// -[SCAdWebTrackingHelper _logBlizzardEventUponDetectingWebviewErrors:serveItemId:inputUrl:adId:loadPrefetchedHTML:jsErrorCount:]
// Type encoding: v56@0:8@16@24@32@40B48i52
// Implementation: 0x10644b820

// -[SCAdWebTrackingHelper _logBlizzardEventForPerformanceEntries:serveItemId:inputUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10644bbe4

// -[SCAdWebTrackingHelper _emitWebMetric:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10644c40c

// -[SCAdWebTrackingHelper _metricWithSharedDimensions:adResponse:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10644c498

// -[SCAdWebTrackingHelper _addTimer:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10644c5a0

// -[SCAdWebTrackingHelper .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10644c688

@end
