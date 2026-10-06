// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDocObjectCachedSnapchatterPublicInfoFetcher
// Superclass: NSObject
// Address: 0x112bb54a8

@interface SCDocObjectCachedSnapchatterPublicInfoFetcher


// -[SCDocObjectCachedSnapchatterPublicInfoFetcher initWithDocObjectContext:usernameSnapchatterFetcher:remoteSnapchatterFetcher:userIdSnapchatterFetcher:currentDateProvider:grapheneLogger:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x108bd6f20

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher cachedSnapchatterWithUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bd7158

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher snapchattersWithUserIds:requestSource:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bd72b8

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher snapchattersWithUserIds:requestSource:completionQueue:localFetchCompletionHandler:remoteFetchCompletionHandler:]
// Type encoding: v56@0:8@16q24@32@?40@?48
// Implementation: 0x108bd746c

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher localAndRemoteSnapchattersWithUserIds:requestSource:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bd7654

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher remoteSnapchatterPublicInfoFetcherRequestLimit]
// Type encoding: Q16@0:8
// Implementation: 0x108bd77d8

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _snapchattersWithUserIds:requestSource:completionQueue:completionHandler:localFetchCompletionHandler:remoteFetchCompletionHandler:]
// Type encoding: v64@0:8@16q24@32@?40@?48@?56
// Implementation: 0x108bd77e0

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchattersFromCacheForUserIds:fetchedSnapchatters:requestSource:completionQueue:completionHandler:localFetchCompletionHandler:remoteFetchCompletionHandler:]
// Type encoding: v72@0:8@16@24q32@40@?48@?56@?64
// Implementation: 0x108bd7cec

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchattersFromServerForUserIds:fetchedSnapchatters:requestSource:completionQueue:completionHandler:remoteFetchCompletionHandler:]
// Type encoding: v64@0:8@16@24q32@40@?48@?56
// Implementation: 0x108bd8068

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _filterInvalidUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108bd8568

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _updateInvalidUserIdsFromSnapchatters:userIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108bd8694

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _upsertDocObjectFromSnapchatters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd8924

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _processUpsertDocObjectFromPublicInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x108bd8c50

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher snapchattersPublicInfoObserver]
// Type encoding: @16@0:8
// Implementation: 0x108bd8dec

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _logUnexpectedUserIds:requestSource:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108bd8e20

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher localAndRemoteSnapchatterWithUsername:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd8e24

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _snapchatterWithUsername:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd8fa4

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchatterFromCacheForUsername:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd9274

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher _fetchSnapchatterFromServerForUsername:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bd93c4

// -[SCDocObjectCachedSnapchatterPublicInfoFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bd95c0

@end
