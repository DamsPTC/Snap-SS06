// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: AgeVerificationSession
// Superclass: NSObject
// Address: 0x112982518

@interface AgeVerificationSession

// Property: avSessionId; attributes: T@"NSString",N,R
// Property: appealSessionId; attributes: T@"NSString",N,R
// Property: context; attributes: Tq,N,R,Vcontext
// Property: blocking; attributes: Tq,N,R,Vblocking

// -[AgeVerificationSession avSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1040642e4

// -[AgeVerificationSession appealSessionId]
// Type encoding: @16@0:8
// Implementation: 0x1040642f0

// -[AgeVerificationSession context]
// Type encoding: q16@0:8
// Implementation: 0x104064344

// -[AgeVerificationSession blocking]
// Type encoding: q16@0:8
// Implementation: 0x104064354

// -[AgeVerificationSession initWithAppealSessionId:context:blocking:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x104064500

// -[AgeVerificationSession init]
// Type encoding: @16@0:8
// Implementation: 0x104064550

// -[AgeVerificationSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1040645b0

@end
