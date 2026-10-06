// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigMetricGraphene2
// Superclass: NSObject
// Address: 0x112a2b2b8

@interface SCConfigMetricGraphene2

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConfigMetricGraphene2 init]
// Type encoding: @16@0:8
// Implementation: 0x1053267bc

// -[SCConfigMetricGraphene2 initWithGraphene:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000b37c4

// -[SCConfigMetricGraphene2 initWithCircumstanceGraphene:configEvaluationGraphene:configRecoveryGraphene:configSingleReadGraphene:experimentGraphene:aserGraphene:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1000b3be4

// -[SCConfigMetricGraphene2 cofRecoveryStage:recoveryType:durationMs:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1053267c4

// -[SCConfigMetricGraphene2 cofRecoveryWait:recoveryType:durationMs:]
// Type encoding: v36@0:8B16@20d28
// Implementation: 0x10532685c

// -[SCConfigMetricGraphene2 cofHeuristicRecoveryStatus:errorName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1053268dc

// -[SCConfigMetricGraphene2 cofRecoveryNetworkMonitorEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053268ec

// -[SCConfigMetricGraphene2 cofForegroundPushRecovery:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053268fc

// -[SCConfigMetricGraphene2 cofRecoveryConfigsAppliedWithSource:applied:rejected:protectedWrite:]
// Type encoding: v36@0:8@16i24i28B32
// Implementation: 0x105326910

// -[SCConfigMetricGraphene2 cofCacheHit:]
// Type encoding: v20@0:8B16
// Implementation: 0x10010e3bc

// -[SCConfigMetricGraphene2 cofRetrieveRuleIsValid:ruleId:validity:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1053269a4

// -[SCConfigMetricGraphene2 cofProtoParseFailure:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053269b8

// -[SCConfigMetricGraphene2 dbWrite:succeeded:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053269c8

// -[SCConfigMetricGraphene2 cofGetConfigDBHit:dbHit:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10010f1ec

// -[SCConfigMetricGraphene2 cofGetConfigNumberOfRulesFound:ruleCount:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10010f40c

// -[SCConfigMetricGraphene2 cofGetSingleConfig:uncachedOnly:durationMs:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x10010e50c

// -[SCConfigMetricGraphene2 cppGetSingleConfig:isStartUp:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x100101c1c

// -[SCConfigMetricGraphene2 cofGetNameSpace:FromFile:duration:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x10029549c

// -[SCConfigMetricGraphene2 cofCacheUpdate:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053269d8

// -[SCConfigMetricGraphene2 loginResponse:]
// Type encoding: v20@0:8B16
// Implementation: 0x1053269e4

// -[SCConfigMetricGraphene2 loginResponseHistogram:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053269f4

// -[SCConfigMetricGraphene2 cofSyncRequestFullSync:success:isPrelogin:duration:]
// Type encoding: v36@0:8B16B20B24d28
// Implementation: 0x105326a00

// -[SCConfigMetricGraphene2 cofSyncRequestServerErrorCode:isFullSync:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105326a88

// -[SCConfigMetricGraphene2 dbWriteConfigFailed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105326aa0

// -[SCConfigMetricGraphene2 cofSyncWriteFullSync:isLoginSync:success:duration:]
// Type encoding: v36@0:8B16B20B24d28
// Implementation: 0x105326ab4

// -[SCConfigMetricGraphene2 cofDatabaseUpdate:deletedRows:syncStrategy:duration:]
// Type encoding: v48@0:8q16q24q32d40
// Implementation: 0x105326ae4

// -[SCConfigMetricGraphene2 cofServerReturnWrongValueType:configRuleId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1004375bc

// -[SCConfigMetricGraphene2 cofEvaluateRule:configRuleId:isTrue:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x100111030

// -[SCConfigMetricGraphene2 cofEvaluateRulePerf:isStartup:preloadedNamespaceKey:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1001112e0

// -[SCConfigMetricGraphene2 cofABStudy:experimentId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100113268

// -[SCConfigMetricGraphene2 cofInitCircumstanceEngine:duration:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x100106618

// -[SCConfigMetricGraphene2 syncRequestSentInForeground:isPrelogin:isFullSync:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x105326bf8

// -[SCConfigMetricGraphene2 cofFetchSnapToken:duration:]
// Type encoding: v28@0:8B16d20
// Implementation: 0x105326c0c

// -[SCConfigMetricGraphene2 cofFetchSnapTokenError:errorCode:duration:]
// Type encoding: v40@0:8@16q24d32
// Implementation: 0x105326c5c

// -[SCConfigMetricGraphene2 cofSyncRequestHasUpdatedConfigs:isForeground:isFullSync:duration:]
// Type encoding: v36@0:8B16B20B24d28
// Implementation: 0x105326d6c

// -[SCConfigMetricGraphene2 cofSyncRequestClientErrorCode:errorCode:isFullSync:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x105326e00

// -[SCConfigMetricGraphene2 experimentInitSuccess]
// Type encoding: v16@0:8
// Implementation: 0x105326e1c

// -[SCConfigMetricGraphene2 experimentExposureAttempt:]
// Type encoding: v24@0:8@16
// Implementation: 0x105326e28

// -[SCConfigMetricGraphene2 experimentExposureLog:experimentSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100119dd8

// -[SCConfigMetricGraphene2 experimentSyncProcessingLatency:interval:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105326e98

// -[SCConfigMetricGraphene2 experimentFailedToParseVariable:]
// Type encoding: v24@0:8@16
// Implementation: 0x105326ea8

// -[SCConfigMetricGraphene2 experimentMissingVariable:studyName:variable:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105326ebc

// -[SCConfigMetricGraphene2 experimentMissingStudy]
// Type encoding: v16@0:8
// Implementation: 0x105326fb8

// -[SCConfigMetricGraphene2 experimentEmptyStudySettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x105326fcc

// -[SCConfigMetricGraphene2 experimentSyncSuccess]
// Type encoding: v16@0:8
// Implementation: 0x105326fdc

// -[SCConfigMetricGraphene2 experimentStudiesInSync:count:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105326fe8

// -[SCConfigMetricGraphene2 experimentChangedStudiesInSync:count:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105326ff8

// -[SCConfigMetricGraphene2 experimentAccessedStudy:]
// Type encoding: v24@0:8@16
// Implementation: 0x105327008

// -[SCConfigMetricGraphene2 propertyHandlerUnavailable:configId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100338048

// -[SCConfigMetricGraphene2 appStartExperimentReaderDecodeFailureCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053270d4

// -[SCConfigMetricGraphene2 appStartExperimentReaderRetrieveFailureCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053270e0

// -[SCConfigMetricGraphene2 appStartExperimentReaderSaveFailureCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1053270ec

// -[SCConfigMetricGraphene2 appStartExperimentReaderConfigSyncError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1053270f8

// -[SCConfigMetricGraphene2 appStartExperimentReaderConfigSyncAttempt]
// Type encoding: v16@0:8
// Implementation: 0x105327108

// -[SCConfigMetricGraphene2 appStartExperimentReaderSyncWithFullSync:success:interval:]
// Type encoding: v32@0:8B16B20d24
// Implementation: 0x105327114

// -[SCConfigMetricGraphene2 appStartExperimentReaderUnsupportedTypeForConfigId:count:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105327140

// -[SCConfigMetricGraphene2 startupCOFConfigReadSize:isCacheHit:size:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x10010ea90

// -[SCConfigMetricGraphene2 startupCOFConfigReadRuleCount:isCacheHit:count:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x10010ec8c

// -[SCConfigMetricGraphene2 startupCOFConfigReadDurationMs:isCacheHit:isMainThread:duration:]
// Type encoding: v40@0:8@16B24B28d32
// Implementation: 0x10010eea8

// -[SCConfigMetricGraphene2 startupCOFBulkLoad:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002910b4

// -[SCConfigMetricGraphene2 aserStartupDurationMs:isMainThread:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105327150

// -[SCConfigMetricGraphene2 aserFileSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10532716c

// -[SCConfigMetricGraphene2 divertedToAser:]
// Type encoding: v24@0:8@16
// Implementation: 0x100125b38

// -[SCConfigMetricGraphene2 cofPostLoginCorrectnessWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x105327178

// -[SCConfigMetricGraphene2 cofFileSystemStrategyConfigUnknown:]
// Type encoding: v24@0:8q16
// Implementation: 0x105327188

// -[SCConfigMetricGraphene2 cofFileSystemStrategyFallback:fileSystemStrategy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053271f8

// -[SCConfigMetricGraphene2 cofFileSystemEtagValidation:fileSystemStrategy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053272e0

// -[SCConfigMetricGraphene2 cofFileSystemEtagComparison:fileSystemStrategy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105327370

// -[SCConfigMetricGraphene2 cofFileSystemCleanup:syncingStrategy:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x105327400

// -[SCConfigMetricGraphene2 cofReadingStrategyFallback:readingStrategy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105327468

// -[SCConfigMetricGraphene2 cofSyncingStrategyFallback:syncingStrategy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10532754c

// -[SCConfigMetricGraphene2 cofDualSyncResult:docObjectSuccess:fileSystemSuccess:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x1053275dc

// -[SCConfigMetricGraphene2 cofFileSystemUpdateFailed:resultCode:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x1053275f4

// -[SCConfigMetricGraphene2 cofFileSystemUnexpectedlyNull:readingStrategy:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10532769c

// -[SCConfigMetricGraphene2 cofFileSystemCppException:operation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10532772c

// -[SCConfigMetricGraphene2 cofShadowReadMismatch:isCurrentlySyncing:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105327740

// -[SCConfigMetricGraphene2 cofEtagReadResult:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100182e74

// -[SCConfigMetricGraphene2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105327750

@end
