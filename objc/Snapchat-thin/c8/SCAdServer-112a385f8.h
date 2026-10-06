// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdServer
// Superclass: NSObject
// Address: 0x112a385f8

@interface SCAdServer

// Property: requestInfoProvider; attributes: T@"SCAdRequestInfoProvider",R,N,V_requestInfoProvider
// Property: configAdapter; attributes: T@"SCLazy",R,N,V_configAdapter
// Property: deviceTargetingManager; attributes: T@"SCAdDeviceTargetingManager",R,N,V_deviceTargetingManager
// Property: networkManager; attributes: T@"SCAdSerializingNetworkManager",R,N,V_networkManager
// Property: recentViewReceipts; attributes: T@"SCAdRecentViewReceipts",R,N,V_recentViewReceipts
// Property: adRenderDataParser; attributes: T@"<SCAdRenderDataParsing>",R,N,V_adRenderDataParser
// Property: serveResponseDataStore; attributes: T@"SCAdServeResponseDataStore",R,N,V_serveResponseDataStore
// Property: isPrimary; attributes: TB,R,N,V_isPrimary
// Property: snapTokenManager; attributes: T@"<SCAdSnapTokenAdapter>",R,W,N,V_snapTokenManager
// Property: commonMetricsManager; attributes: T@"<SCAdCommonOperationMetricsManaging>",R,W,N,V_commonMetricsManager
// Property: serveMetricsManager; attributes: T@"SCLazy",R,N,V_serveMetricsManager
// Property: multiAdPodMetricsManager; attributes: T@"<SCAdMultiAdPodMetricsManaging>",R,W,N,V_multiAdPodMetricsManager
// Property: adsInitializer; attributes: T@"SCAdInitializer",R,W,N,V_adsInitializer
// Property: persistedDataAdapter; attributes: T@"<SCAdPersistedDataAdapter>",R,W,N,V_persistedDataAdapter
// Property: timeProvider; attributes: T@"<SCTimeProviding>",R,N,V_timeProvider
// Property: canOpenURLProvider; attributes: T@"<SCAdCanOpenURLProviding>",R,N,V_canOpenURLProvider
// Property: dpaConfigProvider; attributes: T@"<SCDpaConfigProviding>",R,N,V_dpaConfigProvider
// Property: adConfigProviderV2; attributes: T@"<SCAdConfigProviding>",R,W,N,V_adConfigProviderV2
// Property: adResponseProvider; attributes: T@"SCLazy",R,W,N,V_adResponseProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdServer initWithRequestInfoProvider:configAdapter:deviceTargetingManager:networkManager:recentViewReceipts:adRenderDataParser:serveResponseDataStore:persistedDataAdapter:commonMetricsManager:serveMetricsManager:multiAdPodMetricsManager:isPrimary:snapTokenManager:adsInitializer:timeProvider:browserPrivacyInfoManager:dpaConfigProvider:adConfigProviderV2:appStartExperimentReader:notificationPool:adResponseProvider:readinessChecker:grapheneRegistry:applicationLifecycleEvents:]
// Type encoding: @204@0:8@16@24@32@40@48@56@64@72@80@88@96B104@108@116@124@132@140@148@156@164@172@180@188@196
// Implementation: 0x105418998

// -[SCAdServer _schedulePrewarmCachedUserAdIdIfEnabled]
// Type encoding: v16@0:8
// Implementation: 0x1054190ec

// -[SCAdServer makeAdRequest:willMakeRequest:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x1054192f0

// -[SCAdServer updateAdResponseList:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054196c8

// -[SCAdServer cleanupAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054196cc

// -[SCAdServer serializedRequestWithMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054196d0

// -[SCAdServer protoAdRequestWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105419858

// -[SCAdServer _handleNetworkResponse:error:requestMetadata:requestEndpoint:responseStatusCode:requestStartTimestamp:adIdentifierList:requestType:requestSize:adRequest:requestSuccessBlock:requestFailureBlock:]
// Type encoding: v112@0:8@16@24@32@40q48d56@64Q72Q80@88@?96@?104
// Implementation: 0x105419930

// -[SCAdServer _generateAdRequest:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105419f6c

// -[SCAdServer _generateAdRequestWithViewReceipt:requestMetadata:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10541a254

// -[SCAdServer _makeServeRequest:requestURL:snapToken:willMakeRequest:requestSuccessBlock:requestFailureBlock:]
// Type encoding: v64@0:8@16@24@32@?40@?48@?56
// Implementation: 0x10541a51c

// -[SCAdServer _makeProtoServeRequest:requestMetadata:requestURL:snapToken:willMakeRequest:requestSuccessBlock:requestFailureBlock:]
// Type encoding: v72@0:8@16@24@32@40@?48@?56@?64
// Implementation: 0x10541a860

// -[SCAdServer _makeMockProtoServeRequest:requestURL:willMakeRequest:requestSuccessBlock:requestFailureBlock:]
// Type encoding: v56@0:8@16@24@?32@?40@?48
// Implementation: 0x10541b218

// -[SCAdServer _handleProtoAdResponse:requestMetadata:adRequest:requestEndpoint:responseStatusCode:requestSuccessBlock:]
// Type encoding: v64@0:8@16@24@32@40q48@?56
// Implementation: 0x10541b5c4

// -[SCAdServer _requestNetworkFailed:errorStatusCode:requestURL:requestType:requestLatencyInSec:requestSize:responseSize:requestSuccessBlock:requestFailureBlock:]
// Type encoding: v88@0:8@16q24@32Q40d48Q56Q64@?72@?80
// Implementation: 0x10541cba4

// -[SCAdServer _requestFailed:errorResponseType:requestType:failedReason:requestFailureBlock:]
// Type encoding: v56@0:8@16Q24Q32q40@?48
// Implementation: 0x10541cd60

// -[SCAdServer _generateInvalidAdResponse:serveLoggingContext:targetingParameters:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10541ceb8

// -[SCAdServer _useCachedUserAdID]
// Type encoding: B16@0:8
// Implementation: 0x10541cfd8

// -[SCAdServer _readCachedUserAdId]
// Type encoding: @16@0:8
// Implementation: 0x10541d044

// -[SCAdServer requestInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x10541d0d0

// -[SCAdServer configAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10541d0d8

// -[SCAdServer deviceTargetingManager]
// Type encoding: @16@0:8
// Implementation: 0x10541d0e0

// -[SCAdServer networkManager]
// Type encoding: @16@0:8
// Implementation: 0x10541d0e8

// -[SCAdServer recentViewReceipts]
// Type encoding: @16@0:8
// Implementation: 0x10541d0f0

// -[SCAdServer adRenderDataParser]
// Type encoding: @16@0:8
// Implementation: 0x10541d0f8

// -[SCAdServer serveResponseDataStore]
// Type encoding: @16@0:8
// Implementation: 0x10541d100

// -[SCAdServer isPrimary]
// Type encoding: B16@0:8
// Implementation: 0x10541d108

// -[SCAdServer snapTokenManager]
// Type encoding: @16@0:8
// Implementation: 0x10541d110

// -[SCAdServer commonMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10541d128

// -[SCAdServer serveMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10541d140

// -[SCAdServer multiAdPodMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x10541d148

// -[SCAdServer adsInitializer]
// Type encoding: @16@0:8
// Implementation: 0x10541d160

// -[SCAdServer persistedDataAdapter]
// Type encoding: @16@0:8
// Implementation: 0x10541d178

// -[SCAdServer timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x10541d190

// -[SCAdServer canOpenURLProvider]
// Type encoding: @16@0:8
// Implementation: 0x10541d198

// -[SCAdServer dpaConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x10541d1a0

// -[SCAdServer adConfigProviderV2]
// Type encoding: @16@0:8
// Implementation: 0x10541d1a8

// -[SCAdServer adResponseProvider]
// Type encoding: @16@0:8
// Implementation: 0x10541d1c0

// -[SCAdServer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10541d1d8

@end
