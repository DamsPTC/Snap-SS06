// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSource
// Superclass: NSObject
// Address: 0x112a385a8

@interface SCAdSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdSource initWithNetworkManager:pixelTrackingCookieManager:requestInfoProvider:renditionSelector:serveResponseDataStore:deviceTargetingManager:configAdapter:adConfigProviderV2:readinessChecker:grapheneRegistry:appStartExperimentReader:persistedDataAdapter:commonMetricsManager:initMetricsManager:serveMetricsManager:trackMetricsManager:lifecycleTracker:isPrimary:snapTokenManager:adsPreferencesManager:adsCircumstanceEngineAdapter:appInstalledInfoProvider:onDeviceFeatureGatingProvider:multiAdPodMetricsManager:webviewMetricsValidator:appInstallMetricsValidator:appStoreInfoProvider:trackRequestProcessor:spectrumLogger:backgroundTaskProcessor:flipper:trackFunnelEventTracker:promotedStoryMetricsManager:browserPrivacyInfoManager:dpaConfigProvider:notificationPool:webBrowsingConfigProvider:adRenderDataParser:trackSeqNumProvider:valdiRuntimeProvider:adResponseProvider:userBlizzard:impressionBuilder:adCrashLogger:unifiedAdTrackValidator:javascriptFetcher:applicationLifecycleEvents:]
// Type encoding: @388@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144B152@156@164@172@180@188@196@204@212@220@228@236@244@252@260@268@276@284@292@300@308@316@324@332@340@348@356@364@372@380
// Implementation: 0x1054180b0

// -[SCAdSource initializeWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054187e0

// -[SCAdSource request:willMakeRequest:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x1054187e8

// -[SCAdSource protoAdRequestWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054188d0

// -[SCAdSource track:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054188d8

// -[SCAdSource adExpired:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054188e0

// -[SCAdSource tearDown]
// Type encoding: v16@0:8
// Implementation: 0x105418924

// -[SCAdSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10541892c

@end
