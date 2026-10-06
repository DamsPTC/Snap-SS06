// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: PasswordSettingsViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112b18428

@interface PasswordSettingsViewController

// Property: pwVerifiedStrong; attributes: TB,N,V_pwVerifiedStrong
// Property: delegate; attributes: T@"<PasswordSettingsViewControllerDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[PasswordSettingsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106b38670

// -[PasswordSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b38678

// -[PasswordSettingsViewController initWithPasswordNetworkRequester:settingsEventLogger:usernameProvider:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106b38688

// -[PasswordSettingsViewController initWithPasswordNetworkRequester:settingsEventLogger:oneTapLoginRegistry:usernameProvider:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106b387b8

// -[PasswordSettingsViewController _initObserver]
// Type encoding: v16@0:8
// Implementation: 0x106b38928

// -[PasswordSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106b38980

// -[PasswordSettingsViewController _isComplexityV2Enabled]
// Type encoding: B16@0:8
// Implementation: 0x106b38c28

// -[PasswordSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b38c48

// -[PasswordSettingsViewController textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b38c7c

// -[PasswordSettingsViewController setIndicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b39034

// -[PasswordSettingsViewController textViewShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b39154

// -[PasswordSettingsViewController textViewShouldReturn:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b39250

// -[PasswordSettingsViewController continueButtonClicked]
// Type encoding: v16@0:8
// Implementation: 0x106b392e0

// -[PasswordSettingsViewController inputKeyboardWillChangeFrame:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b392e4

// -[PasswordSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b392f4

// -[PasswordSettingsViewController didToggleCheckbox:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b39324

// -[PasswordSettingsViewController backButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b39334

// -[PasswordSettingsViewController _changePassword:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106b39364

// -[PasswordSettingsViewController _getPasswordStrength:quickCheck:successBlock:failureBlock:]
// Type encoding: v44@0:8@16B24@?28@?36
// Implementation: 0x106b39374

// -[PasswordSettingsViewController checkPasswordStrength]
// Type encoding: v16@0:8
// Implementation: 0x106b396d0

// -[PasswordSettingsViewController _getPasswordStrengthDidSucceed:savable:message:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x106b39a34

// -[PasswordSettingsViewController _getPasswordStrengthDidFail]
// Type encoding: v16@0:8
// Implementation: 0x106b39b44

// -[PasswordSettingsViewController changePassword]
// Type encoding: v16@0:8
// Implementation: 0x106b39b7c

// -[PasswordSettingsViewController _changePasswordSuccessCallback]
// Type encoding: v16@0:8
// Implementation: 0x106b39d78

// -[PasswordSettingsViewController _update1TLOptInStatusIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106b39ec8

// -[PasswordSettingsViewController _changePasswordFailureCallback:inputError:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x106b39f68

// -[PasswordSettingsViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x106b3a13c

// -[PasswordSettingsViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b3a15c

// -[PasswordSettingsViewController pwVerifiedStrong]
// Type encoding: B16@0:8
// Implementation: 0x106b3a170

// -[PasswordSettingsViewController setPwVerifiedStrong:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b3a180

// -[PasswordSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b3a190

// +[PasswordSettingsViewController strengthMessages]
// Type encoding: @16@0:8
// Implementation: 0x106b39384

// +[PasswordSettingsViewController strengthColors]
// Type encoding: @16@0:8
// Implementation: 0x106b39530

@end
