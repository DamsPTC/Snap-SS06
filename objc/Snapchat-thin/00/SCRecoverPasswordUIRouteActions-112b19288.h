// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecoverPasswordUIRouteActions
// Superclass: NSObject
// Address: 0x112b19288

@interface SCRecoverPasswordUIRouteActions


// -[SCRecoverPasswordUIRouteActions initWithParentUIContainer:window:codeVerificationScopeExposer:ngoCodeVerificationScopeServices:countryCodePickerScopeExposer:inAppSupportScopeExposer:webBrowsingScopeExposer:emailEntryScopeExposer:loggerServices:composerServices:inAppSupportEnabled:emailFirstEnabled:recoverPasswordPhoneService:loginCodeService:cos:accountRecoveryViaSignIn:currentPageTracker:]
// Type encoding: @140@0:8@16@24@32@40@48@56@64@72@80@88B96B100@104@112@120B128@132
// Implementation: 0x106b62b7c

// -[SCRecoverPasswordUIRouteActions showRecoverPasswordAlertWithDelegate:logger:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b62f1c

// -[SCRecoverPasswordUIRouteActions removeRecoverPasswordAlert]
// Type encoding: v16@0:8
// Implementation: 0x106b63000

// -[SCRecoverPasswordUIRouteActions showRecoverPasswordPhoneEntryWithDelegate:phoneNumber:usernameOrEmail:logger:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106b63004

// -[SCRecoverPasswordUIRouteActions removePhoneEntryScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b63288

// -[SCRecoverPasswordUIRouteActions showWebviewEmailEntryScreenWithDelegate:usernameOrEmail:url:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b632b8

// -[SCRecoverPasswordUIRouteActions showNativeEmailEntryScreenWithDelegate:email:dataSource:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b63434

// -[SCRecoverPasswordUIRouteActions removeEmailEntryScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b63510

// -[SCRecoverPasswordUIRouteActions showPhoneCodeEntryScreenForPhoneReceivingCode:codeSentViaSMS:usernameOrEmail:passwordResetToken:recoverPasswordLogger:delegate:]
// Type encoding: v60@0:8@16B24@28@36@44@52
// Implementation: 0x106b63570

// -[SCRecoverPasswordUIRouteActions showCodeVerificationScreenWithChannel:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b6379c

// -[SCRecoverPasswordUIRouteActions removePhoneCodeEntryScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b63a78

// -[SCRecoverPasswordUIRouteActions showChooseNewPasswordScreenWithPasswordResetToken:usernameOrEmail:logger:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106b63ab0

// -[SCRecoverPasswordUIRouteActions removeChooseNewPasswordScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b63c40

// -[SCRecoverPasswordUIRouteActions showPasswordResetSuccessScreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b63c70

// -[SCRecoverPasswordUIRouteActions removePasswordResetSuccessScreen]
// Type encoding: v16@0:8
// Implementation: 0x106b63cd8

// -[SCRecoverPasswordUIRouteActions showUsernameChallengeWithDelegate:phoneNumber:codeSentViaSMS:maskedUsername:logger:]
// Type encoding: v52@0:8@16@24B32@36@44
// Implementation: 0x106b63ce4

// -[SCRecoverPasswordUIRouteActions removeUsernameChallenge]
// Type encoding: v16@0:8
// Implementation: 0x106b63e60

// -[SCRecoverPasswordUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:email:phone:delegate:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x106b63e90

// -[SCRecoverPasswordUIRouteActions showUserChallengeWithPhoneNumber:challengePrompts:logger:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106b63f8c

// -[SCRecoverPasswordUIRouteActions removeUserChallenge]
// Type encoding: v16@0:8
// Implementation: 0x106b64320

// -[SCRecoverPasswordUIRouteActions showInAppSupport:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b64354

// -[SCRecoverPasswordUIRouteActions supportScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x106b64400

// -[SCRecoverPasswordUIRouteActions openUrlInWebBrowser:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b64438

// -[SCRecoverPasswordUIRouteActions dismissWebBrowser]
// Type encoding: v16@0:8
// Implementation: 0x106b64440

// -[SCRecoverPasswordUIRouteActions openUrlInModalWebBrowser:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b64474

// -[SCRecoverPasswordUIRouteActions dismissModalWebBrowser]
// Type encoding: v16@0:8
// Implementation: 0x106b64514

// -[SCRecoverPasswordUIRouteActions _exposeWebBrowserWithUrl:browsingDelegate:container:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106b64560

// -[SCRecoverPasswordUIRouteActions _attachUIIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106b64720

// -[SCRecoverPasswordUIRouteActions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b64758

@end
