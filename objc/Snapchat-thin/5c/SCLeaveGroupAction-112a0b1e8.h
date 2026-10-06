// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLeaveGroupAction
// Superclass: NSObject
// Address: 0x112a0b1e8

@interface SCLeaveGroupAction

// Property: position; attributes: Tq,R,N,V_position
// Property: actionSheetCell; attributes: T@"UIView",R,N,V_actionSheetCell
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLeaveGroupAction initWithGroupId:context:groupsDataFetcher:groupsDataMutator:leaveGroupAlertScopeExposer:withAccessibilityIdentifier:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104f5cf28

// -[SCLeaveGroupAction _handleLeaveGroupWithActionSheet:context:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f5d1bc

// -[SCLeaveGroupAction didLeaveGroup]
// Type encoding: v16@0:8
// Implementation: 0x104f5d2a0

// -[SCLeaveGroupAction leaveGroupAlertScopeDidDimiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5d338

// -[SCLeaveGroupAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f5d380

// -[SCLeaveGroupAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f5d388

// -[SCLeaveGroupAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f5d390

// -[SCLeaveGroupAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f5d398

@end
