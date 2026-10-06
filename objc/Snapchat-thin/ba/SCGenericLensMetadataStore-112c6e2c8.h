// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGenericLensMetadataStore
// Superclass: NSObject
// Address: 0x112c6e2c8

@interface SCGenericLensMetadataStore

// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGenericLensMetadataStore init]
// Type encoding: @16@0:8
// Implementation: 0x10b0e33b8

// -[SCGenericLensMetadataStore initWithAnnouncerPerformer:ownerMetadataStore:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10042a5f4

// -[SCGenericLensMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e33c4

// -[SCGenericLensMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e33cc

// -[SCGenericLensMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x10b0e33d4

// -[SCGenericLensMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10b0e3420

// -[SCGenericLensMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10b0e346c

// -[SCGenericLensMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10b0e3474

// -[SCGenericLensMetadataStore updateLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x100bcd65c

// -[SCGenericLensMetadataStore updateLensesToPrefetch:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c13abc

// -[SCGenericLensMetadataStore addLens:overrideIfFound:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10b0e34f4

// -[SCGenericLensMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100bcd8a8

// -[SCGenericLensMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10b0e3748

// -[SCGenericLensMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10b0e374c

// -[SCGenericLensMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0e3750

// -[SCGenericLensMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10b0e3754

// -[SCGenericLensMetadataStore setLensFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3ee54

// -[SCGenericLensMetadataStore _applyFilterAndNotifyIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x100bcd6f8

// -[SCGenericLensMetadataStore _performAnnouncementBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x100c13a3c

// -[SCGenericLensMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0e3758

@end
