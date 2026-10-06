// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToSelectAllActionHandler
// Superclass: NSObject
// Address: 0x112aa2ae8

@interface SCSendToSelectAllActionHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToSelectAllActionHandler initWithSelectionTracker:replyRecipientObservableRepository:snapchattersObservableRepository:topGroupsDataSource:snappableDataSource:userInitiatedPerformer:logger:selectedItemPublishSubject:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x105e5aeb8

// -[SCSendToSelectAllActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x105e5b074

// -[SCSendToSelectAllActionHandler _selectAllWithSnapchatters:source:selectionFrame:]
// Type encoding: v64@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x105e5b6f0

// -[SCSendToSelectAllActionHandler _selectAllWithRecipients:source:selectionFrame:]
// Type encoding: v64@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x105e5b7cc

// -[SCSendToSelectAllActionHandler _selectAllWithGroups:source:selectionFrame:]
// Type encoding: v64@0:8@16@24{CGRect={CGPoint=dd}{CGSize=dd}}32
// Implementation: 0x105e5b8a8

// -[SCSendToSelectAllActionHandler _selectAllWithSelectionItems:identifiers:source:selectionFrame:]
// Type encoding: v72@0:8@16@24@32{CGRect={CGPoint=dd}{CGSize=dd}}40
// Implementation: 0x105e5b984

// -[SCSendToSelectAllActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105e5bc0c

@end
