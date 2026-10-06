// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMessagingIntentRemover
// Superclass: NSObject
// Address: 0x112ae7788

@interface SCMessagingIntentRemover

// Property: deleteIntentStartEventObservable; attributes: T@"SCObservable",R,N,V_deleteIntentStartEventObservable
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMessagingIntentRemover initWithUserId:snapchattersDataTracker:featureSettingsService:groupsDataTracker:userClearConversationEventObservable:customStoriesDataFetcher:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1065b9ae8

// -[SCMessagingIntentRemover _observeShareIntentsFeatureSetting:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b9cac

// -[SCMessagingIntentRemover _observeUserClearConversationEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065b9f40

// -[SCMessagingIntentRemover _updatePrivateStories]
// Type encoding: v16@0:8
// Implementation: 0x1065ba064

// -[SCMessagingIntentRemover _handlePostableCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ba1a0

// -[SCMessagingIntentRemover deleteAllIntentsOnSessionEnd:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1065ba334

// -[SCMessagingIntentRemover didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ba338

// -[SCMessagingIntentRemover didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1065ba33c

// -[SCMessagingIntentRemover didUpdateGroupsDataRequest:groupId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1065ba558

// -[SCMessagingIntentRemover didGroupsUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ba55c

// -[SCMessagingIntentRemover didUpdateCustomStoriesWithPublicationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ba8ec

// -[SCMessagingIntentRemover didUpdatePostableStories]
// Type encoding: v16@0:8
// Implementation: 0x1065ba8f0

// -[SCMessagingIntentRemover _shouldDeleteIntentForGroup:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065ba8f4

// -[SCMessagingIntentRemover _deleteAllIntents:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1065ba8fc

// -[SCMessagingIntentRemover _deleteIntentsForConversationCleared:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ba998

// -[SCMessagingIntentRemover _deleteIntentsForGroupWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065bab28

// -[SCMessagingIntentRemover _deleteIntentsForGroupWithGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065babf8

// -[SCMessagingIntentRemover _deleteIntentsForStoryWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065bad70

// -[SCMessagingIntentRemover deleteIntentStartEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x1065bae40

// -[SCMessagingIntentRemover .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065bae48

@end
