// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensCarouselActivationTracker
// Superclass: NSObject
// Address: 0x112b20308

@interface SCLensCarouselActivationTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensCarouselActivationTracker initWithActiveStateObservable:lensStateWorkflowObservable:cameraNavigationType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x106bd75a8

// -[SCLensCarouselActivationTracker dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106bd7660

// -[SCLensCarouselActivationTracker _setupWithActiveStateObservable:lensStateWorkflowObservable:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bd76a8

// -[SCLensCarouselActivationTracker _handleLensActiveState:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bd79e8

// -[SCLensCarouselActivationTracker _handleLensStateEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bd7a08

// -[SCLensCarouselActivationTracker setEntranceType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bd7b04

// -[SCLensCarouselActivationTracker resetEntranceType]
// Type encoding: v16@0:8
// Implementation: 0x106bd7b1c

// -[SCLensCarouselActivationTracker initialEntranceType]
// Type encoding: Q16@0:8
// Implementation: 0x106bd7b28

// -[SCLensCarouselActivationTracker initialLoggerEntranceTypeWithAlwaysOnCarouselEnabled:useCameraNavigationType:]
// Type encoding: q24@0:8B16B20
// Implementation: 0x106bd7b30

// -[SCLensCarouselActivationTracker _carouselEntranceTypeFromNavigationType]
// Type encoding: q16@0:8
// Implementation: 0x106bd7b68

// -[SCLensCarouselActivationTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bd7b90

@end
