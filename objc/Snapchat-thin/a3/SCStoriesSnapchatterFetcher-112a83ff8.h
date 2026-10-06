// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapchatterFetcher
// Superclass: NSObject
// Address: 0x112a83ff8

@interface SCStoriesSnapchatterFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesSnapchatterFetcher initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:friendsResponseResultObservable:docObjectContext:circumstanceEngine:grapheneMetricsEmitter:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105a27924

// -[SCStoriesSnapchatterFetcher fetchUsernamesWithUserIds:fetchSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a27ab0

// -[SCStoriesSnapchatterFetcher fetchSnapchattersWithUserIds:fetchSource:completionQueue:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105a27bfc

// -[SCStoriesSnapchatterFetcher _fetchSnapchattersWithUserIds:fetchSource:fetchStartTime:completionQueue:completion:]
// Type encoding: v56@0:8@16@24d32@40@?48
// Implementation: 0x105a27cac

// -[SCStoriesSnapchatterFetcher _handleFetchedLocalSnapchattersWithUserIds:snapchatterByUserId:fetchSource:fetchStartTime:completion:]
// Type encoding: v56@0:8@16@24@32d40@?48
// Implementation: 0x105a2810c

// -[SCStoriesSnapchatterFetcher _fetchLocalNonExistingUsersWithUserIds:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105a284d4

// -[SCStoriesSnapchatterFetcher _handleFetchedLocalNonExistingUsersWithUserIds:snapchatterByUserId:fetchSource:fetchStartTime:completion:]
// Type encoding: v56@0:8@16@24@32d40@?48
// Implementation: 0x105a287ec

// -[SCStoriesSnapchatterFetcher _fetchRemoteSnapchattersWithUserIds:fetchSource:fetchStartTime:completion:]
// Type encoding: v48@0:8@16@24d32@?40
// Implementation: 0x105a28aec

// -[SCStoriesSnapchatterFetcher removeExpiredNonexistingUsers]
// Type encoding: v16@0:8
// Implementation: 0x105a28eb0

// -[SCStoriesSnapchatterFetcher _logRemoteSnapchatterFetchResult:fetchSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a28f40

// -[SCStoriesSnapchatterFetcher handleNonexistingSnapchatters:fetchSource:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105a28f48

// -[SCStoriesSnapchatterFetcher _logLatencyWithFetchStartTime:step:fetchSource:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x105a29044

// -[SCStoriesSnapchatterFetcher _didReceiveResponseWithWaitStatus:]
// Type encoding: v20@0:8i16
// Implementation: 0x105a290d0

// -[SCStoriesSnapchatterFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a291e8

@end
