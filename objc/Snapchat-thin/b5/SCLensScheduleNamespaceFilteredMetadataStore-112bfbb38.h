// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensScheduleNamespaceFilteredMetadataStore
// Superclass: NSObject
// Address: 0x112bfbb38

@interface SCLensScheduleNamespaceFilteredMetadataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCLensScheduleNamespaceFilteredMetadataStore initWithScheduleService:announcerPerformer:lensPerformerProvider:lensDataConfig:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x10aeb066c

// -[SCLensScheduleNamespaceFilteredMetadataStore initWithScheduleService:announcerPerformer:lensPerformerProvider:lensDataConfig:filteringByApplicableContext:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10042a4bc

// -[SCLensScheduleNamespaceFilteredMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb0674

// -[SCLensScheduleNamespaceFilteredMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb06f8

// -[SCLensScheduleNamespaceFilteredMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb0700

// -[SCLensScheduleNamespaceFilteredMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x10aeb0708

// -[SCLensScheduleNamespaceFilteredMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10aeb0758

// -[SCLensScheduleNamespaceFilteredMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10aeb07c0

// -[SCLensScheduleNamespaceFilteredMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10aeb07c8

// -[SCLensScheduleNamespaceFilteredMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x10aeb07cc

// -[SCLensScheduleNamespaceFilteredMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10aeb081c

// -[SCLensScheduleNamespaceFilteredMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10aeb086c

// -[SCLensScheduleNamespaceFilteredMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10aeb08ec

// -[SCLensScheduleNamespaceFilteredMetadataStore supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x10aeb092c

// -[SCLensScheduleNamespaceFilteredMetadataStore _subscribeOnServiceObservable]
// Type encoding: v16@0:8
// Implementation: 0x10aeb0948

// -[SCLensScheduleNamespaceFilteredMetadataStore _updateMetadataStoreWithNamespaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb0ae8

// -[SCLensScheduleNamespaceFilteredMetadataStore _namespaceUpdatingModeForStoreUpdatingMode:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x10aeb0ba0

// -[SCLensScheduleNamespaceFilteredMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeb0bb8

@end
