// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPaymentsSelectEditListViewController
// Superclass: SCPaymentsGenericTableViewController
// Address: 0x1129fb248

@interface SCPaymentsSelectEditListViewController

// Property: mode; attributes: TQ,R,N,V_mode
// Property: itemType; attributes: TQ,R,N,V_itemType
// Property: delegate; attributes: T@"<SCPaymentsSelectEditListViewControllerDelegate>",W,N,V_delegate
// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: commerceLogger; attributes: T@"<SCCommerceEventLogger>",R,N,V_commerceLogger
// Property: checkoutShippingAddress; attributes: T@"SCPaymentsLegacyShippingAddress",&,N,V_checkoutShippingAddress
// Property: canRemoveEditableItem; attributes: TB,N,V_canRemoveEditableItem
// Property: theme; attributes: TQ,N,V_theme

// -[SCPaymentsSelectEditListViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104dba264

// -[SCPaymentsSelectEditListViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104dba2ac

// -[SCPaymentsSelectEditListViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dba338

// -[SCPaymentsSelectEditListViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dba3fc

// -[SCPaymentsSelectEditListViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dba490

// -[SCPaymentsSelectEditListViewController shouldPopToRootViewController]
// Type encoding: B16@0:8
// Implementation: 0x104dba4f8

// -[SCPaymentsSelectEditListViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x104dba500

// -[SCPaymentsSelectEditListViewController initWithItemType:mode:userSession:commerceLogger:paymentSettingsImageProvider:currentPageTracker:userBlizzardLogger:paymentInfoProvider:accountInfoProvider:commerceIconProvider:]
// Type encoding: @96@0:8Q16Q24@32@40@48@56@64@72@80@88
// Implementation: 0x104dba508

// -[SCPaymentsSelectEditListViewController setupTableView]
// Type encoding: v16@0:8
// Implementation: 0x104dba71c

// -[SCPaymentsSelectEditListViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x104dba8a4

// -[SCPaymentsSelectEditListViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104dba8c8

// -[SCPaymentsSelectEditListViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dbab3c

// -[SCPaymentsSelectEditListViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x104dbabec

// -[SCPaymentsSelectEditListViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x104dbac88

// -[SCPaymentsSelectEditListViewController _itemIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dbacf0

// -[SCPaymentsSelectEditListViewController _paymentMethodIsValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dbad68

// -[SCPaymentsSelectEditListViewController _tappedOnItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbae38

// -[SCPaymentsSelectEditListViewController _tappedOnNewOrEditableItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbb04c

// -[SCPaymentsSelectEditListViewController _returnToPreviousScreen]
// Type encoding: v16@0:8
// Implementation: 0x104dbb368

// -[SCPaymentsSelectEditListViewController _convertObfuscatedToCardDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbb3a4

// -[SCPaymentsSelectEditListViewController _loadItemsErrorHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbb524

// -[SCPaymentsSelectEditListViewController _loadItemsSuccessHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbb5f8

// -[SCPaymentsSelectEditListViewController _loadItems]
// Type encoding: v16@0:8
// Implementation: 0x104dbb6b8

// -[SCPaymentsSelectEditListViewController _fetchShippingCompletionHandler:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dbb984

// -[SCPaymentsSelectEditListViewController _convertToShippingDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dbbbc0

// -[SCPaymentsSelectEditListViewController _shouldAllowEditingInvalidItem:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dbc07c

// -[SCPaymentsSelectEditListViewController _showBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104dbc0d8

// -[SCPaymentsSelectEditListViewController _hideBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104dbc2f0

// -[SCPaymentsSelectEditListViewController _updateSelectedItemIndex]
// Type encoding: v16@0:8
// Implementation: 0x104dbc350

// -[SCPaymentsSelectEditListViewController showErrorRetryCancelDialogWithTitle:message:retryActionHandler:cancelActionHandler:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x104dbc4e4

// -[SCPaymentsSelectEditListViewController _getPageType]
// Type encoding: q16@0:8
// Implementation: 0x104dbc708

// -[SCPaymentsSelectEditListViewController displayId]
// Type encoding: @16@0:8
// Implementation: 0x104dbc724

// -[SCPaymentsSelectEditListViewController mode]
// Type encoding: Q16@0:8
// Implementation: 0x104dbc754

// -[SCPaymentsSelectEditListViewController itemType]
// Type encoding: Q16@0:8
// Implementation: 0x104dbc764

// -[SCPaymentsSelectEditListViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104dbc774

// -[SCPaymentsSelectEditListViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbc794

// -[SCPaymentsSelectEditListViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x104dbc7a8

// -[SCPaymentsSelectEditListViewController commerceLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dbc7c8

// -[SCPaymentsSelectEditListViewController checkoutShippingAddress]
// Type encoding: @16@0:8
// Implementation: 0x104dbc7d8

// -[SCPaymentsSelectEditListViewController setCheckoutShippingAddress:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbc7e8

// -[SCPaymentsSelectEditListViewController canRemoveEditableItem]
// Type encoding: B16@0:8
// Implementation: 0x104dbc828

// -[SCPaymentsSelectEditListViewController setCanRemoveEditableItem:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbc838

// -[SCPaymentsSelectEditListViewController theme]
// Type encoding: Q16@0:8
// Implementation: 0x104dbc848

// -[SCPaymentsSelectEditListViewController setTheme:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104dbc858

// -[SCPaymentsSelectEditListViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dbc868

@end
