// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedBaseDeepLinkProcessor
// Superclass: NSObject
// Address: 0x112b7dc38

@interface SCDiscoverFeedBaseDeepLinkProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedBaseDeepLinkProcessor initWithNavigationDelegate:containerViewController:discoverFeedDeeplinkHandler:featureStartupEventBus:addFriendSheetScopeExposer:addFriendSheetScopeServices:circumstanceEngine:storiesConfigProvider:adPrefetchServices:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107d574c4

// -[SCDiscoverFeedBaseDeepLinkProcessor handleOpenURL:additionalInfo:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107d57684

// -[SCDiscoverFeedBaseDeepLinkProcessor _triggerAdPrefetchForFeature:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d577a0

// -[SCDiscoverFeedBaseDeepLinkProcessor _presentDeeplinkUrl:additionalInfo:feature:featureIsSpotlight:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x107d579d0

// -[SCDiscoverFeedBaseDeepLinkProcessor _exposeAddFriendSheetScopeIfNeeded:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107d57b80

// -[SCDiscoverFeedBaseDeepLinkProcessor endAddFriendSheetScope]
// Type encoding: v16@0:8
// Implementation: 0x107d57d94

// -[SCDiscoverFeedBaseDeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107d57ddc

@end
