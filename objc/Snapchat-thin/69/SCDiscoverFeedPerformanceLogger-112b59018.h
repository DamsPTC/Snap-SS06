// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedPerformanceLogger
// Superclass: NSObject
// Address: 0x112b59018

@interface SCDiscoverFeedPerformanceLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedPerformanceLogger initPrivate]
// Type encoding: @16@0:8
// Implementation: 0x100a04278

// -[SCDiscoverFeedPerformanceLogger setBlizzardLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fd6458

// -[SCDiscoverFeedPerformanceLogger logStartGhostToDiscoverFeedWithSourceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x100a04520

// -[SCDiscoverFeedPerformanceLogger logStep:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fd6488

// -[SCDiscoverFeedPerformanceLogger logEndGhostToDiscoverFeedWithTimeSpentWaiting:contentReadyType:]
// Type encoding: v32@0:8d16q24
// Implementation: 0x106fd6668

// -[SCDiscoverFeedPerformanceLogger _reset]
// Type encoding: v16@0:8
// Implementation: 0x100a05820

// -[SCDiscoverFeedPerformanceLogger _didLogoutNotification]
// Type encoding: v16@0:8
// Implementation: 0x106fd6a80

// -[SCDiscoverFeedPerformanceLogger _didEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106fd6ae4

// -[SCDiscoverFeedPerformanceLogger _logDebugWarningInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x106fd6b48

// -[SCDiscoverFeedPerformanceLogger logDiscoverFeedViewReady:firstPaintMs:sourcePage:viewReadyType:cacheLoaded:contentReadyType:actionType:pageSessionId:stopLoggingPullToRefreshLatency:]
// Type encoding: v80@0:8d16d24q32q40B48q52q60@68B76
// Implementation: 0x106fd6bdc

// -[SCDiscoverFeedPerformanceLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106fd6e94

// +[SCDiscoverFeedPerformanceLogger shared]
// Type encoding: @16@0:8
// Implementation: 0x100a041f4

@end
