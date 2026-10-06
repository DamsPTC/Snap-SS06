// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommunitiesProfileMembersDataProvider
// Superclass: NSObject
// Address: 0x112a179e8

@interface SCCommunitiesProfileMembersDataProvider

// Property: friendmojiProvider; attributes: T@"<SCCFriendmojiProviding>",&,N,V_friendmojiProvider
// Property: friendScoreProvider; attributes: T@"<SCCFriendscoreProviding>",&,N,V_friendScoreProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommunitiesProfileMembersDataProvider initWithCustomStoriesDataFetcher:snapchattersObservableRepository:friendscoreProvider:friendmojiProviderFactory:userId:valdiRuntimeProvider:circumstanceEngine:snapchattersPublicInfoFetcher:]
// Type encoding: @80@0:8@16@24@32@?40@48@56@64@72
// Implementation: 0x1050f0c80

// -[SCCommunitiesProfileMembersDataProvider getGroupMembersWithGroupId:count:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1050f0ec4

// -[SCCommunitiesProfileMembersDataProvider getGroupMembersCountWithGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050f108c

// -[SCCommunitiesProfileMembersDataProvider _getGroupMetadataWithGroupId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1050f1154

// -[SCCommunitiesProfileMembersDataProvider _getGroupMembersWithParticipants:count:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1050f11e8

// -[SCCommunitiesProfileMembersDataProvider getRankedGroupMembersWithGroupId:surface:count:]
// Type encoding: @40@0:8@16d24@32
// Implementation: 0x1050f142c

// -[SCCommunitiesProfileMembersDataProvider _getRankedGroupMembersWithGroupId:allParticipants:surface:count:]
// Type encoding: @48@0:8@16@24d32@40
// Implementation: 0x1050f162c

// -[SCCommunitiesProfileMembersDataProvider _getRankedGroupMembersWithMemberRankings:allParticipants:count:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1050f1b34

// -[SCCommunitiesProfileMembersDataProvider _appendUnrankedParticipantIfNeededWithMemberRankings:allParticipants:count:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1050f1f2c

// -[SCCommunitiesProfileMembersDataProvider observeIncomingFriends]
// Type encoding: @16@0:8
// Implementation: 0x1050f22cc

// -[SCCommunitiesProfileMembersDataProvider observeOutgoingFriends]
// Type encoding: @16@0:8
// Implementation: 0x1050f253c

// -[SCCommunitiesProfileMembersDataProvider pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1050f2638

// -[SCCommunitiesProfileMembersDataProvider friendmojiProvider]
// Type encoding: @16@0:8
// Implementation: 0x1050f2644

// -[SCCommunitiesProfileMembersDataProvider setFriendmojiProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050f264c

// -[SCCommunitiesProfileMembersDataProvider friendScoreProvider]
// Type encoding: @16@0:8
// Implementation: 0x1050f267c

// -[SCCommunitiesProfileMembersDataProvider setFriendScoreProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1050f2684

// -[SCCommunitiesProfileMembersDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1050f26b4

@end
