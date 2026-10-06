// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreateChatGroupLinkWorkflow
// Superclass: NSObject
// Address: 0x112a09708

@interface SCCreateChatGroupLinkWorkflow

// Property: delegate; attributes: T@"<SCCreateChatGroupLinkWorkflowDelegate>",W,N,V_delegate

// -[SCCreateChatGroupLinkWorkflow initWithGroupLinkHandler:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104f2e2f0

// -[SCCreateChatGroupLinkWorkflow startGroupLinkCreationWithSelectedParticipants:currentTitle:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f2e394

// -[SCCreateChatGroupLinkWorkflow startGroupLinkCreationWithExistingGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2e698

// -[SCCreateChatGroupLinkWorkflow deleteInviteLinkToGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2e6e0

// -[SCCreateChatGroupLinkWorkflow _handleGroupLinkActionResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2e730

// -[SCCreateChatGroupLinkWorkflow _handleGroupInviteLinkCreationSuccessWithGroup:formattedDeepLink:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f2e8d4

// -[SCCreateChatGroupLinkWorkflow _handleGroupInviteFailureWithError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104f2e93c

// -[SCCreateChatGroupLinkWorkflow delegate]
// Type encoding: @16@0:8
// Implementation: 0x104f2e970

// -[SCCreateChatGroupLinkWorkflow setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2e988

// -[SCCreateChatGroupLinkWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f2e994

@end
