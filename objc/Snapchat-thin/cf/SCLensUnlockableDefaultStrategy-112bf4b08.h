// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockableDefaultStrategy
// Superclass: NSObject
// Address: 0x112bf4b08

@interface SCLensUnlockableDefaultStrategy

// Property: delegate; attributes: T@"<SCLensUnlockableStrategyDelegate>",W,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensUnlockableDefaultStrategy initWithLensMetadataStore:lensUnlocker:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100bce8c4

// -[SCLensUnlockableDefaultStrategy initWithLensMetadataStore:lensUnlocker:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100bce994

// -[SCLensUnlockableDefaultStrategy lensMetadataStore]
// Type encoding: @16@0:8
// Implementation: 0x1091e69ac

// -[SCLensUnlockableDefaultStrategy lensUnlocker]
// Type encoding: @16@0:8
// Implementation: 0x1091e69b4

// -[SCLensUnlockableDefaultStrategy didSelectLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e69bc

// -[SCLensUnlockableDefaultStrategy didUpdateActiveLensOrder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e6bbc

// -[SCLensUnlockableDefaultStrategy warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100bceaa8

// -[SCLensUnlockableDefaultStrategy _addInProgressLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e6bc0

// -[SCLensUnlockableDefaultStrategy _removeInProgressLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e6c8c

// -[SCLensUnlockableDefaultStrategy _containsInProgressLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e6d58

// -[SCLensUnlockableDefaultStrategy _shouldFetchMetadataForLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091e6e74

// -[SCLensUnlockableDefaultStrategy _handleUnlockResult:placeholderLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e7010

// -[SCLensUnlockableDefaultStrategy delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091e73bc

// -[SCLensUnlockableDefaultStrategy setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bcea9c

// -[SCLensUnlockableDefaultStrategy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e73d4

@end
