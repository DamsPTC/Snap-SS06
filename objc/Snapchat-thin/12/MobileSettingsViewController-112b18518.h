// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MobileSettingsViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112b18518

@interface MobileSettingsViewController

// Property: confirmationField; attributes: T@"SCVerificationCodeTextField",&,N,V_confirmationField
// Property: searchableSwitchRowView; attributes: T@"UIView",&,N,V_searchableSwitchRowView
// Property: countryCodeField; attributes: T@"UITextField",&,N,V_countryCodeField
// Property: countryCodePicker; attributes: T@"SCCountryCodePickerView",&,N,V_countryCodePicker
// Property: countryCodePickerVisible; attributes: TB,N,V_countryCodePickerVisible
// Property: keyboardVisible; attributes: TB,N,V_keyboardVisible
// Property: keyboardWillBeVisible; attributes: TB,N,V_keyboardWillBeVisible
// Property: loadingScreen; attributes: T@"SCLoadingScreen",&,N,V_loadingScreen
// Property: infoLabel; attributes: T@"SIGTextView",&,N,V_infoLabel
// Property: unlockAccountLabel; attributes: T@"TTTAttributedLabel",&,N,V_unlockAccountLabel
// Property: scrollView; attributes: T@"UIScrollView",&,N,V_scrollView
// Property: searchableSwitch; attributes: T@"UISwitch",&,N,V_searchableSwitch
// Property: selectedCountryCode; attributes: T@"NSString",&,N,V_selectedCountryCode
// Property: shouldResendCode; attributes: TB,N,V_shouldResendCode
// Property: type; attributes: Tq,N,V_type
// Property: textField; attributes: T@"SCPhoneNumberPlaceholderTextField",&,N,V_textField
// Property: timerForCode; attributes: T@"NSTimer",&,N,V_timerForCode
// Property: timerCountdownString; attributes: T@"NSString",&,N,V_timerCountdownString
// Property: verifyPhoneNumberBar; attributes: T@"UIButton",&,N,V_verifyPhoneNumberBar
// Property: verifyCodeBar; attributes: T@"UIButton",&,N,V_verifyCodeBar
// Property: reverifyPhoneNumberBar; attributes: T@"UIButton",&,N,V_reverifyPhoneNumberBar
// Property: confirmPhoneNumberBar; attributes: T@"UIButton",&,N,V_confirmPhoneNumberBar
// Property: verifyCodeTimeLimit; attributes: Tq,N,V_verifyCodeTimeLimit
// Property: isReverifyingPhoneNumber; attributes: TB,N,V_isReverifyingPhoneNumber
// Property: initialFormattedMobile; attributes: T@"NSString",C,N,V_initialFormattedMobile
// Property: mobileSettingsDelegate; attributes: T@"<SCMobileSettingsDelegate>",W,N,V_mobileSettingsDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[MobileSettingsViewController initWithUserSession:userInfoServices:reauthenticationService:searchabilityService:friendingConfigsProvider:passwordNetworkRequester:userTrackedLogger:settingsEventLogger:userPhoneVerificationScopeExposer:delegate:adoptGrowthNotifSmsCopy:shouldHideForgotPasswordButton:customAppThemeProvider:circumstanceEngine:]
// Type encoding: @124@0:8@16@24@32@40@48@56@64@72@80@88B96@?100@108@116
// Implementation: 0x106b3ae44

// -[MobileSettingsViewController initForType:userSession:userInfoServices:reauthenticationService:searchabilityService:friendingConfigsProvider:passwordNetworkRequester:userTrackedLogger:settingsEventLogger:userPhoneVerificationScopeExposer:delegate:adoptGrowthNotifSmsCopy:shouldHideForgotPasswordButton:customAppThemeProvider:circumstanceEngine:]
// Type encoding: @132@0:8q16@24@32@40@48@56@64@72@80@88@96B104@?108@116@124
// Implementation: 0x106b3aea8

// -[MobileSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106b3b218

// -[MobileSettingsViewController traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b3b26c

// -[MobileSettingsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106b3b3f8

// -[MobileSettingsViewController createTopInfoLabel]
// Type encoding: v16@0:8
// Implementation: 0x106b3b400

// -[MobileSettingsViewController createBottomInfoLabel]
// Type encoding: v16@0:8
// Implementation: 0x106b3bae0

// -[MobileSettingsViewController createSearchableSwitchRow]
// Type encoding: v16@0:8
// Implementation: 0x106b3c248

// -[MobileSettingsViewController createCountryCodeFieldRow]
// Type encoding: v16@0:8
// Implementation: 0x106b3cc2c

// -[MobileSettingsViewController createPhoneNumberTextFieldRow]
// Type encoding: v16@0:8
// Implementation: 0x106b3d1f0

// -[MobileSettingsViewController phoneNumberBarTextColor]
// Type encoding: @16@0:8
// Implementation: 0x106b3d7d4

// -[MobileSettingsViewController createVerifyPhoneNumberBar]
// Type encoding: v16@0:8
// Implementation: 0x106b3d7e4

// -[MobileSettingsViewController createReverifyPhoneNumberBar]
// Type encoding: v16@0:8
// Implementation: 0x106b3dcb0

// -[MobileSettingsViewController createConfirmationCodeTextFieldRow]
// Type encoding: v16@0:8
// Implementation: 0x106b3e010

// -[MobileSettingsViewController createVerifyConfirmationCodeBar]
// Type encoding: v16@0:8
// Implementation: 0x106b3e2e4

// -[MobileSettingsViewController createCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x106b3e5e0

// -[MobileSettingsViewController getInitialSelectedCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x106b3e9a0

// -[MobileSettingsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x106b3eb08

// -[MobileSettingsViewController dealloc]
// Type encoding: v16@0:8
// Implementation: 0x106b3f340

// -[MobileSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b3f3a0

// -[MobileSettingsViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b3f44c

// -[MobileSettingsViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x106b3f560

// -[MobileSettingsViewController updateSearchSwitchState]
// Type encoding: v16@0:8
// Implementation: 0x106b3f56c

// -[MobileSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b3f614

// -[MobileSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b3f650

// -[MobileSettingsViewController addKeyboardObservers]
// Type encoding: v16@0:8
// Implementation: 0x106b3f768

// -[MobileSettingsViewController removeKeyboardObservers]
// Type encoding: v16@0:8
// Implementation: 0x106b3f808

// -[MobileSettingsViewController keyboardWillShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b3f890

// -[MobileSettingsViewController keyboardDidShow:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b3fb9c

// -[MobileSettingsViewController keyboardWillHide:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b3fba4

// -[MobileSettingsViewController observeValueForKeyPath:ofObject:change:context:]
// Type encoding: v48@0:8@16@24@32^v40
// Implementation: 0x106b3fc90

// -[MobileSettingsViewController registerNumberDidFail:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b3ff00

// -[MobileSettingsViewController registerNumberTentativeDidSucced]
// Type encoding: v16@0:8
// Implementation: 0x106b40068

// -[MobileSettingsViewController _registerNumberSucceededWithTwoFADisabledTitle:warningMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b4007c

// -[MobileSettingsViewController _showTwoFADisabledWarningTitle:message:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b400e0

// -[MobileSettingsViewController _registerNumberDidSucceed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b4023c

// -[MobileSettingsViewController _notifyDelegateWhenSucceed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b40484

// -[MobileSettingsViewController _verifyNumberFailedWithReauthenticationRequired]
// Type encoding: v16@0:8
// Implementation: 0x106b405c0

// -[MobileSettingsViewController _verifyNumberFailedWithConnectionFailedOrMissingTentativePhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b405ec

// -[MobileSettingsViewController _verifyNumberFailedWithGeneralError]
// Type encoding: v16@0:8
// Implementation: 0x106b40758

// -[MobileSettingsViewController _verifyNumberSucceededWithTwoFADisabled:warningTitle:warningMessage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b407c4

// -[MobileSettingsViewController _verifyNumberSucceeded:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b4082c

// -[MobileSettingsViewController _updateSearchableAfterPhoneVerify]
// Type encoding: v16@0:8
// Implementation: 0x106b40a10

// -[MobileSettingsViewController presentVerificationCodeAlertView]
// Type encoding: v16@0:8
// Implementation: 0x106b40aa4

// -[MobileSettingsViewController _setMobile:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b40e7c

// -[MobileSettingsViewController verifyPhoneNumberBarPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b4135c

// -[MobileSettingsViewController goToPasswordReauthScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b415a0

// -[MobileSettingsViewController verifyCodeBarPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b41684

// -[MobileSettingsViewController verifyActivationCode]
// Type encoding: v16@0:8
// Implementation: 0x106b416c0

// -[MobileSettingsViewController getConfirmationCode]
// Type encoding: @16@0:8
// Implementation: 0x106b41da4

// -[MobileSettingsViewController resetViewForVerifyFail]
// Type encoding: v16@0:8
// Implementation: 0x106b41de8

// -[MobileSettingsViewController _prefillPhoneNumberAndUpdateUI]
// Type encoding: v16@0:8
// Implementation: 0x106b41ee0

// -[MobileSettingsViewController saveSuccess]
// Type encoding: v16@0:8
// Implementation: 0x106b42098

// -[MobileSettingsViewController updateCountdownLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b423f8

// -[MobileSettingsViewController showLoadingScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b4271c

// -[MobileSettingsViewController hideLoadingScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b42904

// -[MobileSettingsViewController _setLoadingScreenWindow]
// Type encoding: v16@0:8
// Implementation: 0x106b42940

// -[MobileSettingsViewController _clearLoadingScreenWindow]
// Type encoding: v16@0:8
// Implementation: 0x106b429a4

// -[MobileSettingsViewController showCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x106b429bc

// -[MobileSettingsViewController hideCountryCodePicker]
// Type encoding: v16@0:8
// Implementation: 0x106b42b4c

// -[MobileSettingsViewController countryCodePickerView:didSelectCountryCode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b42cf8

// -[MobileSettingsViewController countryCodePickerView:didStopOnCountryCode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b42d40

// -[MobileSettingsViewController textFieldShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b42d48

// -[MobileSettingsViewController textFieldDidEndEditing:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b430d0

// -[MobileSettingsViewController textField:shouldChangeCharactersInRange:replacementString:]
// Type encoding: B48@0:8@16{_NSRange=QQ}24@40
// Implementation: 0x106b43184

// -[MobileSettingsViewController textFieldShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b43380

// -[MobileSettingsViewController textFieldDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b43444

// -[MobileSettingsViewController phoneNumberUnchanged]
// Type encoding: B16@0:8
// Implementation: 0x106b436a4

// -[MobileSettingsViewController _phoneNumberTextField:shouldChangeCharactersInRange:replacementString:countryCode:]
// Type encoding: B56@0:8@16{_NSRange=QQ}24@40@48
// Implementation: 0x106b43720

// -[MobileSettingsViewController attributedLabel:didSelectLinkWithURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b43878

// -[MobileSettingsViewController textView:shouldInteractWithURL:inRange:interaction:]
// Type encoding: B56@0:8@16@24{_NSRange=QQ}32q48
// Implementation: 0x106b438f8

// -[MobileSettingsViewController handleTextFieldErrorState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b43980

// -[MobileSettingsViewController handleTextFieldNormalState:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b43984

// -[MobileSettingsViewController isSpecialType]
// Type encoding: B16@0:8
// Implementation: 0x106b43988

// -[MobileSettingsViewController setVerifyCodeBarTitleForStates:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b439a4

// -[MobileSettingsViewController resetTimerCountdownText]
// Type encoding: v16@0:8
// Implementation: 0x106b43aa0

// -[MobileSettingsViewController hideConfirmationField:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b43c20

// -[MobileSettingsViewController hideUnlockAccountLabel:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b43f90

// -[MobileSettingsViewController checkIfExistingUserMobile:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b44244

// -[MobileSettingsViewController shouldPopToRootViewControllerLater]
// Type encoding: B16@0:8
// Implementation: 0x106b442f0

// -[MobileSettingsViewController passwordCheckDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106b442f8

// -[MobileSettingsViewController getSettingsPasswordReauthTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b442fc

// -[MobileSettingsViewController shouldHideForgotPasswordButton]
// Type encoding: B16@0:8
// Implementation: 0x106b4430c

// -[MobileSettingsViewController _logUserPhoneVerificationSuccess]
// Type encoding: v16@0:8
// Implementation: 0x106b44320

// -[MobileSettingsViewController _formattedTentativeNumber]
// Type encoding: @16@0:8
// Implementation: 0x106b443cc

// -[MobileSettingsViewController _getTentativeCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x106b445cc

// -[MobileSettingsViewController _formattedMobile]
// Type encoding: @16@0:8
// Implementation: 0x106b446fc

// -[MobileSettingsViewController _hasTentativeNumber]
// Type encoding: B16@0:8
// Implementation: 0x106b448f8

// -[MobileSettingsViewController _hasVerifiedNumber]
// Type encoding: B16@0:8
// Implementation: 0x106b449a8

// -[MobileSettingsViewController _isForceVerify]
// Type encoding: B16@0:8
// Implementation: 0x106b44a58

// -[MobileSettingsViewController mobileSettingsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106b44a74

// -[MobileSettingsViewController setMobileSettingsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44a94

// -[MobileSettingsViewController confirmationField]
// Type encoding: @16@0:8
// Implementation: 0x106b44aa8

// -[MobileSettingsViewController setConfirmationField:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44ab8

// -[MobileSettingsViewController searchableSwitchRowView]
// Type encoding: @16@0:8
// Implementation: 0x106b44af8

// -[MobileSettingsViewController setSearchableSwitchRowView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44b08

// -[MobileSettingsViewController countryCodeField]
// Type encoding: @16@0:8
// Implementation: 0x106b44b48

// -[MobileSettingsViewController setCountryCodeField:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44b58

// -[MobileSettingsViewController countryCodePicker]
// Type encoding: @16@0:8
// Implementation: 0x106b44b98

// -[MobileSettingsViewController setCountryCodePicker:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44ba8

// -[MobileSettingsViewController countryCodePickerVisible]
// Type encoding: B16@0:8
// Implementation: 0x106b44be8

// -[MobileSettingsViewController setCountryCodePickerVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b44bf8

// -[MobileSettingsViewController keyboardVisible]
// Type encoding: B16@0:8
// Implementation: 0x106b44c08

// -[MobileSettingsViewController setKeyboardVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b44c18

// -[MobileSettingsViewController keyboardWillBeVisible]
// Type encoding: B16@0:8
// Implementation: 0x106b44c28

// -[MobileSettingsViewController setKeyboardWillBeVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b44c38

// -[MobileSettingsViewController loadingScreen]
// Type encoding: @16@0:8
// Implementation: 0x106b44c48

// -[MobileSettingsViewController setLoadingScreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44c58

// -[MobileSettingsViewController infoLabel]
// Type encoding: @16@0:8
// Implementation: 0x106b44c98

// -[MobileSettingsViewController setInfoLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44ca8

// -[MobileSettingsViewController unlockAccountLabel]
// Type encoding: @16@0:8
// Implementation: 0x106b44ce8

// -[MobileSettingsViewController setUnlockAccountLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44cf8

// -[MobileSettingsViewController scrollView]
// Type encoding: @16@0:8
// Implementation: 0x106b44d38

// -[MobileSettingsViewController setScrollView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44d48

// -[MobileSettingsViewController searchableSwitch]
// Type encoding: @16@0:8
// Implementation: 0x106b44d88

// -[MobileSettingsViewController setSearchableSwitch:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44d98

// -[MobileSettingsViewController selectedCountryCode]
// Type encoding: @16@0:8
// Implementation: 0x106b44dd8

// -[MobileSettingsViewController setSelectedCountryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44de8

// -[MobileSettingsViewController shouldResendCode]
// Type encoding: B16@0:8
// Implementation: 0x106b44e28

// -[MobileSettingsViewController setShouldResendCode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b44e38

// -[MobileSettingsViewController type]
// Type encoding: q16@0:8
// Implementation: 0x106b44e48

// -[MobileSettingsViewController setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b44e58

// -[MobileSettingsViewController textField]
// Type encoding: @16@0:8
// Implementation: 0x106b44e68

// -[MobileSettingsViewController setTextField:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44e78

// -[MobileSettingsViewController timerForCode]
// Type encoding: @16@0:8
// Implementation: 0x106b44eb8

// -[MobileSettingsViewController setTimerForCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44ec8

// -[MobileSettingsViewController timerCountdownString]
// Type encoding: @16@0:8
// Implementation: 0x106b44f08

// -[MobileSettingsViewController setTimerCountdownString:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44f18

// -[MobileSettingsViewController verifyPhoneNumberBar]
// Type encoding: @16@0:8
// Implementation: 0x106b44f58

// -[MobileSettingsViewController setVerifyPhoneNumberBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44f68

// -[MobileSettingsViewController verifyCodeBar]
// Type encoding: @16@0:8
// Implementation: 0x106b44fa8

// -[MobileSettingsViewController setVerifyCodeBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b44fb8

// -[MobileSettingsViewController reverifyPhoneNumberBar]
// Type encoding: @16@0:8
// Implementation: 0x106b44ff8

// -[MobileSettingsViewController setReverifyPhoneNumberBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b45008

// -[MobileSettingsViewController confirmPhoneNumberBar]
// Type encoding: @16@0:8
// Implementation: 0x106b45048

// -[MobileSettingsViewController setConfirmPhoneNumberBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b45058

// -[MobileSettingsViewController verifyCodeTimeLimit]
// Type encoding: q16@0:8
// Implementation: 0x106b45098

// -[MobileSettingsViewController setVerifyCodeTimeLimit:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b450a8

// -[MobileSettingsViewController isReverifyingPhoneNumber]
// Type encoding: B16@0:8
// Implementation: 0x106b450b8

// -[MobileSettingsViewController setIsReverifyingPhoneNumber:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b450c8

// -[MobileSettingsViewController initialFormattedMobile]
// Type encoding: @16@0:8
// Implementation: 0x106b450d8

// -[MobileSettingsViewController setInitialFormattedMobile:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b450e8

// -[MobileSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b450f4

@end
