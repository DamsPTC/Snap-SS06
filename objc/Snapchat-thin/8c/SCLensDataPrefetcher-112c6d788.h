// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataPrefetcher
// Superclass: NSObject
// Address: 0x112c6d788

@interface SCLensDataPrefetcher

// Property: lensDataFetcher; attributes: T@"SCLensDataFetcher",&,N,V_lensDataFetcher
// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataPrefetcher initWithLensDataFetcher:performer:lensUserProvider:remoteAssetPrefetching:internalLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10b0d0ef0

// -[SCLensDataPrefetcher prefetchLenses:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d1014

// -[SCLensDataPrefetcher prefetchAssetsForLens:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d1240

// -[SCLensDataPrefetcher prefetchAssets:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d13d4

// -[SCLensDataPrefetcher prefetchManifestItemsForLens:fetchSourceType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10b0d152c

// -[SCLensDataPrefetcher lensDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x10b0d1640

// -[SCLensDataPrefetcher setLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d1648

// -[SCLensDataPrefetcher performer]
// Type encoding: @16@0:8
// Implementation: 0x10b0d1678

// -[SCLensDataPrefetcher setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d1680

// -[SCLensDataPrefetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0d16b0

@end
