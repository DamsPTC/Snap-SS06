// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCognacLeaderboardDataServiceImpl
// Superclass: NSObject
// Address: 0x112a62fd8

@interface SCCognacLeaderboardDataServiceImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCognacLeaderboardDataServiceImpl initWithCognacGRPCService:cognacDataStorage:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1057932e4

// -[SCCognacLeaderboardDataServiceImpl submitLeaderboardScoreWithAppId:leaderboardId:score:orderingType:isStudioLens:lensId:optInStatus:completionQueue:completionBlock:]
// Type encoding: v84@0:8@16@24q32q40B48@52Q60@68@?76
// Implementation: 0x105793388

// -[SCCognacLeaderboardDataServiceImpl getLeaderboardScoreVisibilityWithAppId:leaderboardId:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057933ac

// -[SCCognacLeaderboardDataServiceImpl updateScoreVisibilityForAppId:scoreVisible:completionQueue:completionBlock:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x10579378c

// -[SCCognacLeaderboardDataServiceImpl fetchLeaderboardWithLeaderboardId:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10579391c

// -[SCCognacLeaderboardDataServiceImpl batchGetLeaderboardEntriesWithLeaderboardId:userIds:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105793d34

// -[SCCognacLeaderboardDataServiceImpl listFriendLeaderboardEntriesForLeaderboardId:currentUserId:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105793e18

// -[SCCognacLeaderboardDataServiceImpl listFriendLeaderboardDataWithLeaderboardId:currentUserId:limit:orderingType:isStudioLens:completionQueue:completionBlock:]
// Type encoding: v68@0:8@16@24q32q40B48@52@?60
// Implementation: 0x10579400c

// -[SCCognacLeaderboardDataServiceImpl getLeaderboardTopScoresEntriesWithLeaderboardId:limit:completionQueue:completionBlock:]
// Type encoding: v44@0:8@16i24@28@?36
// Implementation: 0x105794030

// -[SCCognacLeaderboardDataServiceImpl getLeaderboardTopScoresDataWithLeaderboardId:limit:orderingType:isStudioLens:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16q24q32B40@44@?52
// Implementation: 0x1057940f4

// -[SCCognacLeaderboardDataServiceImpl getLeaderboardGlobalOptInStatusWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105794118

// -[SCCognacLeaderboardDataServiceImpl setLeaderboardGlobalOptInStatusWithOptInStatus:completionQueue:completionBlock:]
// Type encoding: v40@0:8Q16@24@?32
// Implementation: 0x105794278

// -[SCCognacLeaderboardDataServiceImpl sendLeaderboardNotificationsWithLensId:leaderboardId:recipientUserIds:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105794280

// -[SCCognacLeaderboardDataServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105794288

@end
