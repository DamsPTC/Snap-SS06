// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardFHPConfigProviderPluginManager
// Superclass: NSObject
// Address: 0x1129eed68

@interface SCBillboardFHPConfigProviderPluginManager


// -[SCBillboardFHPConfigProviderPluginManager initWithCircumstanceEngine:grapheneRegistry:fhpUIConfigScopeExposer:fhpUIConfigFactoryServices:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x104c74e18

// -[SCBillboardFHPConfigProviderPluginManager loadAllUIConfigsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104c75038

// -[SCBillboardFHPConfigProviderPluginManager uiConfigForCampaignId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c75188

// -[SCBillboardFHPConfigProviderPluginManager _loadAllUIConfigsWithProviders:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104c75190

// -[SCBillboardFHPConfigProviderPluginManager _cacheUIConfigWithProviders:uiConfigLoadingPromise:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c75338

// -[SCBillboardFHPConfigProviderPluginManager _fhpUIConfigProviders]
// Type encoding: @16@0:8
// Implementation: 0x104c756f4

// -[SCBillboardFHPConfigProviderPluginManager _setupTimerToCompletePromise:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c758fc

// -[SCBillboardFHPConfigProviderPluginManager _logUIConfigLoadingTimeout:]
// Type encoding: v24@0:8@16
// Implementation: 0x104c75a40

// -[SCBillboardFHPConfigProviderPluginManager _setupUIConfigsMapAndLogLatency:startTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104c75b08

// -[SCBillboardFHPConfigProviderPluginManager _completeUILoadingPromise:withError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104c75c7c

// -[SCBillboardFHPConfigProviderPluginManager _setupGCDTimerWithTimeoutBlock:]
// Type encoding: @24@0:8@?16
// Implementation: 0x104c75c98

// -[SCBillboardFHPConfigProviderPluginManager _logUIConfigLoadingLatencyWithCampaignId:durationMs:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104c75d48

// -[SCBillboardFHPConfigProviderPluginManager uiConfigFutureForCampaignId:]
// Type encoding: @24@0:8@16
// Implementation: 0x104c75d58

// -[SCBillboardFHPConfigProviderPluginManager _loadUIConfigForCampaignId:providers:resultPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c75f18

// -[SCBillboardFHPConfigProviderPluginManager _providerForCampaignId:fromProviders:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104c75fbc

// -[SCBillboardFHPConfigProviderPluginManager _loadUIConfigFromProvider:campaignId:resultPromise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104c760f8

// -[SCBillboardFHPConfigProviderPluginManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c76600

// +[SCBillboardFHPConfigProviderPluginManager _uiConfigLoadingTimeoutMs:]
// Type encoding: q24@0:8@16
// Implementation: 0x104c75abc

// +[SCBillboardFHPConfigProviderPluginManager _uiConfigLoadingTimeoutError]
// Type encoding: @16@0:8
// Implementation: 0x104c75ae8

@end
