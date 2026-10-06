// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCognacGRPCService
// Superclass: NSObject
// Address: 0x112a62f88

@interface SCCognacGRPCService


// -[SCCognacGRPCService initWithGRPCClientFactory:]
// Type encoding: @24@0:8@16
// Implementation: 0x10579023c

// -[SCCognacGRPCService getCanvasTokenWithAppId:externalUserId:sessionId:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x1057905a8

// -[SCCognacGRPCService submitLeaderboardScoreWithAppId:leaderboardId:score:orderingType:isStudioLens:lensId:optInStatus:completionQueue:completionBlock:]
// Type encoding: v84@0:8@16@24q32Q40B48@52Q60@68@?76
// Implementation: 0x105790a40

// -[SCCognacGRPCService getScoreVisibilityWithAppId:leaderboardId:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105790e5c

// -[SCCognacGRPCService setScoreVisibilityWithAppId:scoreVisible:completionQueue:completionBlock:]
// Type encoding: v44@0:8@16B24@28@?36
// Implementation: 0x1057914f0

// -[SCCognacGRPCService getLeaderboardWithLeaderboardId:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1057917d4

// -[SCCognacGRPCService batchGetLeaderboardEntriesWithLeaderboardId:userIds:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105791aac

// -[SCCognacGRPCService listFriendLeaderboardDataWithLeaderboardId:currentUserId:limit:orderingType:isStudioLens:completionQueue:completionBlock:]
// Type encoding: v68@0:8@16@24q32Q40B48@52@?60
// Implementation: 0x105791e5c

// -[SCCognacGRPCService listFriendLeaderboardEntriesWithLeaderboardId:currentUserId:completionQueue:completionBlock:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1057921f8

// -[SCCognacGRPCService getLeaderboardTopScoresDataWithLeaderboardId:limit:orderingType:isStudioLens:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16q24Q32B40@44@?52
// Implementation: 0x1057924a0

// -[SCCognacGRPCService getLeaderboardTopScoresEntriesWithLeaderboardId:limit:completionQueue:completionBlock:]
// Type encoding: v44@0:8@16i24@28@?36
// Implementation: 0x1057927b8

// -[SCCognacGRPCService getGlobalOptInStatusWithCompletionQueue:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105792a10

// -[SCCognacGRPCService setGlobalOptInStatusWithOptInStatus:completionQueue:completionBlock:]
// Type encoding: v40@0:8q16@24@?32
// Implementation: 0x105792c60

// -[SCCognacGRPCService sendLeaderboardNotificationsWithLensId:leaderboardId:recipientUserIds:completionQueue:completionBlock:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x105792fa4

// -[SCCognacGRPCService .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057932b4

@end
