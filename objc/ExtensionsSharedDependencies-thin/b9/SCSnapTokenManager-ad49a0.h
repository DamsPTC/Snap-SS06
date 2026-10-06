// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenManager
// Superclass: NSObject
// Address: 0xad49a0

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
// Implementation: 0x42c478

// -[SCSnapTokenManager initWithRequestsProvider:circumstanceEngine:logger:userId:snapTokenStorageBackedUp:source:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x42c670

// -[SCSnapTokenManager initWithRequestsProvider:logger:userId:snapTokenStorageBackedUp:source:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x42c6a0

// -[SCSnapTokenManager initWithTokenStorage:snapTokenStore:networkRequests:circumstanceEngine:logger:userId:internalDelegate:isMainAppInstance:source:]
// Type encoding: @84@0:8@16@24@32@40@48@56@64B72@76
// Implementation: 0x42c6b8

// -[SCSnapTokenManager snapTokenStore]
// Type encoding: @16@0:8
// Implementation: 0x42cdac

// -[SCSnapTokenManager fetchAccessTokenForAccessType:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8Q16@24@32@?40@?48
// Implementation: 0x42cdd4

// -[SCSnapTokenManager fetchAccessTokenTrySyncFirstForAccessType:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v56@0:8Q16@24@32@?40@?48
// Implementation: 0x42cf18

// -[SCSnapTokenManager fetchAccessTokenTrySyncFirstWithLoggingParams:requestId:accessType:successQueue:failureQueue:successBlock:failureBlock:]
// Type encoding: v72@0:8@16@24Q32@40@48@?56@?64
// Implementation: 0x42cf54

// -[SCSnapTokenManager invalidate]
// Type encoding: v16@0:8
// Implementation: 0x42d500

// -[SCSnapTokenManager getRefreshTokenWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x42d7d0

// -[SCSnapTokenManager _handleInvalidate]
// Type encoding: v16@0:8
// Implementation: 0x42dc54

// -[SCSnapTokenManager _startAccessTokenFetchForOp:]
// Type encoding: v24@0:8@16
// Implementation: 0x42dd24

// -[SCSnapTokenManager _fetchAccessTokenFromStorageDoneForOp:token:]
// Type encoding: v120@0:8@16{optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24
// Implementation: 0x42e258

// -[SCSnapTokenManager _shouldPrefetchForToken:]
// Type encoding: C24@0:8r^v16
// Implementation: 0x42e470

// -[SCSnapTokenManager doPrefetchForAccessType:referrer:tryDiskFirst:lastFetchTokenAgeInSeconds:successBlock:]
// Type encoding: v52@0:8Q16@24B32q36@?44
// Implementation: 0x42e4a8

// -[SCSnapTokenManager _executeDoPrefetchForAccessType:referrer:tryDiskFirst:lastFetchTokenAgeInSeconds:successBlock:]
// Type encoding: v52@0:8Q16@24B32q36@?44
// Implementation: 0x42e690

// -[SCSnapTokenManager _getRefreshTokenToExchangeForOp:]
// Type encoding: v24@0:8@16
// Implementation: 0x42eabc

// -[SCSnapTokenManager _refreshTokenFetchDoneForOp:refreshToken:needsCloud1TLToken:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x42f0bc

// -[SCSnapTokenManager _handleMissingRefreshTokenForOp:]
// Type encoding: v24@0:8@16
// Implementation: 0x42f154

// -[SCSnapTokenManager _networkFetchAccessTokenForOp:refreshToken:needsCloud1TLToken:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x42f1f4

// -[SCSnapTokenManager _handleAccessTokenNetworkFetchSuccessForResponse:]
// Type encoding: v24@0:8r^v16
// Implementation: 0x42f58c

// -[SCSnapTokenManager _handleAccessTokenNetworkFetchForError:]
// Type encoding: v24@0:8@16
// Implementation: 0x42fa0c

// -[SCSnapTokenManager _accessTokenDoneWithSuccessForOp:accessToken:]
// Type encoding: v32@0:8@16r^v24
// Implementation: 0x42fc78

// -[SCSnapTokenManager _accessTokenDoneWithErrorForOp:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x42fdd4

// -[SCSnapTokenManager _assertMissingRefreshToken]
// Type encoding: B16@0:8
// Implementation: 0x42fed8

// -[SCSnapTokenManager _immediateSnaptokenStorageCleanupOnLogout]
// Type encoding: B16@0:8
// Implementation: 0x42ff64

// -[SCSnapTokenManager cleanOldTokensOnLogin]
// Type encoding: v16@0:8
// Implementation: 0x42fff0

// -[SCSnapTokenManager clearAccessTokens]
// Type encoding: B16@0:8
// Implementation: 0x430158

// -[SCSnapTokenManager clearInMemoryAccessTokens]
// Type encoding: B16@0:8
// Implementation: 0x4302a0

// -[SCSnapTokenManager invalidateApiGwAccessToken]
// Type encoding: B16@0:8
// Implementation: 0x4303e8

// -[SCSnapTokenManager _prefix]
// Type encoding: @16@0:8
// Implementation: 0x4306b4

// -[SCSnapTokenManager pendingAccessTokenFetchWaiters]
// Type encoding: @16@0:8
// Implementation: 0x4306e8

// -[SCSnapTokenManager invalidated]
// Type encoding: B16@0:8
// Implementation: 0x4306f0

// -[SCSnapTokenManager setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x4306fc

// -[SCSnapTokenManager tokenStorage]
// Type encoding: @16@0:8
// Implementation: 0x430704

// -[SCSnapTokenManager networkRequests]
// Type encoding: @16@0:8
// Implementation: 0x43070c

// -[SCSnapTokenManager userId]
// Type encoding: @16@0:8
// Implementation: 0x430714

// -[SCSnapTokenManager performer]
// Type encoding: @16@0:8
// Implementation: 0x43071c

// -[SCSnapTokenManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x430724

// +[SCSnapTokenManager _createNSErrorWithCode:errorReason:origError:]
// Type encoding: @40@0:8Q16@24@32
// Implementation: 0x42daf0

@end
