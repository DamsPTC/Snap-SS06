// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCognacDataStorage
// Superclass: NSObject
// Address: 0x112a63118

@interface SCCognacDataStorage

// Property: leaderboardIdToLeaderboard; attributes: T@"NSDictionary",C,V_leaderboardIdToLeaderboard
// Property: appIdToLeaderboardScoreVisibility; attributes: T@"NSDictionary",C,V_appIdToLeaderboardScoreVisibility
// Property: leaderboardIdToLeaderboardScoreVisibility; attributes: T@"NSDictionary",C,V_leaderboardIdToLeaderboardScoreVisibility
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCognacDataStorage addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105794ea0

// -[SCCognacDataStorage removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x105794ea8

// -[SCCognacDataStorage init]
// Type encoding: @16@0:8
// Implementation: 0x105794eb0

// -[SCCognacDataStorage updateWithLeaderboard:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105794fe0

// -[SCCognacDataStorage leaderboardWithLeaderboardId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057952ec

// -[SCCognacDataStorage updateLeaderboardScoreVisibilitiesWithAppScopeScoreVisibilities:leaderboardScopeScoreVisibilities:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10579536c

// -[SCCognacDataStorage leaderboardScoreVisibilityWithAppId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1057958b4

// -[SCCognacDataStorage leaderboardScoreVisibilityWithLeaderboardId:]
// Type encoding: @24@0:8@16
// Implementation: 0x105795934

// -[SCCognacDataStorage cleanUp]
// Type encoding: v16@0:8
// Implementation: 0x1057959b4

// -[SCCognacDataStorage leaderboardIdToLeaderboard]
// Type encoding: @16@0:8
// Implementation: 0x105795b68

// -[SCCognacDataStorage setLeaderboardIdToLeaderboard:]
// Type encoding: v24@0:8@16
// Implementation: 0x105795b74

// -[SCCognacDataStorage appIdToLeaderboardScoreVisibility]
// Type encoding: @16@0:8
// Implementation: 0x105795b7c

// -[SCCognacDataStorage setAppIdToLeaderboardScoreVisibility:]
// Type encoding: v24@0:8@16
// Implementation: 0x105795b88

// -[SCCognacDataStorage leaderboardIdToLeaderboardScoreVisibility]
// Type encoding: @16@0:8
// Implementation: 0x105795b90

// -[SCCognacDataStorage setLeaderboardIdToLeaderboardScoreVisibility:]
// Type encoding: v24@0:8@16
// Implementation: 0x105795b9c

// -[SCCognacDataStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105795ba4

// +[SCCognacDataStorage announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x105794e94

@end
