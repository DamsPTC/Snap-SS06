// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensStatusProvider
// Superclass: NSObject
// Address: 0x112bf3168

@interface SCLensStatusProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensStatusProvider initWithLensCarouselApplicator:lensCarouselLensDownloader:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091b3464

// -[SCLensStatusProvider statusForLens:]
// Type encoding: q24@0:8@16
// Implementation: 0x1091b3500

// -[SCLensStatusProvider isLensBeingApplied:]
// Type encoding: B24@0:8@16
// Implementation: 0x1091b3554

// -[SCLensStatusProvider currentlyApplingLensId]
// Type encoding: @16@0:8
// Implementation: 0x1091b365c

// -[SCLensStatusProvider appliedLensId]
// Type encoding: @16@0:8
// Implementation: 0x1091b36d4

// -[SCLensStatusProvider _statusForLens:isBeingApplied:]
// Type encoding: q28@0:8@16B24
// Implementation: 0x1091b374c

// -[SCLensStatusProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091b3820

@end
