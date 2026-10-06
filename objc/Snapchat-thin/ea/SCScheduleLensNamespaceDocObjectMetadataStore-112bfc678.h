// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScheduleLensNamespaceDocObjectMetadataStore
// Superclass: NSObject
// Address: 0x112bfc678

@interface SCScheduleLensNamespaceDocObjectMetadataStore

// Property: scheduleNamespace; attributes: T@"SCLensScheduleNamespace",R,N,V_managedScheduleNamespace
// Property: namespaceData; attributes: T@"SCLensScheduleNamespaceData",R,N,V_namespaceData
// Property: namespaceDataObservable; attributes: T@"SCObservable",R,N

// -[SCScheduleLensNamespaceDocObjectMetadataStore initWithScheduleNamespace:lensUpdateResolver:docObjectContext:namespaceDataTransformer:namespaceDataModelTransformer:lensDataConfig:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10aec26a8

// -[SCScheduleLensNamespaceDocObjectMetadataStore namespaceDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x10aec28b0

// -[SCScheduleLensNamespaceDocObjectMetadataStore namespaceData]
// Type encoding: @16@0:8
// Implementation: 0x10aec28d8

// -[SCScheduleLensNamespaceDocObjectMetadataStore updateWithNamespaceData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10aec2918

// -[SCScheduleLensNamespaceDocObjectMetadataStore saveNamespaceData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10aec2a7c

// -[SCScheduleLensNamespaceDocObjectMetadataStore _updateWithNamespaceData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10aec2d74

// -[SCScheduleLensNamespaceDocObjectMetadataStore _saveNamespaceData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10aec2f5c

// -[SCScheduleLensNamespaceDocObjectMetadataStore restoreStateFromPersistenceWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aec3194

// -[SCScheduleLensNamespaceDocObjectMetadataStore cleanDataInPersistence]
// Type encoding: v16@0:8
// Implementation: 0x10aec3394

// -[SCScheduleLensNamespaceDocObjectMetadataStore _clean]
// Type encoding: v16@0:8
// Implementation: 0x10aec33f8

// -[SCScheduleLensNamespaceDocObjectMetadataStore _restoreStateFromPersistence]
// Type encoding: @16@0:8
// Implementation: 0x10aec3558

// -[SCScheduleLensNamespaceDocObjectMetadataStore _updateInMemoryCacheWithNamespaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aec36b8

// -[SCScheduleLensNamespaceDocObjectMetadataStore _updateupdateInMemoryCacheWithEmptyNamespaceData]
// Type encoding: v16@0:8
// Implementation: 0x10aec3738

// -[SCScheduleLensNamespaceDocObjectMetadataStore _initialNameSpaceDataWithScheduleNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aec37b8

// -[SCScheduleLensNamespaceDocObjectMetadataStore _processUpdateNamespaceData:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aec3810

// -[SCScheduleLensNamespaceDocObjectMetadataStore _cleanupOutdatedDataForCacheKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aec3acc

// -[SCScheduleLensNamespaceDocObjectMetadataStore _cleanupDataForCacheKey:onlyOutdatedData:completionQueue:completion:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x10aec3adc

// -[SCScheduleLensNamespaceDocObjectMetadataStore _fetchNamespaceDataModelForCacheKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aec405c

// -[SCScheduleLensNamespaceDocObjectMetadataStore _upsertNamespaceDataModel:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10aec43e8

// -[SCScheduleLensNamespaceDocObjectMetadataStore scheduleNamespace]
// Type encoding: @16@0:8
// Implementation: 0x10aec47e4

// -[SCScheduleLensNamespaceDocObjectMetadataStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aec47ec

// +[SCScheduleLensNamespaceDocObjectMetadataStore _completeWithErrorCode:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10aec3900

// +[SCScheduleLensNamespaceDocObjectMetadataStore _completeSaveWithErrorCode:completion:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10aec3994

// +[SCScheduleLensNamespaceDocObjectMetadataStore _errorWithErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aec3a24

// +[SCScheduleLensNamespaceDocObjectMetadataStore _descriptionForErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x10aec3aa4

@end
