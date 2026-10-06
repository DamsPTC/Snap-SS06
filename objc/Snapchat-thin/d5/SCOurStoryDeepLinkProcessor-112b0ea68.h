// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOurStoryDeepLinkProcessor
// Superclass: NSObject
// Address: 0x112b0ea68

@interface SCOurStoryDeepLinkProcessor

// Property: identifier; attributes: T@"NSString",R
// Property: priority; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOurStoryDeepLinkProcessor initWithNavigationDelegate:circumstanceEngine:adPrefetchServices:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106a58fdc

// -[SCOurStoryDeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106a590a0

// -[SCOurStoryDeepLinkProcessor _handleOpenURLForDiscoverFeed:sourceApplication:additionalInfo:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106a5945c

// -[SCOurStoryDeepLinkProcessor _handleOpenURLForSpotlight:sourceApplication:additionalInfo:snapId:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x106a594d0

// -[SCOurStoryDeepLinkProcessor _navigateToSpotlightWithDeepLinkURL:sourceApplication:additionalInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a59b60

// -[SCOurStoryDeepLinkProcessor identifier]
// Type encoding: @16@0:8
// Implementation: 0x106a59bcc

// -[SCOurStoryDeepLinkProcessor priority]
// Type encoding: q16@0:8
// Implementation: 0x106a59be0

// -[SCOurStoryDeepLinkProcessor canProvideProcessorForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a59be8

// -[SCOurStoryDeepLinkProcessor isValidDeepLink:]
// Type encoding: B24@0:8@16
// Implementation: 0x106a59cc8

// -[SCOurStoryDeepLinkProcessor makeDeepLinkProcessor]
// Type encoding: @16@0:8
// Implementation: 0x106a59d14

// -[SCOurStoryDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a59d18

// -[SCOurStoryDeepLinkProcessor shouldForceNavigation]
// Type encoding: B16@0:8
// Implementation: 0x106a59e18

// -[SCOurStoryDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a59e20

// -[SCOurStoryDeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a59e24

@end
