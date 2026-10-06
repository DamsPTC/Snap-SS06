// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBundledLensesMetadataStore
// Superclass: NSObject
// Address: 0x11296ce18

@interface SCBundledLensesMetadataStore

// Property: lenses; attributes: T@"NSArray",N,R
// Property: lensesToPrefetch; attributes: T@"NSArray",N,R
// Property: hasMoreLensesToLoad; attributes: TB,N,R
// Property: loadMoreTriggerDistance; attributes: TQ,N,R

// -[SCBundledLensesMetadataStore initWithBundledLensProvider:bundleLensGroups:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x103f6cc74

// -[SCBundledLensesMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x103f6cd78

// -[SCBundledLensesMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x103f6cde4

// -[SCBundledLensesMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x103f6ce0c

// -[SCBundledLensesMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x103f6ce14

// -[SCBundledLensesMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x103f6ced4

// -[SCBundledLensesMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x103f6cf1c

// -[SCBundledLensesMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x103f6d01c

// -[SCBundledLensesMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x103f6d1cc

// -[SCBundledLensesMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x103f6d1f4

// -[SCBundledLensesMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x103f6d1f8

// -[SCBundledLensesMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x103f6d248

// -[SCBundledLensesMetadataStore init]
// Type encoding: @16@0:8
// Implementation: 0x103f6d24c

// -[SCBundledLensesMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x103f6d2ac

@end
