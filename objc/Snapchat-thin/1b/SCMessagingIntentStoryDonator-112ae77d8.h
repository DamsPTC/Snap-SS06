// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingIntentStoryDonator
// Superclass: NSObject
// Address: 0x112ae77d8

@interface SCMessagingIntentStoryDonator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagingIntentStoryDonator initWithUserId:featureSettingsService:myStoriesDataCoordinator:bitmojiAvatarIdProvider:bitmojiSelfieIdProvider:bitmojiSelfieFetcher:intentDonator:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x1065bae9c

// -[SCMessagingIntentStoryDonator didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065bb030

// -[SCMessagingIntentStoryDonator _donateStoryIntentWithStoryId:displayName:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065bb100

// -[SCMessagingIntentStoryDonator _fetchBitmojiForCurrentUser:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1065bb2a0

// -[SCMessagingIntentStoryDonator _createAndDonateIntentWithStoryId:displayName:image:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065bb570

// -[SCMessagingIntentStoryDonator _createIntentWithStoryId:displayName:image:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1065bb6c4

// -[SCMessagingIntentStoryDonator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065bb7d4

@end
