// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToListsLogger
// Superclass: NSObject
// Address: 0x112a81b68

@interface SCSendToListsLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToListsLogger initWithSessionId:userTrackedLogger:performerProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059d5fb8

// -[SCSendToListsLogger logListCreateWithListDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d6114

// -[SCSendToListsLogger logListDeleteWithListDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d6220

// -[SCSendToListsLogger logListEditWithListDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d632c

// -[SCSendToListsLogger logListAction:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d6438

// -[SCSendToListsLogger logRecipientActions:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d656c

// -[SCSendToListsLogger _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059d66a0

// -[SCSendToListsLogger _logListCreateWithListDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d66fc

// -[SCSendToListsLogger _logListDeleteWithListDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d6c1c

// -[SCSendToListsLogger _logListEditWithListDataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d6c9c

// -[SCSendToListsLogger _logListAction:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d6d1c

// -[SCSendToListsLogger _logRecipientActions:listId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d6de0

// -[SCSendToListsLogger _reset]
// Type encoding: v16@0:8
// Implementation: 0x1059d7054

// -[SCSendToListsLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059d70b0

@end
