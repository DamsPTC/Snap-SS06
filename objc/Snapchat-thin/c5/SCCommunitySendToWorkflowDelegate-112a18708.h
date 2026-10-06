// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommunitySendToWorkflowDelegate
// Superclass: NSObject
// Address: 0x112a18708

@interface SCCommunitySendToWorkflowDelegate

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommunitySendToWorkflowDelegate initWithUiContainer:sendToScopeLauncher:sharingScopeDelegate:conversationParser:messageSender:externalLinkSendingService:notificationPool:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10510a760

// -[SCCommunitySendToWorkflowDelegate didDismissWithSelectedItems:sendToDismissSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10510a8d4

// -[SCCommunitySendToWorkflowDelegate didSendWithSelectionState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10510a8d8

// -[SCCommunitySendToWorkflowDelegate _sendMessageToConversations:text:additionalText:numOfRecipients:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10510aef8

// -[SCCommunitySendToWorkflowDelegate _sendExternallyToSelectedContacts:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10510b1d0

// -[SCCommunitySendToWorkflowDelegate _showPostSendAlertWithResult:]
// Type encoding: v24@0:8q16
// Implementation: 0x10510b300

// -[SCCommunitySendToWorkflowDelegate _completeWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x10510b414

// -[SCCommunitySendToWorkflowDelegate _detachUI]
// Type encoding: v16@0:8
// Implementation: 0x10510b594

// -[SCCommunitySendToWorkflowDelegate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10510b5dc

@end
