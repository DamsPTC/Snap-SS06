// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedRankingEventLogger
// Superclass: NSObject
// Address: 0x112b74d18

@interface SCDiscoverFeedRankingEventLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDiscoverFeedRankingEventLogger initWithFlushTimeSecs:maxEvents:queue:snapTokenProvider:requestManager:registrationInfoProvider:grapheneRegistry:spectrumLogger:]
// Type encoding: @80@0:8Q16Q24@32@40@48@56@64@72
// Implementation: 0x107bcaa18

// -[SCDiscoverFeedRankingEventLogger logEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bcaab4

// -[SCDiscoverFeedRankingEventLogger _logEvent:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107bcabc8

// -[SCDiscoverFeedRankingEventLogger flushRankingEvents]
// Type encoding: v16@0:8
// Implementation: 0x107bcb010

// -[SCDiscoverFeedRankingEventLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107bcb014

@end
