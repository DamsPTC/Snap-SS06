// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCacheManager
// Superclass: NSObject
// Address: 0x112cd3178

@interface SCCacheManager

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: sharedMemoryCache; attributes: T@"PINMemoryCache",&,N,V_sharedMemoryCache
// Property: isUserAvailable; attributes: TB,N,V_isUserAvailable
// Property: unavailableWarningCallback; attributes: T@?,C,N,V_unavailableWarningCallback

// -[SCCacheManager initWithQueuePerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100448648

// -[SCCacheManager getDiskCacheSizeForKind:block:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10b7c02dc

// -[SCCacheManager determineAllMetrics:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c0458

// -[SCCacheManager _determineMetricsForDatastores:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c0584

// -[SCCacheManager _prepareOwnedDatastoresWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c072c

// -[SCCacheManager clearOutExpiredCacheWithCircumstanceEngine:cancelationToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b7c0e90

// -[SCCacheManager clearAllSessionScopedCacheWithCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c12fc

// -[SCCacheManager handleEmergencyDiskConditionForDatastores:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c1600

// -[SCCacheManager _readCofConfigValueHelperWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c17c0

// -[SCCacheManager _cleanupDeadUnmanagedDirectories]
// Type encoding: v16@0:8
// Implementation: 0x10b7c1c00

// -[SCCacheManager _cleanupDeadCacheDirectories]
// Type encoding: v16@0:8
// Implementation: 0x10b7c1cd0

// -[SCCacheManager _isReadyForCacheCleanup:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7c1d34

// -[SCCacheManager _removeDeadCacheDirectories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c1dd4

// -[SCCacheManager _initializeDeadCacheDetection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c1e84

// -[SCCacheManager _determineActiveUnmanagedDirectories:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b7c20c8

// -[SCCacheManager _determineActiveCacheDirectories]
// Type encoding: @16@0:8
// Implementation: 0x10b7c2298

// -[SCCacheManager _markOversizedDatastore]
// Type encoding: v16@0:8
// Implementation: 0x10b7c2438

// -[SCCacheManager _shouldEnableSymlinkSplicing:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b7c2448

// -[SCCacheManager isUserAvailable]
// Type encoding: B16@0:8
// Implementation: 0x10083abe8

// -[SCCacheManager setIsUserAvailable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10b7c2460

// -[SCCacheManager unavailableWarningCallback]
// Type encoding: @?16@0:8
// Implementation: 0x10083abf0

// -[SCCacheManager setUnavailableWarningCallback:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b7c2468

// -[SCCacheManager performer]
// Type encoding: @16@0:8
// Implementation: 0x10b7c2470

// -[SCCacheManager setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c2478

// -[SCCacheManager sharedMemoryCache]
// Type encoding: @16@0:8
// Implementation: 0x10b7c24a8

// -[SCCacheManager setSharedMemoryCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b7c24b0

// -[SCCacheManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b7c24e0

// +[SCCacheManager shared]
// Type encoding: @16@0:8
// Implementation: 0x100448588

@end
