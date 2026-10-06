// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMemoryUsageReporter
// Superclass: NSObject
// Address: 0x112bb2f78

@interface SCMemoryUsageReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMemoryUsageReporter initWithGrapheneLogger:blizzardLogger:timeProvider:deviceMemoryBucket:crashBlizzardLogger:circumstanceEngine:reportQueue:memoryPressureState:composerMemoryStatsProvider:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@?80
// Implementation: 0x108bb6dcc

// -[SCMemoryUsageReporter subscribeOnAppLifecycleEvent:memoryUsageSnapshot:currentPageEvent:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x108bb714c

// -[SCMemoryUsageReporter _timeBucket]
// Type encoding: q16@0:8
// Implementation: 0x108bb7c3c

// -[SCMemoryUsageReporter _isBackground]
// Type encoding: B16@0:8
// Implementation: 0x108bb7cc4

// -[SCMemoryUsageReporter _setApplicationState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108bb7cd4

// -[SCMemoryUsageReporter _didUpdateMemoryUsageStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb7cdc

// -[SCMemoryUsageReporter _didReceiveLowMemoryWarning:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb7f70

// -[SCMemoryUsageReporter _reportBlizzardLowMemoryUsage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb80b0

// -[SCMemoryUsageReporter _reportGrapheneLowMemoryUsage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb8230

// -[SCMemoryUsageReporter _reportLowMemoryWarningExceeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x108bb832c

// -[SCMemoryUsageReporter _willEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x108bb846c

// -[SCMemoryUsageReporter _didBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x108bb84ec

// -[SCMemoryUsageReporter _willResignActive]
// Type encoding: v16@0:8
// Implementation: 0x108bb84f4

// -[SCMemoryUsageReporter _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x108bb84fc

// -[SCMemoryUsageReporter _isFirstPageVisit:]
// Type encoding: B24@0:8@16
// Implementation: 0x108bb8524

// -[SCMemoryUsageReporter _pageActiveMemoryUsage]
// Type encoding: q16@0:8
// Implementation: 0x108bb8540

// -[SCMemoryUsageReporter _pageInactiveMemory]
// Type encoding: q16@0:8
// Implementation: 0x108bb8558

// -[SCMemoryUsageReporter _pageAvgDeltaMemoryUsage]
// Type encoding: q16@0:8
// Implementation: 0x108bb8590

// -[SCMemoryUsageReporter _didChangeCurrentPageEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb85d0

// -[SCMemoryUsageReporter _onStartPage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb87f0

// -[SCMemoryUsageReporter _onEndPage:prevPageName:startTimestamp:endTimestamp:]
// Type encoding: v48@0:8@16@24d32d40
// Implementation: 0x108bb8870

// -[SCMemoryUsageReporter _reportBackgroundMemoryUsageWithSnapshot:maxMemoryUsageInBytes:timeBucket:memoryPressureStateDurations:maxMemoryPressureState:]
// Type encoding: v56@0:8@16q24q32@40q48
// Implementation: 0x108bb88e0

// -[SCMemoryUsageReporter _reportBackgroundMemoryUsageGrapheneMetric:value:timeBucket:]
// Type encoding: v40@0:8@16Q24q32
// Implementation: 0x108bb8a30

// -[SCMemoryUsageReporter _reportBlizzardPerPageMemoryUsageWithFinishedPageName:prevPageName:startTimestamp:endTimestamp:]
// Type encoding: v48@0:8@16@24d32d40
// Implementation: 0x108bb8b18

// -[SCMemoryUsageReporter _reportGraphenePageDeltaMemoryUsage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb8cc8

// -[SCMemoryUsageReporter _reportGraphenePageMaxMemoryUsage:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb8ee4

// -[SCMemoryUsageReporter _reportRealtimeMemoryUsage]
// Type encoding: v16@0:8
// Implementation: 0x108bb8f94

// -[SCMemoryUsageReporter _reportBlizzardAppMemoryUsageForCategory:totalMemoryUsageInBytes:maxMemoryUsageInBytes:timeBucket:memoryPressureStateDurations:maxMemoryPressureState:]
// Type encoding: v64@0:8q16q24q32q40@48q56
// Implementation: 0x108bb9184

// -[SCMemoryUsageReporter _reportPerfMemoryUsageWithCategory:]
// Type encoding: v24@0:8q16
// Implementation: 0x108bb9450

// -[SCMemoryUsageReporter _reportMemoryPressureSessionMetrics]
// Type encoding: v16@0:8
// Implementation: 0x108bb9454

// -[SCMemoryUsageReporter _handleMemoryPressureState:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bb959c

// -[SCMemoryUsageReporter _logGrapheneMemoryPressureIncreasedToState:]
// Type encoding: v24@0:8q16
// Implementation: 0x108bb9990

// -[SCMemoryUsageReporter _memoryPressureStateDurations]
// Type encoding: @16@0:8
// Implementation: 0x108bb9ac0

// -[SCMemoryUsageReporter _updateMemoryPressureAggregate]
// Type encoding: v16@0:8
// Implementation: 0x108bb9ca8

// -[SCMemoryUsageReporter _updateMemoryPressureAggregateForLevel:]
// Type encoding: v24@0:8q16
// Implementation: 0x108bb9d58

// -[SCMemoryUsageReporter _resetMemoryPressureAggregate]
// Type encoding: v16@0:8
// Implementation: 0x108bb9e64

// -[SCMemoryUsageReporter currentMemoryPressureState]
// Type encoding: @16@0:8
// Implementation: 0x108bb9f14

// -[SCMemoryUsageReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bb9f3c

@end
