// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightDisplayOrderSortToken
// Superclass: NSObject
// Address: 0x112b04158

@interface SCSpotlightDisplayOrderSortToken

// Property: story; attributes: T@"SCDiscoverFeedStory",R,N,V_story
// Property: mediaStatePriority; attributes: T@"NSNumber",R,N,V_mediaStatePriority
// Property: rankingBoostValue; attributes: T@"NSNumber",R,N,V_rankingBoostValue
// Property: responseTimestamp; attributes: T@"NSDate",R,N,V_responseTimestamp
// Property: responsePosition; attributes: TQ,R,N,V_responsePosition

// -[SCSpotlightDisplayOrderSortToken initWithDiscoverFeedStory:mediaStatePriority:rankingBoostValue:responseTimestamp:responsePosition:]
// Type encoding: @56@0:8@16@24@32@40Q48
// Implementation: 0x1068ab5c8

// -[SCSpotlightDisplayOrderSortToken compareWithMediaState:rankingBoost:responseTimestamp:other:]
// Type encoding: q36@0:8B16B20B24@28
// Implementation: 0x1068ab6cc

// -[SCSpotlightDisplayOrderSortToken story]
// Type encoding: @16@0:8
// Implementation: 0x1068ab85c

// -[SCSpotlightDisplayOrderSortToken mediaStatePriority]
// Type encoding: @16@0:8
// Implementation: 0x1068ab864

// -[SCSpotlightDisplayOrderSortToken rankingBoostValue]
// Type encoding: @16@0:8
// Implementation: 0x1068ab86c

// -[SCSpotlightDisplayOrderSortToken responseTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1068ab874

// -[SCSpotlightDisplayOrderSortToken responsePosition]
// Type encoding: Q16@0:8
// Implementation: 0x1068ab87c

// -[SCSpotlightDisplayOrderSortToken .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068ab884

@end
