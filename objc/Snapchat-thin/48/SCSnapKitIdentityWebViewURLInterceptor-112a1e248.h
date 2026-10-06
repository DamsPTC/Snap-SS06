// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapKitIdentityWebViewURLInterceptor
// Superclass: NSObject
// Address: 0x112a1e248

@interface SCSnapKitIdentityWebViewURLInterceptor

// Property: interceptorDelegate; attributes: T@"<SCWebBrowsingDeeplinkHandlingDelegate>",W,N,VinterceptorDelegate
// Property: interceptorDataSource; attributes: T@"<SCWebBrowsingDeeplinkHandlingDataSource>",W,N,VinterceptorDataSource
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapKitIdentityWebViewURLInterceptor initWithCircumstanceEngine:delegate:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105183b10

// -[SCSnapKitIdentityWebViewURLInterceptor interceptURL:isWebViewFullyAppeared:isWebViewLoadedSuccessfully:isWebViewPreloaded:allowAlertView:allowUniversalDeepLink:bypassNavigationRestriction:isSubframe:completion:]
// Type encoding: B60@0:8@16B24B28B32B36B40B44B48@?52
// Implementation: 0x105183bac

// -[SCSnapKitIdentityWebViewURLInterceptor _openURL:universalLinksOnly:allowAlertView:]
// Type encoding: B32@0:8@16B24B28
// Implementation: 0x105183c38

// -[SCSnapKitIdentityWebViewURLInterceptor _isUrlSchemeDeeplink:]
// Type encoding: B24@0:8@16
// Implementation: 0x105183dd0

// -[SCSnapKitIdentityWebViewURLInterceptor _universalLinkExceptionList]
// Type encoding: @16@0:8
// Implementation: 0x105183e34

// -[SCSnapKitIdentityWebViewURLInterceptor interceptorDelegate]
// Type encoding: @16@0:8
// Implementation: 0x105183e98

// -[SCSnapKitIdentityWebViewURLInterceptor setInterceptorDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105183eb0

// -[SCSnapKitIdentityWebViewURLInterceptor interceptorDataSource]
// Type encoding: @16@0:8
// Implementation: 0x105183ebc

// -[SCSnapKitIdentityWebViewURLInterceptor setInterceptorDataSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x105183ed4

// -[SCSnapKitIdentityWebViewURLInterceptor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105183ee0

@end
