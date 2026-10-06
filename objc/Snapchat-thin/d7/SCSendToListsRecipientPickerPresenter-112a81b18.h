// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSendToListsRecipientPickerPresenter
// Superclass: NSObject
// Address: 0x112a81b18

@interface SCSendToListsRecipientPickerPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSendToListsRecipientPickerPresenter initWithLauncher:recipientPickerScopeServices:uiContainer:delegate:listsDataManager:snapchattersDataFetcher:groupsDataFetcher:myUserId:myDisplayName:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x1059d0e1c

// -[SCSendToListsRecipientPickerPresenter presentEditListWithListId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d0ffc

// -[SCSendToListsRecipientPickerPresenter _presentEditListWithListId:listDataModel:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d1214

// -[SCSendToListsRecipientPickerPresenter _presentEditListWithListId:listDataModel:snapchatters:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059d13d4

// -[SCSendToListsRecipientPickerPresenter presentCreateList]
// Type encoding: v16@0:8
// Implementation: 0x1059d199c

// -[SCSendToListsRecipientPickerPresenter didConfirmWithSelectedItems:title:uiContainer:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059d1c28

// -[SCSendToListsRecipientPickerPresenter didDismissWithSelectedItems:title:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d1d10

// -[SCSendToListsRecipientPickerPresenter didViolateWithSelectedItems:titleTextField:confirmationModel:uiConainer:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1059d1d48

// -[SCSendToListsRecipientPickerPresenter didPressTopRightButtonWithUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d20f8

// -[SCSendToListsRecipientPickerPresenter didTapTitleTextField]
// Type encoding: v16@0:8
// Implementation: 0x1059d26ac

// -[SCSendToListsRecipientPickerPresenter didUserInputTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d26f4

// -[SCSendToListsRecipientPickerPresenter didReceiveSelectionItemUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d273c

// -[SCSendToListsRecipientPickerPresenter _confirmationModelWithButtonTitle:selectedItems:listName:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059d27a4

// -[SCSendToListsRecipientPickerPresenter _listNameIsInUse:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059d2940

// -[SCSendToListsRecipientPickerPresenter _performCreateOperationWithListId:listName:selectedItems:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059d2c1c

// -[SCSendToListsRecipientPickerPresenter _performUpdateOperationWithListId:listName:selectedItems:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1059d3084

// -[SCSendToListsRecipientPickerPresenter _presentMaxCharacterLengthReachedWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059d3570

// -[SCSendToListsRecipientPickerPresenter _presentEmptyTitleWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059d3710

// -[SCSendToListsRecipientPickerPresenter _presentRemoveListAlertWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1059d3870

// -[SCSendToListsRecipientPickerPresenter _presentAlreadyUsedListNameAlertWithListName:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1059d39a0

// -[SCSendToListsRecipientPickerPresenter _presentMaxRecipientsReachedAlert]
// Type encoding: v16@0:8
// Implementation: 0x1059d3bb4

// -[SCSendToListsRecipientPickerPresenter _presentMaxSavedListCountAlert]
// Type encoding: v16@0:8
// Implementation: 0x1059d3d30

// -[SCSendToListsRecipientPickerPresenter _shouldCheckForAlreadyUsedListNameWithNewListName:]
// Type encoding: B24@0:8@16
// Implementation: 0x1059d3eac

// -[SCSendToListsRecipientPickerPresenter _selectTextFieldWithTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x1059d3edc

// -[SCSendToListsRecipientPickerPresenter _listFromListId:listName:selectedItems:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1059d3f88

// -[SCSendToListsRecipientPickerPresenter _updateListWithListId:listName:selectedItems:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1059d41ec

// -[SCSendToListsRecipientPickerPresenter _createListWithListId:listName:selectedItems:successBlock:failureBlock:]
// Type encoding: v56@0:8@16@24@32@?40@?48
// Implementation: 0x1059d429c

// -[SCSendToListsRecipientPickerPresenter _listNameFromHeader:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059d434c

// -[SCSendToListsRecipientPickerPresenter _setEditingStateWithListName:listId:editingInProgress:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1059d43dc

// -[SCSendToListsRecipientPickerPresenter _dismissAndResetEditingState]
// Type encoding: v16@0:8
// Implementation: 0x1059d4454

// -[SCSendToListsRecipientPickerPresenter _showProgressStatusOverlay:withMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1059d4488

// -[SCSendToListsRecipientPickerPresenter _showProgressStatusOverlay:]
// Type encoding: @24@0:8@16
// Implementation: 0x1059d45c4

// -[SCSendToListsRecipientPickerPresenter _getSectionIdentifiers]
// Type encoding: @16@0:8
// Implementation: 0x1059d462c

// -[SCSendToListsRecipientPickerPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1059d46e4

@end
