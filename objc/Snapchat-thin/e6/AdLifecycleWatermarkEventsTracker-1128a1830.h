// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AdLifecycleWatermarkEventsTracker
// Superclass: NSObject
// Address: 0x1128a1830

@interface AdLifecycleWatermarkEventsTracker

// Property: adCreationLifecyleEventObservable; attributes: T@,N,R

// -[AdLifecycleWatermarkEventsTracker initWithLogger:adConfigProvider:flipper:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x102d2da20

// -[AdLifecycleWatermarkEventsTracker adCreationLifecyleEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x102d2daac

// -[AdLifecycleWatermarkEventsTracker onAdOperationEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d2e390

// -[AdLifecycleWatermarkEventsTracker onAdResponseResolved:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d2e884

// -[AdLifecycleWatermarkEventsTracker onAdMediaStartDownload:mediaStartDownloadTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x102d2eb68

// -[AdLifecycleWatermarkEventsTracker onAdMediaFinishDownload:mediaFinishDownloadTimestamp:errorCode:mediaCacheHit:mediaDownloadSuccess:mediaURL:adServeItemId:mediaLocationType:enableMediaDownloadMetricV1:enableMediaDownloadMetricV2:]
// Type encoding: v80@0:8@16d24q32B40B44@48@56q64B72B76
// Implementation: 0x102d2ef0c

// -[AdLifecycleWatermarkEventsTracker onAdOpportunity:adOpportunityType:adOpportunityTimestamp:]
// Type encoding: v40@0:8@16Q24d32
// Implementation: 0x102d2f954

// -[AdLifecycleWatermarkEventsTracker onAdShown:adShowTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x102d2fadc

// -[AdLifecycleWatermarkEventsTracker onAdHidden:adHiddenTimestamp:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x102d2fd98

// -[AdLifecycleWatermarkEventsTracker adExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d2feec

// -[AdLifecycleWatermarkEventsTracker onAdInserted:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d3012c

// -[AdLifecycleWatermarkEventsTracker adInsertionTimestampInMillisForAdIdentifier:]
// Type encoding: d24@0:8@16
// Implementation: 0x102d30430

// -[AdLifecycleWatermarkEventsTracker adResponseParseCompleteTimestampInMillisForAdIdentifier:]
// Type encoding: d24@0:8@16
// Implementation: 0x102d3057c

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdPrefetchEventWithAdResponse:adPrefetchStartTimestamp:adPrefetchEndTimestamp:adPrefetchCacheHit:]
// Type encoding: v44@0:8@16d24d32B40
// Implementation: 0x102d3070c

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdInsertionEventWithAdResponse:adInsertionTimestampInMillis:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x102d30898

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdCacheEventWithAdResponse:adCacheCreationCause:adCacheCreationTime:adCacheEvictionCause:adCacheEvictionTime:]
// Type encoding: v56@0:8@16@24d32@40d48
// Implementation: 0x102d30a74

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdResponse:adTrackStartTimestamp:adTrackAttempt:sessionId:trackSeqNumber:adTrackAttachmentTriggered:]
// Type encoding: v60@0:8@16d24q32@40q48B56
// Implementation: 0x102d30c9c

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackAttemptEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackRetro:adTrackAttempt:sessionId:trackSeqNumber:]
// Type encoding: v92@0:8@16d24@32@40Q48d56B64q68@76@84
// Implementation: 0x102d30d4c

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdResponse:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:adTrackAttachmentTriggered:]
// Type encoding: v60@0:8@16d24d32B40B44q48B56
// Implementation: 0x102d30fbc

// -[AdLifecycleWatermarkEventsTracker logAdLifecycleAdTrackEventWithAdServeItemId:adServeTimestamp:adId:adType:adProductType:adTrackStartTimestamp:adTrackEndTimestamp:adTrackRetro:adTrackSuccess:adTrackAttempt:]
// Type encoding: v88@0:8@16d24@32@40Q48d56d64B72B76q80
// Implementation: 0x102d3117c

// -[AdLifecycleWatermarkEventsTracker getLifecycleInfoMetadataForAdResponse:adSnap:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x102d31288

// -[AdLifecycleWatermarkEventsTracker updateAdIdentifier:forAdResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x102d31594

// -[AdLifecycleWatermarkEventsTracker didStartAdRequestForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d316d4

// -[AdLifecycleWatermarkEventsTracker didCreatedPendingAdPodForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d316e4

// -[AdLifecycleWatermarkEventsTracker didInsertAdPodForIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d316ec

// -[AdLifecycleWatermarkEventsTracker didEnterSurface]
// Type encoding: v16@0:8
// Implementation: 0x102d31850

// -[AdLifecycleWatermarkEventsTracker didSubmitAdRequestForAdPodIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x102d31938

// -[AdLifecycleWatermarkEventsTracker didTileTap]
// Type encoding: v16@0:8
// Implementation: 0x102d31aac

// -[AdLifecycleWatermarkEventsTracker consumeTileTapTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x102d31b54

// -[AdLifecycleWatermarkEventsTracker consumeSurfaceEnteredTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x102d31b60

// -[AdLifecycleWatermarkEventsTracker consumeRequestStartTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x102d31b6c

// -[AdLifecycleWatermarkEventsTracker consumeRequestSubmittedTimestampMs]
// Type encoding: d16@0:8
// Implementation: 0x102d31b78

// -[AdLifecycleWatermarkEventsTracker init]
// Type encoding: @16@0:8
// Implementation: 0x102d31cac

// -[AdLifecycleWatermarkEventsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x102d31d0c

@end
