// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceDeepLinkProcessor
// Superclass: NSObject
// Address: 0x112b36ab8

@interface SCCommerceDeepLinkProcessor

// Property: identifier; attributes: T@"NSString",R
// Property: priority; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceDeepLinkProcessor initWithNavigationDelegate:productCatalogFeatureLauncher:screenshopComposerFeatureLauncher:topicPageFeatureLauncher:chatCameraFeatureLauncher:chatCameraScopeServices:legacyShoppingFeatureLauncher:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x106d5899c

// -[SCCommerceDeepLinkProcessor identifier]
// Type encoding: @16@0:8
// Implementation: 0x106d58b10

// -[SCCommerceDeepLinkProcessor priority]
// Type encoding: q16@0:8
// Implementation: 0x106d58b24

// -[SCCommerceDeepLinkProcessor canProvideProcessorForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d58b2c

// -[SCCommerceDeepLinkProcessor isValidDeepLink:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d58b94

// -[SCCommerceDeepLinkProcessor makeDeepLinkProcessor]
// Type encoding: @16@0:8
// Implementation: 0x106d58c48

// -[SCCommerceDeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d58c4c

// -[SCCommerceDeepLinkProcessor shouldForceNavigation]
// Type encoding: B16@0:8
// Implementation: 0x106d58da4

// -[SCCommerceDeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106d58dac

// -[SCCommerceDeepLinkProcessor _shoppingDeeplinkFromDeeplinkURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x106d58db0

// -[SCCommerceDeepLinkProcessor _deeplinkURLIsLegacyDeeplink:]
// Type encoding: B24@0:8@16
// Implementation: 0x106d58dbc

// -[SCCommerceDeepLinkProcessor _handleOpenURL:sourceApplication:additionalInfo:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106d58e08

// -[SCCommerceDeepLinkProcessor _handleLegacyCommerceDeeplinkURL:additionalInfo:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106d58fc8

// -[SCCommerceDeepLinkProcessor _launchLegacyCommerceDeeplinkURL:additionalInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106d59060

// -[SCCommerceDeepLinkProcessor _launchLegacyPDPDeeplinkURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x106d59248

// -[SCCommerceDeepLinkProcessor _handleShoppingDeeplinkURL:sourceApplication:additionalInfo:]
// Type encoding: B40@0:8@16@24@32
// Implementation: 0x106d59420

// -[SCCommerceDeepLinkProcessor _launchShoppingDeeplink:sourceApplication:additionalInfo:external:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x106d594dc

// -[SCCommerceDeepLinkProcessor _launchProductCatalogFromDeeplink:external:sourceType:presentingVC:modalPresenter:uiContainer:]
// Type encoding: v60@0:8@16B24q28@36@44@52
// Implementation: 0x106d5968c

// -[SCCommerceDeepLinkProcessor _launchScreenshopCatalogFromDeeplink:sourceType:presentingVC:modalPresenter:uiContainer:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x106d59bb8

// -[SCCommerceDeepLinkProcessor _launchTryStickerFromDeeplink:sourceType:presentingVC:modalPresenter:uiContainer:]
// Type encoding: v56@0:8@16q24@32@40@48
// Implementation: 0x106d59d2c

// -[SCCommerceDeepLinkProcessor _presentingViewController]
// Type encoding: @16@0:8
// Implementation: 0x106d59fa0

// -[SCCommerceDeepLinkProcessor _launchTopicPageFromDeeplink:external:sourceType:presentingVC:modalPresenter:uiContainer:]
// Type encoding: v60@0:8@16B24q28@36@44@52
// Implementation: 0x106d5a070

// -[SCCommerceDeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106d5a1dc

@end
