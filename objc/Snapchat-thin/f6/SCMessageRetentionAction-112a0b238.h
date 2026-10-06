// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessageRetentionAction
// Superclass: NSObject
// Address: 0x112a0b238

@interface SCMessageRetentionAction

// Property: actionSheetCell; attributes: T@"SIGActionSheetCell",R,N,V_actionSheetCell
// Property: position; attributes: Tq,R,N,V_position
// Property: prominentActionButton; attributes: T@"UIView",R,N,V_prominentActionButton
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessageRetentionAction initWithGroupId:context:chatMessageActionHandler:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104f5d400

// -[SCMessageRetentionAction _handleMessageRetentionTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f5d724

// -[SCMessageRetentionAction _onMessageRetentionModeFetched:availableRetentionModes:cell:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x104f5d800

// -[SCMessageRetentionAction _setMessageRetentionMode:cell:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x104f5d940

// -[SCMessageRetentionAction didStartChangeRetentionPolicy]
// Type encoding: v16@0:8
// Implementation: 0x104f5d9c8

// -[SCMessageRetentionAction didChangeRetentionPolicyWithSuccess:retentionMode:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x104f5d9fc

// -[SCMessageRetentionAction _didChangeRetentionPolicyWithSuccess:retentionMode:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x104f5daf0

// -[SCMessageRetentionAction position]
// Type encoding: q16@0:8
// Implementation: 0x104f5db7c

// -[SCMessageRetentionAction actionSheetCell]
// Type encoding: @16@0:8
// Implementation: 0x104f5db84

// -[SCMessageRetentionAction prominentActionButton]
// Type encoding: @16@0:8
// Implementation: 0x104f5db8c

// -[SCMessageRetentionAction .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f5db94

@end
