// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselPerformanceOperationEvent
// Superclass: NSObject
// Address: 0x11296bf60

@interface SCLensCarouselPerformanceOperationEvent

// Property: description; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R

// -[SCLensCarouselPerformanceOperationEvent description]
// Type encoding: @16@0:8
// Implementation: 0x103f697ec

// -[SCLensCarouselPerformanceOperationEvent init]
// Type encoding: @16@0:8
// Implementation: 0x103f69838

// -[SCLensCarouselPerformanceOperationEvent hash]
// Type encoding: q16@0:8
// Implementation: 0x103f69880

// -[SCLensCarouselPerformanceOperationEvent isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x103f69e14

// -[SCLensCarouselPerformanceOperationEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x103f69e94

// -[SCLensCarouselPerformanceOperationEvent matchActivationRequested:deactivationRequested:operationCompleted:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x103f6a0ac

// -[SCLensCarouselPerformanceOperationEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f6a144

// +[SCLensCarouselPerformanceOperationEvent activationRequestedWithUuid:willPresentCarousel:activationConfiguration:]
// Type encoding: @36@0:8@16B24@28
// Implementation: 0x103f69e98

// +[SCLensCarouselPerformanceOperationEvent deactivationRequestedWithUuid:]
// Type encoding: @24@0:8@16
// Implementation: 0x103f69f10

// +[SCLensCarouselPerformanceOperationEvent operationCompletedWithUuid:processingTime:resultCode:]
// Type encoding: @40@0:8@16d24q32
// Implementation: 0x103f69f48

@end
