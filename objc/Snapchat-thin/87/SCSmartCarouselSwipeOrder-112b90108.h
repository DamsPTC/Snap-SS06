// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSmartCarouselSwipeOrder
// Superclass: NSObject
// Address: 0x112b90108

@interface SCSmartCarouselSwipeOrder

// Property: enforceLimits; attributes: TB,N,V_enforceLimits
// Property: scores; attributes: T@"NSMutableArray",R,N,V_scores
// Property: swipeOrderedFiltersSortedByScoreDescending; attributes: TB,N,V_swipeOrderedFiltersSortedByScoreDescending
// Property: filterItems; attributes: T@"NSMutableArray",R,N,V_filterItems
// Property: configParser; attributes: T@"SCCarouselGroupConfigParser",&,N,V_configParser
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSmartCarouselSwipeOrder initWithCarouselGroupConfigParser:enforceLimits:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x107f8c2e4

// -[SCSmartCarouselSwipeOrder filterAtCarouselIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x107f8c3d4

// -[SCSmartCarouselSwipeOrder objectAtIndexedSubscript:]
// Type encoding: @24@0:8Q16
// Implementation: 0x107f8c408

// -[SCSmartCarouselSwipeOrder items]
// Type encoding: @16@0:8
// Implementation: 0x107f8c40c

// -[SCSmartCarouselSwipeOrder hasFilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x107f8c424

// -[SCSmartCarouselSwipeOrder count]
// Type encoding: q16@0:8
// Implementation: 0x107f8c42c

// -[SCSmartCarouselSwipeOrder carouselIndexForFilterName:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107f8c434

// -[SCSmartCarouselSwipeOrder carouselIndexForFilter:]
// Type encoding: Q24@0:8@16
// Implementation: 0x107f8c4e8

// -[SCSmartCarouselSwipeOrder removeFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8c4f0

// -[SCSmartCarouselSwipeOrder removeFilterAtCarouselIndex:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107f8c530

// -[SCSmartCarouselSwipeOrder addFilter:]
// Type encoding: q24@0:8@16
// Implementation: 0x107f8c580

// -[SCSmartCarouselSwipeOrder clearAllFilters]
// Type encoding: v16@0:8
// Implementation: 0x107f8c604

// -[SCSmartCarouselSwipeOrder _insertFilter:absoluteScore:]
// Type encoding: q28@0:8@16f24
// Implementation: 0x107f8c660

// -[SCSmartCarouselSwipeOrder filterItems]
// Type encoding: @16@0:8
// Implementation: 0x107f8c928

// -[SCSmartCarouselSwipeOrder configParser]
// Type encoding: @16@0:8
// Implementation: 0x107f8c930

// -[SCSmartCarouselSwipeOrder setConfigParser:]
// Type encoding: v24@0:8@16
// Implementation: 0x107f8c938

// -[SCSmartCarouselSwipeOrder enforceLimits]
// Type encoding: B16@0:8
// Implementation: 0x107f8c968

// -[SCSmartCarouselSwipeOrder setEnforceLimits:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f8c970

// -[SCSmartCarouselSwipeOrder scores]
// Type encoding: @16@0:8
// Implementation: 0x107f8c978

// -[SCSmartCarouselSwipeOrder swipeOrderedFiltersSortedByScoreDescending]
// Type encoding: B16@0:8
// Implementation: 0x107f8c980

// -[SCSmartCarouselSwipeOrder setSwipeOrderedFiltersSortedByScoreDescending:]
// Type encoding: v20@0:8B16
// Implementation: 0x107f8c988

// -[SCSmartCarouselSwipeOrder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107f8c990

@end
