// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScheduledLensFilteredMetadataStore
// Superclass: NSObject
// Address: 0x112bfc088

@interface SCScheduledLensFilteredMetadataStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: lenses; attributes: T@"NSArray",R,C,N
// Property: lensesToPrefetch; attributes: T@"NSArray",R,C,N
// Property: hasMoreLensesToLoad; attributes: TB,R,N
// Property: loadMoreTriggerDistance; attributes: TQ,R,N

// -[SCScheduledLensFilteredMetadataStore initWithScheduleService:announcerPerformer:context:lensPerformerProvider:lensDataConfig:]
// Type encoding: @56@0:8@16@24q32@40@48
// Implementation: 0x100bcdd3c

// -[SCScheduledLensFilteredMetadataStore applyMetadataProviderSettings:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c3e4a8

// -[SCScheduledLensFilteredMetadataStore addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb6e8c

// -[SCScheduledLensFilteredMetadataStore removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aeb6edc

// -[SCScheduledLensFilteredMetadataStore warmUp]
// Type encoding: v16@0:8
// Implementation: 0x100bcde98

// -[SCScheduledLensFilteredMetadataStore startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10aeb6f2c

// -[SCScheduledLensFilteredMetadataStore stopUpdating]
// Type encoding: v16@0:8
// Implementation: 0x10aeb6f94

// -[SCScheduledLensFilteredMetadataStore synchronize]
// Type encoding: v16@0:8
// Implementation: 0x10aeb6f9c

// -[SCScheduledLensFilteredMetadataStore lenses]
// Type encoding: @16@0:8
// Implementation: 0x10aeb6fa0

// -[SCScheduledLensFilteredMetadataStore lensesToPrefetch]
// Type encoding: @16@0:8
// Implementation: 0x10aeb702c

// -[SCScheduledLensFilteredMetadataStore hasMoreLensesToLoad]
// Type encoding: B16@0:8
// Implementation: 0x10aeb70b8

// -[SCScheduledLensFilteredMetadataStore loadMoreTriggerDistance]
// Type encoding: Q16@0:8
// Implementation: 0x10aeb71dc

// -[SCScheduledLensFilteredMetadataStore supportsFilteringForAttribute:]
// Type encoding: B24@0:8Q16
// Implementation: 0x100c3e9f4

// -[SCScheduledLensFilteredMetadataStore _subscribeOnServiceObservable]
// Type encoding: v16@0:8
// Implementation: 0x100bcdee8

// -[SCScheduledLensFilteredMetadataStore _updateFrontLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c1420c

// -[SCScheduledLensFilteredMetadataStore _updateRearLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c13a24

// -[SCScheduledLensFilteredMetadataStore _updateFrontPrefetchLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c14224

// -[SCScheduledLensFilteredMetadataStore _updateRearPrefetchLenses:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c13aa4

// -[SCScheduledLensFilteredMetadataStore _updateMetadataStoreWithNamespaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c13864

// -[SCScheduledLensFilteredMetadataStore _namespaceUpdatingModeForStoreUpdatingMode:]
// Type encoding: Q24@0:8Q16
// Implementation: 0x100bce7a4

// -[SCScheduledLensFilteredMetadataStore _filterWithValue:filterFactory:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x100c3e608

// -[SCScheduledLensFilteredMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeb72a4

// +[SCScheduledLensFilteredMetadataStore _stringFromContext:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aeb727c

@end
