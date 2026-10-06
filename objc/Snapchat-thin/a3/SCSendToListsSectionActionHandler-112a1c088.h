// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToListsSectionActionHandler
// Superclass: NSObject
// Address: 0x112a1c088

@interface SCSendToListsSectionActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToListsSectionActionHandler initWithListsDataManager:snapchattersDataFetcher:groupsDataFetcher:sendToTracker:listIdentifier:userId:myDisplayName:grapheneRegistry:shortcutsDataFetcher:circumstanceEngine:logger:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1051512f8

// -[SCSendToListsSectionActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x10515190c

// -[SCSendToListsSectionActionHandler _toggleAllShortcutRecipientsWithShortcutRecipients:shortcutId:isContextual:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105151974

// -[SCSendToListsSectionActionHandler _handleUsersListSelectionWithListName:listDataModels:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105151bf0

// -[SCSendToListsSectionActionHandler _toggleAllListRecipientsWithListDataModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105151d50

// -[SCSendToListsSectionActionHandler _toggleAllListRecipientsWithSnapchatterUserIds:groups:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105151eb8

// -[SCSendToListsSectionActionHandler _setSelectionTrackerWithSnapchatters:groups:source:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10515206c

// -[SCSendToListsSectionActionHandler _selectionGroupsWithGroupIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051521f4

// -[SCSendToListsSectionActionHandler _onNextSendToEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105152404

// -[SCSendToListsSectionActionHandler _updateListIdentifierWithName:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105152560

// -[SCSendToListsSectionActionHandler _updateSelectedListName:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105152694

// -[SCSendToListsSectionActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051526f8

@end
