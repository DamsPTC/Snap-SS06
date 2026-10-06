// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOAuth2DeepLinkProcessor
// Superclass: NSObject
// Address: 0x112ae8958

@interface SCOAuth2DeepLinkProcessor

// Property: identifier; attributes: T@"NSString",R
// Property: priority; attributes: Tq,R
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOAuth2DeepLinkProcessor initWithNavigationDelegate:blizzardLogger:userNetworkServices:systemApplicationLoggerServices:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1065dc5a0

// -[SCOAuth2DeepLinkProcessor identifier]
// Type encoding: @16@0:8
// Implementation: 0x1065dc694

// -[SCOAuth2DeepLinkProcessor priority]
// Type encoding: q16@0:8
// Implementation: 0x1065dc6a8

// -[SCOAuth2DeepLinkProcessor canProvideProcessorForFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065dc6b0

// -[SCOAuth2DeepLinkProcessor isValidDeepLink:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065dc6c4

// -[SCOAuth2DeepLinkProcessor makeDeepLinkProcessor]
// Type encoding: @16@0:8
// Implementation: 0x1065dc710

// -[SCOAuth2DeepLinkProcessor processDeepLinkURL:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065dc714

// -[SCOAuth2DeepLinkProcessor handleOpenURL:sourceApplication:additionalInfo:delegate:]
// Type encoding: B48@0:8@16@24@32@40
// Implementation: 0x1065dc7ac

// -[SCOAuth2DeepLinkProcessor needsNavigationDelegate]
// Type encoding: B16@0:8
// Implementation: 0x1065dd1ec

// -[SCOAuth2DeepLinkProcessor shouldForceNavigation]
// Type encoding: B16@0:8
// Implementation: 0x1065dd1f4

// -[SCOAuth2DeepLinkProcessor processDeepLinkResolutionResult:additionalInfo:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065dd1fc

// -[SCOAuth2DeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065dd200

@end
