// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensFriendsFeedContextEventsDeltaSyncFetcher
// Superclass: NSObject
// Address: 0x112b23058

@interface SCLensFriendsFeedContextEventsDeltaSyncFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher initWithDocObjectContext:excludedEventTypes:performer:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106c09b94

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher contextEventModelForEventType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106c09c80

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _contextEventModelFromCachedEvent:eventLenses:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106c09d18

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _memoryCachedEventWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106c09e94

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _cacheInMemoryEvent:forEventType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106c09f24

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _cleanupMemoryCache]
// Type encoding: v16@0:8
// Implementation: 0x106c09fb8

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _persistentCachedEventWithType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x106c09ffc

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _isEventTypeExcluded:]
// Type encoding: B24@0:8Q16
// Implementation: 0x106c0a0c0

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher _subscribeOnDocObjectUpdatesIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106c0a110

// -[SCLensFriendsFeedContextEventsDeltaSyncFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c0a3b0

@end
