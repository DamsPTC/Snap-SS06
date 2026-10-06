// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TwoFASetupAuthViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112ac1c18

@interface TwoFASetupAuthViewController

// Property: leftSwipeEnabled; attributes: TB,N,V_leftSwipeEnabled
// Property: infoText; attributes: T@"NSString",&,N,V_infoText
// Property: moreInfoText; attributes: T@"NSString",&,N,V_moreInfoText
// Property: infoTextLabel; attributes: T@"UILabel",&,N,V_infoTextLabel
// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: moreInfoTextLabel; attributes: T@"UILabel",&,N,V_moreInfoTextLabel
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: userInfoServices; attributes: T@"SCUserInfoServices",&,N,V_userInfoServices
// Property: userTwoFAServices; attributes: T@"_TtC17UserTwoFAServices19SCUserTwoFAServices",&,N,V_userTwoFAServices
// Property: reauthenticationServices; attributes: T@"SCReauthenticationServices",&,N,V_reauthenticationServices
// Property: passwordNetworkRequester; attributes: T@"<SCAuthenticatedPasswordNetworkRequester>",&,N,V_passwordNetworkRequester
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[TwoFASetupAuthViewController initWithPageViewName:title:leftSwipeEnabled:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:]
// Type encoding: @148@0:8q16@24B32B36B40@44@52@60@68@76@84@92@100@108@116@124@132@140
// Implementation: 0x10606f584

// -[TwoFASetupAuthViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x10606f944

// -[TwoFASetupAuthViewController verifyMobileDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x10606f948

// -[TwoFASetupAuthViewController verifyMobileDidSucceedWithTwoFaRecoveryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10606f950

// -[TwoFASetupAuthViewController verifyMobileWasCancelled]
// Type encoding: v16@0:8
// Implementation: 0x10606f964

// -[TwoFASetupAuthViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x10606f9a0

// -[TwoFASetupAuthViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10606f9b0

// -[TwoFASetupAuthViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1060703a8

// -[TwoFASetupAuthViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1060703b0

// -[TwoFASetupAuthViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060703b8

// -[TwoFASetupAuthViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060705ec

// -[TwoFASetupAuthViewController disableLeftSwipe]
// Type encoding: B16@0:8
// Implementation: 0x10607067c

// -[TwoFASetupAuthViewController setIsWorking:]
// Type encoding: v20@0:8B16
// Implementation: 0x106070694

// -[TwoFASetupAuthViewController presentSmsSetupView]
// Type encoding: v16@0:8
// Implementation: 0x106070708

// -[TwoFASetupAuthViewController presentMobileSettingView]
// Type encoding: v16@0:8
// Implementation: 0x1060709a8

// -[TwoFASetupAuthViewController presentSmsCodeConfirmationView]
// Type encoding: v16@0:8
// Implementation: 0x106070adc

// -[TwoFASetupAuthViewController presentTpaSetupView]
// Type encoding: v16@0:8
// Implementation: 0x106070c6c

// -[TwoFASetupAuthViewController presentRecoveryCodeViewWithRecoveryCode:]
// Type encoding: v24@0:8@16
// Implementation: 0x106070da8

// -[TwoFASetupAuthViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106070fc8

// -[TwoFASetupAuthViewController _hasValidMobile]
// Type encoding: B16@0:8
// Implementation: 0x106071004

// -[TwoFASetupAuthViewController _getSMSInstructionText]
// Type encoding: @16@0:8
// Implementation: 0x1060710a8

// -[TwoFASetupAuthViewController _formattedMobile]
// Type encoding: @16@0:8
// Implementation: 0x106071158

// -[TwoFASetupAuthViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x106071354

// -[TwoFASetupAuthViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x106071360

// -[TwoFASetupAuthViewController leftSwipeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10607136c

// -[TwoFASetupAuthViewController setLeftSwipeEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10607137c

// -[TwoFASetupAuthViewController infoText]
// Type encoding: @16@0:8
// Implementation: 0x10607138c

// -[TwoFASetupAuthViewController setInfoText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607139c

// -[TwoFASetupAuthViewController moreInfoText]
// Type encoding: @16@0:8
// Implementation: 0x1060713dc

// -[TwoFASetupAuthViewController setMoreInfoText:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060713ec

// -[TwoFASetupAuthViewController infoTextLabel]
// Type encoding: @16@0:8
// Implementation: 0x10607142c

// -[TwoFASetupAuthViewController setInfoTextLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607143c

// -[TwoFASetupAuthViewController tableView]
// Type encoding: @16@0:8
// Implementation: 0x10607147c

// -[TwoFASetupAuthViewController setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607148c

// -[TwoFASetupAuthViewController moreInfoTextLabel]
// Type encoding: @16@0:8
// Implementation: 0x1060714cc

// -[TwoFASetupAuthViewController setMoreInfoTextLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060714dc

// -[TwoFASetupAuthViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x10607151c

// -[TwoFASetupAuthViewController setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607152c

// -[TwoFASetupAuthViewController userInfoServices]
// Type encoding: @16@0:8
// Implementation: 0x10607156c

// -[TwoFASetupAuthViewController setUserInfoServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607157c

// -[TwoFASetupAuthViewController userTwoFAServices]
// Type encoding: @16@0:8
// Implementation: 0x1060715bc

// -[TwoFASetupAuthViewController setUserTwoFAServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060715cc

// -[TwoFASetupAuthViewController reauthenticationServices]
// Type encoding: @16@0:8
// Implementation: 0x10607160c

// -[TwoFASetupAuthViewController setReauthenticationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607161c

// -[TwoFASetupAuthViewController passwordNetworkRequester]
// Type encoding: @16@0:8
// Implementation: 0x10607165c

// -[TwoFASetupAuthViewController setPasswordNetworkRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x10607166c

// -[TwoFASetupAuthViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060716ac

@end
