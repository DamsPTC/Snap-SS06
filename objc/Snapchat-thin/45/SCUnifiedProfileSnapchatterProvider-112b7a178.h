// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUnifiedProfileSnapchatterProvider
// Superclass: NSObject
// Address: 0x112b7a178

@interface SCUnifiedProfileSnapchatterProvider

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUnifiedProfileSnapchatterProvider initWithSnapchattersDataFetcher:snapchattersDataTracker:friendStatusManagerCreator:snapchatterPublicInfoFetcher:storiesDataAccess:remoteStoriesDataProvider:friendStorySettingMutator:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107ceda08

// -[SCUnifiedProfileSnapchatterProvider setSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cedd14

// -[SCUnifiedProfileSnapchatterProvider addSnapchatterWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cee06c

// -[SCUnifiedProfileSnapchatterProvider _hasSnapchatterForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107cee284

// -[SCUnifiedProfileSnapchatterProvider unifiedProfileSnapchattersForUserIdArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x107cee3bc

// -[SCUnifiedProfileSnapchatterProvider addUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cee6cc

// -[SCUnifiedProfileSnapchatterProvider removeUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cee6d4

// -[SCUnifiedProfileSnapchatterProvider _fetchSnapchattersStoryWithSnapchatters:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107cee6dc

// -[SCUnifiedProfileSnapchatterProvider _fetchSnapchattersStoryWithSnapchatterData:summaryData:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x107cee8cc

// -[SCUnifiedProfileSnapchatterProvider _updateGroupMembersStoryDataModels:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x107ceee60

// -[SCUnifiedProfileSnapchatterProvider didUpdateSummaryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef020

// -[SCUnifiedProfileSnapchatterProvider _updateFriendStoriesDataWithStoriesSummaryInfoUpdates:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef024

// -[SCUnifiedProfileSnapchatterProvider didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef24c

// -[SCUnifiedProfileSnapchatterProvider didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107cef294

// -[SCUnifiedProfileSnapchatterProvider didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef390

// -[SCUnifiedProfileSnapchatterProvider didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x107cef394

// -[SCUnifiedProfileSnapchatterProvider _dispatchAnnounceSnapchatterUpdate]
// Type encoding: v16@0:8
// Implementation: 0x107cef5bc

// -[SCUnifiedProfileSnapchatterProvider _fetchUpdatedSnapchatterIfAlreadyTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef650

// -[SCUnifiedProfileSnapchatterProvider _fetchSnapchattersToTrackFriendStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef710

// -[SCUnifiedProfileSnapchatterProvider _addSnapchatter:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cef874

// -[SCUnifiedProfileSnapchatterProvider _updateSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cefa68

// -[SCUnifiedProfileSnapchatterProvider _fetchStoryInfoForSnapchattersWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x107cefc4c

// -[SCUnifiedProfileSnapchatterProvider _addLoadingSnapchatterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107cefd84

// -[SCUnifiedProfileSnapchatterProvider _isLoadingSnapchatterId:]
// Type encoding: B24@0:8@16
// Implementation: 0x107cefe28

// -[SCUnifiedProfileSnapchatterProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107ceff3c

// +[SCUnifiedProfileSnapchatterProvider announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107cee6c0

@end
