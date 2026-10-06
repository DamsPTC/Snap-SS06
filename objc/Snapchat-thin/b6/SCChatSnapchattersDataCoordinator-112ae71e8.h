// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatSnapchattersDataCoordinator
// Superclass: NSObject
// Address: 0x112ae71e8

@interface SCChatSnapchattersDataCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatSnapchattersDataCoordinator addDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10049a86c

// -[SCChatSnapchattersDataCoordinator removeDataUpdateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ae534

// -[SCChatSnapchattersDataCoordinator initWithUserId:snapchattersDataFetcher:snapchattersPublicInfoFetcher:snapchatterFriendStatusManager:snapchattersObservableRepository:snapchattersDataTracker:snapchatterUserInfoProvider:pageLoadMetricsEmitter:friendStorySettingMutator:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100498b34

// -[SCChatSnapchattersDataCoordinator initWithUserId:snapchattersDataFetcher:snapchattersPublicInfoFetcher:snapchatterFriendStatusManager:snapchattersObservableRepository:snapchattersDataTracker:snapchatterUserInfoProvider:friendStorySettingMutator:pageLoadMetricsEmitter:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x100498b40

// -[SCChatSnapchattersDataCoordinator activeSnapchattersDataForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1065ae53c

// -[SCChatSnapchattersDataCoordinator handleDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ae744

// -[SCChatSnapchattersDataCoordinator didUpdateWithAnnouncerIdentifier:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065ae850

// -[SCChatSnapchattersDataCoordinator didUpdateFriendStorySettingWithUpdateRequest:success:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065aeb1c

// -[SCChatSnapchattersDataCoordinator _didUpdateFriendStorySettingWithUpdateRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065aec30

// -[SCChatSnapchattersDataCoordinator didStartSnapchattersUpdateDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065aee20

// -[SCChatSnapchattersDataCoordinator didEndSnapchattersUpdateDataRequest:withSuccess:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1065aee24

// -[SCChatSnapchattersDataCoordinator _didEndSnapchattersUpdateDataRequest:withSuccess:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1065aef58

// -[SCChatSnapchattersDataCoordinator _handleActiveConversationDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065af054

// -[SCChatSnapchattersDataCoordinator _handleActiveRenderingConversationDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065af1f0

// -[SCChatSnapchattersDataCoordinator _setActiveConversation:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065af384

// -[SCChatSnapchattersDataCoordinator _setOfSnapchatterIdsToFetchWithMessages:participants:kickedParticipants:isGroupConversation:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x1065af744

// -[SCChatSnapchattersDataCoordinator _userIdCanBeInserted:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065afb84

// -[SCChatSnapchattersDataCoordinator _fetchSelfUserSnapchatter]
// Type encoding: v16@0:8
// Implementation: 0x1065afc18

// -[SCChatSnapchattersDataCoordinator _fetchSnapchattersForUserIds:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065afcb4

// -[SCChatSnapchattersDataCoordinator _didFetchSnapchatters:requestedSnapchatterIds:conversationId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1065afe88

// -[SCChatSnapchattersDataCoordinator _fetchRemoteSnapchattersForUserIds:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065b00c4

// -[SCChatSnapchattersDataCoordinator _didFetchRemoteSnapchatters:conversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065b02c0

// -[SCChatSnapchattersDataCoordinator _announceDataCoordinatorUpdateWithDataRequest]
// Type encoding: v16@0:8
// Implementation: 0x1065b0444

// -[SCChatSnapchattersDataCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065b0544

// +[SCChatSnapchattersDataCoordinator dataCoordinatorIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1065ae528

@end
