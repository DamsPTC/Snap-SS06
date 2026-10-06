// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTracker
// Superclass: NSObject
// Address: 0x112a391d8

@interface SCAdTracker

// Property: requestInfoProvider; attributes: T@"SCAdRequestInfoProvider",R,N,V_requestInfoProvider
// Property: configAdapter; attributes: T@"<SCAdConfigProviding_DEPRECATED>",R,W,N,V_configAdapter
// Property: adConfigProviderV2; attributes: T@"<SCAdConfigProviding>",R,W,N,V_adConfigProviderV2
// Property: recentViewReceipts; attributes: T@"SCAdRecentViewReceipts",R,N,V_recentViewReceipts
// Property: networkManager; attributes: T@"SCAdSerializingNetworkManager",R,N,V_networkManager
// Property: isPrimary; attributes: TB,N,V_isPrimary
// Property: commonMetricsManager; attributes: T@"<SCAdCommonOperationMetricsManaging>",R,W,N,V_commonMetricsManager
// Property: trackMetricsManager; attributes: T@"<SCAdTrackOperationMetricsManaging>",R,W,N,V_trackMetricsManager
// Property: lifecycleTracker; attributes: T@"SCLazy",R,W,N,V_lifecycleTracker
// Property: backupAdResponseDataStore; attributes: T@"SCAdServeResponseDataStore",R,N,V_backupAdResponseDataStore
// Property: adsPreferencesProvider; attributes: T@"<SCAdPreferencesProviding>",R,W,N,V_adsPreferencesProvider
// Property: persistedDataAdapter; attributes: T@"<SCAdPersistedDataAdapter>",R,W,N,V_persistedDataAdapter
// Property: webviewMetricsValidator; attributes: T@"SCLazy",R,N,V_webviewMetricsValidator
// Property: trackRequestProcessor; attributes: T@"<SCAdTrackRequestProcessor>",R,N,V_trackRequestProcessor
// Property: spectrumLogger; attributes: T@"SCLazy",R,N,V_spectrumLogger
// Property: backgroundTaskProcessor; attributes: T@"SCLazy",R,N,V_backgroundTaskProcessor
// Property: flipper; attributes: T@"<SCFlipper>",R,W,N,V_flipper
// Property: trackFunnelEventTracker; attributes: T@"SCLazy",R,N,V_trackFunnelEventTracker
// Property: creativeViewingHistoryTracker; attributes: T@"SCAdCreativeViewingHistoryTracker",R,N,V_creativeViewingHistoryTracker
// Property: trackSeqNumProvider; attributes: T@"SCLazy",R,N,V_trackSeqNumProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdTracker initWithRequestInfoProvider:configAdapter:adConfigProviderV2:serveResponseDataStore:networkManager:recentViewReceipts:isPrimary:commonMetricsManager:trackMetricsManager:lifecycleTracker:adsPreferencesProvider:persistedDataAdapter:webviewMetricsValidator:appInstallMetricsValidator:trackRequestProcessor:spectrumLogger:backgroundTaskProcessor:flipper:trackFunnelEventTracker:dpaConfigProvider:trackSeqNumProvider:valdiRuntimeProvider:userBlizzard:impressionBuilder:adCrashLogger:shadowDiffPerformer:unifiedAdTrackValidator:]
// Type encoding: @228@0:8@16@24@32@40@48@56B64@68@76@84@92@100@108@116@124@132@140@148@156@164@172@180@188@196@204@212@220
// Implementation: 0x105458268

// -[SCAdTracker trackSnapAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054587e4

// -[SCAdTracker _trackProtoSnapAdWithBackgroundTask:adResponse:trackSequenceNumber:spectrumTrackSequenceNumber:viewSeqNum:completion:]
// Type encoding: v64@0:8@16@24q32q40q48@?56
// Implementation: 0x1054589a4

// -[SCAdTracker _trackProtoSnapAd:adResponse:trackSequenceNumber:spectrumTrackSequenceNumber:viewSeqNum:completion:]
// Type encoding: v64@0:8@16@24q32q40q48@?56
// Implementation: 0x105458bcc

// -[SCAdTracker _continueTrackProtoSnapAdWithImpression:trackRequest:adResponse:trackSequenceNumber:spectrumTrackSequenceNumber:viewSeqNum:finalTrackURL:completion:]
// Type encoding: v80@0:8@16@24@32q40q48q56@64@?72
// Implementation: 0x105459270

// -[SCAdTracker _logAdViewAndSwipeFromAdTrack:impressionData:adResponse:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105459e00

// -[SCAdTracker _getViewLocationFromViewContext:]
// Type encoding: q24@0:8@16
// Implementation: 0x10545a20c

// -[SCAdTracker _buildImpressionDataForTrackRequest:adResponse:adTrackInfo:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10545a334

// -[SCAdTracker _legacyImpressionDataForTrackRequest:adResponse:adTrackInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10545a694

// -[SCAdTracker _fallbackImpressionDataForAdTrackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10545a830

// -[SCAdTracker _buildParamsForTrackRequest:adTrackInfo:adResponse:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10545a8a4

// -[SCAdTracker _impressionDataForTrackRequest:adResponse:adTrackInfo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10545a9f4

// -[SCAdTracker _shadowDiffWithLegacyData:trackRequest:adResponse:adTrackInfo:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10545ad04

// -[SCAdTracker _isAdSwiped:]
// Type encoding: B24@0:8@16
// Implementation: 0x10545b03c

// -[SCAdTracker _logWebViewUserInteractionInfoFromAdTrack:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10545b168

// -[SCAdTracker _handleNetworkResponse:responseData:adResponse:error:request:requestStartTimestampMillis:trackSeqNum:]
// Type encoding: v72@0:8@16@24@32@40@48d56q64
// Implementation: 0x10545b2cc

// -[SCAdTracker _trackFunnelEventWithRequest:adResponse:trackSequenceNumber:viewSeqNum:metadataState:]
// Type encoding: v56@0:8@16@24q32q40q48
// Implementation: 0x10545b6f0

// -[SCAdTracker _logAdTrackRequestSent:adResponse:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10545b9ac

// -[SCAdTracker requestInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x10545bc74

// -[SCAdTracker configAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10545bc7c

// -[SCAdTracker adConfigProviderV2]
// Type encoding: @16@0:8
// Implementation: 0x10545bc94

// -[SCAdTracker recentViewReceipts]
// Type encoding: @16@0:8
// Implementation: 0x10545bcac

// -[SCAdTracker networkManager]
// Type encoding: @16@0:8
// Implementation: 0x10545bcb4

// -[SCAdTracker isPrimary]
// Type encoding: B16@0:8
// Implementation: 0x10545bcbc

// -[SCAdTracker setIsPrimary:]
// Type encoding: v20@0:8B16
// Implementation: 0x10545bcc4

// -[SCAdTracker commonMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10545bccc

// -[SCAdTracker trackMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10545bce4

// -[SCAdTracker lifecycleTracker]
// Type encoding: @16@0:8
// Implementation: 0x10545bcfc

// -[SCAdTracker backupAdResponseDataStore]
// Type encoding: @16@0:8
// Implementation: 0x10545bd14

// -[SCAdTracker adsPreferencesProvider]
// Type encoding: @16@0:8
// Implementation: 0x10545bd1c

// -[SCAdTracker persistedDataAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10545bd34

// -[SCAdTracker webviewMetricsValidator]
// Type encoding: @16@0:8
// Implementation: 0x10545bd4c

// -[SCAdTracker trackRequestProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10545bd54

// -[SCAdTracker spectrumLogger]
// Type encoding: @16@0:8
// Implementation: 0x10545bd5c

// -[SCAdTracker backgroundTaskProcessor]
// Type encoding: @16@0:8
// Implementation: 0x10545bd64

// -[SCAdTracker flipper]
// Type encoding: @16@0:8
// Implementation: 0x10545bd6c

// -[SCAdTracker trackFunnelEventTracker]
// Type encoding: @16@0:8
// Implementation: 0x10545bd84

// -[SCAdTracker creativeViewingHistoryTracker]
// Type encoding: @16@0:8
// Implementation: 0x10545bd8c

// -[SCAdTracker trackSeqNumProvider]
// Type encoding: @16@0:8
// Implementation: 0x10545bd94

// -[SCAdTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10545bd9c

@end
