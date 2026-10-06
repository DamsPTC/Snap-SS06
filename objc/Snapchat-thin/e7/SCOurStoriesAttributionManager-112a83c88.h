// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOurStoriesAttributionManager
// Superclass: NSObject
// Address: 0x112a83c88

@interface SCOurStoriesAttributionManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOurStoriesAttributionManager initWithFeatureSettingsService:userPreferences:birthdayProvider:storyPrivacySettingManager:snapProUserProfileIdProvider:snapProPopularStatusProvider:storiesGrapheneMetricsEmitter:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x105a22804

// -[SCOurStoriesAttributionManager isFeatureEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a22b54

// -[SCOurStoriesAttributionManager setOurStoriesAttributionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a22be4

// -[SCOurStoriesAttributionManager isOurStoriesAttributionEnabled]
// Type encoding: B16@0:8
// Implementation: 0x105a22d7c

// -[SCOurStoriesAttributionManager setSeenSpotlightAttributionWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a22d84

// -[SCOurStoriesAttributionManager hasSeenSpotlightAttributionWarning]
// Type encoding: B16@0:8
// Implementation: 0x105a22e78

// -[SCOurStoriesAttributionManager setSeenSnapMapAttributionWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a22e80

// -[SCOurStoriesAttributionManager hasSeenSnapMapAttributionWarning]
// Type encoding: B16@0:8
// Implementation: 0x105a22f74

// -[SCOurStoriesAttributionManager shouldShowAttributionTeachingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105a22f7c

// -[SCOurStoriesAttributionManager incrementAttributionTeachingTooltipImpression]
// Type encoding: v16@0:8
// Implementation: 0x105a23090

// -[SCOurStoriesAttributionManager shouldShowPublicProfileTeachingTooltip]
// Type encoding: B16@0:8
// Implementation: 0x105a23110

// -[SCOurStoriesAttributionManager incrementPublicProfileTeachingTooltipImpression]
// Type encoding: v16@0:8
// Implementation: 0x105a231a0

// -[SCOurStoriesAttributionManager addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a23218

// -[SCOurStoriesAttributionManager removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a23220

// -[SCOurStoriesAttributionManager _performSetOurStoriesAttributionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a23228

// -[SCOurStoriesAttributionManager _logSetOurStoriesAttributionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a23260

// -[SCOurStoriesAttributionManager _performSetSeenSpotlightAttributionWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a23268

// -[SCOurStoriesAttributionManager _performSetSeenSnapMapAttributionWarning:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a23270

// -[SCOurStoriesAttributionManager _performAnnounceOurStoriesAttributionChanged]
// Type encoding: v16@0:8
// Implementation: 0x105a23278

// -[SCOurStoriesAttributionManager _announceOurStoriesAttributionEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105a23374

// -[SCOurStoriesAttributionManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a2337c

@end
