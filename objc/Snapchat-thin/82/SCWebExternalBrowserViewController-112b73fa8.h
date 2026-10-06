// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCWebExternalBrowserViewController
// Superclass: UIViewController
// Address: 0x112b73fa8

@interface SCWebExternalBrowserViewController

// Property: delegate; attributes: T@"<SCWebBrowsingDelegate>",W,N,V_delegate
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
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCWebExternalBrowserViewController currentSharableUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9e758

// -[SCWebExternalBrowserViewController initWithConfig:grapheneRegistry:urlHandler:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107b9e75c

// -[SCWebExternalBrowserViewController initWithConfig:grapheneRegistry:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107b9e8c4

// -[SCWebExternalBrowserViewController loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9e950

// -[SCWebExternalBrowserViewController reset:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9e978

// -[SCWebExternalBrowserViewController setIsOffScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9e97c

// -[SCWebExternalBrowserViewController dismiss]
// Type encoding: v16@0:8
// Implementation: 0x107b9e980

// -[SCWebExternalBrowserViewController _openExternalURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9e984

// -[SCWebExternalBrowserViewController config]
// Type encoding: @16@0:8
// Implementation: 0x107b9ea98

// -[SCWebExternalBrowserViewController topViewController]
// Type encoding: @16@0:8
// Implementation: 0x107b9eaa8

// -[SCWebExternalBrowserViewController setTopViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9eac8

// -[SCWebExternalBrowserViewController desiredURL]
// Type encoding: @16@0:8
// Implementation: 0x107b9eadc

// -[SCWebExternalBrowserViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107b9eaec

// -[SCWebExternalBrowserViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9eb0c

// -[SCWebExternalBrowserViewController eventDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107b9eb20

// -[SCWebExternalBrowserViewController setEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9eb40

// -[SCWebExternalBrowserViewController initialLandingPageEstimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107b9eb54

// -[SCWebExternalBrowserViewController initialLoadStatusCode]
// Type encoding: @16@0:8
// Implementation: 0x107b9eb64

// -[SCWebExternalBrowserViewController javaScriptMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107b9eb74

// -[SCWebExternalBrowserViewController lastLoadWasDeeplink]
// Type encoding: B16@0:8
// Implementation: 0x107b9eb84

// -[SCWebExternalBrowserViewController estimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107b9eb94

// -[SCWebExternalBrowserViewController hasSubsequentNavigation]
// Type encoding: B16@0:8
// Implementation: 0x107b9eba4

// -[SCWebExternalBrowserViewController isScrolledToTop]
// Type encoding: B16@0:8
// Implementation: 0x107b9ebb4

// -[SCWebExternalBrowserViewController landingPageServerRedirectCount]
// Type encoding: @16@0:8
// Implementation: 0x107b9ebc4

// -[SCWebExternalBrowserViewController setLandingPageServerRedirectCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9ebd4

// -[SCWebExternalBrowserViewController landingPageServerRedirectResolvedTsMs]
// Type encoding: @16@0:8
// Implementation: 0x107b9ec14

// -[SCWebExternalBrowserViewController landingPageServerRedirectResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9ec24

// -[SCWebExternalBrowserViewController adId]
// Type encoding: @16@0:8
// Implementation: 0x107b9ec34

// -[SCWebExternalBrowserViewController adServeItemId]
// Type encoding: @16@0:8
// Implementation: 0x107b9ec44

// -[SCWebExternalBrowserViewController enableExtendedLifecycleV2]
// Type encoding: B16@0:8
// Implementation: 0x107b9ec54

// -[SCWebExternalBrowserViewController didFullyAppearTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x107b9ec64

// -[SCWebExternalBrowserViewController setDidFullyAppearTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9ec74

// -[SCWebExternalBrowserViewController currentUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9ecb4

// -[SCWebExternalBrowserViewController finalResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9ecc4

// -[SCWebExternalBrowserViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107b9ecd4

// +[SCWebExternalBrowserViewController browserName]
// Type encoding: @16@0:8
// Implementation: 0x107b9e954

// +[SCWebExternalBrowserViewController browserType]
// Type encoding: q16@0:8
// Implementation: 0x107b9e960

// +[SCWebExternalBrowserViewController isJavaScriptMetricsSupported]
// Type encoding: B16@0:8
// Implementation: 0x107b9e968

// +[SCWebExternalBrowserViewController isPreloadingSupported]
// Type encoding: B16@0:8
// Implementation: 0x107b9e970

@end
