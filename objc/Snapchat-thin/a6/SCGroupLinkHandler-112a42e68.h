// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupLinkHandler
// Superclass: NSObject
// Address: 0x112a42e68

@interface SCGroupLinkHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupLinkHandler initWithGroupsDataCreator:groupsDataFetcher:snapchattersDataFetcher:inviteService:notificationPool:offPlatformLinkGenerator:userTrackedLogger:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10550ba74

// -[SCGroupLinkHandler startGroupLinkCreationWithUsers:currentTitle:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10550bbf0

// -[SCGroupLinkHandler startGroupLinkCreationWithExistingGroupId:isCalling:isSilent:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x10550bd14

// -[SCGroupLinkHandler deleteInviteLinkToGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x10550bee8

// -[SCGroupLinkHandler _executeGroupLinkCreationForUsers:groupName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10550c03c

// -[SCGroupLinkHandler _createGroupWithSnapchatters:groupName:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10550c248

// -[SCGroupLinkHandler _handleGroupInviteLinkCreationForGroup:isCalling:isSilent:completion:]
// Type encoding: v40@0:8@16B24B28@?32
// Implementation: 0x10550c3f8

// -[SCGroupLinkHandler _handleGroupInviteLinkCreationSuccessWithGroup:groupInviteId:isCalling:isSilent:completion:]
// Type encoding: v48@0:8@16@24B32B36@?40
// Implementation: 0x10550c624

// -[SCGroupLinkHandler _presentGroupLinkRequestNotification]
// Type encoding: v16@0:8
// Implementation: 0x10550c954

// -[SCGroupLinkHandler _handleGroupCreationFailureWithReason:completion:]
// Type encoding: v32@0:8Q16@?24
// Implementation: 0x10550ca94

// -[SCGroupLinkHandler _handleGroupCreationFailureWithReason:isSilent:completion:]
// Type encoding: v36@0:8Q16B24@?28
// Implementation: 0x10550caa0

// -[SCGroupLinkHandler _presentGroupLinkDeletionRequestNotification]
// Type encoding: v16@0:8
// Implementation: 0x10550cc3c

// -[SCGroupLinkHandler _presentGroupLinkDeletionFailedNotification]
// Type encoding: v16@0:8
// Implementation: 0x10550cd7c

// -[SCGroupLinkHandler _presentGroupLinkDeletionSuccessNotification]
// Type encoding: v16@0:8
// Implementation: 0x10550cebc

// -[SCGroupLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10550cffc

@end
