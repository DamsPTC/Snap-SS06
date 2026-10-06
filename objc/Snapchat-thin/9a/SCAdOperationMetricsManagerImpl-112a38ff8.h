// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdOperationMetricsManagerImpl
// Superclass: NSObject
// Address: 0x112a38ff8

@interface SCAdOperationMetricsManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdOperationMetricsManagerImpl initWithGrapheneRegistry:debugNetworkResponseLogger:lifecycleWatermarkMetricsManager:userTrackedLogger:adConfigProvider:contextExperimentService:flipper:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10544d134

// -[SCAdOperationMetricsManagerImpl initWithGrapheneRegistry:debugNetworkResponseLogger:lifecycleWatermarkMetricsManager:userTrackedLogger:adConfigProvider:contextExperimentService:flipper:useSwiftImplementation:]
// Type encoding: @76@0:8@16@24@32@40@48@56@64B72
// Implementation: 0x1003ff824

// -[SCAdOperationMetricsManagerImpl _stringFromRequestType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10544d15c

// -[SCAdOperationMetricsManagerImpl _stringFromRequestFailedReason:]
// Type encoding: @24@0:8q16
// Implementation: 0x10544d1a0

// -[SCAdOperationMetricsManagerImpl _stringFromInternalError:]
// Type encoding: @24@0:8q16
// Implementation: 0x10544d1e4

// -[SCAdOperationMetricsManagerImpl _stringFromInternalErrorSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x10544d228

// -[SCAdOperationMetricsManagerImpl serveRequestSubmitted:requestURL:requestType:debugViewContext:isPrimary:]
// Type encoding: v52@0:8@16@24Q32@40B48
// Implementation: 0x10544d26c

// -[SCAdOperationMetricsManagerImpl logAdServeRequestInfoBlizzardEvent:requestURL:isPrimary:statusCode:adResponseList:]
// Type encoding: v52@0:8@16@24B32q36@44
// Implementation: 0x10544d4d8

// -[SCAdOperationMetricsManagerImpl serveRequestFailed:errorResponseType:requestType:failedReason:isPrimary:]
// Type encoding: v52@0:8@16Q24Q32q40B48
// Implementation: 0x10544dbc0

// -[SCAdOperationMetricsManagerImpl serveResponseStartsDeserializing:isPrimary:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10544dd84

// -[SCAdOperationMetricsManagerImpl serveResponseFinishesDeserializing:responseSize:deserializationLatency:serveItemsCount:isPrimary:]
// Type encoding: v52@0:8Q16q24d32q40B48
// Implementation: 0x10544dfd0

// -[SCAdOperationMetricsManagerImpl serveResponseReceived:adIdentifier:adInsertionConfigDescription:adRequestDescription:isPrimary:]
// Type encoding: v52@0:8@16@24@32@40B48
// Implementation: 0x10544e1cc

// -[SCAdOperationMetricsManagerImpl serveResponseResolved:isPrimary:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10544e1d0

// -[SCAdOperationMetricsManagerImpl serveRequestResolved:statusCode:requestLatencyInSec:isPrimary:]
// Type encoding: v44@0:8@16q24d32B40
// Implementation: 0x10544e8f8

// -[SCAdOperationMetricsManagerImpl logReinitFromWrongRegion:]
// Type encoding: v20@0:8B16
// Implementation: 0x10544ebd0

// -[SCAdOperationMetricsManagerImpl logCOInfoEventWithCOResults:said:idfv:idfa:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10544ecac

// -[SCAdOperationMetricsManagerImpl trackRequestSubmitted:isPrimary:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10544eee4

// -[SCAdOperationMetricsManagerImpl logRefinedTrackRequestSize:impressionDataSize:encryptedAdTrackDataSize:]
// Type encoding: v40@0:8Q16Q24Q32
// Implementation: 0x10544f198

// -[SCAdOperationMetricsManagerImpl logLateTrackRequestSkipWithDelay:adProductType:isRetro:]
// Type encoding: v36@0:8d16Q24B32
// Implementation: 0x10544f328

// -[SCAdOperationMetricsManagerImpl logRequestFailedReason:adIdentifier:requestType:isPrimary:]
// Type encoding: v44@0:8q16@24Q32B40
// Implementation: 0x10544f58c

// -[SCAdOperationMetricsManagerImpl requestSubmittedAdIdentifier:requestType:requestURL:targetingParams:debugViewContext:isPrimary:]
// Type encoding: v60@0:8@16Q24@32@40@48B56
// Implementation: 0x10544f71c

// -[SCAdOperationMetricsManagerImpl requestResolvedAdIdentifiers:adIds:requestType:statusCode:requestURL:requestLatencyInSec:adProductType:isPrimary:requestSize:responseSize:]
// Type encoding: v92@0:8@16@24Q32q40@48d56Q64B72Q76Q84
// Implementation: 0x10544f87c

// -[SCAdOperationMetricsManagerImpl requestResolvedAdIdentifiers:requestType:statusCode:requestURL:requestLatencyInSec:adProductType:isPrimary:]
// Type encoding: v68@0:8@16Q24q32@40d48Q56B64
// Implementation: 0x1054500d4

// -[SCAdOperationMetricsManagerImpl logAdvertiserIdStatus:requestType:isPrimary:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105450110

// -[SCAdOperationMetricsManagerImpl adExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x105450288

// -[SCAdOperationMetricsManagerImpl logInvalidUserData]
// Type encoding: v16@0:8
// Implementation: 0x1054502d8

// -[SCAdOperationMetricsManagerImpl logInvalidAdData]
// Type encoding: v16@0:8
// Implementation: 0x105450330

// -[SCAdOperationMetricsManagerImpl _blizzardWebViewFeatureFromWebViewFeature:]
// Type encoding: q24@0:8q16
// Implementation: 0x105450388

// -[SCAdOperationMetricsManagerImpl logWebViewUserInteractionInfo:withAdData:screenSize:]
// Type encoding: v48@0:8@16@24{CGSize=dd}32
// Implementation: 0x105450398

// -[SCAdOperationMetricsManagerImpl _stringErrorFromEnum:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10545079c

// -[SCAdOperationMetricsManagerImpl logRenderDataInvalidWithError:isPrimaryAdResponse:metricsContext:]
// Type encoding: v36@0:8Q16B24@28
// Implementation: 0x1054507c4

// -[SCAdOperationMetricsManagerImpl logRenderDataInvalidWithError:isPrimaryAdResponse:metricsContext:errorDetail:]
// Type encoding: v44@0:8Q16B24@28@36
// Implementation: 0x1054509c4

// -[SCAdOperationMetricsManagerImpl logInvalidWebviewUrl:adIdentifier:serveItemId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105450be4

// -[SCAdOperationMetricsManagerImpl logCidMetadata:serveItemId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105450ca8

// -[SCAdOperationMetricsManagerImpl _parseExbMode:]
// Type encoding: q24@0:8Q16
// Implementation: 0x105450d98

// -[SCAdOperationMetricsManagerImpl logInitResponse:isPrimary:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105450da8

// -[SCAdOperationMetricsManagerImpl initRequestResolved:statusCode:allUpdatesDeprecationEnabled:isPrimary:]
// Type encoding: v40@0:8d16q24B32B36
// Implementation: 0x105450dac

// -[SCAdOperationMetricsManagerImpl logSnapTokenFailedToGenerate:error:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x105451104

// -[SCAdOperationMetricsManagerImpl logSnapTokenGenerationLatencyInSec:isPrimary:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105451214

// -[SCAdOperationMetricsManagerImpl logInitRequestIssue:isPrimary:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x105451328

// -[SCAdOperationMetricsManagerImpl logInitResponseIssue:]
// Type encoding: v24@0:8q16
// Implementation: 0x105451478

// -[SCAdOperationMetricsManagerImpl logInitEndpointCOFFetchLatency:isPrimary:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10545152c

// -[SCAdOperationMetricsManagerImpl logPixelTokenFetchLatency:statusCode:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x105451618

// -[SCAdOperationMetricsManagerImpl logTrackResponseError:statusCode:adProductType:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x105451744

// -[SCAdOperationMetricsManagerImpl _requestResolved:adIds:requestType:statusCode:requestLatencyInSec:isPrimary:]
// Type encoding: v60@0:8@16@24Q32q40d48B56
// Implementation: 0x105451958

// -[SCAdOperationMetricsManagerImpl _requestSubmittedAdIdentifiers:requestType:requestURL:targetingParams:debugViewContext:isPrimary:]
// Type encoding: v60@0:8@16Q24@32@40@48B56
// Implementation: 0x105451ad4

// -[SCAdOperationMetricsManagerImpl logGetBatteryDataLatencyInSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x105451e80

// -[SCAdOperationMetricsManagerImpl logGetDiskDataLatencyInSec:]
// Type encoding: v24@0:8d16
// Implementation: 0x105451eec

// -[SCAdOperationMetricsManagerImpl logCOFNotCreated]
// Type encoding: v16@0:8
// Implementation: 0x105451f58

// -[SCAdOperationMetricsManagerImpl logTrackingAuthorizationStatus]
// Type encoding: v16@0:8
// Implementation: 0x105451fb4

// -[SCAdOperationMetricsManagerImpl logRankingSignalsPayloadSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10545209c

// -[SCAdOperationMetricsManagerImpl _logSnapTokenGeneration:error:isPrimary:]
// Type encoding: v32@0:8B16@20B28
// Implementation: 0x105452108

// -[SCAdOperationMetricsManagerImpl logTargetingSettingsRequestStatus:requestType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1054522e8

// -[SCAdOperationMetricsManagerImpl logSLCFailedToGenerateSnapToken]
// Type encoding: v16@0:8
// Implementation: 0x105452400

// -[SCAdOperationMetricsManagerImpl logAdView:adProductType:adType:isFill:topSnapViewTime:viewSource:hasOrganicContext:topMediaType:bottomMedia:viewLocation:]
// Type encoding: v84@0:8B16Q20q28B36d40@48B56q60@68q76
// Implementation: 0x10545245c

// -[SCAdOperationMetricsManagerImpl logAdServeToDisplayLatencyInSec:adResponse:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x105452bb8

// -[SCAdOperationMetricsManagerImpl logIntermediateAdTrack:adType:topMediaType:bottomMedia:viewLocation:]
// Type encoding: v56@0:8Q16q24q32@40q48
// Implementation: 0x105452d70

// -[SCAdOperationMetricsManagerImpl logAdViewFromAdTrack:adType:isFill:topMediaType:bottomMedia:viewLocation:]
// Type encoding: v60@0:8Q16q24B32q36@44q52
// Implementation: 0x105452e00

// -[SCAdOperationMetricsManagerImpl logAdTrackedByDemandSource:adProductType:success:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105452f10

// -[SCAdOperationMetricsManagerImpl logAdSwipe:adType:topMediaType:bottomMedia:hasOrganicContext:viewLocation:]
// Type encoding: v60@0:8Q16q24q32@40B48q52
// Implementation: 0x105453098

// -[SCAdOperationMetricsManagerImpl logAdSwipeFromAdTrack:adType:topMediaType:bottomMedia:isTap:viewLocation:]
// Type encoding: v60@0:8Q16q24q32@40B48q52
// Implementation: 0x10545324c

// -[SCAdOperationMetricsManagerImpl _logAdSwipeAdViewWithMetric:adProductType:adType:ctaType:topMediaType:isTap:]
// Type encoding: v60@0:8@16Q24q32Q40q48B56
// Implementation: 0x1054532e8

// -[SCAdOperationMetricsManagerImpl logLeaveAppInstallAttachmentWithSnapLoadedOnEntry:snapLoadedOnExit:mediaLoadWaitTimeInSec:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x105453560

// -[SCAdOperationMetricsManagerImpl logCommercialAdRequested:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054536f0

// -[SCAdOperationMetricsManagerImpl logCommercialAdReceived:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054537cc

// -[SCAdOperationMetricsManagerImpl logCommercialAdTracked:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054538a8

// -[SCAdOperationMetricsManagerImpl logBrandSafetyAdsReceived:purgedAdResponses:receivedAdResponses:]
// Type encoding: v40@0:8Q16@24@32
// Implementation: 0x105453984

// -[SCAdOperationMetricsManagerImpl logPromotedStoryOverflowTileIndex]
// Type encoding: v16@0:8
// Implementation: 0x105453c0c

// -[SCAdOperationMetricsManagerImpl logSpectrumAdTrack:adTrackTriggerType:isShadow:region:]
// Type encoding: v44@0:8Q16Q24B32Q36
// Implementation: 0x105453c64

// -[SCAdOperationMetricsManagerImpl logFetchMediaPreconditionFailedWithReason:adProductType:adId:]
// Type encoding: v40@0:8q16Q24@32
// Implementation: 0x105453e7c

// -[SCAdOperationMetricsManagerImpl _mediaFetchPreconditionErrorReasonFromReason:]
// Type encoding: @24@0:8q16
// Implementation: 0x105453ff0

// -[SCAdOperationMetricsManagerImpl logMediaIdGenerationError:adType:isDpa:]
// Type encoding: v36@0:8q16q24B32
// Implementation: 0x105454018

// -[SCAdOperationMetricsManagerImpl _mediaIdErrorReasonFromError:]
// Type encoding: @24@0:8q16
// Implementation: 0x1054541bc

// -[SCAdOperationMetricsManagerImpl logImpressionCall:adNetwork:adProductType:success:error:source:]
// Type encoding: v60@0:8q16q24Q32B40@44q52
// Implementation: 0x1054541e8

// -[SCAdOperationMetricsManagerImpl _appImpressionCallStatusMetricForCallType:adNetwork:]
// Type encoding: @32@0:8q16q24
// Implementation: 0x105454464

// -[SCAdOperationMetricsManagerImpl logSKAdNetworkImpression:viewLocation:adNetwork:adProductType:adId:adServeItemId:skAdNetworkClickThroughVersion:skAdNetworkViewThroughVersion:skAdCampaignId:skAdSourceId:viewTimeInSec:actualAdViewTimeInSec:error:]
// Type encoding: v120@0:8q16q24q32Q40@48@56@64@72q80q88d96d104@112
// Implementation: 0x1054544fc

// -[SCAdOperationMetricsManagerImpl _adNetworkTypeFromSCAdNetworkType:]
// Type encoding: q24@0:8q16
// Implementation: 0x1054549bc

// -[SCAdOperationMetricsManagerImpl logSKAdNetworkImpressionStartedWithPendingImpression:incoming:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054549d0

// -[SCAdOperationMetricsManagerImpl logSKAdClickWithResult:error:source:latency:prefetched:]
// Type encoding: v52@0:8B16@20q28d36@44
// Implementation: 0x105454b4c

// -[SCAdOperationMetricsManagerImpl logSKOverlayEventWithType:adResponse:adSnap:latency:isBeingPreloaded:error:]
// Type encoding: v60@0:8q16@24@32d40B48@52
// Implementation: 0x1054550a4

// -[SCAdOperationMetricsManagerImpl _grapheneMetricForOverlayEventType:]
// Type encoding: @24@0:8q16
// Implementation: 0x105455470

// -[SCAdOperationMetricsManagerImpl logStoreProductPageDismissed:loadedOnEntry:loadedOnExit:visibleLoadTime:]
// Type encoding: v40@0:8q16B24B28d32
// Implementation: 0x105455528

// -[SCAdOperationMetricsManagerImpl _graphene]
// Type encoding: @16@0:8
// Implementation: 0x1054556c4

// -[SCAdOperationMetricsManagerImpl logApplePromptViewWithOptInStatus:adPromptUXType:adProductType:timeViewedInSec:]
// Type encoding: v48@0:8q16q24Q32d40
// Implementation: 0x10545570c

// -[SCAdOperationMetricsManagerImpl logAdInsertionRuleNull:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054559b4

// -[SCAdOperationMetricsManagerImpl logAdInsertionEvaluation:adResponse:storiesViewed:storiesBeforeEnd:snapsViewed:snapsBeforeEnd:timeViewedSeconds:storiesViewedAcrossInventory:snapsViewedAcrossInventory:timeViewedAcrossInventorySeconds:crossInventoryRulesEvaluated:isFirstAd:shouldInsert:adIndexPos:]
// Type encoding: v116@0:8Q16@24q32q40q48q56d64q72q80d88B96B100B104q108
// Implementation: 0x105455a70

// -[SCAdOperationMetricsManagerImpl logAdBrandSafetyEvaluation:snapId:storyType:organicGarmSafety:legacyBrandFriendliness:brandSafetyEvaluationResult:isV2:isNext:]
// Type encoding: v72@0:8@16@24q32q40q48q56B64B68
// Implementation: 0x105455f1c

// -[SCAdOperationMetricsManagerImpl logAdBrandSafetyInsertion:organicGarmBrandSafety:availableAdPods:insertedAdPod:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x105456400

// -[SCAdOperationMetricsManagerImpl _brandSafetyLoggingInfoForAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x105456850

// -[SCAdOperationMetricsManagerImpl logAdBrandSafetySwitch:organicGarmBrandSafety:availableAdPods:selectedAdPod:]
// Type encoding: v48@0:8Q16q24@32@40
// Implementation: 0x10545690c

// -[SCAdOperationMetricsManagerImpl logAdInsertionConfigCacheRead:cacheHit:]
// Type encoding: v28@0:8Q16B24
// Implementation: 0x105456bf0

// -[SCAdOperationMetricsManagerImpl logAdInsertionConfigCacheUpdate:status:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105456d24

// -[SCAdOperationMetricsManagerImpl logAdInternalError:source:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x105456e2c

// -[SCAdOperationMetricsManagerImpl logMultiAdPodSize:adProductType:isFill:]
// Type encoding: v36@0:8Q16Q24B32
// Implementation: 0x105456f40

// -[SCAdOperationMetricsManagerImpl logPromotedStoryAnimationStarted:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054570fc

// -[SCAdOperationMetricsManagerImpl logPromotedStoryAnimationCompleted:result:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x1054571b8

// -[SCAdOperationMetricsManagerImpl logPromotedStoryTapped:tileState:timeViewed:]
// Type encoding: v40@0:8q16q24d32
// Implementation: 0x1054572d4

// -[SCAdOperationMetricsManagerImpl logPromotedStoryTileCtaHideCta]
// Type encoding: v16@0:8
// Implementation: 0x10545741c

// -[SCAdOperationMetricsManagerImpl logPromotedStoryTileCtaErrorFallbackShowCta]
// Type encoding: v16@0:8
// Implementation: 0x105457474

// -[SCAdOperationMetricsManagerImpl logPromotedStoryTileCtaUseOverrideUrl]
// Type encoding: v16@0:8
// Implementation: 0x1054574cc

// -[SCAdOperationMetricsManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105457524

@end
