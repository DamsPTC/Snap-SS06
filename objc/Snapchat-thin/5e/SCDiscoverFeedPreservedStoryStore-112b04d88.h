// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedPreservedStoryStore
// Superclass: NSObject
// Address: 0x112b04d88

@interface SCDiscoverFeedPreservedStoryStore

// Property: feedIdentifier; attributes: T@"SCContentFeedIdentifier",R,N,V_feedIdentifier

// -[SCDiscoverFeedPreservedStoryStore init]
// Type encoding: @16@0:8
// Implementation: 0x1068eb8e4

// -[SCDiscoverFeedPreservedStoryStore initWithFeedIdentifier:preservedStories:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1068eb968

// -[SCDiscoverFeedPreservedStoryStore updateWithStoryDedupeFpsByFeedIdentifier:storiesByStoryDedupeFp:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068ebcb0

// -[SCDiscoverFeedPreservedStoryStore updateWithPromotedStoriesByFeedIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068ebedc

// -[SCDiscoverFeedPreservedStoryStore purgeExpiredStories]
// Type encoding: v16@0:8
// Implementation: 0x1068ec148

// -[SCDiscoverFeedPreservedStoryStore preservedStoriesForFeedIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068ec2a0

// -[SCDiscoverFeedPreservedStoryStore copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1068ec300

// -[SCDiscoverFeedPreservedStoryStore feedIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1068ec368

// -[SCDiscoverFeedPreservedStoryStore .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068ec370

// +[SCDiscoverFeedPreservedStoryStore arrayByPurgingExpiredStoriesFromArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068ebb5c

@end
