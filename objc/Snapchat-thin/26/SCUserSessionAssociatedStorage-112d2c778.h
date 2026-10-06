// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSessionAssociatedStorage
// Superclass: NSObject
// Address: 0x112d2c778

@interface SCUserSessionAssociatedStorage

// Property: userSessionScopedObjects; attributes: T@"NSMutableDictionary",&,N,V_userSessionScopedObjects
// Property: invalidated; attributes: TB,N,V_invalidated
// Property: sema; attributes: T@"NSObject<OS_dispatch_semaphore>",R,N,V_sema

// -[SCUserSessionAssociatedStorage init]
// Type encoding: @16@0:8
// Implementation: 0x1002656b4

// -[SCUserSessionAssociatedStorage userSessionScopedObjects]
// Type encoding: @16@0:8
// Implementation: 0x100265748

// -[SCUserSessionAssociatedStorage setUserSessionScopedObjects:]
// Type encoding: v24@0:8@16
// Implementation: 0x10bc864cc

// -[SCUserSessionAssociatedStorage invalidated]
// Type encoding: B16@0:8
// Implementation: 0x100265740

// -[SCUserSessionAssociatedStorage setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10bc864fc

// -[SCUserSessionAssociatedStorage sema]
// Type encoding: @16@0:8
// Implementation: 0x100265738

// -[SCUserSessionAssociatedStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10bc86504

@end
