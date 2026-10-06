// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFriendsFeedPresenceInfoDataProvider
// Superclass: NSObject
// Address: 0x112ae2fa8

@interface SCFriendsFeedPresenceInfoDataProvider


// -[SCFriendsFeedPresenceInfoDataProvider initWithCallStateProvider:presenceStateProvider:plusFeatureGating:lensMetadataRetrieving:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x100baac24

// -[SCFriendsFeedPresenceInfoDataProvider activePresenceInfoObservableWithPerformer:]
// Type encoding: @24@0:8@16
// Implementation: 0x100baeb90

// -[SCFriendsFeedPresenceInfoDataProvider startPresenceSubscriptions]
// Type encoding: v16@0:8
// Implementation: 0x1064df9f8

// -[SCFriendsFeedPresenceInfoDataProvider _updateTypingPresence:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e0260

// -[SCFriendsFeedPresenceInfoDataProvider _updateGamePresence:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e06f0

// -[SCFriendsFeedPresenceInfoDataProvider _processGameConversations:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1064e07fc

// -[SCFriendsFeedPresenceInfoDataProvider _handleLensMetadataFetchResult:gameConversations:conversationIdToSessionId:conversationIdToLensId:completion:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1064e0c68

// -[SCFriendsFeedPresenceInfoDataProvider _updateCalls:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e0ecc

// -[SCFriendsFeedPresenceInfoDataProvider _updatePeeks:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e0f04

// -[SCFriendsFeedPresenceInfoDataProvider _updatePresentParticipants:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e0f3c

// -[SCFriendsFeedPresenceInfoDataProvider _generateActivePresenceInfo]
// Type encoding: v16@0:8
// Implementation: 0x1064e0f74

// -[SCFriendsFeedPresenceInfoDataProvider _updateActivePresenceInfoWithActivePresenceInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1064e15c4

// -[SCFriendsFeedPresenceInfoDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1064e1710

@end
