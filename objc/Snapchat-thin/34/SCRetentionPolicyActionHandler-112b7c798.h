// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRetentionPolicyActionHandler
// Superclass: NSObject
// Address: 0x112b7c798

@interface SCRetentionPolicyActionHandler

// Property: presentingViewController; attributes: T@"UIViewController",W,N,V_presentingViewController
// Property: delegate; attributes: T@"<SCRetentionPolicyDelegate>",R,W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRetentionPolicyActionHandler initConversationId:isGroupConversation:availableRetentionModes:friendSnapchatter:presentingViewController:chatMessageActionHandler:delegate:]
// Type encoding: @68@0:8@16B24@28@36@44@52@60
// Implementation: 0x107d3fdc0

// -[SCRetentionPolicyActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107d3ff0c

// -[SCRetentionPolicyActionHandler _retentionPolicyController]
// Type encoding: @16@0:8
// Implementation: 0x107d40018

// -[SCRetentionPolicyActionHandler _retentionActionForRetentionMode:]
// Type encoding: @24@0:8q16
// Implementation: 0x107d402e0

// -[SCRetentionPolicyActionHandler _updateRetentionPolicyTo:]
// Type encoding: v24@0:8q16
// Implementation: 0x107d40438

// -[SCRetentionPolicyActionHandler _processChatSendResult:retentionMode:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107d40568

// -[SCRetentionPolicyActionHandler _presentAlertForFailedRetentionChange]
// Type encoding: v16@0:8
// Implementation: 0x107d40618

// -[SCRetentionPolicyActionHandler _didChangeRetentionPolicyWithSuccess:retentionMode:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x107d4074c

// -[SCRetentionPolicyActionHandler _presentViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d40790

// -[SCRetentionPolicyActionHandler presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x107d407e0

// -[SCRetentionPolicyActionHandler setPresentingViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107d407f8

// -[SCRetentionPolicyActionHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x107d40804

// -[SCRetentionPolicyActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d4081c

@end
