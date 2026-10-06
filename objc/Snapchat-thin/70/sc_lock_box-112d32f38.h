// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: sc_lock_box
// Superclass: NSObject
// Address: 0x112d32f38

@interface sc_lock_box


// -[sc_lock_box init]
// Type encoding: @16@0:8
// Implementation: 0x100525b3c

// -[sc_lock_box lock]
// Type encoding: v16@0:8
// Implementation: 0x10bd4e058

// -[sc_lock_box unlock]
// Type encoding: v16@0:8
// Implementation: 0x10bd4e060

// -[sc_lock_box tryLock]
// Type encoding: B16@0:8
// Implementation: 0x10bd4e068

// -[sc_lock_box assertOwner]
// Type encoding: v16@0:8
// Implementation: 0x10bd4e070

// -[sc_lock_box assertNotOwner]
// Type encoding: v16@0:8
// Implementation: 0x10bd4e078

// -[sc_lock_box _unsafe_private_reference]
// Type encoding: ^{sc_lock={os_unfair_lock_s=I}}16@0:8
// Implementation: 0x100527fb4

@end
