// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPublicStoriesDataCoordinator
// Superclass: NSObject
// Address: 0x112a83e18

@interface SCPublicStoriesDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPublicStoriesDataCoordinator initWithDocObjectContext:performer:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105a243fc

// -[SCPublicStoriesDataCoordinator mostRecentPublicStoryTimestampObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a244f4

// -[SCPublicStoriesDataCoordinator mostRecentPublicStoryTimestamp]
// Type encoding: d16@0:8
// Implementation: 0x105a244fc

// -[SCPublicStoriesDataCoordinator publicStoryTimestampForProfileId:]
// Type encoding: d24@0:8@16
// Implementation: 0x105a24504

// -[SCPublicStoriesDataCoordinator updatePublicStoryForProfileId:storySnap:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a24574

// -[SCPublicStoriesDataCoordinator _updatePublicStoryLatestPostTimestampWithContext:profileId:postedTimestamp:storySnap:]
// Type encoding: v48@0:8@16@24d32@40
// Implementation: 0x105a24784

// -[SCPublicStoriesDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a2478c

@end
