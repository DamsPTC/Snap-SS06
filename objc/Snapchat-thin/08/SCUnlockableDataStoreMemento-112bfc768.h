// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableDataStoreMemento
// Superclass: NSObject
// Address: 0x112bfc768

@interface SCUnlockableDataStoreMemento

// Property: unlockedLenses; attributes: T@"NSArray",R,C,N,V_unlockedLenses
// Property: fetcherPreviousUpdateTimestamp; attributes: T@"NSDate",R,C,N,V_fetcherPreviousUpdateTimestamp

// -[SCUnlockableDataStoreMemento saveUsingArchiveUtils:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aebc154

// -[SCUnlockableDataStoreMemento initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aec4d2c

// -[SCUnlockableDataStoreMemento initWithUnlockedLenses:fetcherPreviousUpdateTimestamp:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1004e62ec

// -[SCUnlockableDataStoreMemento copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aec4ddc

// -[SCUnlockableDataStoreMemento encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aec4e00

// -[SCUnlockableDataStoreMemento hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aec4e60

// -[SCUnlockableDataStoreMemento isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aec4ed4

// -[SCUnlockableDataStoreMemento unlockedLenses]
// Type encoding: @16@0:8
// Implementation: 0x1004e6514

// -[SCUnlockableDataStoreMemento fetcherPreviousUpdateTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1004e651c

// -[SCUnlockableDataStoreMemento .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1004e657c

// +[SCUnlockableDataStoreMemento _pathWithArchiveUtils:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004e61dc

// +[SCUnlockableDataStoreMemento stateFromDiskUsingArchiveUtils:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004e610c

// +[SCUnlockableDataStoreMemento removeSavedStateUsingArchiveUtils:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004e61ec

@end
