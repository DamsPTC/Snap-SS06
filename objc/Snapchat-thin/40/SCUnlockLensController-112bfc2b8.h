// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockLensController
// Superclass: NSObject
// Address: 0x112bfc2b8

@interface SCUnlockLensController

// Property: filteringPerformer; attributes: T@"<SCPerforming>",&,N,V_filteringPerformer
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: unlockedLenses; attributes: T@"NSMutableArray",&,N,V_unlockedLenses
// Property: delegate; attributes: T@"<SCUnlockLensControllerDelegate>",W,N,V_delegate
// Property: cachedLensesFuture; attributes: T@"SCFuture",R,N
// Property: lensIdToChecksumMap; attributes: T@"NSDictionary",R,N

// -[SCUnlockLensController initWithUnlockedLenses:updateResolver:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1004e5ad0

// -[SCUnlockLensController _ensureNonNilObjects]
// Type encoding: v16@0:8
// Implementation: 0x1004e5b9c

// -[SCUnlockLensController scanUnlockedLensesFromResponse:lensesType:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x10aeb8e58

// -[SCUnlockLensController processUnlockedLensesResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb8f2c

// -[SCUnlockLensController _lensesByScaningAndResolvingNewGeofiltersList:cachedLenses:lensesType:checksumResponses:]
// Type encoding: @48@0:8@16@24q32@40
// Implementation: 0x10aeb91e8

// -[SCUnlockLensController removeFromCache:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb92b0

// -[SCUnlockLensController updateCache]
// Type encoding: v16@0:8
// Implementation: 0x1004e6524

// -[SCUnlockLensController clearCache]
// Type encoding: v16@0:8
// Implementation: 0x10aeb9540

// -[SCUnlockLensController scanUnlockedLenses]
// Type encoding: @16@0:8
// Implementation: 0x1004e663c

// -[SCUnlockLensController cachedLensesFuture]
// Type encoding: @16@0:8
// Implementation: 0x10aeb95cc

// -[SCUnlockLensController lensIdToChecksumMap]
// Type encoding: @16@0:8
// Implementation: 0x10aeb96cc

// -[SCUnlockLensController delegate]
// Type encoding: @16@0:8
// Implementation: 0x100c44b50

// -[SCUnlockLensController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e5c9c

// -[SCUnlockLensController performer]
// Type encoding: @16@0:8
// Implementation: 0x10aeb984c

// -[SCUnlockLensController setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb9854

// -[SCUnlockLensController filteringPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10aeb9884

// -[SCUnlockLensController setFilteringPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb988c

// -[SCUnlockLensController unlockedLenses]
// Type encoding: @16@0:8
// Implementation: 0x1004e66e4

// -[SCUnlockLensController setUnlockedLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb98bc

// -[SCUnlockLensController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1004e64c4

@end
