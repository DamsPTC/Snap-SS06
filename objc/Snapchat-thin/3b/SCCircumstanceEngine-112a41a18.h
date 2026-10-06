// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCircumstanceEngine
// Superclass: NSObject
// Address: 0x112a41a18

@interface SCCircumstanceEngine

// Property: configRepository; attributes: T@"<SCConfigRepositoryProtocol>",R,N,V_configRepository
// Property: configProvider; attributes: T@"SCCircumstanceEngineConfigProvider",R,N,V_configProvider
// Property: appStartExperimentConfigKeys; attributes: T@"NSSet",R,N,V_appStartExperimentConfigKeys
// Property: aserExclusionList; attributes: T@"NSSet",R,N,V_aserExclusionList
// Property: experimentLogger; attributes: T@"SCLazy",R,N,V_experimentLogger
// Property: countryCodeRepository; attributes: T@"SCLazy",R,N,V_countryCodeRepository
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: featureSettingsService; attributes: T@"SCLazy",W,N,V_featureSettingsService

// -[SCCircumstanceEngine initWithConfigMetricLogger:configMetric:configManager:grapheneContextManager:appStartExperimentReader:experimentLogger:configRepository:countryCodeProvider:cofAppStartupViolationMonitor:propertyHandlerRegistry:isFeatureApplication:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72@80@88B96
// Implementation: 0x1000fb5fc

// -[SCCircumstanceEngine initWithConfigMetricLogger:configMetric:configManager:grapheneContextManager:appStartExperimentReader:experimentLogger:configRepository:countryCodeProvider:cofAppStartupViolationMonitor:propertyHandlerRegistry:configHeuristicRecoveryManager:forceDefaultValuesTweak:safeModeOptOutConfigs:safeModeOptOutNamespaces:isFeatureApplication:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96B104@108@116B124
// Implementation: 0x1000fc0f4

// -[SCCircumstanceEngine setExperimentLogger_DO_NOT_USE:configMetric:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054e2288

// -[SCCircumstanceEngine appStartExperimentReader]
// Type encoding: @16@0:8
// Implementation: 0x1003c6ccc

// -[SCCircumstanceEngine intValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v52@0:8@16i24@28@36@?44
// Implementation: 0x1054e228c

// -[SCCircumstanceEngine longValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v56@0:8@16q24@32@40@?48
// Implementation: 0x1054e24a0

// -[SCCircumstanceEngine floatValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v52@0:8@16f24@28@36@?44
// Implementation: 0x1004f212c

// -[SCCircumstanceEngine boolValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v52@0:8@16B24@28@36@?44
// Implementation: 0x1004f1c1c

// -[SCCircumstanceEngine stringValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1004f1dd4

// -[SCCircumstanceEngine protoValueForConfigKey:defaultValue:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1054e2774

// -[SCCircumstanceEngine protoMessageForConfigKey:defaultMessage:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1054e28cc

// -[SCCircumstanceEngine manualExposureValueForConfigKey:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1054e2d58

// -[SCCircumstanceEngine _configResultForConfigKey:expectedValueType:featureProvidedSignals:callbackPerformer:callback:]
// Type encoding: v52@0:8@16i24@28@36@?44
// Implementation: 0x1004f1ea8

// -[SCCircumstanceEngine configsTokenWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054e3074

// -[SCCircumstanceEngine userInSafeMode]
// Type encoding: B16@0:8
// Implementation: 0x1054e307c

// -[SCCircumstanceEngine setFeatureSettingsService:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003dc048

// -[SCCircumstanceEngine observeSessionSyncStatus]
// Type encoding: @16@0:8
// Implementation: 0x1003c2e34

// -[SCCircumstanceEngine intValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: i36@0:8@16i24@28
// Implementation: 0x1002b49dc

// -[SCCircumstanceEngine longValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: q40@0:8@16q24@32
// Implementation: 0x100767078

// -[SCCircumstanceEngine floatValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: f36@0:8@16f24@28
// Implementation: 0x100294e2c

// -[SCCircumstanceEngine boolValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: B36@0:8@16B24@28
// Implementation: 0x100123bc8

// -[SCCircumstanceEngine stringValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100323794

// -[SCCircumstanceEngine protoValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10010b748

// -[SCCircumstanceEngine stringArrayValueForConfigKeySync:defaultValue:featureProvidedSignals:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1054e3084

// -[SCCircumstanceEngine intValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011ac24

// -[SCCircumstanceEngine longValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1054e3118

// -[SCCircumstanceEngine floatValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1005e74cc

// -[SCCircumstanceEngine boolValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10011c61c

// -[SCCircumstanceEngine stringValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100106830

// -[SCCircumstanceEngine manualExposureValueForConfigKeySync:featureProvidedSignals:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1003a5e60

// -[SCCircumstanceEngine bulkLoadNamespaceSync:exposeAll:]
// Type encoding: @24@0:8i16B20
// Implementation: 0x1054e3194

// -[SCCircumstanceEngine bulkLoadNamespaceSyncWithoutThreadCheck_DEPRECATED:exposeAll:]
// Type encoding: @24@0:8i16B20
// Implementation: 0x1002909c8

// -[SCCircumstanceEngine _bulkLoadNamespaceSync:exposeAll:]
// Type encoding: @24@0:8i16B20
// Implementation: 0x100290a08

// -[SCCircumstanceEngine createConfigProviderForNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x1003c5528

// -[SCCircumstanceEngine observeUpdates]
// Type encoding: @16@0:8
// Implementation: 0x100107f38

// -[SCCircumstanceEngine getSequenceIdsInNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x10060d9e0

// -[SCCircumstanceEngine getSequenceIdArrayInNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x1054e31d0

// -[SCCircumstanceEngine createConfigProviderMarshallerForNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x1054e31d8

// -[SCCircumstanceEngine _createCircumstanceEngineConfigProvider:bulkLoadCompletion:]
// Type encoding: @28@0:8i16@?20
// Implementation: 0x1003c5530

// -[SCCircumstanceEngine resetConfigProviderFactory]
// Type encoding: v16@0:8
// Implementation: 0x1054e31e0

// -[SCCircumstanceEngine _bulkLoadConfigProvider:bulkLoadCompletion:]
// Type encoding: @28@0:8i16@?20
// Implementation: 0x1003c561c

// -[SCCircumstanceEngine _shouldUseAserForConfigKey:]
// Type encoding: B24@0:8@16
// Implementation: 0x100123c60

// -[SCCircumstanceEngine getGrapheneContextBytes]
// Type encoding: @16@0:8
// Implementation: 0x1054e3210

// -[SCCircumstanceEngine _assertNotConfigReadOnMainThreadDuringStartup:expectedValueType:]
// Type encoding: v28@0:8@16i24
// Implementation: 0x1001068ac

// -[SCCircumstanceEngine _assertNotBulkLoadDuringStartup:]
// Type encoding: v20@0:8i16
// Implementation: 0x100290a04

// -[SCCircumstanceEngine _shouldUseForcedDefaultValueForConfigResult:]
// Type encoding: B24@0:8@16
// Implementation: 0x10010f5b4

// -[SCCircumstanceEngine shouldUseForcedDefaultValueForConfigResult:]
// Type encoding: B24@0:8@16
// Implementation: 0x10010f5b0

// -[SCCircumstanceEngine configRepository]
// Type encoding: @16@0:8
// Implementation: 0x1054e3218

// -[SCCircumstanceEngine configProvider]
// Type encoding: @16@0:8
// Implementation: 0x1054e3220

// -[SCCircumstanceEngine experimentLogger]
// Type encoding: @16@0:8
// Implementation: 0x1054e3228

// -[SCCircumstanceEngine featureSettingsService]
// Type encoding: @16@0:8
// Implementation: 0x1054e3230

// -[SCCircumstanceEngine countryCodeRepository]
// Type encoding: @16@0:8
// Implementation: 0x1003a6fcc

// -[SCCircumstanceEngine appStartExperimentConfigKeys]
// Type encoding: @16@0:8
// Implementation: 0x1054e3248

// -[SCCircumstanceEngine aserExclusionList]
// Type encoding: @16@0:8
// Implementation: 0x1054e3250

// -[SCCircumstanceEngine .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e3258

@end
