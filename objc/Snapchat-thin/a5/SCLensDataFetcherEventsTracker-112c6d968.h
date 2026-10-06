// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensDataFetcherEventsTracker
// Superclass: NSObject
// Address: 0x112c6d968

@interface SCLensDataFetcherEventsTracker

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensDataFetcherEventsTracker initWithDownloadTracker:cacheClearTracker:lensUserProvider:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100bad024

// -[SCLensDataFetcherEventsTracker lensDataFetcher:didFinishLoadingContentForLens:successfully:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10b0d7804

// -[SCLensDataFetcherEventsTracker didClearCacheForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7818

// -[SCLensDataFetcherEventsTracker didClearIconsForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d787c

// -[SCLensDataFetcherEventsTracker didClearCacheFromTweaksForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d7880

// -[SCLensDataFetcherEventsTracker didCancelDownloadsAndClearInMemoryCacheForLensDataFetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b0d78a8

// -[SCLensDataFetcherEventsTracker .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b0d790c

@end
