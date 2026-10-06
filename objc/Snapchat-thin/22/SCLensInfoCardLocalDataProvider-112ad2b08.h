// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensInfoCardLocalDataProvider
// Superclass: NSObject
// Address: 0x112ad2b08

@interface SCLensInfoCardLocalDataProvider

// Property: infoCardsDataObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensInfoCardLocalDataProvider initWithBaseDataProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x100bcaf58

// -[SCLensInfoCardLocalDataProvider infoCardsDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bcafec

// -[SCLensInfoCardLocalDataProvider getLensInfoCardDataWithLensId:contexts:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1061ec9c0

// -[SCLensInfoCardLocalDataProvider getLensInfoCardDataWithLensId:contexts:lensSource:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1061ec9c8

// -[SCLensInfoCardLocalDataProvider getLensInfoCardDataWithLensIds:contexts:]
// Type encoding: @32@0:8@16Q24
// Implementation: 0x1061ecabc

// -[SCLensInfoCardLocalDataProvider _shouldAlwaysRefreshDataForContexts:]
// Type encoding: B24@0:8Q16
// Implementation: 0x1061ecc9c

// -[SCLensInfoCardLocalDataProvider _cachedData:satisfiesContexts:]
// Type encoding: B32@0:8@16Q24
// Implementation: 0x1061eccac

// -[SCLensInfoCardLocalDataProvider _cachedInfoCardDataForLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1061ecd08

// -[SCLensInfoCardLocalDataProvider _storeInfoCardData:forLensId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1061ecd80

// -[SCLensInfoCardLocalDataProvider _requestBaseLensInfoCardDataWithLensId:contexts:lensSource:]
// Type encoding: @40@0:8@16Q24Q32
// Implementation: 0x1061ece04

// -[SCLensInfoCardLocalDataProvider _requestBaseLensInfoCardDataWithLensIds:cachedInfoCardsData:contexts:]
// Type encoding: @40@0:8@16@24Q32
// Implementation: 0x1061ecf74

// -[SCLensInfoCardLocalDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061ed200

@end
