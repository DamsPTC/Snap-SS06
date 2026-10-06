// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensUnlockerStore
// Superclass: NSObject
// Address: 0x112c6c108

@interface SCLensUnlockerStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCLensUnlockerStore initWithGenericStore:lensUnlocker:lensDataConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10b0b7e70

// -[SCLensUnlockerStore performAction:completion:completionQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10b0b7f3c

// -[SCLensUnlockerStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0b83d0

// -[SCLensUnlockerStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0b846c

// -[SCLensUnlockerStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0b84bc

// -[SCLensUnlockerStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x10b0b850c

// -[SCLensUnlockerStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0b8540

// -[SCLensUnlockerStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10b0b857c

// -[SCLensUnlockerStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10b0b85b0

// -[SCLensUnlockerStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x10b0b85e4

// -[SCLensUnlockerStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10b0b8654

// -[SCLensUnlockerStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10b0b86c4

// -[SCLensUnlockerStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10b0b8704

// -[SCLensUnlockerStore supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10b0b8744

// -[SCLensUnlockerStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0b8750

@end
