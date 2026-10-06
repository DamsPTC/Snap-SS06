// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFetchManager
// Superclass: NSObject
// Address: 0x112b8fc58

@interface SCPreviewFetchManager

// Property: fetchedLensObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewFetchManager initUcoDataFetcher:carouselOrderProvider:configProvider:mainPerformer:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x107f830ec

// -[SCPreviewFetchManager subscribeOnOrderObservable:swipeFiltersObservable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107f83254

// -[SCPreviewFetchManager fetchedLensObservable]
// Type encoding: @16@0:8
// Implementation: 0x107f83538

// -[SCPreviewFetchManager _handleOrderChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f83560

// -[SCPreviewFetchManager _handleSelectedItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f835a4

// -[SCPreviewFetchManager _fetchUcoItems:requestTiming:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107f836a0

// -[SCPreviewFetchManager _fetchUCOWithLensId:requestTiming:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107f837fc

// -[SCPreviewFetchManager _prefetchItemsWithSelectedItem:radius:isCircular:]
// Type encoding: @36@0:8@16Q24B32
// Implementation: 0x107f838ec

// -[SCPreviewFetchManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f83998

@end
