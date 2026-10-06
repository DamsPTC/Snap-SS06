// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdUnskippableAdManager
// Superclass: NSObject
// Address: 0x112ade908

@interface SCAdUnskippableAdManager

// Property: skippableAdRequestIds; attributes: T@"NSMutableSet",&,N,V_skippableAdRequestIds
// Property: adRequestClientIdToMediaInfoMap; attributes: T@"NSMutableDictionary",&,N,V_adRequestClientIdToMediaInfoMap
// Property: adRequestClientIdsForAdsStartedAsUnSkippable; attributes: T@"NSMutableSet",&,N,V_adRequestClientIdsForAdsStartedAsUnSkippable

// -[SCAdUnskippableAdManager initWithGrapheneRegistry:timerFactoryBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x10643b7ec

// -[SCAdUnskippableAdManager clear]
// Type encoding: v16@0:8
// Implementation: 0x10643b944

// -[SCAdUnskippableAdManager trackUnSkippableAdIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10643b98c

// -[SCAdUnskippableAdManager isUnSkippableAd:]
// Type encoding: B24@0:8@16
// Implementation: 0x10643ba0c

// -[SCAdUnskippableAdManager isUnSkippableAdWhenStartViewing:]
// Type encoding: B24@0:8@16
// Implementation: 0x10643ba28

// -[SCAdUnskippableAdManager markFullViewForAd:]
// Type encoding: v24@0:8@16
// Implementation: 0x10643ba30

// -[SCAdUnskippableAdManager mediaStartTimeForAd:]
// Type encoding: d24@0:8@16
// Implementation: 0x10643ba88

// -[SCAdUnskippableAdManager updateMediaStartTimeSec:videoUrl:imageKey:isStreamingMedia:forAd:]
// Type encoding: v52@0:8d16@24@32B40@44
// Implementation: 0x10643bad0

// -[SCAdUnskippableAdManager imageKeyForAd:]
// Type encoding: @24@0:8@16
// Implementation: 0x10643bbac

// -[SCAdUnskippableAdManager didStartViewForAdRequestClientId:isUnSkippableAd:adProductType:unskippableDurationMs:adConfigProvider:adConfigProviderV2:]
// Type encoding: v60@0:8@16B24Q28d36@44@52
// Implementation: 0x10643bbf4

// -[SCAdUnskippableAdManager didStartViewForAdRequestClientId:isUnSkippableAd:adProductType:unskippableDurationMs:adConfigProvider:adConfigProviderV2:itemId:playlistItemController:]
// Type encoding: v76@0:8@16B24Q28d36@44@52@60@68
// Implementation: 0x10643bd4c

// -[SCAdUnskippableAdManager extraPagePropertiesForAdRequestClientId:adConfigProvider:adConfigProviderV2:adProduectType:skippableType:unskippableDurationMs:progressBarEnabled:unifiedActionTrayEnabled:progressViewTimeTextOverride:progressViewText:isSpotlight:mediaViewedTimeInSec:isSKOverlay:shouldSetCustomLayer:wakeUpUiType:]
// Type encoding: @116@0:8@16@24@32Q40q48d56B64B68@72@80B88d92B100B104q108
// Implementation: 0x10643c04c

// -[SCAdUnskippableAdManager didCloseViewForAdRequestClientId:itemId:page:params:lastInteraction:playlistItemController:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x10643c93c

// -[SCAdUnskippableAdManager viewWillAppearForItemId:playlistItemController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10643cb9c

// -[SCAdUnskippableAdManager didFullyViewedForAdRequestClientId:itemId:playlistItemController:adProductType:unskippableDurationMs:adConfigProvider:]
// Type encoding: v64@0:8@16@24@32Q40d48@56
// Implementation: 0x10643cba4

// -[SCAdUnskippableAdManager didViewAdRequestClientId:itemId:longformTimeViewedInSec:playlistItemController:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x10643cc2c

// -[SCAdUnskippableAdManager didHideAdForAdRequestClientId:itemId:playlistItemController:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10643ccfc

// -[SCAdUnskippableAdManager _accumulatedLongformTimeViewedForAdRequestClientId:]
// Type encoding: d24@0:8@16
// Implementation: 0x10643cd98

// -[SCAdUnskippableAdManager _updateImageKey:withMediaStartTime:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x10643ce20

// -[SCAdUnskippableAdManager _trackUnskippableAdsMetricsForAdProductType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10643cebc

// -[SCAdUnskippableAdManager _enableABBasedExtendedPlayForAdProductType:adConfigProvider:unskippableDurationMs:adConfigProviderV2:]
// Type encoding: B48@0:8Q16@24d32@40
// Implementation: 0x10643cfb0

// -[SCAdUnskippableAdManager _isUserStoryUnskippableTestWithBlockingSwipeEnabledForAdProduectType:adConfigProvider:adConfigProviderV2:unskippableDurationMs:]
// Type encoding: B48@0:8Q16@24@32d40
// Implementation: 0x10643d058

// -[SCAdUnskippableAdManager _setupOrganicProgressBarForAdRequestClientId:unskippableDurationMs:resetProgressBarOnDisappear:shouldHideProgressBar:accumulatedLongformTimeViewedMs:isSpotlight:shouldSetCustomLayer:wakeUpUiType:adConfigProviderV2:]
// Type encoding: @72@0:8@16d24B32B36d40B48B52q56@64
// Implementation: 0x10643d0e0

// -[SCAdUnskippableAdManager skippableAdRequestIds]
// Type encoding: @16@0:8
// Implementation: 0x10643d414

// -[SCAdUnskippableAdManager setSkippableAdRequestIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10643d41c

// -[SCAdUnskippableAdManager adRequestClientIdToMediaInfoMap]
// Type encoding: @16@0:8
// Implementation: 0x10643d44c

// -[SCAdUnskippableAdManager setAdRequestClientIdToMediaInfoMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x10643d454

// -[SCAdUnskippableAdManager adRequestClientIdsForAdsStartedAsUnSkippable]
// Type encoding: @16@0:8
// Implementation: 0x10643d484

// -[SCAdUnskippableAdManager setAdRequestClientIdsForAdsStartedAsUnSkippable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10643d48c

// -[SCAdUnskippableAdManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10643d4bc

@end
