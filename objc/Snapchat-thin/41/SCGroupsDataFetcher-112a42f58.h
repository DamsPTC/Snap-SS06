// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupsDataFetcher
// Superclass: NSObject
// Address: 0x112a42f58

@interface SCGroupsDataFetcher


// -[SCGroupsDataFetcher initWithNativeSessionManager:nativeSessionManagerFuture:conversationDataUpdateAnnouncer:snapchattersDataFetcher:snapchatterUserInfoProvider:snapchatterPublicInfoFetcher:snapchattersDataTracker:groupsDataTracker:friendsFeedEntryStore:groupConstructor:chatGroupParticipantDisplayNameFetcher:userDisplayNameProvider:groupManagerPerformer:userId:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x10041aea8

// -[SCGroupsDataFetcher nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x10550e630

// -[SCGroupsDataFetcher loadGroupsIntoMemory]
// Type encoding: v16@0:8
// Implementation: 0x100610f7c

// -[SCGroupsDataFetcher _didLoadGroupsIntoMemory]
// Type encoding: v16@0:8
// Implementation: 0x1006df6c4

// -[SCGroupsDataFetcher allGroupsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1006df7d0

// -[SCGroupsDataFetcher allNonLockedGroupsObservable]
// Type encoding: @16@0:8
// Implementation: 0x1006df800

// -[SCGroupsDataFetcher getGroupById:completion:callbackQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10550e710

// -[SCGroupsDataFetcher getGroupByIds:completion:callbackQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10550e900

// -[SCGroupsDataFetcher fetchGroupFutureForId:callbackQueue:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10550ed4c

// -[SCGroupsDataFetcher getGroupByParticipants:completion:callbackQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10550ee94

// -[SCGroupsDataFetcher _getGroupByParticipants:completion:callbackQueue:]
// Type encoding: v40@0:8@16@?24@32
// Implementation: 0x10550f000

// -[SCGroupsDataFetcher getAllGroupsWithCompletion:callbackQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10550f30c

// -[SCGroupsDataFetcher _getAllGroupsWithCompletion:callbackQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10550f444

// -[SCGroupsDataFetcher getAllGroupsByRecencyWithCompletion:callbackQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x10550f53c

// -[SCGroupsDataFetcher getGroupByParticipants:]
// Type encoding: @24@0:8@16
// Implementation: 0x10550f63c

// -[SCGroupsDataFetcher getAllGroups]
// Type encoding: @16@0:8
// Implementation: 0x10550f6c8

// -[SCGroupsDataFetcher getAllGroupsDict]
// Type encoding: @16@0:8
// Implementation: 0x10550f710

// -[SCGroupsDataFetcher getRecentGroups]
// Type encoding: @16@0:8
// Implementation: 0x10550f718

// -[SCGroupsDataFetcher getNewGroups]
// Type encoding: @16@0:8
// Implementation: 0x10550f788

// -[SCGroupsDataFetcher getGroupWithId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10550f870

// -[SCGroupsDataFetcher getGroupsWithIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x10550f8fc

// -[SCGroupsDataFetcher updatePartialGroupIfNeededForGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10550f9c8

// -[SCGroupsDataFetcher displayNameForGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10550fa40

// -[SCGroupsDataFetcher displayNameForGroup:]
// Type encoding: @24@0:8@16
// Implementation: 0x10550faa8

// -[SCGroupsDataFetcher displayNameForGroupParticipant:]
// Type encoding: @24@0:8@16
// Implementation: 0x10550fb38

// -[SCGroupsDataFetcher _fetchGroupFromNativeForGroupId:callstack:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10550fba4

// -[SCGroupsDataFetcher _handleFetchConversationSuccessWithConversation:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10550fed8

// -[SCGroupsDataFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10550ff70

@end
