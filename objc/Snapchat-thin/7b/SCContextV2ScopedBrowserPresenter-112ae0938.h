// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2ScopedBrowserPresenter
// Superclass: NSObject
// Address: 0x112ae0938

@interface SCContextV2ScopedBrowserPresenter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCContextV2BrowserPresenterDelegate>",W,N,Vdelegate

// -[SCContextV2ScopedBrowserPresenter initWithNavigationDelegate:safeBrowsingAPI:featureSettingsService:urlInterceptorProvider:webBrowsingScopeExposer:circumstanceEngine:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1064770f8

// -[SCContextV2ScopedBrowserPresenter presentURL:preferExternal:metricParams:actionSource:snapParams:fromViewController:completion:]
// Type encoding: v68@0:8@16B24@28@36@44@52@?60
// Implementation: 0x10647724c

// -[SCContextV2ScopedBrowserPresenter browserPresenterDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10647772c

// -[SCContextV2ScopedBrowserPresenter webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647775c

// -[SCContextV2ScopedBrowserPresenter linkfireURLInterceptor:baseViewControllerForAlertDialog:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1064777cc

// -[SCContextV2ScopedBrowserPresenter linkfireURLInterceptor:willPresentDisclaimerForURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1064777f4

// -[SCContextV2ScopedBrowserPresenter linkfireURLInterceptor:didAcceptAgreement:forURL:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1064777f8

// -[SCContextV2ScopedBrowserPresenter webBrowsingURLInterceptor:didClickCancelForLeavingAppForURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10647780c

// -[SCContextV2ScopedBrowserPresenter _getBrowserSourceFromActionSource:]
// Type encoding: Q24@0:8@16
// Implementation: 0x10647785c

// -[SCContextV2ScopedBrowserPresenter delegate]
// Type encoding: @16@0:8
// Implementation: 0x1064778e4

// -[SCContextV2ScopedBrowserPresenter setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064778fc

// -[SCContextV2ScopedBrowserPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106477908

@end
