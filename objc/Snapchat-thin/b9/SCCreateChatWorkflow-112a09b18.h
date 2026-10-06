// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCreateChatWorkflow
// Superclass: NSObject
// Address: 0x112a09b18

@interface SCCreateChatWorkflow

// Property: delegate; attributes: T@"<SCCreateChatWorkflowDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCreateChatWorkflow initWithUIContainer:newChatStateObservable:newGroupButtonSelectedObservable:recipientPickerScopeExposer:recipientPickerScopeServices:source:groupCreator:groupFetcher:userId:createChatLogger:longPressDelegate:circumstanceEngine:sharingExperimentServices:featureSettingsServices:notificationPool:]
// Type encoding: @136@0:8@16@24@32@40@48q56@64@72@80@88@96@104@112@120@128
// Implementation: 0x104f34a54

// -[SCCreateChatWorkflow beginNewChatCreationWithSelectedItems:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f34d8c

// -[SCCreateChatWorkflow _launchRecipientPicker:disabledItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f34eb4

// -[SCCreateChatWorkflow didConfirmWithSelectedItems:title:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f3515c

// -[SCCreateChatWorkflow didDismissWithSelectedItems:title:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104f35338

// -[SCCreateChatWorkflow didReceiveSelectedItemAttributions:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f35364

// -[SCCreateChatWorkflow didRenderSuccessfully]
// Type encoding: v16@0:8
// Implementation: 0x104f3536c

// -[SCCreateChatWorkflow didUserInputTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f35378

// -[SCCreateChatWorkflow didReceiveSelectionItemToStateMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f353a8

// -[SCCreateChatWorkflow didReceiveSectionIdentifierToSelectionItemsMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f353b0

// -[SCCreateChatWorkflow didInputSearchQuery]
// Type encoding: v16@0:8
// Implementation: 0x104f353b8

// -[SCCreateChatWorkflow _confirmationPressedForNewChatWithSelectedItems:title:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104f353e4

// -[SCCreateChatWorkflow _confirmationPressedForAddToGroupWithSelectedItems:groupId:title:uiContainer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104f35768

// -[SCCreateChatWorkflow didTapContactWithPhoneNumber:selectionItem:selectionTypeIdentifier:selectContactHandler:uiContainer:]
// Type encoding: v56@0:8@16@24@32@?40@48
// Implementation: 0x104f359c0

// -[SCCreateChatWorkflow _subscribeToNewChatStateObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f35c88

// -[SCCreateChatWorkflow _sinkState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f35dac

// -[SCCreateChatWorkflow _subscribeToNewGroupButtonSelectedObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f35ddc

// -[SCCreateChatWorkflow _setDidSelectNewGroup:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f35f18

// -[SCCreateChatWorkflow _isAddToGroupState]
// Type encoding: B16@0:8
// Implementation: 0x104f35f20

// -[SCCreateChatWorkflow _fetchGroupMembers:]
// Type encoding: v24@0:8@?16
// Implementation: 0x104f35fe0

// -[SCCreateChatWorkflow _handleRequestToNavigationToChatForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f36390

// -[SCCreateChatWorkflow _showInvitesSentNotificationWithMultipleSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x104f36418

// -[SCCreateChatWorkflow delegate]
// Type encoding: @16@0:8
// Implementation: 0x104f364bc

// -[SCCreateChatWorkflow setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104f364d4

// -[SCCreateChatWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104f364e0

@end
