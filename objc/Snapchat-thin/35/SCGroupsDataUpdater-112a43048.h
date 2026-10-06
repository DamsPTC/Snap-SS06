// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGroupsDataUpdater
// Superclass: NSObject
// Address: 0x112a43048

@interface SCGroupsDataUpdater

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGroupsDataUpdater initWithNativeSessionManagerFuture:conversationDataUpdateAnnouncer:lazySnapchattersDataFetcher:lazySnapchatterUserInfoProvider:lazySnapchatterPublicInfoFetcher:lazySnapchattersDataTracker:groupsStorage:groupConstructor:groupsDataTracker:friendsFeedEntryStore:performer:userId:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x10041b298

// -[SCGroupsDataUpdater upsertGroupWithConversation:conversationId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105513870

// -[SCGroupsDataUpdater didCreateConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105513a00

// -[SCGroupsDataUpdater didRemoveConversation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105513acc

// -[SCGroupsDataUpdater didConversationUpdateForConversationId:conversation:updatedMessages:removedMessages:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105513cc8

// -[SCGroupsDataUpdater didSendStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x105513d38

// -[SCGroupsDataUpdater didSendComplete:]
// Type encoding: v24@0:8@16
// Implementation: 0x105513d3c

// -[SCGroupsDataUpdater didConversationReset:messages:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105513d40

// -[SCGroupsDataUpdater didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x105513dbc

// -[SCGroupsDataUpdater didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x105513dc0

// -[SCGroupsDataUpdater didEndSnapchattersFetchDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x100c56400

// -[SCGroupsDataUpdater _upsertGroupWithConversation:conversationId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105514048

// -[SCGroupsDataUpdater _fetchSnapchattersForConversations:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c5c6b0

// -[SCGroupsDataUpdater loadGroupsIntoMemoryWithCompletion:completionQueue:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x1006238c0

// -[SCGroupsDataUpdater _createGroupsWithConversations:snapchatterUserIdToSnapchatter:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1006dc054

// -[SCGroupsDataUpdater _performFilterLoadedGroupsForConversations:fetchedConversations:snapchatterUserIdToSnapchatter:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1006de4d4

// -[SCGroupsDataUpdater _filterLoadedGroupsForConversations:fetchedConversations:snapchatterUserIdToSnapchatter:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1006de664

// -[SCGroupsDataUpdater _performUpsertGroupsWithConversations:conversationIds:snapchatterUserIdToSnapchatter:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10551509c

// -[SCGroupsDataUpdater _upsertGroupsWithConversations:conversationIds:snapchatterUserIdToSnapchatter:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1006de874

// -[SCGroupsDataUpdater _handleSnapchattersUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10551522c

// -[SCGroupsDataUpdater _handleSnapchatterUpdate:forceUpdate:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10551537c

// -[SCGroupsDataUpdater _updateGroupsForUpdatedSnapchatter:snapchatterUserId:forceUpdate:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x105515504

// -[SCGroupsDataUpdater _updateGroupsForUpdatedSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x10551574c

// -[SCGroupsDataUpdater _groupsToUpdateForSnapchattersUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x1055158b8

// -[SCGroupsDataUpdater _groupsToUpdateForSnapchatterUpdate:]
// Type encoding: @24@0:8@16
// Implementation: 0x105515aec

// -[SCGroupsDataUpdater _fetchSnapchattersForAllGroups]
// Type encoding: v16@0:8
// Implementation: 0x100c5646c

// -[SCGroupsDataUpdater _observeFeedEventUpdates]
// Type encoding: v16@0:8
// Implementation: 0x10041e390

// -[SCGroupsDataUpdater _processArroyoGroupFeedMetadataForUpdatedFeedEntries:]
// Type encoding: v24@0:8@16
// Implementation: 0x10041f190

// -[SCGroupsDataUpdater _processArroyoGroupFeedMetadataForFeedEntries:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x10041f254

// -[SCGroupsDataUpdater _performFetchLocalAndRemoteSnapchattersForConversations:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1006d23bc

// -[SCGroupsDataUpdater _fetchLocalAndRemoteSnapchattersNonBlocking:conversationIds:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1006dbac4

// -[SCGroupsDataUpdater _fetchLocalSnapchattersForConversations:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105515eec

// -[SCGroupsDataUpdater _fetchLocalAndRemoteSnapchatters:localSnapchatters:conversations:conversationIds:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105516078

// -[SCGroupsDataUpdater _upsertFetchedRemoteSnapchatters:localSnapchatters:conversations:conversationIds:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1055166f0

// -[SCGroupsDataUpdater _announceDidLeaveGroupWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105516bd4

// -[SCGroupsDataUpdater _announceGroupInitialLoad]
// Type encoding: v16@0:8
// Implementation: 0x105516c30

// -[SCGroupsDataUpdater _announceGroupUpdateChangeForGroup:]
// Type encoding: v24@0:8@16
// Implementation: 0x105516c8c

// -[SCGroupsDataUpdater _announceGroupsUpdateChangeForGroups:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004205e4

// -[SCGroupsDataUpdater didConfirmConversationServerCreation:]
// Type encoding: v24@0:8@16
// Implementation: 0x105516cf0

// -[SCGroupsDataUpdater .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105516cf4

@end
