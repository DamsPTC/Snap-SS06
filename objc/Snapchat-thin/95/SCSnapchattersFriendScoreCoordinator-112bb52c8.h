// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapchattersFriendScoreCoordinator
// Superclass: NSObject
// Address: 0x112bb52c8

@interface SCSnapchattersFriendScoreCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapchattersFriendScoreCoordinator initWithDocObjectContext:grpcService:currentDateProvider:grapheneLogger:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108bce654

// -[SCSnapchattersFriendScoreCoordinator friendScoreWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bce7d4

// -[SCSnapchattersFriendScoreCoordinator friendsScoreWithUserIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bce93c

// -[SCSnapchattersFriendScoreCoordinator _friendScoreWithUserId:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bceaac

// -[SCSnapchattersFriendScoreCoordinator _friendsScoresWithUserIds:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bceee8

// -[SCSnapchattersFriendScoreCoordinator _processFetchFriendScoreResponse:snapchatter:currentDateProvider:error:completionQueue:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x108bcf968

// -[SCSnapchattersFriendScoreCoordinator _fetchFriendScoreFromAtlasGwWithUserIds:callbackQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bcfcb8

// -[SCSnapchattersFriendScoreCoordinator _logUserScoreResponseWithEndpoint:success:statusCode:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x108bd0150

// -[SCSnapchattersFriendScoreCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bd01b8

@end
