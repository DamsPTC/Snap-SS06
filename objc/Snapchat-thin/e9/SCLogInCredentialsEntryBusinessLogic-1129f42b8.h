// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLogInCredentialsEntryBusinessLogic
// Superclass: SCBusinessLogic
// Address: 0x1129f42b8

@interface SCLogInCredentialsEntryBusinessLogic


// -[SCLogInCredentialsEntryBusinessLogic initWithUsernameOrEmail:phoneNumber:password:reactivationStatus:reactivationAccountIdentifier:delegate:loginService:networkConnectivityMonitor:phoneNumberFormatter:loginStateTransitionLogger:loginLogger:magicCodeLogger:logInInterceptorsCheck:logInRepository:applicationLifecycleEvents:enteredPageBefore:circumstanceEngine:passkeyLoginEnabled:isFromPhoneEmailFirstPage:]
// Type encoding: @164@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128^B136@144@?152B160
// Implementation: 0x104cd380c

// -[SCLogInCredentialsEntryBusinessLogic begin]
// Type encoding: v16@0:8
// Implementation: 0x104cd3e90

// -[SCLogInCredentialsEntryBusinessLogic handleAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd3f00

// -[SCLogInCredentialsEntryBusinessLogic _pageInFocus]
// Type encoding: v16@0:8
// Implementation: 0x104cd4838

// -[SCLogInCredentialsEntryBusinessLogic _continueButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104cd487c

// -[SCLogInCredentialsEntryBusinessLogic _updateKeyboardFocusType]
// Type encoding: v16@0:8
// Implementation: 0x104cd48c0

// -[SCLogInCredentialsEntryBusinessLogic viewModel]
// Type encoding: @16@0:8
// Implementation: 0x104cd4940

// -[SCLogInCredentialsEntryBusinessLogic _checkShouldAllowRegistration]
// Type encoding: B16@0:8
// Implementation: 0x104cd4ae8

// -[SCLogInCredentialsEntryBusinessLogic _registerButtonTitle]
// Type encoding: @16@0:8
// Implementation: 0x104cd4b14

// -[SCLogInCredentialsEntryBusinessLogic _updateCanLogInState]
// Type encoding: v16@0:8
// Implementation: 0x104cd4b54

// -[SCLogInCredentialsEntryBusinessLogic _observeApplicationLifecycleEvents]
// Type encoding: v16@0:8
// Implementation: 0x104cd4c0c

// -[SCLogInCredentialsEntryBusinessLogic _cleanErrorMessageAfterAppReturnForegroundIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104cd4d34

// -[SCLogInCredentialsEntryBusinessLogic _attemptLogInWithConfirmReactivation:]
// Type encoding: v20@0:8B16
// Implementation: 0x104cd4db0

// -[SCLogInCredentialsEntryBusinessLogic _logInWithConfirmReactivation:networkRequestId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x104cd5064

// -[SCLogInCredentialsEntryBusinessLogic _handleLogInSuccess:networkRequestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104cd5838

// -[SCLogInCredentialsEntryBusinessLogic _handleLogInFailureWithError:networkRequestId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104cd59b4

// -[SCLogInCredentialsEntryBusinessLogic _startPasskeyLoginWithTrigger:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104cd63e4

// -[SCLogInCredentialsEntryBusinessLogic _handlePromptRedirectToRegAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd6464

// -[SCLogInCredentialsEntryBusinessLogic _clearRedirectToRegPromptStatus]
// Type encoding: v16@0:8
// Implementation: 0x104cd678c

// -[SCLogInCredentialsEntryBusinessLogic _updateAccountNotFoundPromptState:]
// Type encoding: v24@0:8q16
// Implementation: 0x104cd67dc

// -[SCLogInCredentialsEntryBusinessLogic _updateRedirectToRegDialog:]
// Type encoding: v24@0:8q16
// Implementation: 0x104cd6814

// -[SCLogInCredentialsEntryBusinessLogic _shouldPromptRedirectToLogin]
// Type encoding: B16@0:8
// Implementation: 0x104cd6af4

// -[SCLogInCredentialsEntryBusinessLogic _canLogIn]
// Type encoding: B16@0:8
// Implementation: 0x104cd6bd0

// -[SCLogInCredentialsEntryBusinessLogic _hasInProgressLogIn]
// Type encoding: B16@0:8
// Implementation: 0x104cd6be8

// -[SCLogInCredentialsEntryBusinessLogic countryCodePickerCompletedWithCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd6c00

// -[SCLogInCredentialsEntryBusinessLogic _countryCodePickerCompletedWithCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd6d30

// -[SCLogInCredentialsEntryBusinessLogic countryCodePickerExited]
// Type encoding: v16@0:8
// Implementation: 0x104cd6ddc

// -[SCLogInCredentialsEntryBusinessLogic appealScopeDidCompleteWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x104cd6e10

// -[SCLogInCredentialsEntryBusinessLogic passkeyLoginBecomesUserVisible]
// Type encoding: v16@0:8
// Implementation: 0x104cd6e9c

// -[SCLogInCredentialsEntryBusinessLogic _passkeyLoginBecomesUserVisible]
// Type encoding: v16@0:8
// Implementation: 0x104cd6f94

// -[SCLogInCredentialsEntryBusinessLogic passkeyLoginWillShowAlertView]
// Type encoding: v16@0:8
// Implementation: 0x104cd6ff4

// -[SCLogInCredentialsEntryBusinessLogic _passkeyLoginWillShowAlertView]
// Type encoding: v16@0:8
// Implementation: 0x104cd70ec

// -[SCLogInCredentialsEntryBusinessLogic passkeyLoginFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd712c

// -[SCLogInCredentialsEntryBusinessLogic _passkeyLoginFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd725c

// -[SCLogInCredentialsEntryBusinessLogic _isPhoneNumberFieldVisibleInitialValue]
// Type encoding: B16@0:8
// Implementation: 0x104cd7404

// -[SCLogInCredentialsEntryBusinessLogic _updateUserNameOrPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd74a0

// -[SCLogInCredentialsEntryBusinessLogic _isInternationalDialingCodeOrCountryCodeOrPhoneNumberPrefix:]
// Type encoding: B24@0:8@16
// Implementation: 0x104cd75dc

// -[SCLogInCredentialsEntryBusinessLogic _isPossibleFullPhoneNumber:]
// Type encoding: B24@0:8@16
// Implementation: 0x104cd7718

// -[SCLogInCredentialsEntryBusinessLogic _createPhoneNumberFieldNotAllowedCharSet]
// Type encoding: @16@0:8
// Implementation: 0x104cd7798

// -[SCLogInCredentialsEntryBusinessLogic _isPhoneNumberFieldSupportedInput:]
// Type encoding: B24@0:8@16
// Implementation: 0x104cd77ec

// -[SCLogInCredentialsEntryBusinessLogic _updatePhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd789c

// -[SCLogInCredentialsEntryBusinessLogic _getUsernameOrPhoneNumber]
// Type encoding: @16@0:8
// Implementation: 0x104cd7aec

// -[SCLogInCredentialsEntryBusinessLogic _getFullPhoneNumberForLogin]
// Type encoding: @16@0:8
// Implementation: 0x104cd7b40

// -[SCLogInCredentialsEntryBusinessLogic _getDefaultCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x104cd7bdc

// -[SCLogInCredentialsEntryBusinessLogic _currentLoginSource]
// Type encoding: q16@0:8
// Implementation: 0x104cd7c8c

// -[SCLogInCredentialsEntryBusinessLogic _currentMagicCodeLoginSource]
// Type encoding: q16@0:8
// Implementation: 0x104cd7ca0

// -[SCLogInCredentialsEntryBusinessLogic _updateCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104cd7cd4

// -[SCLogInCredentialsEntryBusinessLogic _setPhoneNumberFieldVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x104cd7dd0

// -[SCLogInCredentialsEntryBusinessLogic _logUnifiedAccountIdentifierToggle]
// Type encoding: v16@0:8
// Implementation: 0x104cd7e18

// -[SCLogInCredentialsEntryBusinessLogic _logLoginAttemptUnifiedAccountIdentifierTogglesAndReset]
// Type encoding: v16@0:8
// Implementation: 0x104cd7e68

// -[SCLogInCredentialsEntryBusinessLogic _appWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x104cd7ed4

// -[SCLogInCredentialsEntryBusinessLogic .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104cd7ed8

@end
