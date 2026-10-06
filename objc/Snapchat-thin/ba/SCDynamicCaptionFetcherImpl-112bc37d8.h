// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDynamicCaptionFetcherImpl
// Superclass: NSObject
// Address: 0x112bc37d8

@interface SCDynamicCaptionFetcherImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDynamicCaptionFetcherImpl initWithGrapheneLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e0b420

// -[SCDynamicCaptionFetcherImpl prepareCaptionStyle:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e0b5a8

// -[SCDynamicCaptionFetcherImpl _prepareCaptionStyle:startTime:completionBlock:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x108e0b7f0

// -[SCDynamicCaptionFetcherImpl _handlePreparedCaptionStyle:startTime:completionBlock:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x108e0bbc4

// -[SCDynamicCaptionFetcherImpl _prepareImageAssets:collectorBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e0bdf0

// -[SCDynamicCaptionFetcherImpl _registerFont:collectorBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e0bef4

// -[SCDynamicCaptionFetcherImpl _fontInstalled:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e0c380

// -[SCDynamicCaptionFetcherImpl _cacheFontFile:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e0c3f0

// -[SCDynamicCaptionFetcherImpl fetchAssetFromURLString:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e0c414

// -[SCDynamicCaptionFetcherImpl loadDependencyOfCaptionStyles:completeBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e0c968

// -[SCDynamicCaptionFetcherImpl clearCache]
// Type encoding: v16@0:8
// Implementation: 0x108e0cb90

// -[SCDynamicCaptionFetcherImpl isFontCachedForURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x108e0cbcc

// -[SCDynamicCaptionFetcherImpl maxLoadingDurationWithGrapheneLogging]
// Type encoding: d16@0:8
// Implementation: 0x108e0cbd4

// -[SCDynamicCaptionFetcherImpl captionResourceFromURL:resourceBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108e0cc24

// -[SCDynamicCaptionFetcherImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e0cc28

@end
