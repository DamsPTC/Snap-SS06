// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPaymentsContactViewController
// Superclass: SCGenericPaymentsSettingsViewController
// Address: 0x1129fb1f8

@interface SCPaymentsContactViewController

// Property: errorLabel; attributes: T@"UILabel",&,N,V_errorLabel
// Property: errorMsgForFields; attributes: T@"NSMutableDictionary",&,V_errorMsgForFields
// Property: emailField; attributes: T@"SCFloatLabeledTextField",&,V_emailField
// Property: phoneNumField; attributes: T@"SCFloatLabeledTextField",&,V_phoneNumField
// Property: editingContactDetails; attributes: T@"SCPaymentsLegacyContactDetails",R,N,V_editingContactDetails
// Property: sessionId; attributes: T@"NSString",&,N,V_sessionId
// Property: logger; attributes: T@"SCPaymentsPageLogger",&,N,V_logger
// Property: delegate; attributes: T@"<SCPaymentsContactViewControllerDelegate>",W,N,V_delegate
// Property: userSession; attributes: T@"SCUserSession",R,W,N,V_userSession
// Property: commerceLogger; attributes: T@"<SCCommerceEventLogger>",R,N,V_commerceLogger
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPaymentsContactViewController initWithUserSession:commerceLogger:currentPageTracker:accountInfoProvider:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104db68ac

// -[SCPaymentsContactViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x104db6a90

// -[SCPaymentsContactViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x104db6b10

// -[SCPaymentsContactViewController leftSwipeSucceed]
// Type encoding: v16@0:8
// Implementation: 0x104db6b9c

// -[SCPaymentsContactViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x104db6c04

// -[SCPaymentsContactViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104db6c6c

// -[SCPaymentsContactViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104db6cd0

// -[SCPaymentsContactViewController _prefillContactInfoIfPossibleAndNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104db6d84

// -[SCPaymentsContactViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x104db6f98

// -[SCPaymentsContactViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x104db6ff4

// -[SCPaymentsContactViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x104db6ffc

// -[SCPaymentsContactViewController rightButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x104db702c

// -[SCPaymentsContactViewController _pagenameForPageView]
// Type encoding: q16@0:8
// Implementation: 0x104db7030

// -[SCPaymentsContactViewController _initTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x104db7038

// -[SCPaymentsContactViewController _initTextFields]
// Type encoding: v16@0:8
// Implementation: 0x104db71b8

// -[SCPaymentsContactViewController _initSaveButton]
// Type encoding: v16@0:8
// Implementation: 0x104db78b0

// -[SCPaymentsContactViewController _initErrorLabel]
// Type encoding: v16@0:8
// Implementation: 0x104db79b0

// -[SCPaymentsContactViewController textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x104db7d30

// -[SCPaymentsContactViewController textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x104db8014

// -[SCPaymentsContactViewController textFieldDidEndEditing:reason:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104db80b8

// -[SCPaymentsContactViewController _isEmailValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104db81d0

// -[SCPaymentsContactViewController _isPhoneNumValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104db8254

// -[SCPaymentsContactViewController _isFieldValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104db82d8

// -[SCPaymentsContactViewController _isFieldCompleteAndInvalid:]
// Type encoding: B24@0:8@16
// Implementation: 0x104db83b4

// -[SCPaymentsContactViewController _areAllFieldsValid]
// Type encoding: B16@0:8
// Implementation: 0x104db84e8

// -[SCPaymentsContactViewController _loadContactInfo]
// Type encoding: v16@0:8
// Implementation: 0x104db85fc

// -[SCPaymentsContactViewController _fetchContactCompletionHanlder:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104db8798

// -[SCPaymentsContactViewController _convertFromContactDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104db8988

// -[SCPaymentsContactViewController _convertToContactDataModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x104db8a6c

// -[SCPaymentsContactViewController _updateErrorLabelsWithPreemptiveChecking:]
// Type encoding: v20@0:8B16
// Implementation: 0x104db8b04

// -[SCPaymentsContactViewController _getErrorMessageForField:]
// Type encoding: @24@0:8@16
// Implementation: 0x104db8d10

// -[SCPaymentsContactViewController _setErrorLabelAndTextFieldColors]
// Type encoding: v16@0:8
// Implementation: 0x104db8da8

// -[SCPaymentsContactViewController _updateTextFieldTextColor:hasError:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x104db8f50

// -[SCPaymentsContactViewController _didTapSaveButton]
// Type encoding: v16@0:8
// Implementation: 0x104db8fd8

// -[SCPaymentsContactViewController _updateContactDetailsCompletionHandler:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104db92a0

// -[SCPaymentsContactViewController _updateUI]
// Type encoding: v16@0:8
// Implementation: 0x104db9650

// -[SCPaymentsContactViewController _shouldEnableSaveButton]
// Type encoding: B16@0:8
// Implementation: 0x104db968c

// -[SCPaymentsContactViewController _setupExistingContactDetails]
// Type encoding: v16@0:8
// Implementation: 0x104db977c

// -[SCPaymentsContactViewController _textFieldRelatedToErrorCode:]
// Type encoding: @24@0:8q16
// Implementation: 0x104db9818

// -[SCPaymentsContactViewController _resignAnyFirstResponder]
// Type encoding: v16@0:8
// Implementation: 0x104db9880

// -[SCPaymentsContactViewController _showBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104db998c

// -[SCPaymentsContactViewController _hideBlurView]
// Type encoding: v16@0:8
// Implementation: 0x104db9bc8

// -[SCPaymentsContactViewController _initPrivacyLink]
// Type encoding: v16@0:8
// Implementation: 0x104db9c4c

// -[SCPaymentsContactViewController _contactDetailsFieldsUpdated:]
// Type encoding: B24@0:8@16
// Implementation: 0x104db9cd0

// -[SCPaymentsContactViewController displayId]
// Type encoding: @16@0:8
// Implementation: 0x104db9dc0

// -[SCPaymentsContactViewController _hasRegisteredMobileNumber]
// Type encoding: B16@0:8
// Implementation: 0x104db9df0

// -[SCPaymentsContactViewController _formattedMobile]
// Type encoding: @16@0:8
// Implementation: 0x104db9e60

// -[SCPaymentsContactViewController editingContactDetails]
// Type encoding: @16@0:8
// Implementation: 0x104db9f38

// -[SCPaymentsContactViewController sessionId]
// Type encoding: @16@0:8
// Implementation: 0x104db9f48

// -[SCPaymentsContactViewController setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104db9f58

// -[SCPaymentsContactViewController logger]
// Type encoding: @16@0:8
// Implementation: 0x104db9f98

// -[SCPaymentsContactViewController setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x104db9fa8

// -[SCPaymentsContactViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x104db9fe8

// -[SCPaymentsContactViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dba008

// -[SCPaymentsContactViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x104dba01c

// -[SCPaymentsContactViewController commerceLogger]
// Type encoding: @16@0:8
// Implementation: 0x104dba03c

// -[SCPaymentsContactViewController errorLabel]
// Type encoding: @16@0:8
// Implementation: 0x104dba04c

// -[SCPaymentsContactViewController setErrorLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dba05c

// -[SCPaymentsContactViewController errorMsgForFields]
// Type encoding: @16@0:8
// Implementation: 0x104dba09c

// -[SCPaymentsContactViewController setErrorMsgForFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dba0ac

// -[SCPaymentsContactViewController emailField]
// Type encoding: @16@0:8
// Implementation: 0x104dba0b8

// -[SCPaymentsContactViewController setEmailField:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dba0c8

// -[SCPaymentsContactViewController phoneNumField]
// Type encoding: @16@0:8
// Implementation: 0x104dba0d4

// -[SCPaymentsContactViewController setPhoneNumField:]
// Type encoding: v24@0:8@16
// Implementation: 0x104dba0e4

// -[SCPaymentsContactViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104dba0f0

@end
