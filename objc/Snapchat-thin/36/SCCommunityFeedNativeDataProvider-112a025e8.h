// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommunityFeedNativeDataProvider
// Superclass: NSObject
// Address: 0x112a025e8

@interface SCCommunityFeedNativeDataProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommunityFeedNativeDataProvider initWithUserId:groupsDataTracker:performerProvider:translator:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104e63310

// -[SCCommunityFeedNativeDataProvider _setupObserversIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x104e634e4

// -[SCCommunityFeedNativeDataProvider itemsObservable]
// Type encoding: @16@0:8
// Implementation: 0x104e63798

// -[SCCommunityFeedNativeDataProvider consumableConversationIdsObservable]
// Type encoding: @16@0:8
// Implementation: 0x104e637c0

// -[SCCommunityFeedNativeDataProvider processFeedEntries:deletedFeedEntries:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104e637e8

// -[SCCommunityFeedNativeDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104e646bc

// +[SCCommunityFeedNativeDataProvider _transformGroupsData:activeMessageDataByFeedId:userId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104e63c18

// +[SCCommunityFeedNativeDataProvider _processGroupEntities:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e63d6c

// +[SCCommunityFeedNativeDataProvider _groupEntityForGroup:userId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x104e63f0c

// +[SCCommunityFeedNativeDataProvider _fetchFeedInfoWithGroupFeedIds:activeMessageDataByFeedId:entityDataByFeedId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x104e64440

// +[SCCommunityFeedNativeDataProvider _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x104e64660

@end
