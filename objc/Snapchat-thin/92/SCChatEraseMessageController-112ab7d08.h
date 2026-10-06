// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatEraseMessageController
// Superclass: NSObject
// Address: 0x112ab7d08

@interface SCChatEraseMessageController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatEraseMessageController initWithConversationManager:notificationPool:delegate:uiContainer:userPreferences:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105feb48c

// -[SCChatEraseMessageController dismissPresentedDialogIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x105feb580

// -[SCChatEraseMessageController beginEraseFlowForConversationParticipants:isGroupConversation:message:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105feb65c

// -[SCChatEraseMessageController _presentEraseMessagePromptForMessage:dialogType:isGroupConversation:botParticipant:]
// Type encoding: v44@0:8@16q24B32q36
// Implementation: 0x105feb790

// -[SCChatEraseMessageController _presentLearnMorePromptForMessage:dialogType:isGroupConversation:botParticipant:isPresentedFirst:]
// Type encoding: v48@0:8@16q24B32q36B44
// Implementation: 0x105febf08

// -[SCChatEraseMessageController _checkAndUpdateFirstTimeForDialogType:]
// Type encoding: B24@0:8q16
// Implementation: 0x105fec2e8

// -[SCChatEraseMessageController _eraseMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fec3a8

// -[SCChatEraseMessageController dialogDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105fec650

// -[SCChatEraseMessageController _didDismissAlertView]
// Type encoding: v16@0:8
// Implementation: 0x105fec65c

// -[SCChatEraseMessageController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105fec698

@end
