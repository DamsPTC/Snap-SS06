// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLegacyDeepLinkProcessor
// Superclass: NSObject
// Address: 0x112a222f8

@interface SCLegacyDeepLinkProcessor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLegacyDeepLinkProcessor initWithNavigationDelegate:userLoggedIn:circumstanceEngine:pageLauncher:discoverFeedBaseDeepLinkProcessor:storiesConfigProvider:]
// Type encoding: @60@0:8@16B24@28@36@44@52
// Implementation: 0x1052034ec

// -[SCLegacyDeepLinkProcessor isValidDeepLinkURL:]
// Type encoding: B24@0:8@16
// Implementation: 0x105203610

// -[SCLegacyDeepLinkProcessor isAllowlistedFeature:]
// Type encoding: B24@0:8@16
// Implementation: 0x105203d84

// -[SCLegacyDeepLinkProcessor deepLinkFeatureFromFeatureString:]
// Type encoding: Q24@0:8@16
// Implementation: 0x105203e48

// -[SCLegacyDeepLinkProcessor handleOpenURL:deepLinkable:sourceApplication:additionalInfo:source:fromExternal:handlingResolution:handlerError:]
// Type encoding: @76@0:8@16@24@32@40q48B56^q60^@68
// Implementation: 0x105204744

// -[SCLegacyDeepLinkProcessor _legacy_processor_handleDeepLinkURL:sourceApplication:additionalInfo:fromExternal:source:legacyProcessor:error:]
// Type encoding: B68@0:8@16@24@32B40q44@52^@60
// Implementation: 0x105204c60

// -[SCLegacyDeepLinkProcessor _canPerformNavigationWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x1052050a4

// -[SCLegacyDeepLinkProcessor _processorCanHandleURL:deepLinkURL:processor:sourceApplication:additionalInfo:fromExternal:source:handlerError:]
// Type encoding: B76@0:8@16@24@32@40@48B56q60^@68
// Implementation: 0x10520516c

// -[SCLegacyDeepLinkProcessor _legacy_deepLinkProcessorForFeature:]
// Type encoding: @24@0:8@16
// Implementation: 0x1052053c4

// -[SCLegacyDeepLinkProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1052056dc

@end
