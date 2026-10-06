// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerNamespaceService
// Superclass: NSObject
// Address: 0x112bfb638

@interface SCMixerNamespaceService

// Property: scheduleNamespaces; attributes: T@"NSArray",R,N
// Property: mergedMixerNamespaceDataObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: feedsObservable; attributes: T@"SCObservable",R,N

// -[SCMixerNamespaceService initWithNamespaceManager:namespaceDataUpdater:updateStrategy:feedUpdateStrategy:namespaceDataProvider:feedDataProvider:performer:namespaceDataPerformer:enableThrottling:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64@72B80
// Implementation: 0x10074b988

// -[SCMixerNamespaceService startUpdatingWithMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100b79004

// -[SCMixerNamespaceService startUpdatingWithParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x100b79328

// -[SCMixerNamespaceService scheduleNamespaces]
// Type encoding: @16@0:8
// Implementation: 0x10074bcdc

// -[SCMixerNamespaceService mergedMixerNamespaceDataObservable]
// Type encoding: @16@0:8
// Implementation: 0x100bce0b8

// -[SCMixerNamespaceService feedsObservable]
// Type encoding: @16@0:8
// Implementation: 0x10aeac73c

// -[SCMixerNamespaceService cachedMixerNamespaceData]
// Type encoding: @16@0:8
// Implementation: 0x10aeac828

// -[SCMixerNamespaceService cachedFeedData]
// Type encoding: @16@0:8
// Implementation: 0x10aeac8a8

// -[SCMixerNamespaceService _updatedContextualInfoFromInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x100b79cf4

// -[SCMixerNamespaceService _observeStartUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10074bb78

// -[SCMixerNamespaceService _namespacesToUpdateWithParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x100b7a58c

// -[SCMixerNamespaceService _updateNamespaces:mixerUpdateParameters:groupId:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x100c11db0

// -[SCMixerNamespaceService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10aeac99c

// +[SCMixerNamespaceService _namespaceDataFromInternalNamespaceData:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c11e44

// +[SCMixerNamespaceService _metadataItemsArrayFromInternalMetadataItemsArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c12074

// +[SCMixerNamespaceService _metadataItemFromInternalMetadataItem:]
// Type encoding: @24@0:8@16
// Implementation: 0x100c120e8

// +[SCMixerNamespaceService _namespaceIdsFromNamespaces:]
// Type encoding: @24@0:8@16
// Implementation: 0x10aeac984

@end
