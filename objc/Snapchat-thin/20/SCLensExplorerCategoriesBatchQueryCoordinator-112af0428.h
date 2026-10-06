// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensExplorerCategoriesBatchQueryCoordinator
// Superclass: SCLensExplorerBaseQueryCoordinator
// Address: 0x112af0428

@interface SCLensExplorerCategoriesBatchQueryCoordinator

// Property: categoriesResponse; attributes: T@"SCObservable",R,N
// Property: categoriesAggregator; attributes: T@"SCObservable",R,N,V_aggregatorSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensExplorerCategoriesBatchQueryCoordinator initWithRequestManager:queryFactory:categoriesFactory:categoriesAggregator:requestProvider:responseParser:dynamicUpdateHandler:queryStatusChecker:configuration:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1066e2798

// -[SCLensExplorerCategoriesBatchQueryCoordinator categoriesResponse]
// Type encoding: @16@0:8
// Implementation: 0x1066e298c

// -[SCLensExplorerCategoriesBatchQueryCoordinator _requestCategoriesWithSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066e29c8

// -[SCLensExplorerCategoriesBatchQueryCoordinator _fetchCategoriesQuery]
// Type encoding: @16@0:8
// Implementation: 0x1066e2d28

// -[SCLensExplorerCategoriesBatchQueryCoordinator requestForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066e2db8

// -[SCLensExplorerCategoriesBatchQueryCoordinator handleReceivedResponseFeeds:forQueryResult:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066e2e24

// -[SCLensExplorerCategoriesBatchQueryCoordinator categoriesAggregator]
// Type encoding: @16@0:8
// Implementation: 0x1066e323c

// -[SCLensExplorerCategoriesBatchQueryCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1066e324c

@end
