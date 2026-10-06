// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCOperaPerformanceTrackingPlugin
// Superclass: NSObject
// Address: 0x112adb078

@interface SCOperaPerformanceTrackingPlugin

// Property: operaSessionId; attributes: T@"NSString",R,C,N,V_operaSessionId
// Property: viewLocation; attributes: Tq,N,V_viewLocation
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCOperaPerformanceTrackingPlugin initWithOperaSessionId:entryEvent:entryIntent:crashServices:multiSourceCountryProvider:playlistScopedAnalyticsInfoAccessor:contentResolutionSignalCollector:]
// Type encoding: @72@0:8@16q24q32@40@48@56@64
// Implementation: 0x1063021a8

// -[SCOperaPerformanceTrackingPlugin dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1063024d4

// -[SCOperaPerformanceTrackingPlugin setOperaControlling:]
// Type encoding: v24@0:8@16
// Implementation: 0x106302518

// -[SCOperaPerformanceTrackingPlugin _reportBlackSnapError:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063026a0

// -[SCOperaPerformanceTrackingPlugin dependentPlugins]
// Type encoding: @16@0:8
// Implementation: 0x106302a60

// -[SCOperaPerformanceTrackingPlugin setPlaylistItemController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106302c14

// -[SCOperaPerformanceTrackingPlugin teardown]
// Type encoding: v16@0:8
// Implementation: 0x106302c20

// -[SCOperaPerformanceTrackingPlugin registeredEventsForOperaSession]
// Type encoding: @16@0:8
// Implementation: 0x106302c24

// -[SCOperaPerformanceTrackingPlugin _playbackForPageId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063030b0

// -[SCOperaPerformanceTrackingPlugin _storyTellerLinkForCurrentStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1063030dc

// -[SCOperaPerformanceTrackingPlugin _updateLastPagedEventIfNeeded:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10630310c

// -[SCOperaPerformanceTrackingPlugin operaViewDidSendEvent:page:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106303220

// -[SCOperaPerformanceTrackingPlugin _entryIntentForCurrentPage]
// Type encoding: q16@0:8
// Implementation: 0x106305594

// -[SCOperaPerformanceTrackingPlugin _entryEventForCurrentPage]
// Type encoding: q16@0:8
// Implementation: 0x1063055e0

// -[SCOperaPerformanceTrackingPlugin _createPlaybackForPage:withTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x10630563c

// -[SCOperaPerformanceTrackingPlugin _stopOperaPageViewSessionTimerIfNecessaryWithPlayback:time:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106305bc0

// -[SCOperaPerformanceTrackingPlugin _stopInitialLoadingTimerIfNecessaryPlayback:withTime:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x106305c30

// -[SCOperaPerformanceTrackingPlugin _updatePlaybackWithMediaParams:page:playback:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106305ca0

// -[SCOperaPerformanceTrackingPlugin _updateItemAttributionInfoIfNeededWithPage:playback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106305f08

// -[SCOperaPerformanceTrackingPlugin _shouldLoadAnalyticsFromMonitor]
// Type encoding: B16@0:8
// Implementation: 0x1063060a4

// -[SCOperaPerformanceTrackingPlugin _reportPlayerSignalForPage:isPageDisplaying:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1063060ac

// -[SCOperaPerformanceTrackingPlugin _startAnalyticsInfoResolveOperationForContentKey:pageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063064a8

// -[SCOperaPerformanceTrackingPlugin _updatePlaybackWithVariantInfo:pageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1063067f0

// -[SCOperaPerformanceTrackingPlugin _setResolvedVariantForPlayback:variantInfo:selectionTimestampMs:prefetchTrigger:reason:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1063068b0

// -[SCOperaPerformanceTrackingPlugin _updatePlaybackWithViewportParams:playback:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106306b2c

// -[SCOperaPerformanceTrackingPlugin _updatePlaybackUponPageCloseWithParams:page:time:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x106306be8

// -[SCOperaPerformanceTrackingPlugin _updatePlaybackInfoExtractedFromPlayerIfNeeded:event:params:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1063079b4

// -[SCOperaPerformanceTrackingPlugin _extractPlaybackSnapshotFromPlayerItem:onQueue:mediaVariantRegex:mediaStartDisplayTs:pageId:]
// Type encoding: v56@0:8@16@24@32d40@48
// Implementation: 0x106307c5c

// -[SCOperaPerformanceTrackingPlugin _snapshotResolveOperationForPageId:playerItem:mediaVariantRegex:mediaStartDisplayTs:]
// Type encoding: @48@0:8@16@24@32d40
// Implementation: 0x106307d70

// -[SCOperaPerformanceTrackingPlugin _updateSnapshotForPageId:snapshot:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10630832c

// -[SCOperaPerformanceTrackingPlugin _sendPlaybackEventWithData:pageId:exitEvent:exitIntent:pageViewAbandoned:logPlaybackError:page:params:]
// Type encoding: v72@0:8@16@24q32q40B48B52@56@64
// Implementation: 0x106308414

// -[SCOperaPerformanceTrackingPlugin _collectStallsFromData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10630879c

// -[SCOperaPerformanceTrackingPlugin _reportPlaybackEventsWithData:pageId:pageViewAbandoned:shouldLogError:error:errorType:page:params:]
// Type encoding: v72@0:8@16@24B32B36@40q48@56@64
// Implementation: 0x106308868

// -[SCOperaPerformanceTrackingPlugin _reportBlizzardEventsWithData:pageId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106308964

// -[SCOperaPerformanceTrackingPlugin _reportPerfMetricsWithData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10630896c

// -[SCOperaPerformanceTrackingPlugin _reportGrapheneEventsWithData:pageViewAbandoned:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x106308fd4

// -[SCOperaPerformanceTrackingPlugin _reportLoadingIndicatorGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106309374

// -[SCOperaPerformanceTrackingPlugin _reportBSRGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x10630970c

// -[SCOperaPerformanceTrackingPlugin _reportStallCountGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x1063098f0

// -[SCOperaPerformanceTrackingPlugin _reportStallDurPctGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106309a38

// -[SCOperaPerformanceTrackingPlugin _reportStallDurGrapheneMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106309c58

// -[SCOperaPerformanceTrackingPlugin _reportPlaybackPerformanceMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x106309e3c

// -[SCOperaPerformanceTrackingPlugin _updateOperaNavigationType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10630a3e0

// -[SCOperaPerformanceTrackingPlugin _createPlaybackSessionWithTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10630a4c8

// -[SCOperaPerformanceTrackingPlugin _checkThatPlaylistGroupsAreUnique]
// Type encoding: v16@0:8
// Implementation: 0x10630a58c

// -[SCOperaPerformanceTrackingPlugin _sendPlaybackSessionEventWithExitEvent:]
// Type encoding: v24@0:8q16
// Implementation: 0x10630a808

// -[SCOperaPerformanceTrackingPlugin _endOperaTraceForOpenedPage]
// Type encoding: v16@0:8
// Implementation: 0x10630aa64

// -[SCOperaPerformanceTrackingPlugin _beginOperaTraceForOpenedPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10630aa98

// -[SCOperaPerformanceTrackingPlugin _pauseAllStopwatches:]
// Type encoding: v20@0:8B16
// Implementation: 0x10630ab3c

// -[SCOperaPerformanceTrackingPlugin _appWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x10630abe8

// -[SCOperaPerformanceTrackingPlugin _appDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x10630abf0

// -[SCOperaPerformanceTrackingPlugin _operaViewerWillAppearWithParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10630abf8

// -[SCOperaPerformanceTrackingPlugin _exitEventFromLastPagedEvent]
// Type encoding: q16@0:8
// Implementation: 0x10630ad6c

// -[SCOperaPerformanceTrackingPlugin _exitIntentFromLastPagedEvent]
// Type encoding: q16@0:8
// Implementation: 0x10630ad8c

// -[SCOperaPerformanceTrackingPlugin _logGrapheneGroupViewCompletedWithViewSource:exitEvent:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x10630ada8

// -[SCOperaPerformanceTrackingPlugin _logGraphenePageViewSucceededWithViewSource:mediaType:itemType:mediaPrepareTimeMs:]
// Type encoding: v48@0:8q16q24@32q40
// Implementation: 0x10630ae70

// -[SCOperaPerformanceTrackingPlugin _logGrapheneNullMediaType:itemType:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10630af78

// -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapLoadTimeMs:publisherId:durationMs:]
// Type encoding: v40@0:8q16@24d32
// Implementation: 0x10630afe0

// -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapStallTimeMs:publisherId:durationMs:]
// Type encoding: v40@0:8q16@24d32
// Implementation: 0x10630b070

// -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapReqCount:publisherId:statusCode:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x10630b100

// -[SCOperaPerformanceTrackingPlugin _logGrapheneWebTopSnapConnFailed:publisherId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10630b190

// -[SCOperaPerformanceTrackingPlugin _logGrapheneError:errorType:viewSource:mediaType:itemType:visibleError:]
// Type encoding: v60@0:8@16q24q32q40q48B56
// Implementation: 0x10630b1d4

// -[SCOperaPerformanceTrackingPlugin _itemTypeFromSnapPlaybackEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x10630b4ec

// -[SCOperaPerformanceTrackingPlugin _logPlaybackError:errorType:page:params:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x10630b504

// -[SCOperaPerformanceTrackingPlugin _forceLogPlaybackError:errorType:page:params:forceLog:]
// Type encoding: v52@0:8@16q24@32@40B48
// Implementation: 0x10630b50c

// -[SCOperaPerformanceTrackingPlugin _stashPendingPlaybackError:errorType:page:params:userVisible:]
// Type encoding: v52@0:8@16q24@32@40B48
// Implementation: 0x10630c248

// -[SCOperaPerformanceTrackingPlugin _flushPendingPlaybackError]
// Type encoding: v16@0:8
// Implementation: 0x10630c530

// -[SCOperaPerformanceTrackingPlugin _reportNonFatalNeoPlayerError:errorMessage:mediaId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10630c56c

// -[SCOperaPerformanceTrackingPlugin _informS2RInfoProviderWithPlaybackError:errorType:mediaMetaData:pageId:]
// Type encoding: v48@0:8@16q24@32@40
// Implementation: 0x10630c618

// -[SCOperaPerformanceTrackingPlugin _bandwidthRangeStringFromBps:]
// Type encoding: @24@0:8q16
// Implementation: 0x10630c61c

// -[SCOperaPerformanceTrackingPlugin _concatenatedStringForBSRWithItemType:mediaType:isFirstIndex:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x10630c6c0

// -[SCOperaPerformanceTrackingPlugin _determineBadSessionType]
// Type encoding: @16@0:8
// Implementation: 0x10630c7a0

// -[SCOperaPerformanceTrackingPlugin _onPITNTriggeredForPageId:params:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10630c7e0

// -[SCOperaPerformanceTrackingPlugin operaSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10630c9b0

// -[SCOperaPerformanceTrackingPlugin viewLocation]
// Type encoding: q16@0:8
// Implementation: 0x10630c9b8

// -[SCOperaPerformanceTrackingPlugin setViewLocation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10630c9c0

// -[SCOperaPerformanceTrackingPlugin .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10630c9c8

@end
