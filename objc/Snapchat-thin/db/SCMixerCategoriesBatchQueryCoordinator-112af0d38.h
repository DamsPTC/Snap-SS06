// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMixerCategoriesBatchQueryCoordinator
// Superclass: SCMixerBaseQueryCoordinator
// Address: 0x112af0d38

@interface SCMixerCategoriesBatchQueryCoordinator

// Property: categoriesResponse; attributes: T@"SCObservable",R,N
// Property: categoriesAggregator; attributes: T@"SCObservable",R,N,V_aggregatorSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMixerCategoriesBatchQueryCoordinator initWithMixerNamespaceServices:dataMapper:queryFactory:categoriesFactory:categoriesAggregator:dynamicUpdateHandler:queryStatusChecker:configuration:mixerNamespaceCacheOptimizationEnabled:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64@72B80
// Implementation: 0x1066f1378

// -[SCMixerCategoriesBatchQueryCoordinator categoriesResponse]
// Type encoding: @16@0:8
// Implementation: 0x1066f156c

// -[SCMixerCategoriesBatchQueryCoordinator _requestCategories]
// Type encoding: v16@0:8
// Implementation: 0x1066f15a4

// -[SCMixerCategoriesBatchQueryCoordinator _fetchCategoriesQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066f1754

// -[SCMixerCategoriesBatchQueryCoordinator handleReceivedMixerFeeds:namespaceData:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066f17e4

// -[SCMixerCategoriesBatchQueryCoordinator handleReceivedMixerNamespaceData:withFeeds:forQueryResult:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1066f1d3c

// -[SCMixerCategoriesBatchQueryCoordinator categoriesAggregator]
// Type encoding: @16@0:8
// Implementation: 0x1066f1d74

// -[SCMixerCategoriesBatchQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066f1d84

@end
