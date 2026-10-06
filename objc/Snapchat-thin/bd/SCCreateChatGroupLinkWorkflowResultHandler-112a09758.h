// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreateChatGroupLinkWorkflowResultHandler
// Superclass: NSObject
// Address: 0x112a09758

@interface SCCreateChatGroupLinkWorkflowResultHandler

// Property: uiContainer; attributes: T@"<SCUIContainer>",&,N,V_uiContainer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreateChatGroupLinkWorkflowResultHandler initWithEventTracker:newChatStatePublisher:circumstanceEngine:notificationPool:groupsDataCreator:navigationDelegate:standardExternalContentShareScopeExposer:groupExternalShareScopeExposer:groupExternalShareScopeServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104f2e9cc

// -[SCCreateChatGroupLinkWorkflowResultHandler didSucceedWithGroup:deeplink:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f2ebb8

// -[SCCreateChatGroupLinkWorkflowResultHandler didFailWithLinkHandlerError:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104f2ecfc

// -[SCCreateChatGroupLinkWorkflowResultHandler didBeginGroupLinkDeletion]
// Type encoding: v16@0:8
// Implementation: 0x104f2ed78

// -[SCCreateChatGroupLinkWorkflowResultHandler didSuccessfullyDeleteGroupLink]
// Type encoding: v16@0:8
// Implementation: 0x104f2ee58

// -[SCCreateChatGroupLinkWorkflowResultHandler handleGroupLinkCreationUsingOffPlatformGroupScopeForGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2ef38

// -[SCCreateChatGroupLinkWorkflowResultHandler _presentShareSheetWithDeeplinkURL:group:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f2efe4

// -[SCCreateChatGroupLinkWorkflowResultHandler _presentOffPlatformShareSheetWithDeepkinkURL:groupName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f2f048

// -[SCCreateChatGroupLinkWorkflowResultHandler _handleNoGroupName]
// Type encoding: v16@0:8
// Implementation: 0x104f2f298

// -[SCCreateChatGroupLinkWorkflowResultHandler _handleMaxParticipants]
// Type encoding: v16@0:8
// Implementation: 0x104f2f478

// -[SCCreateChatGroupLinkWorkflowResultHandler _handleGroupCreationFailure]
// Type encoding: v16@0:8
// Implementation: 0x104f2f63c

// -[SCCreateChatGroupLinkWorkflowResultHandler _updateGeneratorsForAddToGroup]
// Type encoding: v16@0:8
// Implementation: 0x104f2f6c0

// -[SCCreateChatGroupLinkWorkflowResultHandler handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x104f2f75c

// -[SCCreateChatGroupLinkWorkflowResultHandler shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x104f2f764

// -[SCCreateChatGroupLinkWorkflowResultHandler groupExternalShareScopeDidEnd:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2f784

// -[SCCreateChatGroupLinkWorkflowResultHandler uiContainer]
// Type encoding: @16@0:8
// Implementation: 0x104f2f7cc

// -[SCCreateChatGroupLinkWorkflowResultHandler setUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f2f7d4

// -[SCCreateChatGroupLinkWorkflowResultHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f2f804

@end
