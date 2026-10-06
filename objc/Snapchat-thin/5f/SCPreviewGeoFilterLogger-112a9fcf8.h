// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewGeoFilterLogger
// Superclass: NSObject
// Address: 0x112a9fcf8

@interface SCPreviewGeoFilterLogger

// Property: numSwipes; attributes: Tq,R,N,V_numSwipes
// Property: loadingMetaDataMap; attributes: T@"NSMutableDictionary",R,C,N,V_loadingMetaDataMap
// Property: firstSwipeLocationAccuracy; attributes: Td,N,V_firstSwipeLocationAccuracy
// Property: isCancelled; attributes: TB,N,V_isCancelled
// Property: unfilteredSwipedAway; attributes: TB,N,V_unfilteredSwipedAway
// Property: validSession; attributes: TB,N,V_validSession
// Property: swipeDirection; attributes: Tq,N,V_swipeDirection
// Property: lastSessionOver; attributes: TB,N,V_lastSessionOver
// Property: sessionCounter; attributes: TQ,N,V_sessionCounter
// Property: abandonedGeofilterMissLoggingForSnapSession; attributes: TB,N,V_abandonedGeofilterMissLoggingForSnapSession
// Property: requestId; attributes: T@"NSString",&,N,V_requestId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewGeoFilterLogger initWithGrapheneServices:]
// Type encoding: @24@0:8@16
// Implementation: 0x105dea400

// -[SCPreviewGeoFilterLogger swipeOverViewWithFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dea4c8

// -[SCPreviewGeoFilterLogger setSnapIsCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105dea548

// -[SCPreviewGeoFilterLogger didSwipe]
// Type encoding: v16@0:8
// Implementation: 0x105dea550

// -[SCPreviewGeoFilterLogger upsertIfNecessary:withNewStage:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105dea560

// -[SCPreviewGeoFilterLogger upsertIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x105dea5d0

// -[SCPreviewGeoFilterLogger _upsertIfNecessary:withNewStage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105dea5d8

// -[SCPreviewGeoFilterLogger _logLoadingStageReady:withStage:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105dea754

// -[SCPreviewGeoFilterLogger numReady]
// Type encoding: q16@0:8
// Implementation: 0x105dea758

// -[SCPreviewGeoFilterLogger numSeen]
// Type encoding: q16@0:8
// Implementation: 0x105dea7ac

// -[SCPreviewGeoFilterLogger logFinalGeofilterMissEvents]
// Type encoding: v16@0:8
// Implementation: 0x105dea800

// -[SCPreviewGeoFilterLogger logGeofilterReadyMissEventsForSessionNumber:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105dea850

// -[SCPreviewGeoFilterLogger isFilterFromPrecache:]
// Type encoding: B24@0:8@16
// Implementation: 0x105dea9dc

// -[SCPreviewGeoFilterLogger updateVisibleGeofiltersCount:requestId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105deaa1c

// -[SCPreviewGeoFilterLogger logViewingEndedMetrics]
// Type encoding: v16@0:8
// Implementation: 0x105deaa64

// -[SCPreviewGeoFilterLogger logFilterReadyMissForFilter:swipeDirection:session:sessionNum:]
// Type encoding: v48@0:8@16@24@32Q40
// Implementation: 0x105dead58

// -[SCPreviewGeoFilterLogger logFilterMissIfAnyForFilterId:index:currentItemIndex:]
// Type encoding: v40@0:8@16q24Q32
// Implementation: 0x105dead5c

// -[SCPreviewGeoFilterLogger geofilterMissLoggingValidSession]
// Type encoding: B16@0:8
// Implementation: 0x105deae18

// -[SCPreviewGeoFilterLogger abandonedGeofilterMissLoggingForSnapSession]
// Type encoding: B16@0:8
// Implementation: 0x105deae54

// -[SCPreviewGeoFilterLogger setAbandonedGeofilterMissLoggingForSnapSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x105deae5c

// -[SCPreviewGeoFilterLogger lastSessionOver]
// Type encoding: B16@0:8
// Implementation: 0x105deae64

// -[SCPreviewGeoFilterLogger setLastSessionOver:]
// Type encoding: v20@0:8B16
// Implementation: 0x105deae6c

// -[SCPreviewGeoFilterLogger sessionCounter]
// Type encoding: Q16@0:8
// Implementation: 0x105deae74

// -[SCPreviewGeoFilterLogger setSessionCounter:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105deae7c

// -[SCPreviewGeoFilterLogger swipeDirection]
// Type encoding: q16@0:8
// Implementation: 0x105deae84

// -[SCPreviewGeoFilterLogger setSwipeDirection:]
// Type encoding: v24@0:8q16
// Implementation: 0x105deae8c

// -[SCPreviewGeoFilterLogger validSession]
// Type encoding: B16@0:8
// Implementation: 0x105deae94

// -[SCPreviewGeoFilterLogger setValidSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x105deae9c

// -[SCPreviewGeoFilterLogger unfilteredSwipedAway]
// Type encoding: B16@0:8
// Implementation: 0x105deaea4

// -[SCPreviewGeoFilterLogger setUnfilteredSwipedAway:]
// Type encoding: v20@0:8B16
// Implementation: 0x105deaeac

// -[SCPreviewGeoFilterLogger requestId]
// Type encoding: @16@0:8
// Implementation: 0x105deaeb4

// -[SCPreviewGeoFilterLogger setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105deaebc

// -[SCPreviewGeoFilterLogger numSwipes]
// Type encoding: q16@0:8
// Implementation: 0x105deaeec

// -[SCPreviewGeoFilterLogger loadingMetaDataMap]
// Type encoding: @16@0:8
// Implementation: 0x105deaef4

// -[SCPreviewGeoFilterLogger firstSwipeLocationAccuracy]
// Type encoding: d16@0:8
// Implementation: 0x105deaefc

// -[SCPreviewGeoFilterLogger setFirstSwipeLocationAccuracy:]
// Type encoding: v24@0:8d16
// Implementation: 0x105deaf04

// -[SCPreviewGeoFilterLogger isCancelled]
// Type encoding: B16@0:8
// Implementation: 0x105deaf0c

// -[SCPreviewGeoFilterLogger setIsCancelled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105deaf14

// -[SCPreviewGeoFilterLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105deaf1c

// +[SCPreviewGeoFilterLogger numberFiltersMissed:]
// Type encoding: q24@0:8@16
// Implementation: 0x105deab3c

// +[SCPreviewGeoFilterLogger _numberFilters:withStage:]
// Type encoding: q32@0:8@16q24
// Implementation: 0x105deac44

@end
