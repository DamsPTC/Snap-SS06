// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselEventsReporter
// Superclass: NSObject
// Address: 0x112bf32a8

@interface SCLensCarouselEventsReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCarouselEventsReporter initWithLensCarouselFunnelLogger:lensLogger:legacyUiUpdateAnnouncer:lensCarouselSelectionMapper:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1091b5c14

// -[SCLensCarouselEventsReporter dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091b5d3c

// -[SCLensCarouselEventsReporter reportLensCarouselActivated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091b5db0

// -[SCLensCarouselEventsReporter reportLensCarousel:didActivateLens:index:selectionType:originalLensIndex:totalLensesCount:isLensFetched:]
// Type encoding: v68@0:8@16@24Q32q40Q48Q56B64
// Implementation: 0x1091b5db4

// -[SCLensCarouselEventsReporter reportLensCarousel:didSelectLens:index:selectionType:originalLensIndex:totalLensesCount:]
// Type encoding: v64@0:8@16@24Q32q40Q48Q56
// Implementation: 0x1091b5e68

// -[SCLensCarouselEventsReporter reportLensCarousel:didUpdateVisibleLenses:mappedVisibleLenses:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1091b5e6c

// -[SCLensCarouselEventsReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091b5eb4

@end
