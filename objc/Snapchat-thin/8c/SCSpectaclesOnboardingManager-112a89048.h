// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesOnboardingManager
// Superclass: NSObject
// Address: 0x112a89048

@interface SCSpectaclesOnboardingManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpectaclesOnboardingManager initWithSpectaclesManager:featureSettingsService:onDemandResourceFetching:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c5c568

// -[SCSpectaclesOnboardingManager shouldShowPairingOnboarding:]
// Type encoding: B24@0:8@16
// Implementation: 0x105a9c03c

// -[SCSpectaclesOnboardingManager shouldShowUpdateOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x105a9c068

// -[SCSpectaclesOnboardingManager warmupSettingsOnboardingIsCheerios:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a9c1c4

// -[SCSpectaclesOnboardingManager warmupPairingOnboarding:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a9c23c

// -[SCSpectaclesOnboardingManager newPairingOnboardingFlow:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a9c2b0

// -[SCSpectaclesOnboardingManager newSettingsOnboardingFlow]
// Type encoding: @16@0:8
// Implementation: 0x105a9c3f4

// -[SCSpectaclesOnboardingManager newCheeriosSettingsOnboardingFlow]
// Type encoding: @16@0:8
// Implementation: 0x105a9c574

// -[SCSpectaclesOnboardingManager _newOnboardingFlowWithHardwareVersion:deviceColor:shouldShowLaguna:isPhotoSupprtedLaguna:shouldShowMalibu:shouldShowNeptune:shouldShowNewport:shouldShowCheerios:isPostPairingOnboarding:]
// Type encoding: @60@0:8@16q24B32B36B40B44B48B52B56
// Implementation: 0x105a9c5ec

// -[SCSpectaclesOnboardingManager newLagunaPhotoUpdateFlow]
// Type encoding: @16@0:8
// Implementation: 0x105a9c83c

// -[SCSpectaclesOnboardingManager prefetchOnDemandResourceUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a9c880

// -[SCSpectaclesOnboardingManager onDemandResourceUrlForFlow:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a9c8e4

// -[SCSpectaclesOnboardingManager didShowOnboardingFlow:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a9c918

// -[SCSpectaclesOnboardingManager resetOnboardingTooltipForAllDevices]
// Type encoding: v16@0:8
// Implementation: 0x105a9ca00

// -[SCSpectaclesOnboardingManager _videoPlaybackModeForFlowType:]
// Type encoding: q24@0:8q16
// Implementation: 0x105a9ca60

// -[SCSpectaclesOnboardingManager _fetchCheeriosVideoObjectModels]
// Type encoding: @16@0:8
// Implementation: 0x105a9ca84

// -[SCSpectaclesOnboardingManager _prefetchCheeriosVideo]
// Type encoding: v16@0:8
// Implementation: 0x105a9cb0c

// -[SCSpectaclesOnboardingManager _handleVideoObjectDict:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a9cc60

// -[SCSpectaclesOnboardingManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a9cda0

@end
