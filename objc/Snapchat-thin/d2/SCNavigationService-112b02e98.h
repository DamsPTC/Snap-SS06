// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNavigationService
// Superclass: NSObject
// Address: 0x112b02e98

@interface SCNavigationService

// Property: tabItemUiContainer; attributes: T@"<SIGTabBarItemContainer>",&,N,V_tabItemUiContainer
// Property: swipeViewContainer; attributes: T@"UIViewController<SCUIContainer>",W,N,V_swipeViewContainer
// Property: viewController; attributes: T@"UIViewController",W,N,V_viewController

// -[SCNavigationService initWithTabItemUiContainer:swipeViewContainer:scopeExposer:appLifecycleManager:purgeBehavior:preloadDelayInMilliseconds:circumstanceEngine:appStartExperimentReader:tabPresentationInterceptor:featureStartupEventBus:userInfoServices:barStyle:preferences:]
// Type encoding: @120@0:8@16@24@32@40Q48q56@64@72@80@88@96Q104@112
// Implementation: 0x10059aab8

// -[SCNavigationService attachViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x100867380

// -[SCNavigationService detachViewController]
// Type encoding: v16@0:8
// Implementation: 0x10687b098

// -[SCNavigationService exposeFeatureScopeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10687b134

// -[SCNavigationService presentAnimated:fromUserInteraction:completion:]
// Type encoding: v32@0:8B16B20@?24
// Implementation: 0x1005b21d8

// -[SCNavigationService shouldDisplayHintLabels]
// Type encoding: B16@0:8
// Implementation: 0x10059b4a8

// -[SCNavigationService _logAndExposeFeatureScopeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x1005b2298

// -[SCNavigationService _doPresentAnimated:fromUserInteraction:completion:]
// Type encoding: v32@0:8B16B20@?24
// Implementation: 0x100873d78

// -[SCNavigationService _inflateViewController]
// Type encoding: @16@0:8
// Implementation: 0x100874edc

// -[SCNavigationService _reportDiagnosticIfNeededForReason:details:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10687b138

// -[SCNavigationService tabItemUiContainer]
// Type encoding: @16@0:8
// Implementation: 0x10687b13c

// -[SCNavigationService setTabItemUiContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687b144

// -[SCNavigationService swipeViewContainer]
// Type encoding: @16@0:8
// Implementation: 0x100873d5c

// -[SCNavigationService setSwipeViewContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687b174

// -[SCNavigationService viewController]
// Type encoding: @16@0:8
// Implementation: 0x1005b2814

// -[SCNavigationService setViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10687b180

// -[SCNavigationService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10687b18c

@end
