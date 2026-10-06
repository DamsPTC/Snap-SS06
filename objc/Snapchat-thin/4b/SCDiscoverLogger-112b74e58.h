// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverLogger
// Superclass: NSObject
// Address: 0x112b74e58

@interface SCDiscoverLogger

// Property: lastViewedLoadingSnapId; attributes: T@"NSString",C,N,V_lastViewedLoadingSnapId
// Property: eventStartTimeMap; attributes: T@"NSMutableDictionary",&,N,V_eventStartTimeMap
// Property: eventParameterMap; attributes: T@"NSMutableDictionary",&,N,V_eventParameterMap
// Property: eventT0Set; attributes: T@"NSMutableSet",&,N,V_eventT0Set
// Property: sessionOpenTime; attributes: T@"NSDate",&,N,V_sessionOpenTime
// Property: shouldSamplePlaybackMetrics; attributes: TB,N,V_shouldSamplePlaybackMetrics
// Property: currentEditionSession; attributes: T@"<SCDiscoverSessionLogging>",W,N,V_currentEditionSession
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverLogger init]
// Type encoding: @16@0:8
// Implementation: 0x107bcbe0c

// -[SCDiscoverLogger setSystemBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcbee0

// -[SCDiscoverLogger setUserBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcbf10

// -[SCDiscoverLogger setCircumstanceEngine:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcbf40

// -[SCDiscoverLogger didConsumeSnapcode]
// Type encoding: v16@0:8
// Implementation: 0x107bcbf70

// -[SCDiscoverLogger logSubscribeToChannelWithPublisherId:source:editionId:trackingId:collectionId:collectionPos:collectionType:dSnapId:]
// Type encoding: v80@0:8@16Q24@32@40@48q56q64@72
// Implementation: 0x107bcbff4

// -[SCDiscoverLogger logUnsubscribeFromChannelWithPublisherId:trackingId:collectionId:collectionPos:collectionType:source:]
// Type encoding: v64@0:8@16@24@32q40q48Q56
// Implementation: 0x107bcc138

// -[SCDiscoverLogger logBeginSharing]
// Type encoding: v16@0:8
// Implementation: 0x107bcc238

// -[SCDiscoverLogger logCompletedSharingContentWithSharingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcc544

// -[SCDiscoverLogger logDeniedSharing]
// Type encoding: v16@0:8
// Implementation: 0x107bccba4

// -[SCDiscoverLogger logEditionViewStorySessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bccf4c

// -[SCDiscoverLogger setCurrentEditionSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bcdcc0

// -[SCDiscoverLogger logDiscoverTopSnapSnapViewWithFullView:mediaDisplayTimeSec:durationSec:mediaType:stalledTimeMs:storySessionId:mediaViewTimeFixEnabled:totalMediaViewTime:]
// Type encoding: v72@0:8B16d20d28q36q44@52B60d64
// Implementation: 0x107bcdccc

// -[SCDiscoverLogger logDiscoverBloopsSnapSnapViewWithFullView:mediaDisplayTimeSec:durationSec:mediaType:]
// Type encoding: v44@0:8B16d20d28q36
// Implementation: 0x107bce634

// -[SCDiscoverLogger logPlaybackStallCount:firstStallMediaTime:firstStallDuration:totalStallDuration:currentlyStalled:firstItemType:]
// Type encoding: v60@0:8Q16d24d32d40B48q52
// Implementation: 0x107bcef78

// -[SCDiscoverLogger logLongformVideoViewWithStartedWithCaptionOn:videoWithCaptionOnTimeViewedSeconds:videoDurationSeconds:videoViewDurationSeconds:aspectRatio:videoInLandscapeModeTimeViewedSeconds:videoRotationEnabled:videoRollMinDegree:videoRollMaxDegree:]
// Type encoding: v80@0:8B16d20d28d36d44d52B60d64d72
// Implementation: 0x107bcf128

// -[SCDiscoverLogger logInlineInlineVideoViewWithID:mediaDisplayedTime:totalVideoDuration:fullscreenTime:inlineTime:startedWithCaptionOn:videoAspectRatio:videoInLandscapeModeTimeViewed:videoWithCaptionOnTimeViewed:]
// Type encoding: v84@0:8@16d24d32d40d48B56d60d68d76
// Implementation: 0x107bcf52c

// -[SCDiscoverLogger logScreenshot]
// Type encoding: v16@0:8
// Implementation: 0x107bcf758

// -[SCDiscoverLogger logRemoteWebpageViewWithPageLoadCount:pageLoadErrorCount:loadedOnEntry:loadedOnExit:visiblePageLoadTimeSec:userPermissionPromptCount:userPermissionPromptAllowedCount:webpageAutofillDetectedFields:webpageDetectedFields:webpageOnEditAutofilledFields:totalInteractionItemCount:lastInteractiveItemIndex:isTopSnap:]
// Type encoding: v108@0:8q16q24B32B36d40Q48Q56@64@72@80@88@96B104
// Implementation: 0x107bcfbe4

// -[SCDiscoverLogger logLongformCameraViewWithLensSessionId:lensLoadedOnEntry:lensLoadedOnExit:loadingTimeSec:viewDurationTimeSec:]
// Type encoding: v48@0:8@16B24B28d32d40
// Implementation: 0x107bcfef0

// -[SCDiscoverLogger logStoreView]
// Type encoding: v16@0:8
// Implementation: 0x107bcfff0

// -[SCDiscoverLogger logSubscriptionLongformView]
// Type encoding: v16@0:8
// Implementation: 0x107bd02b8

// -[SCDiscoverLogger logProductView]
// Type encoding: v16@0:8
// Implementation: 0x107bd0548

// -[SCDiscoverLogger logSubtitleStateChanged:userTriggered:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107bd06a0

// -[SCDiscoverLogger _setCommonEditionSessionPropertiesForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd0700

// -[SCDiscoverLogger _setCommonDSnapPropertiesForEvent:dSnapId:snapIndexPos:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x107bd08ec

// -[SCDiscoverLogger _editionReadState]
// Type encoding: q16@0:8
// Implementation: 0x107bd093c

// -[SCDiscoverLogger didFinishLoadingSnapId:snapIndexPos:isAd:chunkHash:loadingError:success:]
// Type encoding: v56@0:8@16q24B32@36@44B52
// Implementation: 0x107bd095c

// -[SCDiscoverLogger didStartWaitingForSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd0a5c

// -[SCDiscoverLogger didPossiblyAbandonLoadingSnapId:isAd:chunkHash:snapIndexPos:]
// Type encoding: v44@0:8@16B24@28q36
// Implementation: 0x107bd0c20

// -[SCDiscoverLogger _playSourceForCurrentEdition]
// Type encoding: q16@0:8
// Implementation: 0x107bd0cd8

// -[SCDiscoverLogger _shouldLogPlaybackMetrics]
// Type encoding: B16@0:8
// Implementation: 0x107bd0d90

// -[SCDiscoverLogger logPlaybackItemActionForEditionId:snapId:isLoaded:isAd:endpoint:]
// Type encoding: v48@0:8@16@24B32B36@40
// Implementation: 0x107bd0d94

// -[SCDiscoverLogger didFinishWaitingForSnapId:snapIndexPos:isAd:chunkHash:success:error:abandoned:]
// Type encoding: v60@0:8@16q24B32@36B44@48B56
// Implementation: 0x107bd1004

// -[SCDiscoverLogger logBlizzardDsnapWaitEvent:snapId:isAd:chunkHash:success:error:abandoned:]
// Type encoding: v60@0:8q16@24B32@36B44@48B56
// Implementation: 0x107bd1048

// -[SCDiscoverLogger didViewDsnapWithoutWaitingForSnapId:snapIndexPos:isAd:chunkHash:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x107bd1594

// -[SCDiscoverLogger logDiscoverNotificationOpenEvent:isSubscribed:isSystem:itemType:itemTypeSpecific:notifType:section:]
// Type encoding: v64@0:8@16B24B28q32@40@48q56
// Implementation: 0x107bd1654

// -[SCDiscoverLogger logDiscoverNotificationOpenErrorEvent:isSubscribed:isSystem:itemType:itemTypeSpecific:notifType:section:error:]
// Type encoding: v72@0:8@16B24B28q32@40@48q56q64
// Implementation: 0x107bd1750

// -[SCDiscoverLogger currentEditionSession]
// Type encoding: @16@0:8
// Implementation: 0x107bd1858

// -[SCDiscoverLogger lastViewedLoadingSnapId]
// Type encoding: @16@0:8
// Implementation: 0x107bd1870

// -[SCDiscoverLogger setLastViewedLoadingSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd1878

// -[SCDiscoverLogger eventStartTimeMap]
// Type encoding: @16@0:8
// Implementation: 0x107bd1880

// -[SCDiscoverLogger setEventStartTimeMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd1888

// -[SCDiscoverLogger eventParameterMap]
// Type encoding: @16@0:8
// Implementation: 0x107bd18b8

// -[SCDiscoverLogger setEventParameterMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd18c0

// -[SCDiscoverLogger eventT0Set]
// Type encoding: @16@0:8
// Implementation: 0x107bd18f0

// -[SCDiscoverLogger setEventT0Set:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd18f8

// -[SCDiscoverLogger sessionOpenTime]
// Type encoding: @16@0:8
// Implementation: 0x107bd1928

// -[SCDiscoverLogger setSessionOpenTime:]
// Type encoding: v24@0:8@16
// Implementation: 0x107bd1930

// -[SCDiscoverLogger shouldSamplePlaybackMetrics]
// Type encoding: B16@0:8
// Implementation: 0x107bd1960

// -[SCDiscoverLogger setShouldSamplePlaybackMetrics:]
// Type encoding: v20@0:8B16
// Implementation: 0x107bd1968

// -[SCDiscoverLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bd1970

// +[SCDiscoverLogger shared]
// Type encoding: @16@0:8
// Implementation: 0x107bcbd5c

// +[SCDiscoverLogger roundCGFloat:]
// Type encoding: d24@0:8d16
// Implementation: 0x107bd0944

@end
