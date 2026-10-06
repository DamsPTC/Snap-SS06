// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdTargetingParameterHelper
// Superclass: NSObject
// Address: 0x1128a0bc8

@interface SCAdTargetingParameterHelper


// -[SCAdTargetingParameterHelper init]
// Type encoding: @16@0:8
// Implementation: 0x102d0d7f0

// +[SCAdTargetingParameterHelper isDisabledForProductTypeInHoldout:adViewLocation:adConfigProvider:adConfigProviderV2:]
// Type encoding: B48@0:8Q16q24@32@40
// Implementation: 0x102d0ce4c

// +[SCAdTargetingParameterHelper isDisabledInHoldout:adProductType:adViewLocation:adConfigProviderV2:]
// Type encoding: B48@0:8@16Q24q32@40
// Implementation: 0x102d0ceb0

// +[SCAdTargetingParameterHelper inventoryIdFromInventoryPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x102d0cf44

// +[SCAdTargetingParameterHelper targetingParameters:adPosition:inventoryId:inventoryType:inventorySubtype:publisherId:posterId:targetingMetadata:adViewLocationType:adConfigProvider:adConfigProviderV2:adProductType:isDynamicInsertion:enableDPAProcessing:supportedAdTypes:]
// Type encoding: @124@0:8B16q20@28@36Q44q52@60@68q76@84@92Q100B108B112@116
// Implementation: 0x102d0cfc0

// +[SCAdTargetingParameterHelper singleInventoryServeMetadata:adsPreferences:adProductType:loggingContext:targetingParameters:engagementSignal:adOrganicSignals:upcomingStoriesContext:adConfigProvider:adConfigProviderV2:adViewLocation:viewingSessionRecords:operaType:userAdIdProvider:appOpenTimestamp:resolvedLocation:adEOVTimerProvider:brandSafetyInventoryType:purgedServeItemIds:smartCacheAllocationEnabled:]
// Type encoding: @172@0:8@16@24Q32@40@48@56@64@72@80@88q96@104Q112@120d128@136@144q152@160B168
// Implementation: 0x102d0d19c

// +[SCAdTargetingParameterHelper targetingParametersForUserStories:adConfigProvider:adConfigProviderV2:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x102d0d45c

// +[SCAdTargetingParameterHelper targetingParametersForContentInterstitial:adViewLocationType:adConfigProvider:adConfigProviderV2:adProductType:]
// Type encoding: @56@0:8@16q24@32@40Q48
// Implementation: 0x102d0d4c4

// +[SCAdTargetingParameterHelper targetingParametersForPublicStories:adConfigProvider:adConfigProviderV2:inventorySubtype:adProductType:adPosition:profileId:posterId:contentCategories:]
// Type encoding: @88@0:8q16@24@32Q40Q48q56@64@72@80
// Implementation: 0x102d0d574

// +[SCAdTargetingParameterHelper targetingParametersForLongformSpotlight:adConfigProvider:adConfigProviderV2:profileId:inventorySubtype:contentCategories:]
// Type encoding: @64@0:8q16@24@32@40Q48@56
// Implementation: 0x102d0d694

// +[SCAdTargetingParameterHelper targetingParametersForSponsoredSnaps:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x102d0d774

// +[SCAdTargetingParameterHelper targetingParametersForMapPromotedPlace:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x102d0d780

@end
