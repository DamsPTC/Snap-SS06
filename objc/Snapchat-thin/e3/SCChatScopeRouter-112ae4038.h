// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatScopeRouter
// Superclass: NSObject
// Address: 0x112ae4038

@interface SCChatScopeRouter


// -[SCChatScopeRouter initWithBlockedExceptionAlertScopeExposer:blockedExceptionAlertScopeServices:groupChatNonFriendWarningAlertScopeServices:modalChatRootViewController:uiContainer:unreadMessageAlertScopeExposer:unreadMessageAlertScopeServices:lifecycleLogger:contextualNotificationTriggerEvents:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1065092dc

// -[SCChatScopeRouter beginChatSessionWithIntent:restoreContainer:delegate:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1065094ac

// -[SCChatScopeRouter didFinishPresentingChat]
// Type encoding: v16@0:8
// Implementation: 0x10650969c

// -[SCChatScopeRouter _modalChatViewControllerWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065096a4

// -[SCChatScopeRouter _willPresentDialog]
// Type encoding: v16@0:8
// Implementation: 0x10650974c

// -[SCChatScopeRouter _finishPreChatDialogPresentationAndRestoreContainer]
// Type encoding: v16@0:8
// Implementation: 0x1065097bc

// -[SCChatScopeRouter restoreInteractivePresentationAfterPreChatDismissal]
// Type encoding: v16@0:8
// Implementation: 0x10650981c

// -[SCChatScopeRouter beginBlockedExceptionPromptWorkflowWithGroupId:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106509820

// -[SCChatScopeRouter endBlockedExceptionAlertScope]
// Type encoding: v16@0:8
// Implementation: 0x1065098d0

// -[SCChatScopeRouter beginGroupChatNonFriendWarningPromptWorkflowWithGroup:nonFriendUserIds:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106509918

// -[SCChatScopeRouter endGroupChatNonFriendWarningAlertScope]
// Type encoding: v16@0:8
// Implementation: 0x1065099c0

// -[SCChatScopeRouter beginUnreadMessageAlertWorkflowForSnapchatter:didErrorOccur:delegate:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1065099d0

// -[SCChatScopeRouter endUnreadMessageAlertScope]
// Type encoding: v16@0:8
// Implementation: 0x106509a5c

// -[SCChatScopeRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106509aa4

@end
