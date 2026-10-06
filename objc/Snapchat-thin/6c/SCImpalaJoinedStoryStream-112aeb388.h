// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImpalaJoinedStoryStream
// Superclass: NSObject
// Address: 0x112aeb388

@interface SCImpalaJoinedStoryStream

// Property: currentUserId; attributes: T@"NSString",R,C,N,V_currentUserId
// Property: businessProfileId; attributes: T@"NSString",R,C,N,V_businessProfileId
// Property: storyId; attributes: T@"NSString",R,C,N,V_storyId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImpalaJoinedStoryStream initWithPublicStoryStateObserver:myStoriesDataCoordinator:snapProProfilesProvider:publicDeleteTombstoneStore:currentUserId:businessProfileId:storyId:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x10664059c

// -[SCImpalaJoinedStoryStream subscribeOnNext:]
// Type encoding: Q24@0:8@?16
// Implementation: 0x10664078c

// -[SCImpalaJoinedStoryStream _startMyStoriesDataUpdateListener]
// Type encoding: v16@0:8
// Implementation: 0x106640808

// -[SCImpalaJoinedStoryStream _primeFriendSnaps]
// Type encoding: v16@0:8
// Implementation: 0x10664085c

// -[SCImpalaJoinedStoryStream _startFriendSubscription]
// Type encoding: v16@0:8
// Implementation: 0x106640a34

// -[SCImpalaJoinedStoryStream _friendSnapsByFilteringDeletedComponents:]
// Type encoding: @24@0:8@16
// Implementation: 0x106640cc4

// -[SCImpalaJoinedStoryStream _startPublicSubscription]
// Type encoding: v16@0:8
// Implementation: 0x1066410fc

// -[SCImpalaJoinedStoryStream _currentPublicSnaps]
// Type encoding: @16@0:8
// Implementation: 0x106641414

// -[SCImpalaJoinedStoryStream _businessProfileHandler]
// Type encoding: @16@0:8
// Implementation: 0x1066414d0

// -[SCImpalaJoinedStoryStream _publicSnapsByFilteringDeleteTombstones:]
// Type encoding: @24@0:8@16
// Implementation: 0x106641674

// -[SCImpalaJoinedStoryStream _recomputeAndEmitWithPendingPublicSnaps:]
// Type encoding: v24@0:8@16
// Implementation: 0x1066419a8

// -[SCImpalaJoinedStoryStream didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x106641b54

// -[SCImpalaJoinedStoryStream tearDown]
// Type encoding: v16@0:8
// Implementation: 0x106642410

// -[SCImpalaJoinedStoryStream dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1066424b0

// -[SCImpalaJoinedStoryStream currentUserId]
// Type encoding: @16@0:8
// Implementation: 0x106642500

// -[SCImpalaJoinedStoryStream businessProfileId]
// Type encoding: @16@0:8
// Implementation: 0x106642508

// -[SCImpalaJoinedStoryStream storyId]
// Type encoding: @16@0:8
// Implementation: 0x106642510

// -[SCImpalaJoinedStoryStream .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106642518

// +[SCImpalaJoinedStoryStream _storyRingEmissionLogTemplate]
// Type encoding: @16@0:8
// Implementation: 0x106640590

@end
