// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataConfigProvider
// Superclass: NSObject
// Address: 0x112a50e78

@interface SCLensDataConfigProvider

// Property: lensBackgroundPrefetchConfig; attributes: T@"BackgroundPrefetchConfig",R,N
// Property: limitBackgroundPrefetchForNonActiveLensUser; attributes: TB,R,N
// Property: backgroundPrefetchFactor; attributes: Td,R,N
// Property: nonThrottlingBackgroundPrefetcher; attributes: TB,R,N
// Property: unrestrictedLensProcessingEffectFetcher; attributes: TB,R,N
// Property: lensFetchTypeBasedOnStates; attributes: TB,R,N
// Property: centralizedDataStoreConfig; attributes: T@"SCLensMetadataCentralizedStoreConfig",R,N
// Property: additionalCacheNamespaces; attributes: T@"NSArray",R,N
// Property: fetchOnlyNonCachedItems; attributes: TB,R,N
// Property: mixerReloadConfigs; attributes: T@"NSDictionary",R,N
// Property: interactionHistoryConfig; attributes: T@"SCLensInteractionHistoryConfig",R,N
// Property: lensContentFallbackMigrationType; attributes: TQ,R,N
// Property: lensContentFallbackMigrationEnabled; attributes: TB,R,N
// Property: activePrefetchTurnedOff; attributes: TB,R,N
// Property: passivePrefetchTurnedOff; attributes: TB,R,N
// Property: selectedLensPrefetchTurnedOff; attributes: TB,R,N
// Property: cachedIdsCleanupType; attributes: TQ,R,N
// Property: relyOnMuteSwitchCheckerOnly; attributes: TB,R,N
// Property: maxItemsPerNamespace; attributes: TQ,R,N
// Property: retrieveCameraModesByLensIds; attributes: TB,R,N
// Property: lensPrefetchDebounceInterval; attributes: Td,R,N
// Property: shouldShowUCOSaveProgress; attributes: TB,R,N
// Property: shouldShowUCOSaveProgressAsCircle; attributes: TB,R,N
// Property: mixerNamespaceCacheOptimizationEnabled; attributes: TB,R,N
// Property: deviceDependentAssetShouldUseBackendURL; attributes: TB,R,N
// Property: deviceDependentAssetCanResolveFromCOF; attributes: TB,R,N
// Property: deviceDependentAssetShouldUseEndpoint; attributes: TB,R,N
// Property: deviceDependentAssetEndpointCacheTTL; attributes: Td,R,N
// Property: deviceDependentAssetShouldReport; attributes: TB,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataConfigProvider initWithCameraPlatformConfigProvider:lensStudySettingsProvider:circumstanceEngine:appStartExperimentReader:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1006c3a10

// -[SCLensDataConfigProvider lensBackgroundPrefetchConfig]
// Type encoding: @16@0:8
// Implementation: 0x100bb8e2c

// -[SCLensDataConfigProvider limitBackgroundPrefetchForNonActiveLensUser]
// Type encoding: B16@0:8
// Implementation: 0x1055ecf60

// -[SCLensDataConfigProvider backgroundPrefetchFactor]
// Type encoding: d16@0:8
// Implementation: 0x1055ecf78

// -[SCLensDataConfigProvider nonThrottlingBackgroundPrefetcher]
// Type encoding: B16@0:8
// Implementation: 0x1055ecfa4

// -[SCLensDataConfigProvider unrestrictedLensProcessingEffectFetcher]
// Type encoding: B16@0:8
// Implementation: 0x1055ecfbc

// -[SCLensDataConfigProvider lensFetchTypeBasedOnStates]
// Type encoding: B16@0:8
// Implementation: 0x100bbab44

// -[SCLensDataConfigProvider additionalCacheNamespaces]
// Type encoding: @16@0:8
// Implementation: 0x100ba9564

// -[SCLensDataConfigProvider centralizedDataStoreConfig]
// Type encoding: @16@0:8
// Implementation: 0x100ba933c

// -[SCLensDataConfigProvider mixerReloadConfigs]
// Type encoding: @16@0:8
// Implementation: 0x1055ecfd4

// -[SCLensDataConfigProvider interactionHistoryConfig]
// Type encoding: @16@0:8
// Implementation: 0x1007b2ebc

// -[SCLensDataConfigProvider lensContentFallbackMigrationType]
// Type encoding: Q16@0:8
// Implementation: 0x100ba3bd8

// -[SCLensDataConfigProvider lensContentFallbackMigrationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x100ba3bbc

// -[SCLensDataConfigProvider activePrefetchTurnedOff]
// Type encoding: B16@0:8
// Implementation: 0x100b9f6b8

// -[SCLensDataConfigProvider passivePrefetchTurnedOff]
// Type encoding: B16@0:8
// Implementation: 0x100b9f7c0

// -[SCLensDataConfigProvider selectedLensPrefetchTurnedOff]
// Type encoding: B16@0:8
// Implementation: 0x1055ed044

// -[SCLensDataConfigProvider cachedIdsCleanupType]
// Type encoding: Q16@0:8
// Implementation: 0x1055ed094

// -[SCLensDataConfigProvider relyOnMuteSwitchCheckerOnly]
// Type encoding: B16@0:8
// Implementation: 0x1055ed12c

// -[SCLensDataConfigProvider lastValidDataTimestampForNamespaceName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x100b7dab8

// -[SCLensDataConfigProvider maxItemsPerNamespace]
// Type encoding: Q16@0:8
// Implementation: 0x1055ed144

// -[SCLensDataConfigProvider retrieveCameraModesByLensIds]
// Type encoding: B16@0:8
// Implementation: 0x1006c3cf4

// -[SCLensDataConfigProvider fetchOnlyNonCachedItems]
// Type encoding: B16@0:8
// Implementation: 0x1055ed170

// -[SCLensDataConfigProvider lensPrefetchDebounceInterval]
// Type encoding: d16@0:8
// Implementation: 0x1055ed188

// -[SCLensDataConfigProvider shouldShowUCOSaveProgress]
// Type encoding: B16@0:8
// Implementation: 0x1055ed1c0

// -[SCLensDataConfigProvider shouldShowUCOSaveProgressAsCircle]
// Type encoding: B16@0:8
// Implementation: 0x1055ed1d8

// -[SCLensDataConfigProvider mixerNamespaceCacheOptimizationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1007b2590

// -[SCLensDataConfigProvider _resolvedMode]
// Type encoding: q16@0:8
// Implementation: 0x1055ed1f0

// -[SCLensDataConfigProvider deviceDependentAssetShouldUseBackendURL]
// Type encoding: B16@0:8
// Implementation: 0x1055ed228

// -[SCLensDataConfigProvider deviceDependentAssetCanResolveFromCOF]
// Type encoding: B16@0:8
// Implementation: 0x1055ed244

// -[SCLensDataConfigProvider deviceDependentAssetShouldUseEndpoint]
// Type encoding: B16@0:8
// Implementation: 0x1055ed260

// -[SCLensDataConfigProvider deviceDependentAssetEndpointCacheTTL]
// Type encoding: d16@0:8
// Implementation: 0x1055ed280

// -[SCLensDataConfigProvider deviceDependentAssetShouldReport]
// Type encoding: B16@0:8
// Implementation: 0x1055ed2a8

// -[SCLensDataConfigProvider deviceDependentAssetIsAllowlisted:]
// Type encoding: B24@0:8@16
// Implementation: 0x1055ed2cc

// -[SCLensDataConfigProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1055ed2d4

// +[SCLensDataConfigProvider _centralizedDataStoreWithConfigProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100ba9358

// +[SCLensDataConfigProvider _mainNamespacesString]
// Type encoding: @16@0:8
// Implementation: 0x100ba9630

// +[SCLensDataConfigProvider _parseMixerReloadConfigsWithConfigProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100b7ded4

@end
