// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockableCentralizedStoreStrategy
// Superclass: NSObject
// Address: 0x112bf4a68

@interface SCLensUnlockableCentralizedStoreStrategy

// Property: delegate; attributes: T@"<SCLensUnlockableStrategyDelegate>",W,Vdelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensUnlockableCentralizedStoreStrategy initWithLensMetadataStore:centralizedDataStore:lensesFilter:featureAttribution:]
// Type encoding: @48@0:8@16@24@32q40
// Implementation: 0x1091e58f0

// -[SCLensUnlockableCentralizedStoreStrategy lensMetadataStore]
// Type encoding: @16@0:8
// Implementation: 0x1091e59ec

// -[SCLensUnlockableCentralizedStoreStrategy warmUp]
// Type encoding: v16@0:8
// Implementation: 0x1091e59f4

// -[SCLensUnlockableCentralizedStoreStrategy didSelectLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e5a74

// -[SCLensUnlockableCentralizedStoreStrategy _unlockLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e5b10

// -[SCLensUnlockableCentralizedStoreStrategy _handleUnlockResults:placeholderLenses:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e5de0

// -[SCLensUnlockableCentralizedStoreStrategy _handleUnlockResult:placeholderLenses:lenses:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091e6020

// -[SCLensUnlockableCentralizedStoreStrategy lensIndexInLensesList:lensId:]
// Type encoding: Q32@0:8@16@24
// Implementation: 0x1091e6304

// -[SCLensUnlockableCentralizedStoreStrategy didUpdateActiveLensOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e63e8

// -[SCLensUnlockableCentralizedStoreStrategy _addInProgressLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e63ec

// -[SCLensUnlockableCentralizedStoreStrategy _removeInProgressLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e644c

// -[SCLensUnlockableCentralizedStoreStrategy _containsInProgressLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e64ac

// -[SCLensUnlockableCentralizedStoreStrategy _shouldFetchMetadataForLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e6528

// -[SCLensUnlockableCentralizedStoreStrategy delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091e66e8

// -[SCLensUnlockableCentralizedStoreStrategy setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e6700

// -[SCLensUnlockableCentralizedStoreStrategy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e670c

@end
