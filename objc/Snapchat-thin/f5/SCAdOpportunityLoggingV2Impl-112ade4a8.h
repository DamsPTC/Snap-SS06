// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdOpportunityLoggingV2Impl
// Superclass: NSObject
// Address: 0x112ade4a8

@interface SCAdOpportunityLoggingV2Impl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdOpportunityLoggingV2Impl initWithBlizzardLogger:timeProvider:adConfigProviderV2:applicationLifecycleEvents:grapheneRegistry:opportunityNonFatalReporter:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106418784

// -[SCAdOpportunityLoggingV2Impl onSessionStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x106418a98

// -[SCAdOpportunityLoggingV2Impl onAdRequestStart:storySessionId:viewLocation:]
// Type encoding: v40@0:8Q16@24q32
// Implementation: 0x106418ba4

// -[SCAdOpportunityLoggingV2Impl onAdRequestFinish:adResponse:viewLocation:]
// Type encoding: v40@0:8Q16@24q32
// Implementation: 0x106418ccc

// -[SCAdOpportunityLoggingV2Impl onAdMediaDownloadStart:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106418df4

// -[SCAdOpportunityLoggingV2Impl onAdMediaDownloadFinish:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106418ee0

// -[SCAdOpportunityLoggingV2Impl onPagedToNextUnviewedStory:adOpportunityMissType:isFromAd:isToAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v64@0:8Q16q24B32B36q40q48d56
// Implementation: 0x106418fcc

// -[SCAdOpportunityLoggingV2Impl onMidRollSlotEnter:adOpportunityMissType:isToAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v52@0:8Q16q24B32q36d44
// Implementation: 0x106419108

// -[SCAdOpportunityLoggingV2Impl onMidRollGroupBoundary:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641922c

// -[SCAdOpportunityLoggingV2Impl onIsBrandSafeSlot:adProductType:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x106419318

// -[SCAdOpportunityLoggingV2Impl onInsertionRulesSatisfied:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106419410

// -[SCAdOpportunityLoggingV2Impl onInsertionRuleEvaluation:isSatisfied:storyThreshold:snapThreshold:timeThresholdMillis:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v76@0:8Q16B24q28q36d44q52q60d68
// Implementation: 0x1064194fc

// -[SCAdOpportunityLoggingV2Impl onTryInsertionStarted:adOpportunityMissType:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x106419644

// -[SCAdOpportunityLoggingV2Impl onInsertionInProgress:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106419734

// -[SCAdOpportunityLoggingV2Impl onInsertionFinished:isSuccessful:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x106419820

// -[SCAdOpportunityLoggingV2Impl onViewingSessionClosed]
// Type encoding: v16@0:8
// Implementation: 0x106419918

// -[SCAdOpportunityLoggingV2Impl _onSessionStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064199ec

// -[SCAdOpportunityLoggingV2Impl _onAdRequestStart:storySessionId:viewLocation:]
// Type encoding: v40@0:8Q16@24q32
// Implementation: 0x106419a2c

// -[SCAdOpportunityLoggingV2Impl _onAdRequestFinish:adResponse:viewLocation:]
// Type encoding: v40@0:8Q16@24q32
// Implementation: 0x106419dc0

// -[SCAdOpportunityLoggingV2Impl _onAdMediaDownloadStart:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641a088

// -[SCAdOpportunityLoggingV2Impl _onAdMediaDownloadFinish:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641a1c8

// -[SCAdOpportunityLoggingV2Impl _onPagedToNextUnviewedStory:adOpportunityMissType:isFromAd:isToAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v64@0:8Q16q24B32B36q40q48d56
// Implementation: 0x10641a308

// -[SCAdOpportunityLoggingV2Impl _enterSlotForProductType:adOpportunityMissType:isToAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v60@0:8Q16q24B32q36q44d52
// Implementation: 0x10641a478

// -[SCAdOpportunityLoggingV2Impl _onMidRollSlotEnter:adOpportunityMissType:isToAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v52@0:8Q16q24B32q36d44
// Implementation: 0x10641aa4c

// -[SCAdOpportunityLoggingV2Impl _onMidRollGroupBoundary:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641aba8

// -[SCAdOpportunityLoggingV2Impl _onIsBrandSafeSlot:adProductType:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10641ac44

// -[SCAdOpportunityLoggingV2Impl _onInsertionRulesSatisfied:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641ad64

// -[SCAdOpportunityLoggingV2Impl _onInsertionRuleEvaluation:isSatisfied:storyThreshold:snapThreshold:timeThresholdMillis:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v76@0:8Q16B24q28q36d44q52q60d68
// Implementation: 0x10641ae44

// -[SCAdOpportunityLoggingV2Impl _onTryInsertionStarted:adOpportunityMissType:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x10641b078

// -[SCAdOpportunityLoggingV2Impl _onInsertionInProgress:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641b280

// -[SCAdOpportunityLoggingV2Impl _onInsertionFinished:isSuccessful:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x10641b45c

// -[SCAdOpportunityLoggingV2Impl _onViewingSessionClosed]
// Type encoding: v16@0:8
// Implementation: 0x10641b664

// -[SCAdOpportunityLoggingV2Impl _sendAdOpportunityEventIfNeeded:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641b780

// -[SCAdOpportunityLoggingV2Impl _initState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10641c1d8

// -[SCAdOpportunityLoggingV2Impl _appDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10641c360

// -[SCAdOpportunityLoggingV2Impl _getCurrentTimeMillis]
// Type encoding: d16@0:8
// Implementation: 0x10641c3c0

// -[SCAdOpportunityLoggingV2Impl _updateAdOpportunityEventHistory:type:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x10641c418

// -[SCAdOpportunityLoggingV2Impl _updateAdSlotEventHistory:type:updateBlock:]
// Type encoding: @40@0:8@16Q24@?32
// Implementation: 0x10641c4f8

// -[SCAdOpportunityLoggingV2Impl _mergeAdSlotEventHistory:slotEventHistoryList:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10641c6f4

// -[SCAdOpportunityLoggingV2Impl _getAdSlotEventHistoryString:]
// Type encoding: @24@0:8@16
// Implementation: 0x10641c7fc

// -[SCAdOpportunityLoggingV2Impl _getAdSlotEventTypeShortName:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10641c9b4

// -[SCAdOpportunityLoggingV2Impl _logAdOpportunityFunnelEvent:viewLocation:stage:adResponse:]
// Type encoding: v48@0:8Q16q24q32@40
// Implementation: 0x10641c9dc

// -[SCAdOpportunityLoggingV2Impl _logInsertionRuleEvaluationFunnelEvent:viewLocation:adResponse:isSatisfied:storyThreshold:snapThreshold:timeThresholdMillis:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v92@0:8Q16q24@32B40q44q52d60q68q76d84
// Implementation: 0x10641ca48

// -[SCAdOpportunityLoggingV2Impl _logAdOpportunityErrorFunnelEvent:viewLocation:stage:adResponse:error:]
// Type encoding: v56@0:8Q16q24q32@40@48
// Implementation: 0x10641cb30

// -[SCAdOpportunityLoggingV2Impl _logSlotEnterFunnelEvent:viewLocation:adResponse:isBrandSafe:isAd:storyViewCountSinceLastAd:snapViewCountSinceLastAd:timeViewedMillisSinceLastAd:]
// Type encoding: v72@0:8Q16q24@32B40B44q48q56d64
// Implementation: 0x10641cbdc

// -[SCAdOpportunityLoggingV2Impl _createAdOpportunityFunnelEvent:viewLocation:adResponse:]
// Type encoding: @40@0:8Q16q24@32
// Implementation: 0x10641cca0

// -[SCAdOpportunityLoggingV2Impl _logAdOpportunityOperationalMetric:adSlotInfo:adResponse:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x10641cff8

// -[SCAdOpportunityLoggingV2Impl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10641d394

@end
