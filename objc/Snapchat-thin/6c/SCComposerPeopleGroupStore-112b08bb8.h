// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPeopleGroupStore
// Superclass: NSObject
// Address: 0x112b08bb8

@interface SCComposerPeopleGroupStore

// Property: groupsObservable; attributes: T@"SCBridgeObservable",?,&,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPeopleGroupStore initWithCurrentUserID:groupDataFetcher:groupDataTracker:topGroupsDataFetcher:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1069943d4

// -[SCComposerPeopleGroupStore pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x106994544

// -[SCComposerPeopleGroupStore getGroupsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106994550

// -[SCComposerPeopleGroupStore getMostRecentlyInteractedGroupByParticipantsWithParticipantIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1069948f4

// -[SCComposerPeopleGroupStore onGroupsUpdatedWithCallback:]
// Type encoding: @?24@0:8@?16
// Implementation: 0x106994acc

// -[SCComposerPeopleGroupStore observeTopGroupsIds]
// Type encoding: @16@0:8
// Implementation: 0x106994ce0

// -[SCComposerPeopleGroupStore groupsObservable]
// Type encoding: @16@0:8
// Implementation: 0x106994d60

// -[SCComposerPeopleGroupStore _convertedGroupsForChatGroups:]
// Type encoding: @24@0:8@16
// Implementation: 0x106994efc

// -[SCComposerPeopleGroupStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1069951d4

@end
