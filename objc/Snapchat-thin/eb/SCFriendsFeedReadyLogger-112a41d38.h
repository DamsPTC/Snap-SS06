// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedReadyLogger
// Superclass: NSObject
// Address: 0x112a41d38

@interface SCFriendsFeedReadyLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFriendsFeedReadyLogger initWithLogger:performer:graphene:grapheneLoggerV2:circumstanceEngine:startupInfoService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1003f0e84

// -[SCFriendsFeedReadyLogger didEnterWithEntryParameters:isPresentingUnderChat:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1054e572c

// -[SCFriendsFeedReadyLogger firstFeedEntrySource]
// Type encoding: q16@0:8
// Implementation: 0x1054e5844

// -[SCFriendsFeedReadyLogger setFeedEntryPreviousPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e584c

// -[SCFriendsFeedReadyLogger setShortcutSessionId:shortcutLoadTimestamp:didPullDown:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x1054e5938

// -[SCFriendsFeedReadyLogger resetShortcutSession]
// Type encoding: v16@0:8
// Implementation: 0x1054e5a64

// -[SCFriendsFeedReadyLogger didRenderFeedAtTime:renderContent:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1054e5b38

// -[SCFriendsFeedReadyLogger addSucessfullySyncedConversationsCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1054e5c58

// -[SCFriendsFeedReadyLogger addSyncFeedWireTimeMs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10086fa98

// -[SCFriendsFeedReadyLogger didSync:]
// Type encoding: v24@0:8@16
// Implementation: 0x100870474

// -[SCFriendsFeedReadyLogger didAppSessionEndWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054e5cc4

// -[SCFriendsFeedReadyLogger addEelDecryptLatencyUs:]
// Type encoding: v24@0:8d16
// Implementation: 0x10086faf4

// -[SCFriendsFeedReadyLogger addSyncEelMessageCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10086fbe0

// -[SCFriendsFeedReadyLogger addSyncMessageCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10086fc58

// -[SCFriendsFeedReadyLogger friendsFeedReadyResult]
// Type encoding: @16@0:8
// Implementation: 0x1054e5cc8

// -[SCFriendsFeedReadyLogger onUserLoggedIn]
// Type encoding: v16@0:8
// Implementation: 0x1054e5cf0

// -[SCFriendsFeedReadyLogger onUserRegistered]
// Type encoding: v16@0:8
// Implementation: 0x1054e5cf8

// -[SCFriendsFeedReadyLogger onUserResumed:didLaunchWithDataUnavailable:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1003f1684

// -[SCFriendsFeedReadyLogger onAppWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x1054e5d00

// -[SCFriendsFeedReadyLogger onAppDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c78328

// -[SCFriendsFeedReadyLogger onAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x1054e5d18

// -[SCFriendsFeedReadyLogger onAppDidFinishLaunching]
// Type encoding: v16@0:8
// Implementation: 0x100c1de58

// -[SCFriendsFeedReadyLogger onAppWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x1054e5d20

// -[SCFriendsFeedReadyLogger onAppWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x1054e5d24

// -[SCFriendsFeedReadyLogger _startLoggingForStartupType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1003f16a4

// -[SCFriendsFeedReadyLogger _didEnterWithEntryParameters:isPresentingUnderChat:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1054e5d2c

// -[SCFriendsFeedReadyLogger _recordEntryParameters:isPresentingUnderChat:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1054e5dd8

// -[SCFriendsFeedReadyLogger _setFeedEntryPreviousPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e6014

// -[SCFriendsFeedReadyLogger _recordPreviousPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e60f4

// -[SCFriendsFeedReadyLogger _didRenderFeedAtTime:renderContent:]
// Type encoding: v32@0:8d16@24
// Implementation: 0x1054e61e8

// -[SCFriendsFeedReadyLogger _didSyncForSyncResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x100870cfc

// -[SCFriendsFeedReadyLogger _logMetricsIfNecessaryAndRestartLoggerWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054e6350

// -[SCFriendsFeedReadyLogger _logGrapheneAndBlizzardMetrics]
// Type encoding: v16@0:8
// Implementation: 0x1054e65a4

// -[SCFriendsFeedReadyLogger _resetFFLoggerState]
// Type encoding: v16@0:8
// Implementation: 0x1003f2818

// -[SCFriendsFeedReadyLogger _setShortcutSessionId:shortcutLoadTimestamp:didPullDown:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x1054e6b84

// -[SCFriendsFeedReadyLogger _logDidPullDownBeforeSyncComplete]
// Type encoding: v16@0:8
// Implementation: 0x1054e6c38

// -[SCFriendsFeedReadyLogger _resetShortcutSession]
// Type encoding: v16@0:8
// Implementation: 0x1054e6c94

// -[SCFriendsFeedReadyLogger _logSwipeCountWithCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e6ccc

// -[SCFriendsFeedReadyLogger _logSyncedNegativeRenderForSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e6d58

// -[SCFriendsFeedReadyLogger _logFriendsFeedReadyConversationsSyncedCount:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e6e68

// -[SCFriendsFeedReadyLogger _logFriendsFeedReadySyncedRenderContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054e6ef4

// -[SCFriendsFeedReadyLogger _logFriendsFeedReadySyncedRenderWithDurationMs:entrySource:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x1054e7128

// -[SCFriendsFeedReadyLogger _logFriendsFeedReadyFirstRenderContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054e72a4

// -[SCFriendsFeedReadyLogger _logFirstRenderWithDurationMs:overallLatency:ffReadySyncType:firstFeedEntrySource:isStale:]
// Type encoding: v52@0:8d16d24@32q40B48
// Implementation: 0x1054e74d8

// -[SCFriendsFeedReadyLogger _logFriendsFeedReadySyncSuccessfulNoRender]
// Type encoding: v16@0:8
// Implementation: 0x1054e78d0

// -[SCFriendsFeedReadyLogger _addTimerFriendsFeedReadySyncTimeMs:]
// Type encoding: v24@0:8q16
// Implementation: 0x1054e794c

// -[SCFriendsFeedReadyLogger _logBailedEventAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054e79d8

// -[SCFriendsFeedReadyLogger _logEntryParameters:entrySource:previousAttributedPage:isFirst:]
// Type encoding: v44@0:8@16q24@32B40
// Implementation: 0x1054e7ac4

// -[SCFriendsFeedReadyLogger _shouldUseGrapheneV2]
// Type encoding: B16@0:8
// Implementation: 0x1054e7d6c

// -[SCFriendsFeedReadyLogger _resetStoriesLoggerState]
// Type encoding: v16@0:8
// Implementation: 0x1003f29b4

// -[SCFriendsFeedReadyLogger _resetMapsLoggerState]
// Type encoding: v16@0:8
// Implementation: 0x1003f29e4

// -[SCFriendsFeedReadyLogger storiesCarouselDidRenderAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054e7d84

// -[SCFriendsFeedReadyLogger _storiesCarouselDidRenderAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054e7e70

// -[SCFriendsFeedReadyLogger storiesCarouselViewDidDisappear]
// Type encoding: v16@0:8
// Implementation: 0x1054e7f94

// -[SCFriendsFeedReadyLogger mapButtonDidRenderAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054e801c

// -[SCFriendsFeedReadyLogger _mapButtonDidRenderAtTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x1054e8108

// -[SCFriendsFeedReadyLogger mapButtonDidTransitionFromFriendsFeedPage]
// Type encoding: v16@0:8
// Implementation: 0x1054e81b4

// -[SCFriendsFeedReadyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e823c

@end
