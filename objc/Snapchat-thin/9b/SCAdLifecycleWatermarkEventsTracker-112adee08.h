// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdLifecycleWatermarkEventsTracker
// Superclass: NSObject
// Address: 0x112adee08

@interface SCAdLifecycleWatermarkEventsTracker

// Property: adLifecycleInfoMap; attributes: T@"NSMutableDictionary",&,N,V_adLifecycleInfoMap
// Property: adCreationLifecyleEventObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdLifecycleWatermarkEventsTracker initWithLogger:adConfigProvider:flipper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106455338

// -[SCAdLifecycleWatermarkEventsTracker onAdOperationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10645552c

// -[SCAdLifecycleWatermarkEventsTracker onAdServerRequestSubmitted:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064556cc

// -[SCAdLifecycleWatermarkEventsTracker onAdServerRequestResolved:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064558c0

// -[SCAdLifecycleWatermarkEventsTracker onAdResponseStartDeserialize:]
// Type encoding: v24@0:8@16
// Implementation: 0x106455a24

// -[SCAdLifecycleWatermarkEventsTracker onAdResponseResolved:]
// Type encoding: v24@0:8@16
// Implementation: 0x106455b38

// -[SCAdLifecycleWatermarkEventsTracker _onAdResponseResolved:]
// Type encoding: v24@0:8@16
// Implementation: 0x106455c4c

// -[SCAdLifecycleWatermarkEventsTracker onAdMediaStartDownload:mediaStartDownloadTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106455e50

// -[SCAdLifecycleWatermarkEventsTracker _onAdMediaStartDownload:mediaStartDownloadTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106455f78

// -[SCAdLifecycleWatermarkEventsTracker onAdMediaFinishDownload:mediaFinishDownloadTimestamp:errorCode:mediaCacheHit:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:enableMediaDownloadMetricV1:enableMediaDownloadMetricV2:]
// Type encoding: v80@0:8@16d24q32B40B44@48@56q64B72B76
// Implementation: 0x106456074

// -[SCAdLifecycleWatermarkEventsTracker _onAdMediaFinishDownload:mediaFinishDownloadTimestamp:errorCode:mediaCacheHit:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:enableMediaDownloadMetricV1:enableMediaDownloadMetricV2:]
// Type encoding: v80@0:8@16d24q32B40B44@48@56q64B72B76
// Implementation: 0x106456260

// -[SCAdLifecycleWatermarkEventsTracker onStreamingMetricsReportEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064563c8

// -[SCAdLifecycleWatermarkEventsTracker onAdOpportunity:adOpportunityType:adOpportunityTimestamp:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x10645650c

// -[SCAdLifecycleWatermarkEventsTracker _onAdOpportunity:adOpportunityType:adOpportunityTimestamp:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x106456640

// -[SCAdLifecycleWatermarkEventsTracker onAdShown:adShowTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1064566e8

// -[SCAdLifecycleWatermarkEventsTracker _onAdShown:adShowTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106456810

// -[SCAdLifecycleWatermarkEventsTracker onAdHidden:adHiddenTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1064568b4

// -[SCAdLifecycleWatermarkEventsTracker _onAdHidden:adHiddenTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1064569dc

// -[SCAdLifecycleWatermarkEventsTracker onUpdateVideoLoadingStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x106456a80

// -[SCAdLifecycleWatermarkEventsTracker adExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x106456c64

// -[SCAdLifecycleWatermarkEventsTracker onAdInserted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106456dac

// -[SCAdLifecycleWatermarkEventsTracker _onAdInserted:]
// Type encoding: v24@0:8@16
// Implementation: 0x106456ec0

// -[SCAdLifecycleWatermarkEventsTracker updateAdOpportunityInfo:adOpportunityTimestamp:adLifecycleInfo:]
// Type encoding: v40@0:8Q16q24@32
// Implementation: 0x106456f60

// -[SCAdLifecycleWatermarkEventsTracker reportAdMediaDownloadMetrics:errorCode:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:isV1Metric:adIdentifier:]
// Type encoding: v72@0:8@16q24B32@36@44q52B60@64
// Implementation: 0x106457098

// -[SCAdLifecycleWatermarkEventsTracker adInsertionTimestampInMillisForAdIdentifier:]
// Type encoding: d24@0:8@16
// Implementation: 0x1064574d0

// -[SCAdLifecycleWatermarkEventsTracker adResponseParseCompleteTimestampInMillisForAdIdentifier:]
// Type encoding: d24@0:8@16
// Implementation: 0x106457548

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdPrefetchEventWithAdResponse:adPrefetchStartTimestamp:adPrefetchEndTimestamp:adPrefetchCacheHit:]
// Type encoding: v44@0:8@16d24d32B40
// Implementation: 0x1064575c0

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdInsertionEventWithAdResponse:adInsertionTimestampInMillis:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1064576d8

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdCacheEventWithAdResponse:adCacheCreationCause:adCacheCreationTime:adCacheEvictionCause:adCacheEvictionTime:]
// Type encoding: v56@0:8@16@24d32@40d48
// Implementation: 0x1064577f0

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdResponse:adTrackStartTimestamp:adTrackAttempt:sessionId:trackSeqNumber:adTrackAttachmentTriggered:]
// Type encoding: v60@0:8@16d24q32@40q48B56
// Implementation: 0x106457930

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackRetro:adTrackAttempt:sessionId:trackSeqNumber:]
// Type encoding: v92@0:8@16d24@32@40Q48d56B64q68@76@84
// Implementation: 0x106457a74

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdResponse:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:adTrackAttachmentTriggered:]
// Type encoding: v60@0:8@16d24d32B40B44q48B56
// Implementation: 0x106457c48

// -[SCAdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:]
// Type encoding: v88@0:8@16d24@32@40Q48d56d64B72B76q80
// Implementation: 0x106457d80

// -[SCAdLifecycleWatermarkEventsTracker _buildAdIdentificationWithAdResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x106457f1c

// -[SCAdLifecycleWatermarkEventsTracker _reportAdLifecycleV2Metrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064580ec

// -[SCAdLifecycleWatermarkEventsTracker getLifecycleInfoMetadataForAdResponse:adSnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106458148

// -[SCAdLifecycleWatermarkEventsTracker updateAdIdentifier:forAdResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106458404

// -[SCAdLifecycleWatermarkEventsTracker _updateAdIdentifier:oldAdIdentifier:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106458574

// -[SCAdLifecycleWatermarkEventsTracker adCreationLifecyleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1064585e0

// -[SCAdLifecycleWatermarkEventsTracker didStartAdRequestForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458608

// -[SCAdLifecycleWatermarkEventsTracker didFinishAdRequestForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064586cc

// -[SCAdLifecycleWatermarkEventsTracker didStartMediaDownloadForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458710

// -[SCAdLifecycleWatermarkEventsTracker didFinishMediaDownloadForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458754

// -[SCAdLifecycleWatermarkEventsTracker didStartParseForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458798

// -[SCAdLifecycleWatermarkEventsTracker didFinishParseForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064587dc

// -[SCAdLifecycleWatermarkEventsTracker didCreatedPendingAdPodForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458820

// -[SCAdLifecycleWatermarkEventsTracker didInsertAdPodForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458864

// -[SCAdLifecycleWatermarkEventsTracker didEnterSurface]
// Type encoding: v16@0:8
// Implementation: 0x1064588a8

// -[SCAdLifecycleWatermarkEventsTracker didSubmitAdRequestForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x10645894c

// -[SCAdLifecycleWatermarkEventsTracker didTileTap]
// Type encoding: v16@0:8
// Implementation: 0x106458a10

// -[SCAdLifecycleWatermarkEventsTracker consumeTileTapTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x106458aac

// -[SCAdLifecycleWatermarkEventsTracker consumeSurfaceEnteredTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x106458aec

// -[SCAdLifecycleWatermarkEventsTracker consumeRequestStartTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x106458b28

// -[SCAdLifecycleWatermarkEventsTracker consumeRequestSubmittedTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x106458b64

// -[SCAdLifecycleWatermarkEventsTracker adLifecycleInfoMap]
// Type encoding: @16@0:8
// Implementation: 0x106458ba0

// -[SCAdLifecycleWatermarkEventsTracker _adLifecycleInfoForAdIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x106458cb8

// -[SCAdLifecycleWatermarkEventsTracker setAdLifecycleInfoMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x106458e14

// -[SCAdLifecycleWatermarkEventsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106458e44

// +[SCAdLifecycleWatermarkEventsTracker _isValidAdLifecycleAdRequest:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1064574c4

@end
