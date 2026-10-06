// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdAnalyticsSession
// Superclass: NSObject
// Address: 0x112add0f8

@interface SCAdAnalyticsSession

// Property: playlistItemController; attributes: T@"<SCOperaPlaylistItemController>",W,N,V_playlistItemController
// Property: operaControlling; attributes: T@"<SCOperaControlling>",W,N,V_operaControlling
// Property: operaConfiguration; attributes: T@"SCOperaConfiguration",W,N,V_operaConfiguration
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAdAnalyticsSession initWithUserSession:adDataSource:viewLocation:storySessionId:deepLinkId:adTrackerHelper:unskippableAdManager:navigationStyle:adBlizzardLogger:trackMetricsManager:promotedStoryLogger:p2pDataSource:adConfigProvider:adConfigProviderV2:adEOVTimerProvider:grapheneRegistry:circumstanceEngine:memoryPressureState:appInstallAdsDisplayed:skAdNetworkMetricsManager:adCrashLogger:chromeSession:operaEventStateTracker:sessionViewingHistory:]
// Type encoding: @208@0:8@16@24q32@40@48@56@64q72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200
// Implementation: 0x1063942fc

// -[SCAdAnalyticsSession registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x106394914

// -[SCAdAnalyticsSession operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106394d30

// -[SCAdAnalyticsSession _logDidTryPagingWhenPagingDisabledWithRelativePosition:blockingLayerPresent:blockingLayerType:itemId:]
// Type encoding: v44@0:8Q16B24@28@36
// Implementation: 0x106396528

// -[SCAdAnalyticsSession _verifyAndLogSSFMetricsIfNeededForItemId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063965d0

// -[SCAdAnalyticsSession _logSwipeSensitivityLayerEvent:forItemId:errorReason:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063966b4

// -[SCAdAnalyticsSession _swipeFailureReasonFromParams:]
// Type encoding: @24@0:8@16
// Implementation: 0x106396928

// -[SCAdAnalyticsSession _populateContextSwipeGestureParameters:adRequestId:currentItem:page:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106396c8c

// -[SCAdAnalyticsSession _attemptPopulateDetailedGestureParameters:adRequestId:currentItem:page:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106396de8

// -[SCAdAnalyticsSession _detailedGestureParametersFromPageParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x106396eb4

// -[SCAdAnalyticsSession _populateDetailedGestureParameters:adRequestId:currentItem:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063975e8

// -[SCAdAnalyticsSession _logSKAdClickMetricsForItem:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106397684

// -[SCAdAnalyticsSession logCloseViewWithItem:page:params:dismissModelDurationInSec:lastInteraction:]
// Type encoding: v56@0:8@16@24@32d40@48
// Implementation: 0x1063978b0

// -[SCAdAnalyticsSession logScreenShotViewWithItem:lastInteractionType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106397bf0

// -[SCAdAnalyticsSession _logCloseTileViewWithItem:didAdvanceToNext:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106397cf8

// -[SCAdAnalyticsSession markAsCollectionViewAutoPlay]
// Type encoding: v16@0:8
// Implementation: 0x10639811c

// -[SCAdAnalyticsSession setShowingCustomAttachment:]
// Type encoding: v20@0:8B16
// Implementation: 0x106398178

// -[SCAdAnalyticsSession isOpeningDeepLinkForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063981b4

// -[SCAdAnalyticsSession tearDown]
// Type encoding: v16@0:8
// Implementation: 0x1063982ac

// -[SCAdAnalyticsSession updateViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x1063983a8

// -[SCAdAnalyticsSession beginObservationWithAdUnifiedEventStreams:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063983bc

// -[SCAdAnalyticsSession _onAdLifecycleEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063986c4

// -[SCAdAnalyticsSession _onWebviewEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639879c

// -[SCAdAnalyticsSession _onAdDeeplinkEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106398848

// -[SCAdAnalyticsSession _handleTriggerEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106398a30

// -[SCAdAnalyticsSession _updateGestureParametersWithEventV2:]
// Type encoding: v24@0:8@16
// Implementation: 0x106398c74

// -[SCAdAnalyticsSession _handleTopSnapPresent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106398fa8

// -[SCAdAnalyticsSession _handleDeepLinkAttemptForPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106399010

// -[SCAdAnalyticsSession _handleDeepLinkOpenedForPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106399050

// -[SCAdAnalyticsSession _handleFellbackToWebViewForPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063990c8

// -[SCAdAnalyticsSession _handleFellbackToAppInstallForPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106399108

// -[SCAdAnalyticsSession _handleFellbackToDefaultBrowserForPageId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106399148

// -[SCAdAnalyticsSession _handleExbOpened:isExternal:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063991c0

// -[SCAdAnalyticsSession _logMidRollAdGroupViewWithItem:params:lastInteractionType:pageId:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x10639920c

// -[SCAdAnalyticsSession _isVerticalEndCardSiblingGroupTransitionFrom:to:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10639943c

// -[SCAdAnalyticsSession _logPostRollAdGroupViewWithItemGroup:params:lastInteractionType:page:]
// Type encoding: v48@0:8@16@24Q32@40
// Implementation: 0x1063996a4

// -[SCAdAnalyticsSession _trackStoryAdWithItemGroup:params:page:didEnterBackground:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x106399768

// -[SCAdAnalyticsSession _trackPromotedStoryAdView:didEnterBackground:snapIndex:page:]
// Type encoding: v44@0:8@16B24q28@36
// Implementation: 0x106399a38

// -[SCAdAnalyticsSession _trackStoryAdView:didEnterBackground:snapIndex:page:]
// Type encoding: v44@0:8@16B24q28@36
// Implementation: 0x106399d74

// -[SCAdAnalyticsSession _logRemoteWebViewWithItem:page:params:lastInteractionType:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x106399f80

// -[SCAdAnalyticsSession logCommercePdpAttachmentViewWithItem:collectionTotalItemCount:lastInteractedItemIndex:lastInteractionType:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10639a498

// -[SCAdAnalyticsSession _allowRemoteWebViewLogWithLastInteractionType:page:]
// Type encoding: B32@0:8Q16@24
// Implementation: 0x10639a5c8

// -[SCAdAnalyticsSession _logAppInstallAttachmentWithItem:page:params:lastInteractionType:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x10639a628

// -[SCAdAnalyticsSession _logCameraViewWithItem:params:lastInteractionType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10639a838

// -[SCAdAnalyticsSession _logPlaceViewWithItem:params:lastInteractionType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10639aa50

// -[SCAdAnalyticsSession _logStoryAdSnapMetric:adResponse:adSnap:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10639aaf0

// -[SCAdAnalyticsSession _logAdSwipe:pageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10639ace4

// -[SCAdAnalyticsSession _logAdSwipe:item:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10639ad74

// -[SCAdAnalyticsSession _populateLongformCommonLogParamWithItem:logParamBuilder:lastInteractionType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10639af98

// -[SCAdAnalyticsSession _populateCommonLogParamWithItem:logParamBuilder:lastInteractionType:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10639b270

// -[SCAdAnalyticsSession _useSwiftAdItemLoadStatus]
// Type encoding: B16@0:8
// Implementation: 0x10639b4dc

// -[SCAdAnalyticsSession _resetTopSnapStopwatchForNewPage]
// Type encoding: v16@0:8
// Implementation: 0x10639b560

// -[SCAdAnalyticsSession _logTopSnapAdViewOnAttachmentCoverIfNeededWithItem:page:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10639b590

// -[SCAdAnalyticsSession _shouldLogTopSnapAdViewOnAttachmentCoverForItem:page:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10639b748

// -[SCAdAnalyticsSession _topSnapMediaViewedTimeMsForItem:params:]
// Type encoding: d32@0:8@16@24
// Implementation: 0x10639b8cc

// -[SCAdAnalyticsSession _topSnapAdViewLoadStatusLogParameters]
// Type encoding: @16@0:8
// Implementation: 0x10639ba68

// -[SCAdAnalyticsSession _logTopSnapAdViewBlizzardEventWithItem:page:params:topSnapViewTimeInSec:lastInteraction:]
// Type encoding: @56@0:8@16@24@32d40@48
// Implementation: 0x10639badc

// -[SCAdAnalyticsSession _logTopSnapAdViewWithItem:page:params:dismissModelDurationInSec:lastInteraction:]
// Type encoding: v56@0:8@16@24@32d40@48
// Implementation: 0x10639cc24

// -[SCAdAnalyticsSession _updateUnSkippableAdLongformTimeViewedWithItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639d50c

// -[SCAdAnalyticsSession _operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10639d5dc

// -[SCAdAnalyticsSession _resetGestureLoggingStatusIfNeededForTopSnap]
// Type encoding: v16@0:8
// Implementation: 0x10639d650

// -[SCAdAnalyticsSession _updateWebviewViewingStatusIfNeeded:pageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10639d734

// -[SCAdAnalyticsSession _startLoggingMemoryPressure:appInstallAdsDisplayed:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10639d8ec

// -[SCAdAnalyticsSession _logMemoryPressure:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639dab8

// -[SCAdAnalyticsSession _stringFromMemoryPressureState:]
// Type encoding: @24@0:8@16
// Implementation: 0x10639dc24

// -[SCAdAnalyticsSession _sourcedTapGestureOverwriteEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10639dd9c

// -[SCAdAnalyticsSession _shouldWriteGestureRecordWithTapSource:]
// Type encoding: B20@0:8B16
// Implementation: 0x10639dde4

// -[SCAdAnalyticsSession _shouldUpdateGestureParametersWithParameters:adRequestId:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10639de38

// -[SCAdAnalyticsSession _flushCommercialWakeUpUnskippableTopSnapProgressForItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639e220

// -[SCAdAnalyticsSession logStoryAdViewed:adSnap:loopCount:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10639e400

// -[SCAdAnalyticsSession playlistItemController]
// Type encoding: @16@0:8
// Implementation: 0x10639e618

// -[SCAdAnalyticsSession setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639e630

// -[SCAdAnalyticsSession operaControlling]
// Type encoding: @16@0:8
// Implementation: 0x10639e63c

// -[SCAdAnalyticsSession setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639e654

// -[SCAdAnalyticsSession operaConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10639e660

// -[SCAdAnalyticsSession setOperaConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10639e678

// -[SCAdAnalyticsSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10639e684

@end
