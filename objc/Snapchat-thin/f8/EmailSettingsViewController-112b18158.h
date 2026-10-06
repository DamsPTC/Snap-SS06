// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: EmailSettingsViewController
// Superclass: SCGenericSettingsViewController
// Address: 0x112b18158

@interface EmailSettingsViewController

// Property: upperInfo; attributes: T@"UILabel",&,N,V_upperInfo
// Property: textView; attributes: T@"SCTextView",&,N,V_textView
// Property: lowerInfo; attributes: T@"UILabel",&,N,V_lowerInfo
// Property: resendLink; attributes: T@"UILabel",&,N,V_resendLink
// Property: resendLinkActivity; attributes: T@"UIActivityIndicatorView",&,N,V_resendLinkActivity
// Property: actionBar; attributes: T@"UIButton",&,N,V_actionBar
// Property: actionBarActivity; attributes: T@"UIActivityIndicatorView",&,N,V_actionBarActivity
// Property: KVOController; attributes: T@"FBKVOController",&,N,V_KVOController
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: PPVNavigationLogger; attributes: T@"<SCNavigationLogging>",?,&,N

// -[EmailSettingsViewController pageViewName]
// Type encoding: q16@0:8
// Implementation: 0x106b2cf44

// -[EmailSettingsViewController initWithUserSession:emailInfoProvider:emailMutator:circumstanceEngineServices:reauthenticationService:challengeOrchestrationService:searchabilityService:featureSettingsService:authenticationExperimentService:passwordNetworkRequester:userTrackedLogger:settingsEventLogger:delegate:userPhoneVerificationScopeExposer:connectedAccountsService:]
// Type encoding: @136@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128
// Implementation: 0x106b2cf4c

// -[EmailSettingsViewController loadView]
// Type encoding: v16@0:8
// Implementation: 0x106b2d2f4

// -[EmailSettingsViewController viewWillDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b2df60

// -[EmailSettingsViewController traitCollectionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b2dfe4

// -[EmailSettingsViewController createSearchableSwitchRow]
// Type encoding: v16@0:8
// Implementation: 0x106b2e0e8

// -[EmailSettingsViewController createResendLink]
// Type encoding: v16@0:8
// Implementation: 0x106b2e978

// -[EmailSettingsViewController createActionBar]
// Type encoding: v16@0:8
// Implementation: 0x106b2f214

// -[EmailSettingsViewController createDomainSuggestionScrollView]
// Type encoding: v16@0:8
// Implementation: 0x106b2f850

// -[EmailSettingsViewController viewWillAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b2fb38

// -[EmailSettingsViewController viewDidAppear:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b2fd88

// -[EmailSettingsViewController getTitle]
// Type encoding: @16@0:8
// Implementation: 0x106b2fdd4

// -[EmailSettingsViewController leftButtonPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b2fde4

// -[EmailSettingsViewController supportedInterfaceOrientations]
// Type encoding: Q16@0:8
// Implementation: 0x106b2fe44

// -[EmailSettingsViewController actionBarPressed]
// Type encoding: v16@0:8
// Implementation: 0x106b2fe50

// -[EmailSettingsViewController _presentEmailConfirmationAlert]
// Type encoding: v16@0:8
// Implementation: 0x106b2fe78

// -[EmailSettingsViewController tryToChangeEmail]
// Type encoding: v16@0:8
// Implementation: 0x106b30304

// -[EmailSettingsViewController onResendLinkTapped]
// Type encoding: v16@0:8
// Implementation: 0x106b309a0

// -[EmailSettingsViewController _setIsUpdatingEmail:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b30cd8

// -[EmailSettingsViewController startBarAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106b30d40

// -[EmailSettingsViewController startLinkAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106b30dcc

// -[EmailSettingsViewController stopBarAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106b30e48

// -[EmailSettingsViewController stopLinkAnimation]
// Type encoding: v16@0:8
// Implementation: 0x106b30f20

// -[EmailSettingsViewController updateSearchSwitchState]
// Type encoding: v16@0:8
// Implementation: 0x106b30f9c

// -[EmailSettingsViewController updatePageFromIsEmailVerifiedChangedIfNecessary:]
// Type encoding: v20@0:8B16
// Implementation: 0x106b3103c

// -[EmailSettingsViewController updatePage]
// Type encoding: v16@0:8
// Implementation: 0x106b3105c

// -[EmailSettingsViewController updateUpperInfo]
// Type encoding: v16@0:8
// Implementation: 0x106b31090

// -[EmailSettingsViewController updateTextView]
// Type encoding: v16@0:8
// Implementation: 0x106b3116c

// -[EmailSettingsViewController updateLowerInfo]
// Type encoding: v16@0:8
// Implementation: 0x106b31218

// -[EmailSettingsViewController updateActionBar]
// Type encoding: v16@0:8
// Implementation: 0x106b3155c

// -[EmailSettingsViewController setActionTitle:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b31760

// -[EmailSettingsViewController textViewDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b317f8

// -[EmailSettingsViewController textViewShouldBeginEditing:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b31878

// -[EmailSettingsViewController hasPendingVerification]
// Type encoding: B16@0:8
// Implementation: 0x106b31880

// -[EmailSettingsViewController hasEmailChanged]
// Type encoding: B16@0:8
// Implementation: 0x106b31904

// -[EmailSettingsViewController getDefaultText]
// Type encoding: @16@0:8
// Implementation: 0x106b319f8

// -[EmailSettingsViewController isEmailValid:]
// Type encoding: B24@0:8@16
// Implementation: 0x106b31adc

// -[EmailSettingsViewController emailDomainSuggestionScrollView:didSelectPill:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106b31c14

// -[EmailSettingsViewController _localPartOfEmail:]
// Type encoding: @24@0:8@16
// Implementation: 0x106b31d40

// -[EmailSettingsViewController _moveTextViewCursorToStart]
// Type encoding: v16@0:8
// Implementation: 0x106b31e00

// -[EmailSettingsViewController logSettingEmailSettingPageview:]
// Type encoding: v24@0:8q16
// Implementation: 0x106b31e98

// -[EmailSettingsViewController _showLinkedAccountsAlert]
// Type encoding: v16@0:8
// Implementation: 0x106b31f14

// -[EmailSettingsViewController upperInfo]
// Type encoding: @16@0:8
// Implementation: 0x106b321d0

// -[EmailSettingsViewController setUpperInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b321e0

// -[EmailSettingsViewController textView]
// Type encoding: @16@0:8
// Implementation: 0x106b32220

// -[EmailSettingsViewController setTextView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b32230

// -[EmailSettingsViewController lowerInfo]
// Type encoding: @16@0:8
// Implementation: 0x106b32270

// -[EmailSettingsViewController setLowerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b32280

// -[EmailSettingsViewController resendLink]
// Type encoding: @16@0:8
// Implementation: 0x106b322c0

// -[EmailSettingsViewController setResendLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b322d0

// -[EmailSettingsViewController resendLinkActivity]
// Type encoding: @16@0:8
// Implementation: 0x106b32310

// -[EmailSettingsViewController setResendLinkActivity:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b32320

// -[EmailSettingsViewController actionBar]
// Type encoding: @16@0:8
// Implementation: 0x106b32360

// -[EmailSettingsViewController setActionBar:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b32370

// -[EmailSettingsViewController actionBarActivity]
// Type encoding: @16@0:8
// Implementation: 0x106b323b0

// -[EmailSettingsViewController setActionBarActivity:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b323c0

// -[EmailSettingsViewController KVOController]
// Type encoding: @16@0:8
// Implementation: 0x106b32400

// -[EmailSettingsViewController setKVOController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106b32410

// -[EmailSettingsViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106b32450

@end
