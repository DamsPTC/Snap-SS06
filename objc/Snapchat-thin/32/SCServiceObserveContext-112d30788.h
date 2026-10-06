// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCServiceObserveContext
// Superclass: NSObject
// Address: 0x112d30788

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
// Implementation: 0x10bcb1290

// -[SCServiceObserveContext dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10bcb1398

// -[SCServiceObserveContext unobserve]
// Type encoding: v16@0:8
// Implementation: 0x10bcb13e0

// -[SCServiceObserveContext unobserveFromDealloc:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bcb13e8

// -[SCServiceObserveContext invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10bcb13f8

// -[SCServiceObserveContext performWithStatus:service:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10bcb142c

// -[SCServiceObserveContext UUID]
// Type encoding: @16@0:8
// Implementation: 0x10bcb151c

// -[SCServiceObserveContext changeHandler]
// Type encoding: @?16@0:8
// Implementation: 0x10bcb1524

// -[SCServiceObserveContext queue]
// Type encoding: @16@0:8
// Implementation: 0x10bcb152c

// -[SCServiceObserveContext .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bcb1534

@end
