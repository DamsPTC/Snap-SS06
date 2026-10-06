// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPredefinedLensMetadataStore
// Superclass: NSObject
// Address: 0x112bfba48

@interface SCPredefinedLensMetadataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCPredefinedLensMetadataStore pickLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeaf348

// -[SCPredefinedLensMetadataStore cleanupPickedLenses]
// Type encoding: @16@0:8
// Implementation: 0x10aeaf4dc

// -[SCPredefinedLensMetadataStore cleanupPickedLensWithIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aeaf56c

// -[SCPredefinedLensMetadataStore cleanupPickedLensesWithIdentifiers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeaf6b0

// -[SCPredefinedLensMetadataStore containsLensWithIdentifier:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aeaf7d0

// -[SCPredefinedLensMetadataStore initWithInitialLenses:announcerPerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100bcd5a0

// -[SCPredefinedLensMetadataStore initWithLensesObservable:announcerPerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aeaf8c8

// -[SCPredefinedLensMetadataStore initWithLensesMetadataObservable:announcerPerformer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10aeaf978

// -[SCPredefinedLensMetadataStore _setupLensesMetadataObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeafa28

// -[SCPredefinedLensMetadataStore _setupLensesObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeafb84

// -[SCPredefinedLensMetadataStore updateLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeafca4

// -[SCPredefinedLensMetadataStore supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10aeafcbc

// -[SCPredefinedLensMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeafcc4

// -[SCPredefinedLensMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeafccc

// -[SCPredefinedLensMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100bcd8a0

// -[SCPredefinedLensMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10aeafcd4

// -[SCPredefinedLensMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10aeafcdc

// -[SCPredefinedLensMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10aeafce4

// -[SCPredefinedLensMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x10aeafcec

// -[SCPredefinedLensMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10aeafd3c

// -[SCPredefinedLensMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3e4a4

// -[SCPredefinedLensMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10aeafd8c

// -[SCPredefinedLensMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10aeafd94

// -[SCPredefinedLensMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeafd9c

@end
