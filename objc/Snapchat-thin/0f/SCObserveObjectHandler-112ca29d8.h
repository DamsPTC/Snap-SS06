// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCObserveObjectHandler
// Superclass: NSObject
// Address: 0x112ca29d8

@interface SCObserveObjectHandler

// Property: objectClass; attributes: T#,R,N,V_objectClass
// Property: queue; attributes: T@"NSObject<OS_dispatch_queue>",R,N,V_queue
// Property: changeHandler; attributes: T@?,R,C,N,V_changeHandler

// -[SCObserveObjectHandler initWithObjectClass:queue:changeHandler:]
// Type encoding: @40@0:8#16@24@?32
// Implementation: 0x10b69c368

// -[SCObserveObjectHandler invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10b69c428

// -[SCObserveObjectHandler perform:changedKeys:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10b69c464

// -[SCObserveObjectHandler objectClass]
// Type encoding: #16@0:8
// Implementation: 0x10b69c534

// -[SCObserveObjectHandler queue]
// Type encoding: @16@0:8
// Implementation: 0x10b69c53c

// -[SCObserveObjectHandler changeHandler]
// Type encoding: @?16@0:8
// Implementation: 0x10b69c544

// -[SCObserveObjectHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b69c54c

@end
