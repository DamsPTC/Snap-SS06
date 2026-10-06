// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCConfigManagerImpl
// Superclass: NSObject
// Address: 0x112a2b5d8

@interface SCConfigManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCConfigManagerImpl initWithConfigMetric:configMetricLogger:grapheneContextManager:repository:performer:connectivityMonitoring:carrierNetworkInfoProvider:repoNetwork:idleMonitor:experimentLogger:experimentStore:appInsightsMetadataStorage:countryCodeRepository:readinessMetricEmitter:propertyHandlerRegistry:identifierProvider:versionProvider:syncEventLogger:appStartExperimentReader:tweaksDataPersister:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x1000f9ddc

// -[SCConfigManagerImpl initWithConfigMetric:configMetricLogger:grapheneContextManager:repository:performer:connectivityMonitoring:carrierNetworkInfoProvider:repoNetwork:configUserAuthentication:idleMonitor:experimentLogger:experimentStore:appInsightsMetadataStorage:countryCodeRepository:readinessMetricEmitter:propertyHandlerRegistry:identifierProvider:heuristicRecoveryManager:versionProvider:syncEventLogger:appStartExperimentReader:tweaksDataPersister:forceDefaultsTweak:startupJournalManager:]
// Type encoding: @204@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184B192@196
// Implementation: 0x1000fa0c0

// -[SCConfigManagerImpl eTagWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10532f0ac

// -[SCConfigManagerImpl _readEtagFromDB]
// Type encoding: v16@0:8
// Implementation: 0x1001829a4

// -[SCConfigManagerImpl bulkLoadNamespace:exposeAll:]
// Type encoding: @24@0:8i16B20
// Implementation: 0x100290ac0

// -[SCConfigManagerImpl getSequenceIdsInNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x10060d9e8

// -[SCConfigManagerImpl getSequenceIdArrayInNamespace:]
// Type encoding: @20@0:8i16
// Implementation: 0x10060da58

// -[SCConfigManagerImpl findConfigsWithConfigKeySyncInternal:]
// Type encoding: @24@0:8@16
// Implementation: 0x100106f40

// -[SCConfigManagerImpl preloadedNamespaceKey]
// Type encoding: i16@0:8
// Implementation: 0x10010f68c

// -[SCConfigManagerImpl findConfigResultsWithConfigKeySync:]
// Type encoding: @24@0:8@16
// Implementation: 0x100106ec8

// -[SCConfigManagerImpl isColdStart]
// Type encoding: B16@0:8
// Implementation: 0x1009a13c0

// -[SCConfigManagerImpl backgroundSync:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10532f260

// -[SCConfigManagerImpl _sortConfigRulesByPriority:configs:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10010f10c

// -[SCConfigManagerImpl _validateConfigRulesForConfigKey:configsInDBFormat:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10532f30c

// -[SCConfigManagerImpl _broadcastAuthStateOnce:]
// Type encoding: B20@0:8B16
// Implementation: 0x1009a3fe8

// -[SCConfigManagerImpl _onNewOrResumedRegistration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10532f6d8

// -[SCConfigManagerImpl _onResume]
// Type encoding: v16@0:8
// Implementation: 0x1009a1354

// -[SCConfigManagerImpl userInitiatedSync]
// Type encoding: @16@0:8
// Implementation: 0x10532f7a0

// -[SCConfigManagerImpl _markNoLoginResponse]
// Type encoding: v16@0:8
// Implementation: 0x10532f80c

// -[SCConfigManagerImpl _convertFrom:secondsForNow:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10532f87c

// -[SCConfigManagerImpl _processLoginResponse:completionSyncBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10532fab0

// -[SCConfigManagerImpl _onLoginAndPostRegistrationWithBootstrapData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10532ffc4

// -[SCConfigManagerImpl _processBootstrapData:completionSyncBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105330314

// -[SCConfigManagerImpl _buildRequest:appState:instrumentation:]
// Type encoding: @28@0:8i16i20i24
// Implementation: 0x105330378

// -[SCConfigManagerImpl _createSyncBlock:cofTriggerEventType:coldStart:]
// Type encoding: @?32@0:8@?16i24B28
// Implementation: 0x1009a4a20

// -[SCConfigManagerImpl _onDeauth]
// Type encoding: v16@0:8
// Implementation: 0x105330b10

// -[SCConfigManagerImpl applyRecoveryResponseWithRecoveryResponse:updateAserImmediately:protectedWrite:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105330c30

// -[SCConfigManagerImpl _filterRecoveryResponseToCachedConfigs:]
// Type encoding: @24@0:8@16
// Implementation: 0x105330e60

// -[SCConfigManagerImpl appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x105331008

// -[SCConfigManagerImpl _ignoreAssertion]
// Type encoding: B16@0:8
// Implementation: 0x10533163c

// -[SCConfigManagerImpl _refreshCacheWithUpdateConfigIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105331644

// -[SCConfigManagerImpl _onSyncCompleteWithSuccess:updatedConfigIds:fromUserSession:tweakSync:cofGrapheneContext:loginSync:completionHandler:]
// Type encoding: v56@0:8B16@20B28B32@36B44@?48
// Implementation: 0x105331944

// -[SCConfigManagerImpl _fullSyncFromConfigResults:fromUserSession:crashRecovery:updateAserImmediately:tweakSync:loginSync:cofGrapheneContext:bitmap:completionHandler:]
// Type encoding: v68@0:8@16B24B28B32B36B40@44@52@?60
// Implementation: 0x105331c40

// -[SCConfigManagerImpl _deltaSyncFromConfigResults:fromUserSession:crashRecovery:updateAserImmediately:tweakSync:loginSync:cofGrapheneContext:bitmap:completionHandler:]
// Type encoding: v68@0:8@16B24B28B32B36B40@44@52@?60
// Implementation: 0x105331f00

// -[SCConfigManagerImpl _syncFromConfigResults:fullResponse:fromUserSession:crashRecovery:updateAserImmediately:tweakSync:loginSync:cofGrapheneContext:bitmap:completionHandler:]
// Type encoding: v72@0:8@16B24B28B32B36B40B44@48@56@?64
// Implementation: 0x1053321c0

// -[SCConfigManagerImpl _recoveryConfigIds]
// Type encoding: @16@0:8
// Implementation: 0x1053322cc

// -[SCConfigManagerImpl _getRecoveryStrategyWithConfigResult:updateConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10533234c

// -[SCConfigManagerImpl _extractRecoveryStrategy:containsTweakOverrides:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1053325dc

// -[SCConfigManagerImpl _parseIntPairFromValue:]
// Type encoding: {?=ii}24@0:8Q16
// Implementation: 0x1053328f0

// -[SCConfigManagerImpl _updateDBWithCofConfigTargetingResponse:fromUserSession:crashRecovery:isLoginSync:updateAserImmediately:cofTriggerEventType:completionHandler:]
// Type encoding: v52@0:8@16B24B28B32B36i40@?44
// Implementation: 0x1053328f8

// -[SCConfigManagerImpl _isRefreshPreferred]
// Type encoding: B16@0:8
// Implementation: 0x105332c90

// -[SCConfigManagerImpl _isRefreshPreferredInternal]
// Type encoding: B16@0:8
// Implementation: 0x105332c94

// -[SCConfigManagerImpl _evaluateAbConfig]
// Type encoding: v16@0:8
// Implementation: 0x105332d38

// -[SCConfigManagerImpl _evaluateFroPayloadOptimizationConfig]
// Type encoding: v16@0:8
// Implementation: 0x105332df8

// -[SCConfigManagerImpl bulkLoadNamespaceBytes:exposeAll:]
// Type encoding: @24@0:8i16B20
// Implementation: 0x105332eb8

// -[SCConfigManagerImpl findConfigsWithConfigKey:callbackBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1004f2024

// -[SCConfigManagerImpl performDeltaSyncUpdateWithTweaks:]
// Type encoding: v24@0:8@16
// Implementation: 0x105332f34

// -[SCConfigManagerImpl getAllConfigs]
// Type encoding: @16@0:8
// Implementation: 0x105332fc8

// -[SCConfigManagerImpl getLastUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x105332fd0

// -[SCConfigManagerImpl setLastUpdateTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1000faa20

// -[SCConfigManagerImpl getLastSyncTriggerType]
// Type encoding: i16@0:8
// Implementation: 0x105332ff8

// -[SCConfigManagerImpl setLastSyncTriggerType:]
// Type encoding: v20@0:8i16
// Implementation: 0x105333000

// -[SCConfigManagerImpl observeUpdates]
// Type encoding: @16@0:8
// Implementation: 0x100107f40

// -[SCConfigManagerImpl observeSessionSyncStatus]
// Type encoding: @16@0:8
// Implementation: 0x1003c2e3c

// -[SCConfigManagerImpl etag]
// Type encoding: @16@0:8
// Implementation: 0x105333008

// -[SCConfigManagerImpl setEtag:]
// Type encoding: v24@0:8@16
// Implementation: 0x100184a60

// -[SCConfigManagerImpl _updateSafeModeEnabled:forceDefaultsTweak:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1000fb274

// -[SCConfigManagerImpl userInSafeMode]
// Type encoding: B16@0:8
// Implementation: 0x105333020

// -[SCConfigManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105333028

@end
