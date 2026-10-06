// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPromotedStoriesLogger
// Superclass: NSObject
// Address: 0x112a611d8

@interface SCPromotedStoriesLogger

// Property: currentDiscoverSessionId; attributes: T@"NSString",R,C,N,V_currentDiscoverSessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPromotedStoriesLogger initWithAdConfigProvider:configProviderV2:promotedStoryMetricsManager:promotedStoryS2RInfoProvider:tileAttachmentTrackBuilder:adTracker:trackSeqNumProvider:appImpressionTracker:userTrackedLogger:performerProvider:mainQueuePerformer:timeProvider:attachmentPreloader:grapheneRegistry:notificationPool:canOpenUrlProvider:]
// Type encoding: @144@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136
// Implementation: 0x105766a5c

// -[SCPromotedStoriesLogger logPromotedStoryOpened:pageSessionId:tileIndexPos:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x105766ed8

// -[SCPromotedStoriesLogger logPromotedStoryTileImpression:data:pageSessionId:minimumVisibleFraction:promotedStoryTileSize:tileIndexPos:]
// Type encoding: v72@0:8@16@24@32d40{CGSize=dd}48q64
// Implementation: 0x105767034

// -[SCPromotedStoriesLogger _shouldFireImpressionTrack:minimumVisibleFraction:sessionIdChanged:]
// Type encoding: B36@0:8@16d24B32
// Implementation: 0x1057672f0

// -[SCPromotedStoriesLogger _firePromotedTileImpressionTrack:impressionData:tileSize:]
// Type encoding: v48@0:8@16@24{CGSize=dd}32
// Implementation: 0x105767350

// -[SCPromotedStoriesLogger _logTrackFiredLifecycleEvent:trackType:data:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x1057677cc

// -[SCPromotedStoriesLogger _onStoryImpressionBelowMinimumVisibleFraction:promotedStory:data:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105767844

// -[SCPromotedStoriesLogger _resetViewTimeStopwatch:]
// Type encoding: v24@0:8@16
// Implementation: 0x105767990

// -[SCPromotedStoriesLogger startPromotedStoryViewThroughImpression:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105767a48

// -[SCPromotedStoriesLogger _startPromotedStoryViewThroughImpression:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105767bc4

// -[SCPromotedStoriesLogger _logSwipeInLifecyleEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105767c90

// -[SCPromotedStoriesLogger _tileLifecyleEvent:promotedStory:data:]
// Type encoding: @40@0:8q16@24@32
// Implementation: 0x105767d6c

// -[SCPromotedStoriesLogger _startViewTimeStopwatch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057680d0

// -[SCPromotedStoriesLogger _pausePromotedStoryViewThroughImpression:]
// Type encoding: v24@0:8@16
// Implementation: 0x1057681c0

// -[SCPromotedStoriesLogger endPromotedStoryViewThroughImpression:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10576828c

// -[SCPromotedStoriesLogger logPromotedStoryOnScreen:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057683f4

// -[SCPromotedStoriesLogger _logPromotedStoryOnScreen:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105768558

// -[SCPromotedStoriesLogger logPromotedStoryOffScreen:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1057686b8

// -[SCPromotedStoriesLogger registerNoFillPromotedStory:forStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105768808

// -[SCPromotedStoriesLogger clearNoFillPromotedStoryInfo]
// Type encoding: v16@0:8
// Implementation: 0x10576893c

// -[SCPromotedStoriesLogger getNoFillInfoForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105768a10

// -[SCPromotedStoriesLogger _registerNoFillPromotedStory:forStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105768be0

// -[SCPromotedStoriesLogger _clearNoFillPromotedStoryInfo]
// Type encoding: v16@0:8
// Implementation: 0x105768be8

// -[SCPromotedStoriesLogger _getNoFillInfoForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105768bf0

// -[SCPromotedStoriesLogger _sessionIdFromPageSessionId:cheetahStory:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105768bf8

// -[SCPromotedStoriesLogger _logAdTileViewTileImpression:data:minimumVisibleFraction:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x105768cac

// -[SCPromotedStoriesLogger _logTileViewedLifecycleEvent:minimumVisibleFraction:data:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x105768e60

// -[SCPromotedStoriesLogger logAdTileViewWithPromotedStory:didEngage:viewedTime:minimumVisibleFraction:ctaTapped:tileSize:tileTapCoordinates:tileIndexPos:tileAutoPlayEligible:tileAutoPlayed:tileAutoPlayTimeMs:]
// Type encoding: v96@0:8@16B24@28d36B44{CGSize=dd}48@64q72B80B84q88
// Implementation: 0x105768ee4

// -[SCPromotedStoriesLogger logPromotedTileTappedWithStory:tilePosition:tileSize:tileTapCoordinates:didTapCta:]
// Type encoding: v60@0:8@16Q24{CGSize=dd}32@48B56
// Implementation: 0x105769230

// -[SCPromotedStoriesLogger _getSequenceIdForServeItemId:]
// Type encoding: q24@0:8@16
// Implementation: 0x105769394

// -[SCPromotedStoriesLogger _resetDiscoverSessionData]
// Type encoding: v16@0:8
// Implementation: 0x10576949c

// -[SCPromotedStoriesLogger firePromotedStoryInteractionTrack:adTrackInfo:sessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1057694c4

// -[SCPromotedStoriesLogger _firePromotedStoryTrack:sessionId:adResponse:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10576956c

// -[SCPromotedStoriesLogger logPromotedStoryReported:reason:flagNote:tileSize:]
// Type encoding: v56@0:8@16@24@32{CGSize=dd}40
// Implementation: 0x10576995c

// -[SCPromotedStoriesLogger logPromotedStoryTileAttachmentWillPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x105769b7c

// -[SCPromotedStoriesLogger logPromotedStoryTileAttachmentPresented:loggingMetadata:adLifecycleTimestamps:tileCtaOverrides:attachmentType:swipeCount:]
// Type encoding: v64@0:8@16@24@32@40Q48q56
// Implementation: 0x105769b80

// -[SCPromotedStoriesLogger _logPromotedStoryTileTappedForAdResponse:loggingMetadata:tileCtaOverrides:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105769d68

// -[SCPromotedStoriesLogger _resolveAppInstallStatusForAdResponse:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105769ec0

// -[SCPromotedStoriesLogger logPromotedStoryFollowupAttachmentPresented:loggingMetadata:adLifecycleTimestamps:attachmentType:swipeCount:]
// Type encoding: v56@0:8@16@24@32Q40q48
// Implementation: 0x10576a144

// -[SCPromotedStoriesLogger _fireIntermediateTrackForAdResponse:loggingMetadata:adLifecycleTimestamps:swipeCount:]
// Type encoding: v48@0:8@16@24@32q40
// Implementation: 0x10576a158

// -[SCPromotedStoriesLogger logPromotedStoryCtaAttachmentBackgrounded:adLifecycleTimestamps:attachmentTrackInfo:tileSize:swipeCount:]
// Type encoding: v64@0:8@16@24@32{CGSize=dd}40q56
// Implementation: 0x10576a558

// -[SCPromotedStoriesLogger logPromotedStoryCtaAttachmentDidDismiss:adLifecycleTimestamps:attachmentTrackInfo:tileSize:fireTrack:swipeCount:]
// Type encoding: v68@0:8@16@24@32{CGSize=dd}40B56q60
// Implementation: 0x10576a6ec

// -[SCPromotedStoriesLogger _logPromotedStoryCtaAttachmentDidDismiss:adLifecycleTimestamps:attachmentTrackInfo:restartViewTimeStopwatch:fireTrack:tileSize:swipeCount:]
// Type encoding: v72@0:8@16@24@32B40B44{CGSize=dd}48q64
// Implementation: 0x10576a890

// -[SCPromotedStoriesLogger _logPromotedStoryCtaAttachmentTrack:adLifecycleTimestamps:attachmentTrackInfo:tileTimeViewedInMillis:tileSize:swipeCount:]
// Type encoding: v72@0:8@16@24@32d40{CGSize=dd}48q64
// Implementation: 0x10576aa34

// -[SCPromotedStoriesLogger logPromotedStoryReportCancelled:tileSize:]
// Type encoding: v40@0:8@16{CGSize=dd}24
// Implementation: 0x10576ac0c

// -[SCPromotedStoriesLogger logPromotedStoryHidden:reason:tileSize:]
// Type encoding: v48@0:8@16q24{CGSize=dd}32
// Implementation: 0x10576ac1c

// -[SCPromotedStoriesLogger _logPromotedStoryReportActionWithPromotedStory:adFlaggedReason:adHiddenReason:exitType:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x10576ae1c

// -[SCPromotedStoriesLogger isPromotedTileCtaEnabledWithAdResponse:]
// Type encoding: B24@0:8@16
// Implementation: 0x10576afcc

// -[SCPromotedStoriesLogger logPromotedStoryAnimationStarted:]
// Type encoding: v24@0:8@16
// Implementation: 0x10576b0f0

// -[SCPromotedStoriesLogger logPromotedStoryAnimationCompleted:result:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10576b1c4

// -[SCPromotedStoriesLogger logPromotedStoryFetched:]
// Type encoding: v24@0:8@16
// Implementation: 0x10576b2a8

// -[SCPromotedStoriesLogger logPromotedStoryInserted:tilePosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10576b4ec

// -[SCPromotedStoriesLogger _logPromotedStoryInserted:tilePosition:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10576b614

// -[SCPromotedStoriesLogger logPromotedStoryInsertionViolation:organicGarmSafety:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x10576b784

// -[SCPromotedStoriesLogger currentDiscoverSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10576b928

// -[SCPromotedStoriesLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10576b930

@end
