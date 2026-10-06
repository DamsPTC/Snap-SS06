// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: TwoFASetupTPAViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112ac1c68

@interface TwoFASetupTPAViewController

// Property: leftSwipeable; attributes: TB,N,V_leftSwipeable
// Property: infoText; attributes: T@"NSString",&,N,V_infoText
// Property: infoTextLabel; attributes: T@"UILabel",&,N,V_infoTextLabel
// Property: tableView; attributes: T@"UITableView",&,N,V_tableView
// Property: userSession; attributes: T@"SCUserSession",&,N,V_userSession
// Property: userInfoServices; attributes: T@"SCUserInfoServices",&,N,V_userInfoServices
// Property: userTwoFAServices; attributes: T@"SCUserTwoFAServices",&,N,V_userTwoFAServices
// Property: reauthenticationServices; attributes: T@"SCReauthenticationServices",&,N,V_reauthenticationServices
// Property: passwordNetworkRequester; attributes: T@"<SCAuthenticatedPasswordNetworkRequester>",&,N,V_passwordNetworkRequester
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[TwoFASetupTPAViewController initWithPageViewName:title:leftSwipeable:smsEnabled:otpEnabled:userSession:userInfoServices:userTwoFAServices:reauthenticationServices:passwordNetworkRequester:resourceDownloader:userBlizzard:searchabilityService:friendingConfigsProvider:settingsEventLogger:userPhoneVerificationScopeExposer:customAppThemeProvider:circumstanceEngine:]
// Type encoding: @148@0:8q16@24B32B36B40@44@52@60@68@76@84@92@100@108@116@124@132@140
// Implementation: 0x1060717ec

// -[TwoFASetupTPAViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x106071b8c

// -[TwoFASetupTPAViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106071b90

// -[TwoFASetupTPAViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106071ba0

// -[TwoFASetupTPAViewController numberOfSectionsInTableView:]
// Type encoding: q24@0:8@16
// Implementation: 0x1060720a0

// -[TwoFASetupTPAViewController tableView:numberOfRowsInSection:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x1060720a8

// -[TwoFASetupTPAViewController tableView:heightForRowAtIndexPath:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x1060720b0

// -[TwoFASetupTPAViewController getTableCellWithIdentifier:InfoText:SubInfoText:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1060720c0

// -[TwoFASetupTPAViewController tableView:cellForRowAtIndexPath:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1060721f0

// -[TwoFASetupTPAViewController tableView:didSelectRowAtIndexPath:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106072330

// -[TwoFASetupTPAViewController showTPAPopupWithUsername:secret:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060723d4

// -[TwoFASetupTPAViewController showNoTPAPopup]
// Type encoding: v16@0:8
// Implementation: 0x1060726d4

// -[TwoFASetupTPAViewController didSelectAutoSetup]
// Type encoding: v16@0:8
// Implementation: 0x106072818

// -[TwoFASetupTPAViewController didSelectManualSetup]
// Type encoding: v16@0:8
// Implementation: 0x1060728d4

// -[TwoFASetupTPAViewController didSelectFindApp]
// Type encoding: v16@0:8
// Implementation: 0x106072a10

// -[TwoFASetupTPAViewController presentOTPCodeVerifyView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072a84

// -[TwoFASetupTPAViewController disableLeftSwipe]
// Type encoding: B16@0:8
// Implementation: 0x106072bb8

// -[TwoFASetupTPAViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106072bd0

// -[TwoFASetupTPAViewController defaultProjectNameV3]
// Type encoding: @16@0:8
// Implementation: 0x106072c0c

// -[TwoFASetupTPAViewController defaultProjectNameV2]
// Type encoding: @16@0:8
// Implementation: 0x106072c18

// -[TwoFASetupTPAViewController leftSwipeable]
// Type encoding: B16@0:8
// Implementation: 0x106072c24

// -[TwoFASetupTPAViewController setLeftSwipeable:]
// Type encoding: v20@0:8B16
// Implementation: 0x106072c34

// -[TwoFASetupTPAViewController infoText]
// Type encoding: @16@0:8
// Implementation: 0x106072c44

// -[TwoFASetupTPAViewController setInfoText:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072c54

// -[TwoFASetupTPAViewController infoTextLabel]
// Type encoding: @16@0:8
// Implementation: 0x106072c94

// -[TwoFASetupTPAViewController setInfoTextLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072ca4

// -[TwoFASetupTPAViewController tableView]
// Type encoding: @16@0:8
// Implementation: 0x106072ce4

// -[TwoFASetupTPAViewController setTableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072cf4

// -[TwoFASetupTPAViewController userSession]
// Type encoding: @16@0:8
// Implementation: 0x106072d34

// -[TwoFASetupTPAViewController setUserSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072d44

// -[TwoFASetupTPAViewController userInfoServices]
// Type encoding: @16@0:8
// Implementation: 0x106072d84

// -[TwoFASetupTPAViewController setUserInfoServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072d94

// -[TwoFASetupTPAViewController userTwoFAServices]
// Type encoding: @16@0:8
// Implementation: 0x106072dd4

// -[TwoFASetupTPAViewController setUserTwoFAServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072de4

// -[TwoFASetupTPAViewController reauthenticationServices]
// Type encoding: @16@0:8
// Implementation: 0x106072e24

// -[TwoFASetupTPAViewController setReauthenticationServices:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072e34

// -[TwoFASetupTPAViewController passwordNetworkRequester]
// Type encoding: @16@0:8
// Implementation: 0x106072e74

// -[TwoFASetupTPAViewController setPasswordNetworkRequester:]
// Type encoding: v24@0:8@16
// Implementation: 0x106072e84

// -[TwoFASetupTPAViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106072ec4

@end
