// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryManagementActionBarActionHandler
// Superclass: NSObject
// Address: 0x112b6a098

@interface SCStoryManagementActionBarActionHandler

// Property: operaEventAnnouncer; attributes: T@"<SCOperaEventAnnouncing>",&,N,V_operaEventAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryManagementActionBarActionHandler initWithStoryId:presentingViewController:saveStoryScopeExposer:deleteStorySnapScopeExposer:deleteStorySnapScopeServices:storyShareScopeExposer:storyShareScopeServices:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107a1659c

// -[SCStoryManagementActionBarActionHandler handleActionWithSender:actionModel:fromSourceView:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x107a16710

// -[SCStoryManagementActionBarActionHandler _saveSnapWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a16870

// -[SCStoryManagementActionBarActionHandler didCompleteSaveStoryScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a16928

// -[SCStoryManagementActionBarActionHandler _deleteSnapWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a16948

// -[SCStoryManagementActionBarActionHandler didSelectDeleteStorySnaps:clientIdsBeingDeleted:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107a16aa0

// -[SCStoryManagementActionBarActionHandler didCancelDeleteStorySnap]
// Type encoding: v16@0:8
// Implementation: 0x107a16b80

// -[SCStoryManagementActionBarActionHandler didDeleteSnapProStorySnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a16ba0

// -[SCStoryManagementActionBarActionHandler _sendSnapWithClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a16ba4

// -[SCStoryManagementActionBarActionHandler didCompleteStoryShareScope]
// Type encoding: v16@0:8
// Implementation: 0x107a16c38

// -[SCStoryManagementActionBarActionHandler operaEventAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107a16c80

// -[SCStoryManagementActionBarActionHandler setOperaEventAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a16c88

// -[SCStoryManagementActionBarActionHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a16cb8

@end
