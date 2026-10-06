// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacySelectionGroupObservableRepository
// Superclass: NSObject
// Address: 0x112a80d08

@interface SCLegacySelectionGroupObservableRepository

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: recentSelectionGroupObservable; attributes: T@"SCObservable",R,N
// Property: newSelectionGroupObservable; attributes: T@"SCObservable",R,N

// -[SCLegacySelectionGroupObservableRepository initWithGroupsDataFetcher:groupsDataTracker:topGroupsDataFetcher:selectionGroupConvertor:currentDateProvider:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@?40@48@56
// Implementation: 0x1059bb358

// -[SCLegacySelectionGroupObservableRepository _recentSelectionGroupObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059bb564

// -[SCLegacySelectionGroupObservableRepository _initialFetchAndEmit]
// Type encoding: v16@0:8
// Implementation: 0x1059bb620

// -[SCLegacySelectionGroupObservableRepository _fetchAndEmitAllSelectionGroups]
// Type encoding: v16@0:8
// Implementation: 0x1059bb814

// -[SCLegacySelectionGroupObservableRepository _fetchAndEmitSelectionGroupForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059bb878

// -[SCLegacySelectionGroupObservableRepository _nextChatGroups:overwrite:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1059bba40

// -[SCLegacySelectionGroupObservableRepository recentSelectionGroupObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059bbd54

// -[SCLegacySelectionGroupObservableRepository selectionGroupObservableForGroupIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059bbd58

// -[SCLegacySelectionGroupObservableRepository newSelectionGroupObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059bbf04

// -[SCLegacySelectionGroupObservableRepository topGroupsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1059bc138

// -[SCLegacySelectionGroupObservableRepository reset]
// Type encoding: v16@0:8
// Implementation: 0x1059bc284

// -[SCLegacySelectionGroupObservableRepository selectionGroupWithGroupId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1059bc2d8

// -[SCLegacySelectionGroupObservableRepository didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1059bc548

// -[SCLegacySelectionGroupObservableRepository _didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1059bc72c

// -[SCLegacySelectionGroupObservableRepository .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059bc790

@end
