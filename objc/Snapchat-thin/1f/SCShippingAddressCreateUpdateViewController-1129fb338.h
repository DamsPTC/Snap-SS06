// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCShippingAddressCreateUpdateViewController
// Superclass: SCGenericPaymentsSettingsViewController
// Address: 0x1129fb338

@interface SCShippingAddressCreateUpdateViewController

// Property: editingAddress; attributes: T@"SCPaymentsLegacyShippingAddress",R,N,V_editingAddress
// Property: addressError; attributes: T@"NSError",R,N,V_addressError
// Property: sessionId; attributes: T@"NSString",&,N,V_sessionId
// Property: logger; attributes: T@"SCPaymentsPageLogger",&,N,V_logger
// Property: shouldShowRemoveButton; attributes: TB,N,V_shouldShowRemoveButton
// Property: delegate; attributes: T@"<SCShippingAddressCreateUpdateViewControllerDelegate>",W,N,V_delegate
// Property: theme; attributes: TQ,N,V_theme
// Property: commerceLogger; attributes: T@"<SCCommerceEventLogger>",R,N,V_commerceLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCShippingAddressCreateUpdateViewController initWithAddress:commerceLogger:accountInfoProvider:currentPageTracker:addressError:popToViewController:commerceIconProvider:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x104dbf320

// -[SCShippingAddressCreateUpdateViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104dbf594

// -[SCShippingAddressCreateUpdateViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104dbf614

// -[SCShippingAddressCreateUpdateViewController leftSwipeSucceed]
// Type encoding: v16@0:8
// Implementation: 0x104dbf6a0

// -[SCShippingAddressCreateUpdateViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x104dbf708

// -[SCShippingAddressCreateUpdateViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbf770

// -[SCShippingAddressCreateUpdateViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbf7e0

// -[SCShippingAddressCreateUpdateViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbf8a4

// -[SCShippingAddressCreateUpdateViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dbf900

// -[SCShippingAddressCreateUpdateViewController _initParentView]
// Type encoding: v16@0:8
// Implementation: 0x104dbf948

// -[SCShippingAddressCreateUpdateViewController _initTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dbfb0c

// -[SCShippingAddressCreateUpdateViewController _initTextFields]
// Type encoding: v16@0:8
// Implementation: 0x104dbfc3c

// -[SCShippingAddressCreateUpdateViewController _addToolbarToTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc12dc

// -[SCShippingAddressCreateUpdateViewController _addArrowsToFieldToolbars]
// Type encoding: v16@0:8
// Implementation: 0x104dc1450

// -[SCShippingAddressCreateUpdateViewController _initSaveButton]
// Type encoding: v16@0:8
// Implementation: 0x104dc175c

// -[SCShippingAddressCreateUpdateViewController _initDeleteAddressButton]
// Type encoding: v16@0:8
// Implementation: 0x104dc185c

// -[SCShippingAddressCreateUpdateViewController _initErrorLabel]
// Type encoding: v16@0:8
// Implementation: 0x104dc1c28

// -[SCShippingAddressCreateUpdateViewController _pagenameForPageView]
// Type encoding: q16@0:8
// Implementation: 0x104dc1f48

// -[SCShippingAddressCreateUpdateViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x104dc1f50

// -[SCShippingAddressCreateUpdateViewController rightButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x104dc1f58

// -[SCShippingAddressCreateUpdateViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x104dc1f5c

// -[SCShippingAddressCreateUpdateViewController _registerForKeyboardNotifications]
// Type encoding: v16@0:8
// Implementation: 0x104dc1f6c

// -[SCShippingAddressCreateUpdateViewController _removeKeyboardNotifications]
// Type encoding: v16@0:8
// Implementation: 0x104dc2044

// -[SCShippingAddressCreateUpdateViewController keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc2104

// -[SCShippingAddressCreateUpdateViewController keyboardDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc2640

// -[SCShippingAddressCreateUpdateViewController keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc2650

// -[SCShippingAddressCreateUpdateViewController textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x104dc2848

// -[SCShippingAddressCreateUpdateViewController textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dc2a40

// -[SCShippingAddressCreateUpdateViewController textFieldDidEndEditing:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104dc2ad0

// -[SCShippingAddressCreateUpdateViewController _areAllFieldsValid]
// Type encoding: B16@0:8
// Implementation: 0x104dc2c00

// -[SCShippingAddressCreateUpdateViewController _isStateFieldValid]
// Type encoding: B16@0:8
// Implementation: 0x104dc2d14

// -[SCShippingAddressCreateUpdateViewController _isZipcodeFieldValid]
// Type encoding: B16@0:8
// Implementation: 0x104dc2da8

// -[SCShippingAddressCreateUpdateViewController _didTapSaveButton]
// Type encoding: v16@0:8
// Implementation: 0x104dc2e40

// -[SCShippingAddressCreateUpdateViewController _didTapDeleteButton]
// Type encoding: v16@0:8
// Implementation: 0x104dc3564

// -[SCShippingAddressCreateUpdateViewController _updateCompletionHandler:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dc381c

// -[SCShippingAddressCreateUpdateViewController _addCompletionHandler:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104dc3b98

// -[SCShippingAddressCreateUpdateViewController _deleteCompletionHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc3f0c

// -[SCShippingAddressCreateUpdateViewController _convertFromShippingDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dc41b0

// -[SCShippingAddressCreateUpdateViewController _convertToShippingDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dc456c

// -[SCShippingAddressCreateUpdateViewController _updateUI]
// Type encoding: v16@0:8
// Implementation: 0x104dc47e4

// -[SCShippingAddressCreateUpdateViewController _shouldEnableSaveButton]
// Type encoding: B16@0:8
// Implementation: 0x104dc4820

// -[SCShippingAddressCreateUpdateViewController _updateErrorLabelsWithPreemptiveChecking:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dc4824

// -[SCShippingAddressCreateUpdateViewController _getErrorMessageForField:]
// Type encoding: @24@0:8@16
// Implementation: 0x104dc4a30

// -[SCShippingAddressCreateUpdateViewController _setErrorLabelAndTextFieldColors]
// Type encoding: v16@0:8
// Implementation: 0x104dc4ac4

// -[SCShippingAddressCreateUpdateViewController _updateTextFieldTextColor:hasError:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104dc4c6c

// -[SCShippingAddressCreateUpdateViewController _isFieldValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dc4cf4

// -[SCShippingAddressCreateUpdateViewController _isFieldCompleteAndInvalid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dc4db4

// -[SCShippingAddressCreateUpdateViewController _isUSZipCodeValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104dc4fac

// -[SCShippingAddressCreateUpdateViewController _textFieldRelatedToErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x104dc50e4

// -[SCShippingAddressCreateUpdateViewController _nextResponder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc5220

// -[SCShippingAddressCreateUpdateViewController _previousResponder:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc52a4

// -[SCShippingAddressCreateUpdateViewController _setupExistingAddress]
// Type encoding: v16@0:8
// Implementation: 0x104dc532c

// -[SCShippingAddressCreateUpdateViewController _setupExistingAddressError]
// Type encoding: v16@0:8
// Implementation: 0x104dc54b4

// -[SCShippingAddressCreateUpdateViewController _isInAddressEditMode]
// Type encoding: B16@0:8
// Implementation: 0x104dc574c

// -[SCShippingAddressCreateUpdateViewController _showBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104dc5764

// -[SCShippingAddressCreateUpdateViewController _hideBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104dc59a0

// -[SCShippingAddressCreateUpdateViewController _initPrivacyView]
// Type encoding: v16@0:8
// Implementation: 0x104dc5a24

// -[SCShippingAddressCreateUpdateViewController _resignAnyFirstResponder]
// Type encoding: v16@0:8
// Implementation: 0x104dc5d74

// -[SCShippingAddressCreateUpdateViewController displayId]
// Type encoding: @16@0:8
// Implementation: 0x104dc5e80

// -[SCShippingAddressCreateUpdateViewController editingAddress]
// Type encoding: @16@0:8
// Implementation: 0x104dc5eb0

// -[SCShippingAddressCreateUpdateViewController addressError]
// Type encoding: @16@0:8
// Implementation: 0x104dc5ec0

// -[SCShippingAddressCreateUpdateViewController sessionId]
// Type encoding: @16@0:8
// Implementation: 0x104dc5ed0

// -[SCShippingAddressCreateUpdateViewController setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc5ee0

// -[SCShippingAddressCreateUpdateViewController logger]
// Type encoding: @16@0:8
// Implementation: 0x104dc5f20

// -[SCShippingAddressCreateUpdateViewController setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc5f30

// -[SCShippingAddressCreateUpdateViewController shouldShowRemoveButton]
// Type encoding: B16@0:8
// Implementation: 0x104dc5f70

// -[SCShippingAddressCreateUpdateViewController setShouldShowRemoveButton:]
// Type encoding: v20@0:8B16
// Implementation: 0x104dc5f80

// -[SCShippingAddressCreateUpdateViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104dc5f90

// -[SCShippingAddressCreateUpdateViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dc5fb0

// -[SCShippingAddressCreateUpdateViewController theme]
// Type encoding: Q16@0:8
// Implementation: 0x104dc5fc4

// -[SCShippingAddressCreateUpdateViewController setTheme:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104dc5fd4

// -[SCShippingAddressCreateUpdateViewController commerceLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dc5fe4

// -[SCShippingAddressCreateUpdateViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dc5ff4

@end
