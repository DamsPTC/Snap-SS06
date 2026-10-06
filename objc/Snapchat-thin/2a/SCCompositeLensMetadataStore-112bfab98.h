// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCompositeLensMetadataStore
// Superclass: NSObject
// Address: 0x112bfab98

@interface SCCompositeLensMetadataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCCompositeLensMetadataStore initWithMetaDataStores:]
// Type encoding: @24@0:8@16
// Implementation: 0x100803e90

// -[SCCompositeLensMetadataStore didUpdateLenses:lensMetadataStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ae9d6c0

// -[SCCompositeLensMetadataStore didUpdateLensesToPrefetch:lensMetadataStore:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10ae9d6d8

// -[SCCompositeLensMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9d6f0

// -[SCCompositeLensMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10ae9d6f8

// -[SCCompositeLensMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100bcb0ec

// -[SCCompositeLensMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x10ae9d700

// -[SCCompositeLensMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10ae9d850

// -[SCCompositeLensMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10ae9d9a0

// -[SCCompositeLensMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10ae9dab4

// -[SCCompositeLensMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3e398

// -[SCCompositeLensMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10ae9dbc0

// -[SCCompositeLensMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10ae9dcb0

// -[SCCompositeLensMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10ae9dcc8

// -[SCCompositeLensMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10ae9ddd0

@end
