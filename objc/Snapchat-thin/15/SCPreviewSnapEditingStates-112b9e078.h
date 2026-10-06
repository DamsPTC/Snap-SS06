// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewSnapEditingStates
// Superclass: NSObject
// Address: 0x112b9e078

@interface SCPreviewSnapEditingStates

// Property: beginState; attributes: T@"SCPreviewSnapEditingState",R,N,V_beginState
// Property: endState; attributes: T@"SCPreviewSnapEditingState",R,N,V_endState
// Property: preuploadState; attributes: T@"SCPreviewSnapEditingState",R,N,V_preuploadState
// Property: editedBeforeBeginStateRecorded; attributes: TB,N,V_editedBeforeBeginStateRecorded
// Property: flow; attributes: Tq,R,N,V_flow
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewSnapEditingStates initWithFlow:]
// Type encoding: @24@0:8q16
// Implementation: 0x108452d44

// -[SCPreviewSnapEditingStates isSnapEdited]
// Type encoding: B16@0:8
// Implementation: 0x108452d8c

// -[SCPreviewSnapEditingStates setState:stage:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108452dd0

// -[SCPreviewSnapEditingStates setObjectTrackingEdited]
// Type encoding: v16@0:8
// Implementation: 0x108452e34

// -[SCPreviewSnapEditingStates savePreuploadState]
// Type encoding: v16@0:8
// Implementation: 0x108452e44

// -[SCPreviewSnapEditingStates isPreuploadEdited]
// Type encoding: B16@0:8
// Implementation: 0x108452e74

// -[SCPreviewSnapEditingStates beginState]
// Type encoding: @16@0:8
// Implementation: 0x108452ea8

// -[SCPreviewSnapEditingStates endState]
// Type encoding: @16@0:8
// Implementation: 0x108452eb0

// -[SCPreviewSnapEditingStates preuploadState]
// Type encoding: @16@0:8
// Implementation: 0x108452eb8

// -[SCPreviewSnapEditingStates editedBeforeBeginStateRecorded]
// Type encoding: B16@0:8
// Implementation: 0x108452ec0

// -[SCPreviewSnapEditingStates setEditedBeforeBeginStateRecorded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108452ec8

// -[SCPreviewSnapEditingStates flow]
// Type encoding: q16@0:8
// Implementation: 0x108452ed0

// -[SCPreviewSnapEditingStates .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108452ed8

@end
