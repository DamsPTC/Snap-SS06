// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatScopeWorkflow
// Superclass: NSObject
// Address: 0x112ae4088

@interface SCChatScopeWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatScopeWorkflow initWithChatScope:router:snapchatterServices:circumstanceEngine:groupsDataFetcher:userId:delegate:nativeSessionManager:chatEligibilityProvider:groupChatNonFriendWarningServices:userBlizzardServices:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x106509b40

// -[SCChatScopeWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x106509e00

// -[SCChatScopeWorkflow _handleIntent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106509f78

// -[SCChatScopeWorkflow _beginChatSessionForIntent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650a04c

// -[SCChatScopeWorkflow _beginGroupChatNonFriendWarningWorkflowIfNeededForGroup:]
// Type encoding: B24@0:8@16
// Implementation: 0x10650a2fc

// -[SCChatScopeWorkflow _logGroupChatEnterQualifyingGroupForGroup:nonFriendCount:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10650a430

// -[SCChatScopeWorkflow _beginNFMWorkflowForUserId:intent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10650a514

// -[SCChatScopeWorkflow _onGetSnapchatter:intent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10650a73c

// -[SCChatScopeWorkflow _getHasUnreadMessageForSnapchatter:intent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10650a830

// -[SCChatScopeWorkflow _onGetHasUnreadMessageSuccessWithHasUnreadMessages:snapchatter:intent:]
// Type encoding: v36@0:8B16@20@28
// Implementation: 0x10650ac3c

// -[SCChatScopeWorkflow _onGetHasUnreadMessageFailureForSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ac68

// -[SCChatScopeWorkflow modalChatViewControllerDidAppear:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ac78

// -[SCChatScopeWorkflow modalChatViewControllerDidDisappear:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ac80

// -[SCChatScopeWorkflow didGrantBlockExceptionForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650acd4

// -[SCChatScopeWorkflow blockedExceptionAlertScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ad98

// -[SCChatScopeWorkflow didGrantNonFriendWarningForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ade8

// -[SCChatScopeWorkflow nonFriendWarningAlertScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ae1c

// -[SCChatScopeWorkflow didConfirmEnterChatWithSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ae60

// -[SCChatScopeWorkflow didDismissUnreadMessageAlertScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10650ae94

// -[SCChatScopeWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10650aee0

@end
