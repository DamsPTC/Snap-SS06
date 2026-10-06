// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRTUSClientCacheManagerImpl
// Superclass: NSObject
// Address: 0x112c2a118

@interface SCRTUSClientCacheManagerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRTUSClientCacheManagerImpl initWithConfigResolver:resultHandler:metricsLogger:workerQueue:dbTransactorProvider:configProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10af66c94

// -[SCRTUSClientCacheManagerImpl _getLazyDbTransactorFromProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x10af66e30

// -[SCRTUSClientCacheManagerImpl addRTUSEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af66f3c

// -[SCRTUSClientCacheManagerImpl _writeEventToDbAndTrimRecordsIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af67074

// -[SCRTUSClientCacheManagerImpl RTUSEventAddedObservable]
// Type encoding: @16@0:8
// Implementation: 0x10af67124

// -[SCRTUSClientCacheManagerImpl _writeEventToDb:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af6714c

// -[SCRTUSClientCacheManagerImpl _maybeTrimRecordsForProduct:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af67354

// -[SCRTUSClientCacheManagerImpl _getNumRecordsInDbForProduct:]
// Type encoding: q24@0:8q16
// Implementation: 0x10af673d0

// -[SCRTUSClientCacheManagerImpl _trimDbRecordsForProduct:numRecordsToDelete:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10af67494

// -[SCRTUSClientCacheManagerImpl getEventsForProduct:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af67568

// -[SCRTUSClientCacheManagerImpl _getRTUSEventsAndAsyncDeleteForProduct:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af67600

// -[SCRTUSClientCacheManagerImpl _retrieveProductEventsFromDb:]
// Type encoding: @24@0:8q16
// Implementation: 0x10af67670

// -[SCRTUSClientCacheManagerImpl _asyncDeleteExpiredTtlEventsGivenValidTtlEvents:listEventsWithinTtl:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af67794

// -[SCRTUSClientCacheManagerImpl _deleteExpiredTtlEventsGivenValidTtlEvents:listEventsWithinTtl:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af678c0

// -[SCRTUSClientCacheManagerImpl _getMinRowIdFromListEvents:]
// Type encoding: q24@0:8@16
// Implementation: 0x10af67a60

// -[SCRTUSClientCacheManagerImpl purgeEventsForProduct:rtusResponse:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af67b6c

// -[SCRTUSClientCacheManagerImpl _purgeEventsFromDbForProduct:listEventIdsToDelete:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10af67d14

// -[SCRTUSClientCacheManagerImpl onBackgroundingInternal]
// Type encoding: v16@0:8
// Implementation: 0x10af67e78

// -[SCRTUSClientCacheManagerImpl _deleteDisabledEventsOnBackgrounding]
// Type encoding: v16@0:8
// Implementation: 0x10af67f54

// -[SCRTUSClientCacheManagerImpl _deleteAllEventsFromDbForProduct:]
// Type encoding: v24@0:8q16
// Implementation: 0x10af68028

// -[SCRTUSClientCacheManagerImpl _getBackgroundCleanupFinished]
// Type encoding: B16@0:8
// Implementation: 0x10af680f8

// -[SCRTUSClientCacheManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af68100

@end
