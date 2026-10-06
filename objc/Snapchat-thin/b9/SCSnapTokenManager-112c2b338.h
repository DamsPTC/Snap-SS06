// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenManager
// Superclass: NSObject
// Address: 0x112c2b338

@interface SCSnapTokenManager

// Property: pendingAccessTokenFetchWaiters; attributes: T@"NSMutableSet",R,N,V_pendingAccessTokenFetchWaiters
// Property: invalidated; attributes: TB,V_invalidated
// Property: tokenStorage; attributes: T@"<SCSnapTokenStorageProtocol>",R,N,V_tokenStorage
// Property: networkRequests; attributes: T@"<SCSnapTokenNetworkRequestsProtocol>",R,N,V_networkRequests
// Property: userId; attributes: T@"NSString",R,C,N,V_userId
// Property: performer; attributes: T@"SCQueuePerformer",R,N,V_performer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:internalDelegate:snapTokenStorageBackedUp:isMainAppInstance:source:]
// Type encoding: @76@0:8@16@24@32@40@48@56B64@68
// Implementation: 0x10029c1fc

// -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:snapTokenStorageBackedUp:source:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10af7aef8

// -[SCSnapTokenManager initWithRequestsProvider:logger:userId:snapTokenStorageBackedUp:source:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10af7af28

// -[SCSnapTokenManager initWithTokenStorage:snapTokenStore:networkRequests:circumstanceEngine:logger:userId:internalDelegate:isMainAppInstance:source:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64B72@76
// Implementation: 0x10029c68c

// -[SCSnapTokenManager snapTokenStore]
// Type encoding: @16@0:8
// Implementation: 0x10af7af40

// -[SCSnapTokenManager fetchAccessTokenForAccessType:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8Q16@24@32@?40@?48
// Implementation: 0x10af7af68

// -[SCSnapTokenManager fetchAccessTokenTrySyncFirstForAccessType:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8Q16@24@32@?40@?48
// Implementation: 0x10055ee40

// -[SCSnapTokenManager fetchAccessTokenTrySyncFirstWithLoggingParams:requestId:accessType:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24Q32@40@48@?56@?64
// Implementation: 0x100494364

// -[SCSnapTokenManager invalidate]
// Type encoding: v16@0:8
// Implementation: 0x10af7b0dc

// -[SCSnapTokenManager getRefreshTokenWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10af7b3ac

// -[SCSnapTokenManager _handleInvalidate]
// Type encoding: v16@0:8
// Implementation: 0x10af7b7b0

// -[SCSnapTokenManager _startAccessTokenFetchForOp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003555d8

// -[SCSnapTokenManager _fetchAccessTokenFromStorageDoneForOp:token:]
// Type encoding: v120@0:8@16{optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24
// Implementation: 0x1003b8548

// -[SCSnapTokenManager _shouldPrefetchForToken:]
// Type encoding: C24@0:8r^v16
// Implementation: 0x1003ba048

// -[SCSnapTokenManager doPrefetchForAccessType:referrer:tryDiskFirst:lastFetchTokenAgeInSeconds:successBlock:]
// Type encoding: v52@0:8Q16@24B32q36@?44
// Implementation: 0x100351770

// -[SCSnapTokenManager _executeDoPrefetchForAccessType:referrer:tryDiskFirst:lastFetchTokenAgeInSeconds:successBlock:]
// Type encoding: v52@0:8Q16@24B32q36@?44
// Implementation: 0x100351ad8

// -[SCSnapTokenManager _getRefreshTokenToExchangeForOp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7b938

// -[SCSnapTokenManager _refreshTokenFetchDoneForOp:refreshToken:needsCloud1TLToken:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10af7bf38

// -[SCSnapTokenManager _handleMissingRefreshTokenForOp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7bfd0

// -[SCSnapTokenManager _networkFetchAccessTokenForOp:refreshToken:needsCloud1TLToken:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10af7c070

// -[SCSnapTokenManager _handleAccessTokenNetworkFetchSuccessForResponse:]
// Type encoding: v24@0:8r^v16
// Implementation: 0x10af7c3f4

// -[SCSnapTokenManager _handleAccessTokenNetworkFetchForError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7c874

// -[SCSnapTokenManager _accessTokenDoneWithSuccessForOp:accessToken:]
// Type encoding: v32@0:8@16r^v24
// Implementation: 0x1003b87b0

// -[SCSnapTokenManager _accessTokenDoneWithErrorForOp:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af7cae0

// -[SCSnapTokenManager _assertMissingRefreshToken]
// Type encoding: B16@0:8
// Implementation: 0x10af7cbe4

// -[SCSnapTokenManager _immediateSnaptokenStorageCleanupOnLogout]
// Type encoding: B16@0:8
// Implementation: 0x10af7cc70

// -[SCSnapTokenManager cleanOldTokensOnLogin]
// Type encoding: v16@0:8
// Implementation: 0x10af7ccfc

// -[SCSnapTokenManager clearAccessTokens]
// Type encoding: B16@0:8
// Implementation: 0x10af7ce64

// -[SCSnapTokenManager clearInMemoryAccessTokens]
// Type encoding: B16@0:8
// Implementation: 0x10af7cfac

// -[SCSnapTokenManager invalidateApiGwAccessToken]
// Type encoding: B16@0:8
// Implementation: 0x10af7d0f4

// -[SCSnapTokenManager _prefix]
// Type encoding: @16@0:8
// Implementation: 0x1003520e0

// -[SCSnapTokenManager pendingAccessTokenFetchWaiters]
// Type encoding: @16@0:8
// Implementation: 0x10af7d3c0

// -[SCSnapTokenManager invalidated]
// Type encoding: B16@0:8
// Implementation: 0x1003559f0

// -[SCSnapTokenManager setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af7d3c8

// -[SCSnapTokenManager tokenStorage]
// Type encoding: @16@0:8
// Implementation: 0x10029cc90

// -[SCSnapTokenManager networkRequests]
// Type encoding: @16@0:8
// Implementation: 0x10af7d3d0

// -[SCSnapTokenManager userId]
// Type encoding: @16@0:8
// Implementation: 0x10029cca0

// -[SCSnapTokenManager performer]
// Type encoding: @16@0:8
// Implementation: 0x10029cc98

// -[SCSnapTokenManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af7d3d8

// +[SCSnapTokenManager _createNSErrorWithCode:errorReason:origError:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x10af7b64c

@end
