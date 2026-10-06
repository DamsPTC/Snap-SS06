// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerNamespaceDocObjectStore
// Superclass: NSObject
// Address: 0x112bfc628

@interface SCMixerNamespaceDocObjectStore

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerNamespaceDocObjectStore initWithDocObjectContext:namespaceDataTransformer:namespaceDataModelTransformer:performer:lensDataConfigProvider:storedDateManager:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100b7bb64

// -[SCMixerNamespaceDocObjectStore namespaceDataObservableForNamespaces:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c1050c

// -[SCMixerNamespaceDocObjectStore namespaceDataForNamespaces:]
// Type encoding: @24@0:8@16
// Implementation: 0x100b82278

// -[SCMixerNamespaceDocObjectStore saveNamespaceData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10aec135c

// -[SCMixerNamespaceDocObjectStore cleanDataInPersistence:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aec14a0

// -[SCMixerNamespaceDocObjectStore warmupNamespacesIfNeeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b7c368

// -[SCMixerNamespaceDocObjectStore _cleanDataInPersistence:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10aec14a4

// -[SCMixerNamespaceDocObjectStore _warmupNamespaces:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b80fe4

// -[SCMixerNamespaceDocObjectStore _shouldFilterOutNamespaceData:]
// Type encoding: B24@0:8@16
// Implementation: 0x100b7c534

// -[SCMixerNamespaceDocObjectStore _emitData:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c05e74

// -[SCMixerNamespaceDocObjectStore _emptyNamespaceDataForNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aec1a38

// -[SCMixerNamespaceDocObjectStore _updateMemoryCacheWithNamespaceData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10aec1ab8

// -[SCMixerNamespaceDocObjectStore _saveNamespaceData:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10aec1f9c

// -[SCMixerNamespaceDocObjectStore _namespaceDataSubjectsForNamespaces:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c105e8

// -[SCMixerNamespaceDocObjectStore _subjectForNamespace:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c109c8

// -[SCMixerNamespaceDocObjectStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aec2624

// +[SCMixerNamespaceDocObjectStore _isNamespaceDataValid:lensDataConfigProvider:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x100bfc23c

// +[SCMixerNamespaceDocObjectStore _logInfoForNamespaceDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aec2548

@end
