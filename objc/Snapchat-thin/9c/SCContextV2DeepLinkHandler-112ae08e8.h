// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextV2DeepLinkHandler
// Superclass: NSObject
// Address: 0x112ae08e8

@interface SCContextV2DeepLinkHandler

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextV2DeepLinkHandler initWithNavigationDelegate:lensUnlockFlow:featureSettingsService:deepLinkHandling:businessProfileScopeExposer:commerceShoppingScopeExposer:topicViewerScopeExposer:topicViewerScopeServices:mainCameraDeepLinkScopeExposer:groupsDataFetcher:safeBrowsingAPI:circumstanceEngine:urlInterceptorProvider:webBrowsingScopeExposer:webBrowserScopeExposer:webBrowserScopeServices:contextExperimentService:fanPassSubscriptionScopeFactoryServices:snapchatterServices:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160
// Implementation: 0x106473dfc

// -[SCContextV2DeepLinkHandler tryToOpenURL:options:baseViewController:metrics:legacyDeepLinkParams:snapParams:operaPage:delegate:completion:]
// Type encoding: v88@0:8@16q24@32@40@48@56@64@72@?80
// Implementation: 0x106474318

// -[SCContextV2DeepLinkHandler _createBrowserPresenterWithSafeBrowsingAPI:featureSettingsService:urlInterceptorProvider:webBrowsingScopeExposer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106474754

// -[SCContextV2DeepLinkHandler _navigateToDeeplink:baseViewController:options:actionMetrics:legacyDeepLinkParams:snapParams:operaPage:completion:]
// Type encoding: v80@0:8@16@24q32@40@48@56@64@?72
// Implementation: 0x106474860

// -[SCContextV2DeepLinkHandler _shouldPreselectLensWithSource:]
// Type encoding: B24@0:8@16
// Implementation: 0x106475c50

// -[SCContextV2DeepLinkHandler _lensTypeWithSource:]
// Type encoding: q24@0:8@16
// Implementation: 0x106475ca8

// -[SCContextV2DeepLinkHandler _enablePoppingToRootDuringDeepLinkHandling]
// Type encoding: B16@0:8
// Implementation: 0x106475ccc

// -[SCContextV2DeepLinkHandler _presentTopicDeepLink:metricParams:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106475ce4

// -[SCContextV2DeepLinkHandler _presentSubscriptionsDeepLink:metricParams:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x106475e18

// -[SCContextV2DeepLinkHandler _presentPaywallWithSnapchatter:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106476104

// -[SCContextV2DeepLinkHandler didCompleteTopicViewerScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10647631c

// -[SCContextV2DeepLinkHandler mainCameraDeepLinkScopeDidHandleDeepLink:isHandled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106476364

// -[SCContextV2DeepLinkHandler didPresentShoppingScope]
// Type encoding: v16@0:8
// Implementation: 0x106476384

// -[SCContextV2DeepLinkHandler didDismissShoppingScope]
// Type encoding: v16@0:8
// Implementation: 0x1064763b8

// -[SCContextV2DeepLinkHandler _presentCommerce:baseView:metricParams:legacyDeepLinkParams:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106476400

// -[SCContextV2DeepLinkHandler _appStoreAppIDFromURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1064766b4

// -[SCContextV2DeepLinkHandler _presentAppStoreModalWithURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106476868

// -[SCContextV2DeepLinkHandler productViewControllerDidFinish:]
// Type encoding: v24@0:8@16
// Implementation: 0x106476c70

// -[SCContextV2DeepLinkHandler browserPresenterWillPresent]
// Type encoding: v16@0:8
// Implementation: 0x106476d78

// -[SCContextV2DeepLinkHandler browserPresenterDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x106476dac

// -[SCContextV2DeepLinkHandler socialUnlockFlowWillPresentModalContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106476de4

// -[SCContextV2DeepLinkHandler socialUnlockFlowDidDismissModalContent:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106476e18

// -[SCContextV2DeepLinkHandler socialUnlockFlow:willDismissContextCardsWithCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106476e6c

// -[SCContextV2DeepLinkHandler businessProfilesPresenterScopeWillDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x106476ee8

// -[SCContextV2DeepLinkHandler didDismissFanPassSubscriptionScopeWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x106476f08

// -[SCContextV2DeepLinkHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106476f40

@end
