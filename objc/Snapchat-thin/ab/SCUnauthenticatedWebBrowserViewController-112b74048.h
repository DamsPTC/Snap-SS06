// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnauthenticatedWebBrowserViewController
// Superclass: UIViewController
// Address: 0x112b74048

@interface SCUnauthenticatedWebBrowserViewController

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
// Property: delegate; attributes: T@"<SCWebBrowsingDelegate>",W,N,V_delegate
// Property: didFullyAppearTimestampMs; attributes: T@"NSNumber",&,N,VdidFullyAppearTimestampMs
// Property: currentUrl; attributes: T@"NSString",R,C,N,VcurrentUrl
// Property: finalResolvedUrl; attributes: T@"NSString",R,C,N,VfinalResolvedUrl

// -[SCUnauthenticatedWebBrowserViewController currentSharableUrl]
// Type encoding: @16@0:8
// Implementation: 0x107b9fbd8

// -[SCUnauthenticatedWebBrowserViewController initWithRuntime:url:delegate:additionalScriptControllers:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x107b9fbdc

// -[SCUnauthenticatedWebBrowserViewController viewDidLoad]
// Type encoding: v16@0:8
// Implementation: 0x107b9fd54

// -[SCUnauthenticatedWebBrowserViewController viewDidDisappear:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9fe70

// -[SCUnauthenticatedWebBrowserViewController loadURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x107b9fedc

// -[SCUnauthenticatedWebBrowserViewController reset:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9ff10

// -[SCUnauthenticatedWebBrowserViewController setIsOffScreen:]
// Type encoding: v20@0:8B16
// Implementation: 0x107b9ff14

// -[SCUnauthenticatedWebBrowserViewController dismiss]
// Type encoding: v16@0:8
// Implementation: 0x107b9ff18

// -[SCUnauthenticatedWebBrowserViewController userContentController:didReceive:webView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107b9ff1c

// -[SCUnauthenticatedWebBrowserViewController _getInjectionScripts]
// Type encoding: @16@0:8
// Implementation: 0x107ba0050

// -[SCUnauthenticatedWebBrowserViewController config]
// Type encoding: @16@0:8
// Implementation: 0x107ba01a8

// -[SCUnauthenticatedWebBrowserViewController topViewController]
// Type encoding: @16@0:8
// Implementation: 0x107ba01b8

// -[SCUnauthenticatedWebBrowserViewController setTopViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba01d8

// -[SCUnauthenticatedWebBrowserViewController desiredURL]
// Type encoding: @16@0:8
// Implementation: 0x107ba01ec

// -[SCUnauthenticatedWebBrowserViewController delegate]
// Type encoding: @16@0:8
// Implementation: 0x107ba01fc

// -[SCUnauthenticatedWebBrowserViewController setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba021c

// -[SCUnauthenticatedWebBrowserViewController eventDelegate]
// Type encoding: @16@0:8
// Implementation: 0x107ba0230

// -[SCUnauthenticatedWebBrowserViewController setEventDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba0250

// -[SCUnauthenticatedWebBrowserViewController initialLandingPageEstimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107ba0264

// -[SCUnauthenticatedWebBrowserViewController initialLoadStatusCode]
// Type encoding: @16@0:8
// Implementation: 0x107ba0274

// -[SCUnauthenticatedWebBrowserViewController javaScriptMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107ba0284

// -[SCUnauthenticatedWebBrowserViewController lastLoadWasDeeplink]
// Type encoding: B16@0:8
// Implementation: 0x107ba0294

// -[SCUnauthenticatedWebBrowserViewController estimatedProgress]
// Type encoding: d16@0:8
// Implementation: 0x107ba02a4

// -[SCUnauthenticatedWebBrowserViewController hasSubsequentNavigation]
// Type encoding: B16@0:8
// Implementation: 0x107ba02b4

// -[SCUnauthenticatedWebBrowserViewController isScrolledToTop]
// Type encoding: B16@0:8
// Implementation: 0x107ba02c4

// -[SCUnauthenticatedWebBrowserViewController landingPageServerRedirectCount]
// Type encoding: @16@0:8
// Implementation: 0x107ba02d4

// -[SCUnauthenticatedWebBrowserViewController setLandingPageServerRedirectCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba02e4

// -[SCUnauthenticatedWebBrowserViewController landingPageServerRedirectResolvedTsMs]
// Type encoding: @16@0:8
// Implementation: 0x107ba0324

// -[SCUnauthenticatedWebBrowserViewController landingPageServerRedirectResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba0334

// -[SCUnauthenticatedWebBrowserViewController adId]
// Type encoding: @16@0:8
// Implementation: 0x107ba0344

// -[SCUnauthenticatedWebBrowserViewController adServeItemId]
// Type encoding: @16@0:8
// Implementation: 0x107ba0354

// -[SCUnauthenticatedWebBrowserViewController enableExtendedLifecycleV2]
// Type encoding: B16@0:8
// Implementation: 0x107ba0364

// -[SCUnauthenticatedWebBrowserViewController didFullyAppearTimestampMs]
// Type encoding: @16@0:8
// Implementation: 0x107ba0374

// -[SCUnauthenticatedWebBrowserViewController setDidFullyAppearTimestampMs:]
// Type encoding: v24@0:8@16
// Implementation: 0x107ba0384

// -[SCUnauthenticatedWebBrowserViewController currentUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba03c4

// -[SCUnauthenticatedWebBrowserViewController finalResolvedUrl]
// Type encoding: @16@0:8
// Implementation: 0x107ba03d4

// -[SCUnauthenticatedWebBrowserViewController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ba03e4

// +[SCUnauthenticatedWebBrowserViewController browserName]
// Type encoding: @16@0:8
// Implementation: 0x107b9feec

// +[SCUnauthenticatedWebBrowserViewController browserType]
// Type encoding: q16@0:8
// Implementation: 0x107b9fef8

// +[SCUnauthenticatedWebBrowserViewController isJavaScriptMetricsSupported]
// Type encoding: B16@0:8
// Implementation: 0x107b9ff00

// +[SCUnauthenticatedWebBrowserViewController isPreloadingSupported]
// Type encoding: B16@0:8
// Implementation: 0x107b9ff08

@end
