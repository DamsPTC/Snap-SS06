// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataFetcherUIState
// Superclass: NSObject
// Address: 0x112c6d9b8

@interface SCLensDataFetcherUIState

// Property: visibleLenses; attributes: T@"NSArray",R,C,N
// Property: activeLensIndex; attributes: TQ,R,N
// Property: delegate; attributes: T@"<SCLensDataFetcherUIStateDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataFetcherUIState initWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bad364

// -[SCLensDataFetcherUIState visibleLenses]
// Type encoding: @16@0:8
// Implementation: 0x10b0d7948

// -[SCLensDataFetcherUIState isExplicitlyActivatedLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0d7a68

// -[SCLensDataFetcherUIState isActiveLensId:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b0d7b70

// -[SCLensDataFetcherUIState lensById:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0d7c78

// -[SCLensDataFetcherUIState lensIndexById:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b0d7db4

// -[SCLensDataFetcherUIState activeLensIndex]
// Type encoding: Q16@0:8
// Implementation: 0x10b0d7ef0

// -[SCLensDataFetcherUIState didUpdateActiveLensOrder:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d7ff8

// -[SCLensDataFetcherUIState willDisplayLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d820c

// -[SCLensDataFetcherUIState didUpdateDisplayedLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d83b8

// -[SCLensDataFetcherUIState didEndDisplayingLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d83bc

// -[SCLensDataFetcherUIState didDrawIcon:forLens:atIndex:withContext:]
// Type encoding: v48@0:8@16@24q32Q40
// Implementation: 0x10b0d8558

// -[SCLensDataFetcherUIState didActivateLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d86fc

// -[SCLensDataFetcherUIState didSelectLens:withContext:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10b0d88ec

// -[SCLensDataFetcherUIState didHideLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0d88f0

// -[SCLensDataFetcherUIState willShowLensesWithContext:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0d8a28

// -[SCLensDataFetcherUIState _performImmediatlyIfCurrentPerformerBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10b0d8a2c

// -[SCLensDataFetcherUIState delegate]
// Type encoding: @16@0:8
// Implementation: 0x10b0d8a84

// -[SCLensDataFetcherUIState setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bae2a0

// -[SCLensDataFetcherUIState .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0d8a9c

@end
