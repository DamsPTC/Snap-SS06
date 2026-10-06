// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TwoFASmsSettingsViewController
// Superclass: TwoFASettingCodeVerificationViewController
// Address: 0x112ac1d08

@interface TwoFASmsSettingsViewController

// Property: skipRecoveryCode; attributes: TB,N,V_skipRecoveryCode
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: userInfoServices; attributes: T@"SCUserInfoServices",&,N,V_userInfoServices
// Property: userTwoFAServices; attributes: T@"_TtC17UserTwoFAServices19SCUserTwoFAServices",&,N,V_userTwoFAServices
// Property: reauthenticationServices; attributes: T@"SCReauthenticationServices",&,N,V_reauthenticationServices
// Property: passwordNetworkRequester; attributes: T@"<SCAuthenticatedPasswordNetworkRequester>",&,N,V_passwordNetworkRequester
// Property: settingsDelegate; attributes: T@"<SCSettingsDelegate>",W,N,V_settingsDelegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[TwoFASmsSettingsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106074d50

// -[TwoFASmsSettingsViewController initWithPhoneNumber:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:]
// Type encoding: @136@0:8@16B24B28@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x106074d58

// -[TwoFASmsSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106075100

// -[TwoFASmsSettingsViewController attributedLabel:didSelectLinkWithURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10607533c

// -[TwoFASmsSettingsViewController verifyMobileDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x106075470

// -[TwoFASmsSettingsViewController verifyMobileDidSucceedWithTwoFaRecoveryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075478

// -[TwoFASmsSettingsViewController verifyMobileWasCancelled]
// Type encoding: v16@0:8
// Implementation: 0x10607547c

// -[TwoFASmsSettingsViewController leftButtonPressed:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060754b8

// -[TwoFASmsSettingsViewController verifyPressed:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x1060754f4

// -[TwoFASmsSettingsViewController verifySucceed:recoveryCode:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10607578c

// -[TwoFASmsSettingsViewController resendPressed:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x106075794

// -[TwoFASmsSettingsViewController presentRecoveryCodeViewWithRecoveryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607588c

// -[TwoFASmsSettingsViewController settingsDelegate]
// Type encoding: @16@0:8
// Implementation: 0x106075ab8

// -[TwoFASmsSettingsViewController setSettingsDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075ad8

// -[TwoFASmsSettingsViewController skipRecoveryCode]
// Type encoding: B16@0:8
// Implementation: 0x106075aec

// -[TwoFASmsSettingsViewController setSkipRecoveryCode:]
// Type encoding: v20@0:8B16
// Implementation: 0x106075afc

// -[TwoFASmsSettingsViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x106075b0c

// -[TwoFASmsSettingsViewController setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075b1c

// -[TwoFASmsSettingsViewController userInfoServices]
// Type encoding: @16@0:8
// Implementation: 0x106075b5c

// -[TwoFASmsSettingsViewController setUserInfoServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075b6c

// -[TwoFASmsSettingsViewController userTwoFAServices]
// Type encoding: @16@0:8
// Implementation: 0x106075bac

// -[TwoFASmsSettingsViewController setUserTwoFAServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075bbc

// -[TwoFASmsSettingsViewController reauthenticationServices]
// Type encoding: @16@0:8
// Implementation: 0x106075bfc

// -[TwoFASmsSettingsViewController setReauthenticationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075c0c

// -[TwoFASmsSettingsViewController passwordNetworkRequester]
// Type encoding: @16@0:8
// Implementation: 0x106075c4c

// -[TwoFASmsSettingsViewController setPasswordNetworkRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x106075c5c

// -[TwoFASmsSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106075c9c

@end
