// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebBrowserSafariViewController
// Superclass: UIViewController
// Address: 0x112b73ff8

@interface SCWebBrowserSafariViewController

// Property: delegate; attributes: T@"<SCWebBrowsingDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: adId; attributes: T@"NSString",R,C,N,VadId
// Property: adServeItemId; attributes: T@"NSString",R,C,N,VadServeItemId
// Property: desiredURL; attributes: T@"NSURL",R,C,N,V_desiredURL
// Property: currentSharableUrl; attributes: T@"NSURL",R,C,N
// Property: initialLoadStatusCode; attributes: T@"NSNumber",R,N,VinitialLoadStatusCode
// Property: initialLandingPageEstimatedProgress; attributes: Td,R,N,VinitialLandingPageEstimatedProgress
// Property: estimatedProgress; attributes: Td,R,N,VestimatedProgress
// Property: javaScriptMetrics; attributes: T@"NSDictionary",R,C,N,VjavaScriptMetrics
// Property: config; attributes: T@"SCWebBrowserConfig",R,N,V_config
// Property: lastLoadWasDeeplink; attributes: TB,R,N,VlastLoadWasDeeplink
// Property: isScrolledToTop; attributes: TB,R,N,VisScrolledToTop
// Property: hasSubsequentNavigation; attributes: TB,R,N,VhasSubsequentNavigation
// Property: topViewController; attributes: T@"UIViewController",W,N,V_topViewController
// Property: enableExtendedLifecycleV2; attributes: TB,R,N,VenableExtendedLifecycleV2
// Property: landingPageServerRedirectCount; attributes: T@"NSNumber",&,N,VlandingPageServerRedirectCount
// Property: landingPageServerRedirectResolvedTsMs; attributes: T@"NSNumber",R,N,VlandingPageServerRedirectResolvedTsMs
// Property: landingPageServerRedirectResolvedUrl; attributes: T@"NSString",R,C,N,VlandingPageServerRedirectResolvedUrl
// Property: eventDelegate; attributes: T@"<SCWebviewEventDelegate>",W,N,VeventDelegate
// Property: didFullyAppearTimestampMs; attributes: T@"NSNumber",&,N,VdidFullyAppearTimestampMs
// Property: currentUrl; attributes: T@"NSString",R,C,N,VcurrentUrl
// Property: finalResolvedUrl; attributes: T@"NSString",R,C,N,VfinalResolvedUrl

// -[SCWebBrowserSafariViewController currentSharableUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9edf8

// -[SCWebBrowserSafariViewController initWithConfig:cofConfigProvider:grapheneRegistry:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107b9edfc

// -[SCWebBrowserSafariViewController loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f058

// -[SCWebBrowserSafariViewController _loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f148

// -[SCWebBrowserSafariViewController reset:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9f4d8

// -[SCWebBrowserSafariViewController setIsOffScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9f518

// -[SCWebBrowserSafariViewController dismiss]
// Type encoding: v16@0:8
// Implementation: 0x107b9f580

// -[SCWebBrowserSafariViewController safariViewControllerDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f584

// -[SCWebBrowserSafariViewController safariViewController:didCompleteInitialLoad:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107b9f600

// -[SCWebBrowserSafariViewController safariViewControllerWillOpenInBrowser:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f728

// -[SCWebBrowserSafariViewController _resetSafariViewController]
// Type encoding: v16@0:8
// Implementation: 0x107b9f7dc

// -[SCWebBrowserSafariViewController config]
// Type encoding: @16@0:8
// Implementation: 0x107b9f858

// -[SCWebBrowserSafariViewController topViewController]
// Type encoding: @16@0:8
// Implementation: 0x107b9f868

// -[SCWebBrowserSafariViewController setTopViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f888

// -[SCWebBrowserSafariViewController desiredURL]
// Type encoding: @16@0:8
// Implementation: 0x107b9f89c

// -[SCWebBrowserSafariViewController initialLandingPageEstimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107b9f8ac

// -[SCWebBrowserSafariViewController initialLoadStatusCode]
// Type encoding: @16@0:8
// Implementation: 0x107b9f8bc

// -[SCWebBrowserSafariViewController eventDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107b9f8cc

// -[SCWebBrowserSafariViewController setEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f8ec

// -[SCWebBrowserSafariViewController isScrolledToTop]
// Type encoding: B16@0:8
// Implementation: 0x107b9f900

// -[SCWebBrowserSafariViewController javaScriptMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107b9f910

// -[SCWebBrowserSafariViewController lastLoadWasDeeplink]
// Type encoding: B16@0:8
// Implementation: 0x107b9f920

// -[SCWebBrowserSafariViewController estimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107b9f930

// -[SCWebBrowserSafariViewController hasSubsequentNavigation]
// Type encoding: B16@0:8
// Implementation: 0x107b9f940

// -[SCWebBrowserSafariViewController landingPageServerRedirectCount]
// Type encoding: @16@0:8
// Implementation: 0x107b9f950

// -[SCWebBrowserSafariViewController setLandingPageServerRedirectCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9f960

// -[SCWebBrowserSafariViewController landingPageServerRedirectResolvedTsMs]
// Type encoding: @16@0:8
// Implementation: 0x107b9f9a0

// -[SCWebBrowserSafariViewController landingPageServerRedirectResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9f9b0

// -[SCWebBrowserSafariViewController adId]
// Type encoding: @16@0:8
// Implementation: 0x107b9f9c0

// -[SCWebBrowserSafariViewController adServeItemId]
// Type encoding: @16@0:8
// Implementation: 0x107b9f9d0

// -[SCWebBrowserSafariViewController enableExtendedLifecycleV2]
// Type encoding: B16@0:8
// Implementation: 0x107b9f9e0

// -[SCWebBrowserSafariViewController didFullyAppearTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x107b9f9f0

// -[SCWebBrowserSafariViewController setDidFullyAppearTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9fa00

// -[SCWebBrowserSafariViewController currentUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9fa40

// -[SCWebBrowserSafariViewController finalResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9fa50

// -[SCWebBrowserSafariViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107b9fa60

// -[SCWebBrowserSafariViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9fa80

// -[SCWebBrowserSafariViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b9fa94

// +[SCWebBrowserSafariViewController browserName]
// Type encoding: @16@0:8
// Implementation: 0x107b9f4b4

// +[SCWebBrowserSafariViewController browserType]
// Type encoding: q16@0:8
// Implementation: 0x107b9f4c0

// +[SCWebBrowserSafariViewController isJavaScriptMetricsSupported]
// Type encoding: B16@0:8
// Implementation: 0x107b9f4c8

// +[SCWebBrowserSafariViewController isPreloadingSupported]
// Type encoding: B16@0:8
// Implementation: 0x107b9f4d0

@end
