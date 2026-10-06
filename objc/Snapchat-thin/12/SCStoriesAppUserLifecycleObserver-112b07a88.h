// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesAppUserLifecycleObserver
// Superclass: NSObject
// Address: 0x112b07a88

@interface SCStoriesAppUserLifecycleObserver

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesAppUserLifecycleObserver initWithStoriesFetcher:storiesDataCoordinator:myStoriesDataCoordinator:discoverFeedDataMutator:legacyStoriesMediaCache:snapReadReceiptCoordinator:snapchatterFetcher:ghostToMyStoriesMetricsEmitter:ghostToFriendStoriesMetricsEmitter:storiesConfigProvider:performer:startupInfoService:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x1006e1724

// -[SCStoriesAppUserLifecycleObserver onUserLoggedIn]
// Type encoding: v16@0:8
// Implementation: 0x10696e7a0

// -[SCStoriesAppUserLifecycleObserver onUserRegistered]
// Type encoding: v16@0:8
// Implementation: 0x10696e880

// -[SCStoriesAppUserLifecycleObserver onUserResumed:didLaunchWithDataUnavailable:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1006e19e8

// -[SCStoriesAppUserLifecycleObserver onAppWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x10696e8c4

// -[SCStoriesAppUserLifecycleObserver onAppDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c7878c

// -[SCStoriesAppUserLifecycleObserver onAppDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x10696eba8

// -[SCStoriesAppUserLifecycleObserver onAppDidFinishLaunching]
// Type encoding: v16@0:8
// Implementation: 0x100c1e0e4

// -[SCStoriesAppUserLifecycleObserver onAppWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x10696ecb4

// -[SCStoriesAppUserLifecycleObserver onAppWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x10696ecb8

// -[SCStoriesAppUserLifecycleObserver _cancelGhostToStoriesLogging]
// Type encoding: v16@0:8
// Implementation: 0x10696ecbc

// -[SCStoriesAppUserLifecycleObserver _fetchStoriesOnColdStart]
// Type encoding: v16@0:8
// Implementation: 0x1006e1a14

// -[SCStoriesAppUserLifecycleObserver _fetchFriendStoriesOnWarmStart]
// Type encoding: v16@0:8
// Implementation: 0x10696ed84

// -[SCStoriesAppUserLifecycleObserver _fetchAllStoriesWithTriggerType:myStoriesCallback:]
// Type encoding: v32@0:8q16@?24
// Implementation: 0x10696efb4

// -[SCStoriesAppUserLifecycleObserver _fetchViewerInfoWithFetchSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x10696f048

// -[SCStoriesAppUserLifecycleObserver _postNotificationForForceBadgeShown]
// Type encoding: v16@0:8
// Implementation: 0x10696f098

// -[SCStoriesAppUserLifecycleObserver .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10696f198

@end
