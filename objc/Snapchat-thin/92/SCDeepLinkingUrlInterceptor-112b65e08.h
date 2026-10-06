// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDeepLinkingUrlInterceptor
// Superclass: NSObject
// Address: 0x112b65e08

@interface SCDeepLinkingUrlInterceptor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: interceptorDelegate; attributes: T@"<SCWebBrowsingDeeplinkHandlingDelegate>",W,N,V_interceptorDelegate
// Property: interceptorDataSource; attributes: T@"<SCWebBrowsingDeeplinkHandlingDataSource>",W,N,V_interceptorDataSource

// -[SCDeepLinkingUrlInterceptor initWithCircumstanceEngine:]
// Type encoding: @24@0:8@16
// Implementation: 0x10796b14c

// -[SCDeepLinkingUrlInterceptor initWithInitialConfig:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10796b158

// -[SCDeepLinkingUrlInterceptor initWithInitialConfig:circumstanceEngine:application:alertViewCoordinator:internalDeeplinkHandler:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10796b21c

// -[SCDeepLinkingUrlInterceptor initWithInitialConfig:circumstanceEngine:application:alertViewCoordinator:internalDeeplinkHandlerBlock:]
// Type encoding: @56@0:8@16@24@32@40@?48
// Implementation: 0x10796b300

// -[SCDeepLinkingUrlInterceptor isValidInternalDeeplinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10796b46c

// -[SCDeepLinkingUrlInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:]
// Type encoding: B60@0:8@16B24B28B32B36B40B44B48@?52
// Implementation: 0x10796b518

// -[SCDeepLinkingUrlInterceptor _interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:onDestinationReached:completion:additionalInfo:]
// Type encoding: B76@0:8@16B24B28B32B36B40B44B48@?52@?60@68
// Implementation: 0x10796b578

// -[SCDeepLinkingUrlInterceptor interceptURLWithRefactor:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:]
// Type encoding: B60@0:8@16B24B28B32B36B40B44B48@?52
// Implementation: 0x10796ba1c

// -[SCDeepLinkingUrlInterceptor handleOpenURL:additionalInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10796bb8c

// -[SCDeepLinkingUrlInterceptor handleOpenURL:additionalInfo:onDestinationReached:completion:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x10796bb98

// -[SCDeepLinkingUrlInterceptor _shouldInterceptURL:allowUniversalDeepLink:isWebViewFullyAppeared:isWebViewPreloaded:isSubframe:]
// Type encoding: B40@0:8@16B24B28B32B36
// Implementation: 0x10796bbec

// -[SCDeepLinkingUrlInterceptor _handleExternalDeeplink:allowAlertView:allowUniversalDeepLink:isWebViewLoadedSuccessfully:completion:]
// Type encoding: v44@0:8@16B24B28B32@?36
// Implementation: 0x10796bcf0

// -[SCDeepLinkingUrlInterceptor _handleInternalDeeplink:bypassNavigationRestriction:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10796befc

// -[SCDeepLinkingUrlInterceptor _openUrl:options:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10796c15c

// -[SCDeepLinkingUrlInterceptor _schemeExceptionList]
// Type encoding: @16@0:8
// Implementation: 0x10796c2b0

// -[SCDeepLinkingUrlInterceptor shouldInterceptURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10796c2bc

// -[SCDeepLinkingUrlInterceptor isExternalDeepLinkURL:allowUniversalDeepLink:]
// Type encoding: B28@0:8@16B24
// Implementation: 0x10796c330

// -[SCDeepLinkingUrlInterceptor hasUniversalLinkSchema:]
// Type encoding: B24@0:8@16
// Implementation: 0x10796c418

// -[SCDeepLinkingUrlInterceptor isAppleDeeplinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x10796c498

// -[SCDeepLinkingUrlInterceptor showAlert:isWebViewLoadedSuccessfully:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10796c4a4

// -[SCDeepLinkingUrlInterceptor _continueDeeplinkHandler:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10796c894

// -[SCDeepLinkingUrlInterceptor _cancelDeeplinkHandler:isWebViewLoadedSuccessfully:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10796c948

// -[SCDeepLinkingUrlInterceptor _destinationForSafariDeeplinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10796c9d0

// -[SCDeepLinkingUrlInterceptor disableInterceptingWebsiteForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10796cb7c

// -[SCDeepLinkingUrlInterceptor urlInterceptorConfigUpdates]
// Type encoding: @16@0:8
// Implementation: 0x10796cc00

// -[SCDeepLinkingUrlInterceptor presentLeaveAppAlertForURL:continueHandler:cancelHandler:dismissHandler:]
// Type encoding: v48@0:8@16@?24@?32@?40
// Implementation: 0x10796cc44

// -[SCDeepLinkingUrlInterceptor notifyDelegateDidClickOKForLeavingAppForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10796cefc

// -[SCDeepLinkingUrlInterceptor notifyDelegateDidClickCancelForLeavingAppForURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10796cf78

// -[SCDeepLinkingUrlInterceptor _hostForWebURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x10796cff4

// -[SCDeepLinkingUrlInterceptor interceptorDelegate]
// Type encoding: @16@0:8
// Implementation: 0x10796d1f4

// -[SCDeepLinkingUrlInterceptor setInterceptorDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10796d20c

// -[SCDeepLinkingUrlInterceptor interceptorDataSource]
// Type encoding: @16@0:8
// Implementation: 0x10796d218

// -[SCDeepLinkingUrlInterceptor setInterceptorDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10796d230

// -[SCDeepLinkingUrlInterceptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10796d23c

@end
