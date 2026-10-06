// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFullscreenContentViewAbandonmentTracker
// Superclass: NSObject
// Address: 0x112b60408

@interface SCFullscreenContentViewAbandonmentTracker

// Property: visibilityTracking; attributes: T@"NSMutableDictionary",&,N,V_visibilityTracking
// Property: pageOpenTime; attributes: T@"NSDate",R,N,V_pageOpenTime
// Property: pageClosedTime; attributes: T@"NSDate",R,N,V_pageClosedTime
// Property: operaUIPresentedTime; attributes: T@"NSDate",R,N,V_operaUIPresentedTime
// Property: firstStoryplaybackTime; attributes: T@"NSDate",R,N,V_firstStoryplaybackTime
// Property: initialDataLoadTime; attributes: T@"NSDate",R,N,V_initialDataLoadTime
// Property: lastPlayedStoryItemType; attributes: Tq,R,N,V_lastPlayedStoryItemType
// Property: lastPlayedStoryItemTypeSpecific; attributes: T@"NSString",R,N,V_lastPlayedStoryItemTypeSpecific
// Property: firstPlayedStoryItemType; attributes: Tq,R,N,V_firstPlayedStoryItemType
// Property: firstPlayedStoryItemTypeSpecific; attributes: T@"NSString",R,N,V_firstPlayedStoryItemTypeSpecific
// Property: isAtEndOfPlaylist; attributes: TB,R,N,V_isAtEndOfPlaylist
// Property: spinnerWasVisble; attributes: TB,R,N,V_spinnerWasVisble
// Property: countOfStoriesStartedPlayback; attributes: Tq,R,N,V_countOfStoriesStartedPlayback
// Property: operaSessionIdDuringPlayback; attributes: T@"NSString",&,N,V_operaSessionIdDuringPlayback
// Property: pageClosedMidPlayback; attributes: TB,R,N,V_pageClosedMidPlayback

// -[SCFullscreenContentViewAbandonmentTracker init]
// Type encoding: @16@0:8
// Implementation: 0x1071d5568

// -[SCFullscreenContentViewAbandonmentTracker registerStoryWillDisplayWithItemType:itemTypeSpecific:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1071d55cc

// -[SCFullscreenContentViewAbandonmentTracker registerStoryPlaybackStartedWithItemType:itemTypeSpecific:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1071d55fc

// -[SCFullscreenContentViewAbandonmentTracker registerStoryStoppedPlayingWithItemType:itemTypeSpecific:spinnerIsVisible:]
// Type encoding: v36@0:8q16@24B32
// Implementation: 0x1071d5684

// -[SCFullscreenContentViewAbandonmentTracker registerFeedPageOpen]
// Type encoding: v16@0:8
// Implementation: 0x1071d56bc

// -[SCFullscreenContentViewAbandonmentTracker registerFeedPageClosedSpinnerWasVisible:isMidPlayback:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1071d56f0

// -[SCFullscreenContentViewAbandonmentTracker registerWillBeginPresentingOperaUI]
// Type encoding: v16@0:8
// Implementation: 0x1071d5774

// -[SCFullscreenContentViewAbandonmentTracker registerFirstPlaybackStartedWithItemType:itemTypeSpecific:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1071d57a8

// -[SCFullscreenContentViewAbandonmentTracker registerInitialDataLoadedWithItemType:itemTypeSpecific:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1071d5824

// -[SCFullscreenContentViewAbandonmentTracker updateEndOfPlaylistStatus:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071d5898

// -[SCFullscreenContentViewAbandonmentTracker generateLoggingData]
// Type encoding: @16@0:8
// Implementation: 0x1071d58a0

// -[SCFullscreenContentViewAbandonmentTracker _allStoryPlaybackMetricsByItemType]
// Type encoding: @16@0:8
// Implementation: 0x1071d5d50

// -[SCFullscreenContentViewAbandonmentTracker announceFullScreenContentViewSessionTo:announcerIdentifier:pageType:pageSessionId:operaSessionId:feedType:entryType:entryGesture:exitGesture:triggeringSection:sectionIdentifier:metadataAvailableAtStartCount:mediaAvailableAtStartCount:]
// Type encoding: v120@0:8@16@24q32@40@48@56q64q72q80q88@96@104@112
// Implementation: 0x1071d5d94

// -[SCFullscreenContentViewAbandonmentTracker _generateStoryPlaybackMetricsByItemJsonString]
// Type encoding: @16@0:8
// Implementation: 0x1071d61c0

// -[SCFullscreenContentViewAbandonmentTracker _createOrGetStoryVisibilityForItemType:itemTypeSpecific:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x1071d6304

// -[SCFullscreenContentViewAbandonmentTracker pageOpenTime]
// Type encoding: @16@0:8
// Implementation: 0x1071d63f8

// -[SCFullscreenContentViewAbandonmentTracker pageClosedTime]
// Type encoding: @16@0:8
// Implementation: 0x1071d6400

// -[SCFullscreenContentViewAbandonmentTracker operaUIPresentedTime]
// Type encoding: @16@0:8
// Implementation: 0x1071d6408

// -[SCFullscreenContentViewAbandonmentTracker firstStoryplaybackTime]
// Type encoding: @16@0:8
// Implementation: 0x1071d6410

// -[SCFullscreenContentViewAbandonmentTracker initialDataLoadTime]
// Type encoding: @16@0:8
// Implementation: 0x1071d6418

// -[SCFullscreenContentViewAbandonmentTracker lastPlayedStoryItemType]
// Type encoding: q16@0:8
// Implementation: 0x1071d6420

// -[SCFullscreenContentViewAbandonmentTracker lastPlayedStoryItemTypeSpecific]
// Type encoding: @16@0:8
// Implementation: 0x1071d6428

// -[SCFullscreenContentViewAbandonmentTracker firstPlayedStoryItemType]
// Type encoding: q16@0:8
// Implementation: 0x1071d6430

// -[SCFullscreenContentViewAbandonmentTracker firstPlayedStoryItemTypeSpecific]
// Type encoding: @16@0:8
// Implementation: 0x1071d6438

// -[SCFullscreenContentViewAbandonmentTracker isAtEndOfPlaylist]
// Type encoding: B16@0:8
// Implementation: 0x1071d6440

// -[SCFullscreenContentViewAbandonmentTracker spinnerWasVisble]
// Type encoding: B16@0:8
// Implementation: 0x1071d6448

// -[SCFullscreenContentViewAbandonmentTracker countOfStoriesStartedPlayback]
// Type encoding: q16@0:8
// Implementation: 0x1071d6450

// -[SCFullscreenContentViewAbandonmentTracker operaSessionIdDuringPlayback]
// Type encoding: @16@0:8
// Implementation: 0x1071d6458

// -[SCFullscreenContentViewAbandonmentTracker setOperaSessionIdDuringPlayback:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d6460

// -[SCFullscreenContentViewAbandonmentTracker pageClosedMidPlayback]
// Type encoding: B16@0:8
// Implementation: 0x1071d6490

// -[SCFullscreenContentViewAbandonmentTracker visibilityTracking]
// Type encoding: @16@0:8
// Implementation: 0x1071d6498

// -[SCFullscreenContentViewAbandonmentTracker setVisibilityTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071d64a0

// -[SCFullscreenContentViewAbandonmentTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071d64d0

@end
