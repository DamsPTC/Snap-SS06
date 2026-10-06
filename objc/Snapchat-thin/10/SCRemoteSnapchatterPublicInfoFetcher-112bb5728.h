// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRemoteSnapchatterPublicInfoFetcher
// Superclass: NSObject
// Address: 0x112bb5728

@interface SCRemoteSnapchatterPublicInfoFetcher


// -[SCRemoteSnapchatterPublicInfoFetcher initWithSessionRequestManager:grpcService:snapchattersSnapTokenProvider:grapheneLogger:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108bdd504

// -[SCRemoteSnapchatterPublicInfoFetcher snapchattersWithUserIds:requestSource:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bdd650

// -[SCRemoteSnapchatterPublicInfoFetcher _fetchRemoteSnapchattersWithUserIds:requestSource:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bdd738

// -[SCRemoteSnapchatterPublicInfoFetcher getPendingCompletionGroupMap]
// Type encoding: @16@0:8
// Implementation: 0x108bddbac

// -[SCRemoteSnapchatterPublicInfoFetcher _invokeAllPendingHandlersWithRequestHash:pendingCompletionGroups:block:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bddbd4

// -[SCRemoteSnapchatterPublicInfoFetcher _fetchBatchedRemoteSnapchattersWithUserIds:requestSource:completionQueue:completionHandler:]
// Type encoding: v48@0:8@16q24@32@?40
// Implementation: 0x108bddd48

// -[SCRemoteSnapchatterPublicInfoFetcher _submitBatchedRemoteAtlasGWSnapchattersRequestWithUserIds:requestSource:completionQueue:completionHandler:pendingCompletionGroups:requestHash:]
// Type encoding: v64@0:8@16q24@32@?40@48@56
// Implementation: 0x108bde338

// -[SCRemoteSnapchatterPublicInfoFetcher _getProfileLogoIfPossibleWithProfileLogo:logoType:]
// Type encoding: @28@0:8@16I24
// Implementation: 0x108bdf0f8

// -[SCRemoteSnapchatterPublicInfoFetcher _reportServerNetworkError:requestSource:userIds:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108bdf144

// -[SCRemoteSnapchatterPublicInfoFetcher _reportUnmatchedUserIds:serverSnapchaters:requestSource:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x108bdf148

// -[SCRemoteSnapchatterPublicInfoFetcher _reportExceedFetchLimitErrorWithUserIdsCount:requestSource:]
// Type encoding: v32@0:8Q16q24
// Implementation: 0x108bdf14c

// -[SCRemoteSnapchatterPublicInfoFetcher remoteSnapchatterPublicInfoFetcherRequestLimit]
// Type encoding: Q16@0:8
// Implementation: 0x108bdf150

// -[SCRemoteSnapchatterPublicInfoFetcher _logFetchedSnapchatterNullError]
// Type encoding: v16@0:8
// Implementation: 0x108bdf158

// -[SCRemoteSnapchatterPublicInfoFetcher snapchatterWithUsername:completionQueue:completionHandler:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x108bdf18c

// -[SCRemoteSnapchatterPublicInfoFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108bdf4c4

@end
