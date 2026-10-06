// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionSectionCoordinator
// Superclass: NSObject
// Address: 0x112b2ecc8

@interface SCSelectionSectionCoordinator

// Property: currentQueryResult; attributes: T@"SCSearchQueryResult",R,C,N,V_currentQueryResult
// Property: sectionExtensionsProvider; attributes: T@"SCSelectionSectionExtensionsProvider",&,N,V_sectionExtensionsProvider
// Property: isLoading; attributes: TB,R,N,V_isLoading
// Property: currentQuery; attributes: T@"SCSearchQuery",C,N,V_currentQuery
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSelectionSectionCoordinator init]
// Type encoding: @16@0:8
// Implementation: 0x106c9af38

// -[SCSelectionSectionCoordinator canPerformQuery:]
// Type encoding: B24@0:8@16
// Implementation: 0x106c9afa0

// -[SCSelectionSectionCoordinator resultsForQuery:updatingBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106c9afa8

// -[SCSelectionSectionCoordinator _onNextSectionDescriptor:query:sectionIdentifier:updatingBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106c9b344

// -[SCSelectionSectionCoordinator currentQuery]
// Type encoding: @16@0:8
// Implementation: 0x106c9b4bc

// -[SCSelectionSectionCoordinator setCurrentQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9b4c4

// -[SCSelectionSectionCoordinator isLoading]
// Type encoding: B16@0:8
// Implementation: 0x106c9b4cc

// -[SCSelectionSectionCoordinator currentQueryResult]
// Type encoding: @16@0:8
// Implementation: 0x106c9b4d4

// -[SCSelectionSectionCoordinator sectionExtensionsProvider]
// Type encoding: @16@0:8
// Implementation: 0x106c9b4dc

// -[SCSelectionSectionCoordinator setSectionExtensionsProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c9b4e4

// -[SCSelectionSectionCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c9b514

@end
