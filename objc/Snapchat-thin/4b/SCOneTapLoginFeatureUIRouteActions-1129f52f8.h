// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOneTapLoginFeatureUIRouteActions
// Superclass: NSObject
// Address: 0x1129f52f8

@interface SCOneTapLoginFeatureUIRouteActions

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOneTapLoginFeatureUIRouteActions initWithUIContainer:applicationPreferences:deviceCheckManager:channelVerificationScopeExposer:odlvScopeExposer:twoFAScopeExposer:webBrowsingScopeExposer:inAppAppealScopeExposer:currentPageTracker:circumstanceEngine:oAuthLoginABRetriever:loginCos:autoOneTapLoginEventService:ghostImageService:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x104d00f18

// -[SCOneTapLoginFeatureUIRouteActions showOneTapLoginMultiAccountLandingPageWithInitialUserId:initialIndex:displayData:reactivationStatus:oneTapLoginAuthenticator:loginLogger:loginStateTransitionLogger:oneTapLoginLogger:delegate:]
// Type encoding: v88@0:8@16Q24@32@40@48@56@64@72@80
// Implementation: 0x104d0135c

// -[SCOneTapLoginFeatureUIRouteActions showChannelVerification:verification:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d0159c

// -[SCOneTapLoginFeatureUIRouteActions removeChannelVerification]
// Type encoding: v16@0:8
// Implementation: 0x104d01628

// -[SCOneTapLoginFeatureUIRouteActions showOdlv:challenge:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d01660

// -[SCOneTapLoginFeatureUIRouteActions removeOdlv]
// Type encoding: v16@0:8
// Implementation: 0x104d016ec

// -[SCOneTapLoginFeatureUIRouteActions showTwoFAVerification:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d01724

// -[SCOneTapLoginFeatureUIRouteActions removeTwoFAVerification]
// Type encoding: v16@0:8
// Implementation: 0x104d017b0

// -[SCOneTapLoginFeatureUIRouteActions showAppealWithDelegate:appealableLockData:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d017e8

// -[SCOneTapLoginFeatureUIRouteActions removeInAppAppeal]
// Type encoding: v16@0:8
// Implementation: 0x104d01894

// -[SCOneTapLoginFeatureUIRouteActions dismissWebBrowser]
// Type encoding: v16@0:8
// Implementation: 0x104d018e4

// -[SCOneTapLoginFeatureUIRouteActions showWebBrowserWithUrl:browsingDelegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d01904

// -[SCOneTapLoginFeatureUIRouteActions showCOSChallenge:authSessionPayload:clientRequestId:delegate:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x104d01b20

// -[SCOneTapLoginFeatureUIRouteActions _createModalUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x104d01bec

// -[SCOneTapLoginFeatureUIRouteActions .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d01c20

@end
