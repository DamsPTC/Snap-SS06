// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockableDataProvider
// Superclass: NSProxy
// Address: 0x112bf49f0

@interface SCLensUnlockableDataProvider

// Property: delegate; attributes: T@"<SCLensDataProviderDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: showBirthdayReplyLens; attributes: TB,D,N
// Property: lensUIStateListener; attributes: T@"<SCLensUIUpdateListener>",R,N

// -[SCLensUnlockableDataProvider initWithLensDataProvider:strategy:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100804c1c

// -[SCLensUnlockableDataProvider initWithLensDataProvider:strategy:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100804cec

// -[SCLensUnlockableDataProvider lensDataProvider]
// Type encoding: @16@0:8
// Implementation: 0x100b78124

// -[SCLensUnlockableDataProvider strategy]
// Type encoding: @16@0:8
// Implementation: 0x100bce7d0

// -[SCLensUnlockableDataProvider warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100b780d0

// -[SCLensUnlockableDataProvider lensUIStateListener]
// Type encoding: @16@0:8
// Implementation: 0x1091e41b4

// -[SCLensUnlockableDataProvider willShowLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091e41b8

// -[SCLensUnlockableDataProvider didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1091e4210

// -[SCLensUnlockableDataProvider didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e4268

// -[SCLensUnlockableDataProvider didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e43e8

// -[SCLensUnlockableDataProvider didSelectLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e4568

// -[SCLensUnlockableDataProvider willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e45e0

// -[SCLensUnlockableDataProvider didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e4658

// -[SCLensUnlockableDataProvider didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1091e46d0

// -[SCLensUnlockableDataProvider didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x1091e4748

// -[SCLensUnlockableDataProvider lensUnlockableStrategy:didAddLens:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e47e8

// -[SCLensUnlockableDataProvider lensUnlockableStrategy:didRemoveLens:withError:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091e48c8

// -[SCLensUnlockableDataProvider lensUnlockableStrategy:didRemoveAllLensesWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1091e49d4

// -[SCLensUnlockableDataProvider forwardingTargetForSelector:]
// Type encoding: @24@0:8:16
// Implementation: 0x100c3df1c

// -[SCLensUnlockableDataProvider forwardInvocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091e4ab4

// -[SCLensUnlockableDataProvider methodSignatureForSelector:]
// Type encoding: @24@0:8:16
// Implementation: 0x1091e4b08

// -[SCLensUnlockableDataProvider delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091e4b54

// -[SCLensUnlockableDataProvider setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100804da0

// -[SCLensUnlockableDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091e4b74

@end
