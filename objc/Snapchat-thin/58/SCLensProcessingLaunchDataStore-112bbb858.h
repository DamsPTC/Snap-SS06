// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingLaunchDataStore
// Superclass: NSObject
// Address: 0x112bbb858

@interface SCLensProcessingLaunchDataStore

// Property: persistentStore; attributes: T@"SCLazy",R,N,V_persistentStore
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensProcessingLaunchDataStore initWithPersistentStore:lensEntryPointTracker:lensUserProvider:lensUserDataProvider:lensNetworkPermissionsProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108c94d24

// -[SCLensProcessingLaunchDataStore setupLaunchParams:forEffectId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c94e68

// -[SCLensProcessingLaunchDataStore clearLaunchParamsForEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c94f44

// -[SCLensProcessingLaunchDataStore setupLaunchDate:forEffectId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108c94fd0

// -[SCLensProcessingLaunchDataStore clearLaunchDateForEffectId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108c950a0

// -[SCLensProcessingLaunchDataStore effectInfoForLensMetadata:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c9512c

// -[SCLensProcessingLaunchDataStore effectInfoForLensMetadata:isWarmup:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x108c95134

// -[SCLensProcessingLaunchDataStore isValidLaunchData]
// Type encoding: B16@0:8
// Implementation: 0x108c95514

// -[SCLensProcessingLaunchDataStore forceReloadEffectForLensMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c95590

// -[SCLensProcessingLaunchDataStore containsValidContentForLensMetadata:]
// Type encoding: B24@0:8@16
// Implementation: 0x108c95598

// -[SCLensProcessingLaunchDataStore _launchDataWithEffectId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c955a0

// -[SCLensProcessingLaunchDataStore _networkPermissionsForLens:]
// Type encoding: @24@0:8@16
// Implementation: 0x108c95658

// -[SCLensProcessingLaunchDataStore _lensInfoWithLaunchMetadata:lens:isWarmup:forceReload:]
// Type encoding: @40@0:8@16@24B32B36
// Implementation: 0x108c95854

// -[SCLensProcessingLaunchDataStore persistentStore]
// Type encoding: @16@0:8
// Implementation: 0x108c95a44

// -[SCLensProcessingLaunchDataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108c95a4c

@end
