// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToSectionCoordinator
// Superclass: NSObject
// Address: 0x112aa1238

@interface SCSendToSectionCoordinator

// Property: sectionExtensionsProvider; attributes: T@"SCSendToSectionExtensionsProvider",&,N,V_sectionExtensionsProvider
// Property: nonQueryResult; attributes: T@"SCSearchQueryResult",R,C,N,V_nonQueryResult
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToSectionCoordinator initWithConfiguration:expansionModelProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e203b0

// -[SCSendToSectionCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x105e20470

// -[SCSendToSectionCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105e20478

// -[SCSendToSectionCoordinator _resultsForQuery:sectionIdentifierToExpansionModels:updatingBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105e20610

// -[SCSendToSectionCoordinator _sectionDescriptorsForQuery:sectionIdentifierToExpansionModels:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105e20710

// -[SCSendToSectionCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x105e20a50

// -[SCSendToSectionCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e20a58

// -[SCSendToSectionCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x105e20a60

// -[SCSendToSectionCoordinator sectionExtensionsProvider]
// Type encoding: @16@0:8
// Implementation: 0x105e20a68

// -[SCSendToSectionCoordinator setSectionExtensionsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105e20a70

// -[SCSendToSectionCoordinator nonQueryResult]
// Type encoding: @16@0:8
// Implementation: 0x105e20aa0

// -[SCSendToSectionCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e20aa8

@end
