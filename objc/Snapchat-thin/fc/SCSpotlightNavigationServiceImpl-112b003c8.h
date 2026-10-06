// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightNavigationServiceImpl
// Superclass: SCNavigationService
// Address: 0x112b003c8

@interface SCSpotlightNavigationServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightNavigationServiceImpl initWithTabItemUiContainer:swipeViewContainer:navigationLogger:userInfoServices:userProfileIdProvider:appLifecycleManager:swipeViewParentDelegate:parentController:spotlightScopeExposer:purgeBehavior:preloadDelayInMilliseconds:pageLoadMetricManager:circumstanceEngine:appStartExperimentReader:tabPresentationInterceptor:storiesConfigProvider:featureStartupEventBus:barStyle:preferences:modularSpotlightLauncher:spotlightScopeServices:]
// Type encoding: @184@0:8@16@24@32@40@48@56@64@72@80Q88q96@104@112@120@128@136@144Q152@160@168@176
// Implementation: 0x1005b00e8

// -[SCSpotlightNavigationServiceImpl _updateTabBarImageViewWithOverrideImage:overrideTintColor:shouldApplyTheme:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x1005b0954

// -[SCSpotlightNavigationServiceImpl removeSpotlightScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680c778

// -[SCSpotlightNavigationServiceImpl showSpotlightTabForNotification:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680c7b4

// -[SCSpotlightNavigationServiceImpl _shouldPrependStoryIdToPlaylistWithNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10680c890

// -[SCSpotlightNavigationServiceImpl showSpotlightTabFromSourcePage:]
// Type encoding: v24@0:8q16
// Implementation: 0x10680c9a8

// -[SCSpotlightNavigationServiceImpl showSpotlightTabForCompositeStoryId:fromSourcePage:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10680c9e8

// -[SCSpotlightNavigationServiceImpl showSpotlightTabFromSourcePage:feedType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10680ca6c

// -[SCSpotlightNavigationServiceImpl showSpotlightWidgetOnSpotlightTabFromSourcePage:clientIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10680cacc

// -[SCSpotlightNavigationServiceImpl showSpotlightWidgetOnSpotlightTabFromSourcePage:clientIds:thumbnail:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x10680cba8

// -[SCSpotlightNavigationServiceImpl showSpotlightWidgetOnSpotlightTabFromSourcePage:clientIds:thumbnail:mediaTypes:spotlightDescription:]
// Type encoding: v56@0:8q16@24@32@40@48
// Implementation: 0x10680cc1c

// -[SCSpotlightNavigationServiceImpl stashDeferredSpotlightNavRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680cce0

// -[SCSpotlightNavigationServiceImpl consumeDeferredSpotlightNavRequest]
// Type encoding: @16@0:8
// Implementation: 0x10680cd18

// -[SCSpotlightNavigationServiceImpl _showSpotlightTabFromSourcePage:feedType:animated:completion:]
// Type encoding: v44@0:8q16@24B32@?36
// Implementation: 0x10680cd60

// -[SCSpotlightNavigationServiceImpl showSpotlightTabDeepLinkURL:additionalInfo:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10680ce28

// -[SCSpotlightNavigationServiceImpl shouldEnableFeedSwitcherForSubscriptionNotification:]
// Type encoding: B24@0:8@16
// Implementation: 0x10680d2b8

// -[SCSpotlightNavigationServiceImpl _modalUIContainerFromAdditionalInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x10680d2c0

// -[SCSpotlightNavigationServiceImpl _launchInChatFeedWithModalUIContainer:firstCompositeStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10680d3f8

// -[SCSpotlightNavigationServiceImpl refreshLocalizedTabBarLabels]
// Type encoding: v16@0:8
// Implementation: 0x10680d4bc

// -[SCSpotlightNavigationServiceImpl _navigationBarAnimationEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10680d530

// -[SCSpotlightNavigationServiceImpl updateImageForSpotlightTab:]
// Type encoding: v20@0:8B16
// Implementation: 0x10680d628

// -[SCSpotlightNavigationServiceImpl shouldNavigateToSpotlightTabAfterPostingDidPostSpotlight:didPostSpotlightOnly:crossPostEligibleStoriesOnly:]
// Type encoding: B28@0:8B16B20B24
// Implementation: 0x10680d814

// -[SCSpotlightNavigationServiceImpl presentAnimated:fromUserInteraction:completion:]
// Type encoding: v32@0:8B16B20@?24
// Implementation: 0x10680d8a4

// -[SCSpotlightNavigationServiceImpl _tabBarItemTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680d91c

// -[SCSpotlightNavigationServiceImpl _hintLabel]
// Type encoding: @16@0:8
// Implementation: 0x1005b0be8

// -[SCSpotlightNavigationServiceImpl _spotlightTabTitle]
// Type encoding: @16@0:8
// Implementation: 0x1005b08ec

// -[SCSpotlightNavigationServiceImpl _updateFeedPageEntryTypeFromDeeplinkWithAdditionalInfo:sourcePageStr:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10680d9f0

// -[SCSpotlightNavigationServiceImpl attachViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10680dab0

// -[SCSpotlightNavigationServiceImpl exposeFeatureScopeIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10680db18

// -[SCSpotlightNavigationServiceImpl _showSpotlightTabAnimated:completion:]
// Type encoding: v28@0:8B16@?20
// Implementation: 0x10680dd9c

// -[SCSpotlightNavigationServiceImpl _configureViewController:alreadyPresented:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10680dda8

// -[SCSpotlightNavigationServiceImpl _presentOperaWithBusinessProfileId:spotlightViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10680e168

// -[SCSpotlightNavigationServiceImpl _shouldPresentOperaAgainWithStoryIdToPrepend:notification:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10680e198

// -[SCSpotlightNavigationServiceImpl _isNotificationUsingPrefetch:]
// Type encoding: B24@0:8@16
// Implementation: 0x10680e20c

// -[SCSpotlightNavigationServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10680e26c

@end
