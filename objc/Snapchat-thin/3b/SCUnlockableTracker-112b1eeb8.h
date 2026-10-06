// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnlockableTracker
// Superclass: SCUnlockableTrackerBase
// Address: 0x112b1eeb8

@interface SCUnlockableTracker

// Property: withSnapTaken; attributes: TB,N,V_withSnapTaken
// Property: camera; attributes: Tq,N,V_camera
// Property: isAudioOn; attributes: TB,N,V_isAudioOn
// Property: postCaptureMediaType; attributes: T@"NSString",&,N,V_postCaptureMediaType
// Property: snapPreviewMillis; attributes: Tq,N,V_snapPreviewMillis
// Property: snapTimeMillis; attributes: Tq,N,V_snapTimeMillis
// Property: sequenceNumber; attributes: TQ,N,V_sequenceNumber
// Property: swipeCount; attributes: TQ,N,V_swipeCount
// Property: geoFilterLoadedCount; attributes: TQ,N,V_geoFilterLoadedCount
// Property: carouselEntrySwipeDirection; attributes: Tq,N,V_carouselEntrySwipeDirection
// Property: interactions; attributes: T@"NSMutableDictionary",&,N,V_interactions
// Property: preferences; attributes: T@"SCPreferences",&,N,V_preferences
// Property: sessionId; attributes: T@"NSString",C,N,V_sessionId
// Property: carouselSize; attributes: TQ,N,V_carouselSize
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnlockableTracker initWithSessionId:snapAdsUnlockableTracker:adsRequestProvider:unlockablesGtqNetworkRequestManager:userAdIdProvider:snapAdsPersistedDataAdapter:adConfigProvider:grapheneRegistry:adsUserInfoProvider:preferences:trackerConfig:spectrumLogger:adsPreferencesProvider:networkConnectivityAnnouncer:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x100b90904

// -[SCUnlockableTracker shouldFireCreationTrackViaGtqProxy]
// Type encoding: B16@0:8
// Implementation: 0x106bbe52c

// -[SCUnlockableTracker endSessionWithCommonLoggingParameters:appliedUnlockableId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bbe534

// -[SCUnlockableTracker endSessionWithCommonLoggingParameters:appliedUnlockableIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bbe618

// -[SCUnlockableTracker addInteraction:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bbe868

// -[SCUnlockableTracker addPostCaptureInteraction:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bbe90c

// -[SCUnlockableTracker trackFlagUnlockableId:reasonId:flagNote:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106bbe97c

// -[SCUnlockableTracker fireTrackWithSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbea64

// -[SCUnlockableTracker _fireProtoAdTrackViaSnapAdsClient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbeac4

// -[SCUnlockableTracker _adProductTypeFromAdType:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bbec64

// -[SCUnlockableTracker _updateInteraction:existingInteraction:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106bbecb4

// -[SCUnlockableTracker newSwipeInteraction]
// Type encoding: @16@0:8
// Implementation: 0x106bbedf8

// -[SCUnlockableTracker sessionId]
// Type encoding: @16@0:8
// Implementation: 0x106bbf254

// -[SCUnlockableTracker setSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf25c

// -[SCUnlockableTracker carouselSize]
// Type encoding: Q16@0:8
// Implementation: 0x106bbf264

// -[SCUnlockableTracker setCarouselSize:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bbf26c

// -[SCUnlockableTracker withSnapTaken]
// Type encoding: B16@0:8
// Implementation: 0x106bbf274

// -[SCUnlockableTracker setWithSnapTaken:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bbf27c

// -[SCUnlockableTracker camera]
// Type encoding: q16@0:8
// Implementation: 0x106bbf284

// -[SCUnlockableTracker setCamera:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bbf28c

// -[SCUnlockableTracker isAudioOn]
// Type encoding: B16@0:8
// Implementation: 0x106bbf294

// -[SCUnlockableTracker setIsAudioOn:]
// Type encoding: v20@0:8B16
// Implementation: 0x106bbf29c

// -[SCUnlockableTracker postCaptureMediaType]
// Type encoding: @16@0:8
// Implementation: 0x106bbf2a4

// -[SCUnlockableTracker setPostCaptureMediaType:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf2ac

// -[SCUnlockableTracker snapPreviewMillis]
// Type encoding: q16@0:8
// Implementation: 0x106bbf2dc

// -[SCUnlockableTracker setSnapPreviewMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bbf2e4

// -[SCUnlockableTracker snapTimeMillis]
// Type encoding: q16@0:8
// Implementation: 0x106bbf2ec

// -[SCUnlockableTracker setSnapTimeMillis:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bbf2f4

// -[SCUnlockableTracker sequenceNumber]
// Type encoding: Q16@0:8
// Implementation: 0x106bbf2fc

// -[SCUnlockableTracker setSequenceNumber:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bbf304

// -[SCUnlockableTracker swipeCount]
// Type encoding: Q16@0:8
// Implementation: 0x106bbf30c

// -[SCUnlockableTracker setSwipeCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bbf314

// -[SCUnlockableTracker geoFilterLoadedCount]
// Type encoding: Q16@0:8
// Implementation: 0x106bbf31c

// -[SCUnlockableTracker setGeoFilterLoadedCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106bbf324

// -[SCUnlockableTracker carouselEntrySwipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x106bbf32c

// -[SCUnlockableTracker setCarouselEntrySwipeDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x106bbf334

// -[SCUnlockableTracker interactions]
// Type encoding: @16@0:8
// Implementation: 0x106bbf33c

// -[SCUnlockableTracker setInteractions:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf344

// -[SCUnlockableTracker preferences]
// Type encoding: @16@0:8
// Implementation: 0x106bbf374

// -[SCUnlockableTracker setPreferences:]
// Type encoding: v24@0:8@16
// Implementation: 0x106bbf37c

// -[SCUnlockableTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106bbf3ac

// +[SCUnlockableTracker buildAdSnapCreationInfoFromTracker:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bbee4c

// +[SCUnlockableTracker buildUnlockableSnapCreationInfoFromTracker:]
// Type encoding: @24@0:8@16
// Implementation: 0x106bbf028

// +[SCUnlockableTracker entryDirectionFromSCASwipeDirection:]
// Type encoding: @24@0:8q16
// Implementation: 0x106bbf204

@end
