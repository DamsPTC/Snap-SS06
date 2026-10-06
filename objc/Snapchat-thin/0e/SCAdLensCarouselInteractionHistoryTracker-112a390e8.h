// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdLensCarouselInteractionHistoryTracker
// Superclass: NSObject
// Address: 0x112a390e8

@interface SCAdLensCarouselInteractionHistoryTracker

// Property: adIdentifierToLenCarouselMap; attributes: T@"NSMutableDictionary",&,N,V_adIdentifierToLenCarouselMap
// Property: currentAdLensCarouselViewingStatus; attributes: T@"SCAdLensCarouselViewingStatus",&,N,V_currentAdLensCarouselViewingStatus
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdLensCarouselInteractionHistoryTracker init]
// Type encoding: @16@0:8
// Implementation: 0x105457de0

// -[SCAdLensCarouselInteractionHistoryTracker adShow:snapIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105457e44

// -[SCAdLensCarouselInteractionHistoryTracker adLensCarouselViewingStatusForAdIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x105457f08

// -[SCAdLensCarouselInteractionHistoryTracker onLensCarouselViewed:]
// Type encoding: v24@0:8@16
// Implementation: 0x105457f10

// -[SCAdLensCarouselInteractionHistoryTracker adIdentifierToLenCarouselMap]
// Type encoding: @16@0:8
// Implementation: 0x105457f18

// -[SCAdLensCarouselInteractionHistoryTracker setAdIdentifierToLenCarouselMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x105457f20

// -[SCAdLensCarouselInteractionHistoryTracker currentAdLensCarouselViewingStatus]
// Type encoding: @16@0:8
// Implementation: 0x105457f50

// -[SCAdLensCarouselInteractionHistoryTracker setCurrentAdLensCarouselViewingStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x105457f58

// -[SCAdLensCarouselInteractionHistoryTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105457f88

@end
