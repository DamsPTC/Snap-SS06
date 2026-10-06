// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesActiveStoryStatusDataProvider
// Superclass: NSObject
// Address: 0x112a5a978

@interface SCStoriesActiveStoryStatusDataProvider

// Property: fetchTimestampThreshold; attributes: Tq,N,V_fetchTimestampThreshold
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesActiveStoryStatusDataProvider initWithSTMSNetworkRequester:circumstanceEngine:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056df7b0

// -[SCStoriesActiveStoryStatusDataProvider remoteActiveStoryForUserIds:forceFetch:requestSource:requestOrigin:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16B24q28q36@44@?52
// Implementation: 0x1056df8ec

// -[SCStoriesActiveStoryStatusDataProvider _remoteActiveStoryOnPerfomerForUserIds:forceFetch:requestSource:requestOrigin:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16B24q28q36@44@?52
// Implementation: 0x1056dfa78

// -[SCStoriesActiveStoryStatusDataProvider _makeRequstToFetchActiveStoryWithToFetchUserIds:requestUserIds:requestSource:requestOrigin:shouldUpdateTimestamp:completionQueue:completionBlock:]
// Type encoding: v68@0:8@16@24q32q40B48@52@?60
// Implementation: 0x1056dfe40

// -[SCStoriesActiveStoryStatusDataProvider _filterUserIdToLatestActiveStoryStatusWithUserIds:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056e0078

// -[SCStoriesActiveStoryStatusDataProvider _handleResponseWithError:completionQueue:completionBlock:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1056e0294

// -[SCStoriesActiveStoryStatusDataProvider _handleRepsone:toFetchUserIds:requestUserIds:shouldUpdateTimestamp:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x1056e0358

// -[SCStoriesActiveStoryStatusDataProvider _handleRepsoneWithPerformer:toFetchUserIds:requestUserIds:shouldUpdateTimestamp:completionQueue:completionBlock:]
// Type encoding: v60@0:8@16@24@32B40@44@?52
// Implementation: 0x1056e0528

// -[SCStoriesActiveStoryStatusDataProvider _isActiveStoriesStatusTTLExpired]
// Type encoding: B16@0:8
// Implementation: 0x1056e064c

// -[SCStoriesActiveStoryStatusDataProvider _isStoryExpiredWithTimestamp:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056e06b0

// -[SCStoriesActiveStoryStatusDataProvider _covertToUserIdsToLatestPostTimeStampFromResponse:requestUserIds:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1056e0780

// -[SCStoriesActiveStoryStatusDataProvider _shouldFetchForUserId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1056e08ec

// -[SCStoriesActiveStoryStatusDataProvider fetchTimestampThreshold]
// Type encoding: q16@0:8
// Implementation: 0x1056e09a4

// -[SCStoriesActiveStoryStatusDataProvider setFetchTimestampThreshold:]
// Type encoding: v24@0:8q16
// Implementation: 0x1056e09ac

// -[SCStoriesActiveStoryStatusDataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056e09b4

@end
