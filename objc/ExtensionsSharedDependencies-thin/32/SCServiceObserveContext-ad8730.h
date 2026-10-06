// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServiceObserveContext
// Superclass: NSObject
// Address: 0xad8730

@interface SCServiceObserveContext

// Property: UUID; attributes: T@"NSString",R,C,N,V_UUID
// Property: changeHandler; attributes: T@?,R,C,N,V_changeHandler
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_queue
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCServiceObserveContext initWithServiceLoop:UUID:queue:changeHandler:]
// Type encoding: @48@0:8@16@24@32@?40
// Implementation: 0x450fac

// -[SCServiceObserveContext dealloc]
// Type encoding: v16@0:8
// Implementation: 0x4510b4

// -[SCServiceObserveContext unobserve]
// Type encoding: v16@0:8
// Implementation: 0x4510fc

// -[SCServiceObserveContext unobserveFromDealloc:]
// Type encoding: v20@0:8B16
// Implementation: 0x451104

// -[SCServiceObserveContext invalidate]
// Type encoding: v16@0:8
// Implementation: 0x451114

// -[SCServiceObserveContext performWithStatus:service:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x451148

// -[SCServiceObserveContext UUID]
// Type encoding: @16@0:8
// Implementation: 0x451238

// -[SCServiceObserveContext changeHandler]
// Type encoding: @?16@0:8
// Implementation: 0x451240

// -[SCServiceObserveContext queue]
// Type encoding: @16@0:8
// Implementation: 0x451248

// -[SCServiceObserveContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x451250

@end
