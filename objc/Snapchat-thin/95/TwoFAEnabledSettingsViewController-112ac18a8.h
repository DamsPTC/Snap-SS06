// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TwoFAEnabledSettingsViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112ac18a8

@interface TwoFAEnabledSettingsViewController

// Property: infoLabel; attributes: T@"UILabel",&,N,V_infoLabel
// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: loadingScreen; attributes: T@"SCLoadingScreen",&,N,V_loadingScreen
// Property: leftSwipeable; attributes: TB,N,V_leftSwipeable
// Property: smsEnabled; attributes: TB,N,V_smsEnabled
// Property: otpEnabled; attributes: TB,N,V_otpEnabled
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

// -[TwoFAEnabledSettingsViewController initWithPageViewName:title:leftSwipeable:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:delegate:]
// Type encoding: @156@0:8q16@24B32B36B40@44@52@60@68@76@84@92@100@108@116@124@132@140@148
// Implementation: 0x10605c6c8

// -[TwoFAEnabledSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x10605ca84

// -[TwoFAEnabledSettingsViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x10605cfa0

// -[TwoFAEnabledSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x10605d000

// -[TwoFAEnabledSettingsViewController refreshRecoveryCodeCell]
// Type encoding: v16@0:8
// Implementation: 0x10605d10c

// -[TwoFAEnabledSettingsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x10605d1dc

// -[TwoFAEnabledSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x10605d1ec

// -[TwoFAEnabledSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x10605d1f0

// -[TwoFAEnabledSettingsViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x10605d214

// -[TwoFAEnabledSettingsViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x10605d21c

// -[TwoFAEnabledSettingsViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10605d224

// -[TwoFAEnabledSettingsViewController settingsSwitchTableViewCell:didToggleSwitch:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10605d538

// -[TwoFAEnabledSettingsViewController tryEnableSMSSwitch]
// Type encoding: v16@0:8
// Implementation: 0x10605d5e8

// -[TwoFAEnabledSettingsViewController presentAuthAppSetupView]
// Type encoding: v16@0:8
// Implementation: 0x10605d8c8

// -[TwoFAEnabledSettingsViewController disableSwitch:withAction:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10605da04

// -[TwoFAEnabledSettingsViewController getDisableAlertTitle:]
// Type encoding: @24@0:8@16
// Implementation: 0x10605e0d4

// -[TwoFAEnabledSettingsViewController getDisableAlertDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x10605e144

// -[TwoFAEnabledSettingsViewController smsCell]
// Type encoding: @16@0:8
// Implementation: 0x10605e204

// -[TwoFAEnabledSettingsViewController tpaCell]
// Type encoding: @16@0:8
// Implementation: 0x10605e2bc

// -[TwoFAEnabledSettingsViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10605e370

// -[TwoFAEnabledSettingsViewController presentForgetDevice]
// Type encoding: v16@0:8
// Implementation: 0x10605e404

// -[TwoFAEnabledSettingsViewController presentRecoveryCode]
// Type encoding: v16@0:8
// Implementation: 0x10605e480

// -[TwoFAEnabledSettingsViewController presentMobileSettingView]
// Type encoding: v16@0:8
// Implementation: 0x10605e5d0

// -[TwoFAEnabledSettingsViewController presentSmsCodeConfirmationView]
// Type encoding: v16@0:8
// Implementation: 0x10605e72c

// -[TwoFAEnabledSettingsViewController presentSettingPage]
// Type encoding: v16@0:8
// Implementation: 0x10605e8bc

// -[TwoFAEnabledSettingsViewController onTapLeftBackButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605e9ac

// -[TwoFAEnabledSettingsViewController layoutAccessoryTableViewCell:frameForAccessoryView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}32@0:8@16@24
// Implementation: 0x10605e9ec

// -[TwoFAEnabledSettingsViewController disableLeftSwipe]
// Type encoding: B16@0:8
// Implementation: 0x10605ea08

// -[TwoFAEnabledSettingsViewController verifyMobileDidSucceed]
// Type encoding: v16@0:8
// Implementation: 0x10605ea20

// -[TwoFAEnabledSettingsViewController verifyMobileWasCancelled]
// Type encoding: v16@0:8
// Implementation: 0x10605ea5c

// -[TwoFAEnabledSettingsViewController showLoadingScreenWithLabelText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605ea98

// -[TwoFAEnabledSettingsViewController hideLoadingScreen]
// Type encoding: v16@0:8
// Implementation: 0x10605ec64

// -[TwoFAEnabledSettingsViewController _hasValidMobile]
// Type encoding: B16@0:8
// Implementation: 0x10605ec94

// -[TwoFAEnabledSettingsViewController _getSMSInstructionText]
// Type encoding: @16@0:8
// Implementation: 0x10605ed38

// -[TwoFAEnabledSettingsViewController _formattedMobile]
// Type encoding: @16@0:8
// Implementation: 0x10605ede8

// -[TwoFAEnabledSettingsViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x10605efe4

// -[TwoFAEnabledSettingsViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x10605eff0

// -[TwoFAEnabledSettingsViewController infoLabel]
// Type encoding: @16@0:8
// Implementation: 0x10605effc

// -[TwoFAEnabledSettingsViewController setInfoLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f00c

// -[TwoFAEnabledSettingsViewController tableView]
// Type encoding: @16@0:8
// Implementation: 0x10605f04c

// -[TwoFAEnabledSettingsViewController setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f05c

// -[TwoFAEnabledSettingsViewController loadingScreen]
// Type encoding: @16@0:8
// Implementation: 0x10605f09c

// -[TwoFAEnabledSettingsViewController setLoadingScreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f0ac

// -[TwoFAEnabledSettingsViewController leftSwipeable]
// Type encoding: B16@0:8
// Implementation: 0x10605f0ec

// -[TwoFAEnabledSettingsViewController setLeftSwipeable:]
// Type encoding: v20@0:8B16
// Implementation: 0x10605f0fc

// -[TwoFAEnabledSettingsViewController smsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10605f10c

// -[TwoFAEnabledSettingsViewController setSmsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10605f11c

// -[TwoFAEnabledSettingsViewController otpEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10605f12c

// -[TwoFAEnabledSettingsViewController setOtpEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10605f13c

// -[TwoFAEnabledSettingsViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x10605f14c

// -[TwoFAEnabledSettingsViewController setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f15c

// -[TwoFAEnabledSettingsViewController userInfoServices]
// Type encoding: @16@0:8
// Implementation: 0x10605f19c

// -[TwoFAEnabledSettingsViewController setUserInfoServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f1ac

// -[TwoFAEnabledSettingsViewController userTwoFAServices]
// Type encoding: @16@0:8
// Implementation: 0x10605f1ec

// -[TwoFAEnabledSettingsViewController setUserTwoFAServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f1fc

// -[TwoFAEnabledSettingsViewController reauthenticationServices]
// Type encoding: @16@0:8
// Implementation: 0x10605f23c

// -[TwoFAEnabledSettingsViewController setReauthenticationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f24c

// -[TwoFAEnabledSettingsViewController passwordNetworkRequester]
// Type encoding: @16@0:8
// Implementation: 0x10605f28c

// -[TwoFAEnabledSettingsViewController setPasswordNetworkRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x10605f29c

// -[TwoFAEnabledSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10605f2dc

@end
