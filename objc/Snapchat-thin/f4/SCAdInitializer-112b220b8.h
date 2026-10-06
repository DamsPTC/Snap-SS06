// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdInitializer
// Superclass: NSObject
// Address: 0x112b220b8

@interface SCAdInitializer

// Property: adSourceConfig; attributes: T@"SCAdSourceConfig",&,N,V_adSourceConfig
// Property: requestInfoProvider; attributes: T@"SCAdRequestInfoProvider",R,N,V_requestInfoProvider
// Property: networkManager; attributes: T@"SCAdSerializingNetworkManager",R,N,V_networkManager
// Property: pixelTrackingCookieManager; attributes: T@"SCAdPixelTrackingCookieManager",R,N,V_pixelTrackingCookieManager
// Property: appInstalledInfoProvider; attributes: T@"SCAppInstalledInfoProvider",R,N,V_appInstalledInfoProvider
// Property: persistedDataAdapter; attributes: T@"<SCAdPersistedDataAdapter>",R,W,N,V_persistedDataAdapter
// Property: configAdapter; attributes: T@"<SCAdConfigProviding_DEPRECATED>",R,W,N,V_configAdapter
// Property: commonMetricsManager; attributes: T@"<SCAdCommonOperationMetricsManaging>",R,W,N,V_commonMetricsManager
// Property: initMetricsManager; attributes: T@"<SCAdInitOperationMetricsManaging>",R,W,N,V_initMetricsManager
// Property: snapTokenAdapter; attributes: T@"<SCAdSnapTokenAdapter>",R,W,N,V_snapTokenAdapter
// Property: adsPreferencesProvider; attributes: T@"<SCAdPreferencesProviding>",R,W,N,V_adsPreferencesProvider
// Property: adsCircumstanceEngineAdapter; attributes: T@"<SCAdCircumstanceEngineAdapter>",R,W,N,V_adsCircumstanceEngineAdapter
// Property: onDeviceFeatureGatingProvider; attributes: T@"<SCAdOnDeviceFeatureGatingProviding>",R,W,N,V_onDeviceFeatureGatingProvider
// Property: lastInitUpdateTimestampInSec; attributes: T@"NSNumber",&,N,V_lastInitUpdateTimestampInSec
// Property: lastReinitTimestampInSec; attributes: T@"NSNumber",&,N,V_lastReinitTimestampInSec
// Property: isPrimary; attributes: TB,R,N,V_isPrimary
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdInitializer initWithRequestInfoProvider:configAdapter:adConfigProvider:networkManager:pixelTrackingCookieManager:persistedDataAdapter:commonMetricsManager:initMetricsManager:snapTokenAdapter:adsPreferencesProvider:adsCircumstanceEngineAdapter:appInstalledInfoProvider:appStoreInfoProvider:onDeviceFeatureGatingProvider:javascriptFetcher:isPrimary:]
// Type encoding: @140@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128B136
// Implementation: 0x106bf681c

// -[SCAdInitializer initWithRequestInfoProvider:configAdapter:adConfigProvider:networkManager:pixelTrackingCookieManager:persistedDataAdapter:commonMetricsManager:initMetricsManager:snapTokenAdapter:adsPreferencesProvider:adsCircumstanceEngineAdapter:appInstalledInfoProvider:appStoreInfoProvider:onDeviceFeatureGatingProvider:isPrimary:performer:timeProvider:javascriptFetcher:]
// Type encoding: @156@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120B128@132@140@148
// Implementation: 0x106bf6aa0

// -[SCAdInitializer initializeWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bf6e58

// -[SCAdInitializer reInitialize:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bf6f8c

// -[SCAdInitializer tearDown]
// Type encoding: v16@0:8
// Implementation: 0x106bf70a4

// -[SCAdInitializer _clearUp]
// Type encoding: v16@0:8
// Implementation: 0x106bf7178

// -[SCAdInitializer _initWithMetadata:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bf71a8

// -[SCAdInitializer _fetchCofTokenWithMetadata:adSourceConfig:initURL:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106bf7488

// -[SCAdInitializer _fetchSnapTokenWithMetadata:adSourceConfig:initURL:cofToken:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106bf767c

// -[SCAdInitializer _initWithMetadata:defaultAdSourceConfig:initEndpoint:cofToken:snapToken:storefrontCountryCode:completion:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x106bf7bc4

// -[SCAdInitializer _handleNetworkResponse:error:responseStatusCode:requestEndpoint:requestStartTimestamp:requestSize:completion:]
// Type encoding: v72@0:8@16@24q32@40d48Q56@?64
// Implementation: 0x106bf82c4

// -[SCAdInitializer _reInitialize:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106bf84f4

// -[SCAdInitializer _handleInitResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bf8680

// -[SCAdInitializer _handleOnDeviceResponse:onDeviceProfileURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bf8818

// -[SCAdInitializer _saveAndPersistAdSourceConfig:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106bf88c0

// -[SCAdInitializer _updateLastInitRequestTimestamp:]
// Type encoding: v24@0:8d16
// Implementation: 0x106bf8c30

// -[SCAdInitializer _updateLastInitRequestTimestampHelper:]
// Type encoding: v24@0:8d16
// Implementation: 0x106bf8d1c

// -[SCAdInitializer adSourceConfig]
// Type encoding: @16@0:8
// Implementation: 0x106bf8da4

// -[SCAdInitializer setAdSourceConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bf8dac

// -[SCAdInitializer requestInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bf8ddc

// -[SCAdInitializer networkManager]
// Type encoding: @16@0:8
// Implementation: 0x106bf8de4

// -[SCAdInitializer pixelTrackingCookieManager]
// Type encoding: @16@0:8
// Implementation: 0x106bf8dec

// -[SCAdInitializer appInstalledInfoProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bf8df4

// -[SCAdInitializer persistedDataAdapter]
// Type encoding: @16@0:8
// Implementation: 0x106bf8dfc

// -[SCAdInitializer configAdapter]
// Type encoding: @16@0:8
// Implementation: 0x106bf8e14

// -[SCAdInitializer commonMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x106bf8e2c

// -[SCAdInitializer initMetricsManager]
// Type encoding: @16@0:8
// Implementation: 0x106bf8e44

// -[SCAdInitializer snapTokenAdapter]
// Type encoding: @16@0:8
// Implementation: 0x106bf8e78

// -[SCAdInitializer adsPreferencesProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bf8e90

// -[SCAdInitializer adsCircumstanceEngineAdapter]
// Type encoding: @16@0:8
// Implementation: 0x106bf8ea8

// -[SCAdInitializer onDeviceFeatureGatingProvider]
// Type encoding: @16@0:8
// Implementation: 0x106bf8ec0

// -[SCAdInitializer lastInitUpdateTimestampInSec]
// Type encoding: @16@0:8
// Implementation: 0x106bf8ed8

// -[SCAdInitializer setLastInitUpdateTimestampInSec:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bf8ee0

// -[SCAdInitializer lastReinitTimestampInSec]
// Type encoding: @16@0:8
// Implementation: 0x106bf8f10

// -[SCAdInitializer setLastReinitTimestampInSec:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bf8f18

// -[SCAdInitializer isPrimary]
// Type encoding: B16@0:8
// Implementation: 0x106bf8f48

// -[SCAdInitializer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bf8f50

@end
