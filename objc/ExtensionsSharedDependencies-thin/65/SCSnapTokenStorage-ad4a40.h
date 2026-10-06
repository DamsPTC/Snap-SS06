// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenStorage
// Superclass: NSObject
// Address: 0xad4a40

@interface SCSnapTokenStorage

// Property: refreshToken; attributes: T@"NSString",&,N,V_refreshToken
// Property: cloud1TLToken; attributes: T@"NSString",&,N,V_cloud1TLToken
// Property: invalidated; attributes: TB,N,V_invalidated
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapTokenStorage initWithLogger:diskStorage:validator:useInMemoryRefreshTokenForValidityCheck:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x431efc

// -[SCSnapTokenStorage getRefreshTokenAsyncWithCompletionPerformer:userId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x432020

// -[SCSnapTokenStorage getCloud1TLTokenAsyncWithCompletionPerformer:userId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x432214

// -[SCSnapTokenStorage setSnapSessionSyncWithRefreshToken:accessTokens:userId:]
// Type encoding: v40@0:8@16r^v24@32
// Implementation: 0x4323c4

// -[SCSnapTokenStorage _setSnapSessionSyncWithRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:]
// Type encoding: v52@0:8@16r^v24@32@40B48
// Implementation: 0x4323d4

// -[SCSnapTokenStorage loadAccessTokensIntoMemoryForUserId:tokenForType:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16Q24
// Implementation: 0x432494

// -[SCSnapTokenStorage getAccessTokenAsyncForFetchOperation:userId:completionPerformer:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x4327dc

// -[SCSnapTokenStorage getAccessTokenSyncForAccessType:userId:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8Q16@24
// Implementation: 0x432af0

// -[SCSnapTokenStorage getMemoryCachedAccessTokenSyncForOp:userId:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16@24
// Implementation: 0x432b80

// -[SCSnapTokenStorage setAccessTokensSyncWithUserId:accessTokens:]
// Type encoding: v32@0:8@16r^v24
// Implementation: 0x432b84

// -[SCSnapTokenStorage setAccessTokenSyncWithUserId:accessToken:accessType:]
// Type encoding: v128@0:8@16{optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24Q120
// Implementation: 0x432bf8

// -[SCSnapTokenStorage setCloud1TLTokenSyncWithUserId:cloud1TLToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x432cb0

// -[SCSnapTokenStorage handleInvalidationSyncForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x432d30

// -[SCSnapTokenStorage clearAllAccessTokensSyncWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x432d88

// -[SCSnapTokenStorage clearAllInMemoryAccessTokensSyncWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x432e6c

// -[SCSnapTokenStorage getAccessTokenDirectlyFromPersistentStorageForAccesstype:userId:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8Q16@24
// Implementation: 0x432ed8

// -[SCSnapTokenStorage updateWithSession:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x433048

// -[SCSnapTokenStorage updateWithUnverifiedSession:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x433050

// -[SCSnapTokenStorage _updateWithSession:userId:isSessionVerified:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x433058

// -[SCSnapTokenStorage hasValidSnapTokenSession:]
// Type encoding: B24@0:8@16
// Implementation: 0x4331fc

// -[SCSnapTokenStorage _updateRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:]
// Type encoding: v52@0:8@16r^v24@32@40B48
// Implementation: 0x4332ec

// -[SCSnapTokenStorage _clearAllTokensForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x43343c

// -[SCSnapTokenStorage _updateAccessTokens:userId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x4334e4

// -[SCSnapTokenStorage _clearAccessTokensForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x43367c

// -[SCSnapTokenStorage _loadAccessTokenForUserId:op:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16@24
// Implementation: 0x433778

// -[SCSnapTokenStorage _getAccessTokenFromDiskForUserId:op:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16@24
// Implementation: 0x433a70

// -[SCSnapTokenStorage _updateAccessToken:accessType:userId:]
// Type encoding: v120@0:8{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})}16Q104@112
// Implementation: 0x433c6c

// -[SCSnapTokenStorage _clearAccessTokenForAccessType:userId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x433d80

// -[SCSnapTokenStorage _loadRefreshTokenForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x433e28

// -[SCSnapTokenStorage _updateRefreshToken:userId:isSessionVerified:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x433f2c

// -[SCSnapTokenStorage _clearRefreshTokenForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x434004

// -[SCSnapTokenStorage _loadCloud1TLTokenForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x4340ac

// -[SCSnapTokenStorage _updateCloud1TLToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x4341b0

// -[SCSnapTokenStorage _clearCloud1TLTokenForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x434280

// -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24@0:8@16
// Implementation: 0x434328

// -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:shouldValidate:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}28@0:8@16B24
// Implementation: 0x4343c4

// -[SCSnapTokenStorage _accessTokenFromMemoryForAccessType:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24@0:8Q16
// Implementation: 0x434580

// -[SCSnapTokenStorage _removeAccessTokenFromMemoryForAccessTypeKey:]
// Type encoding: v24@0:8Q16
// Implementation: 0x43463c

// -[SCSnapTokenStorage _setInMemoryAccessTokenValue:forAccessTypeKey:]
// Type encoding: v32@0:8r^v16Q24
// Implementation: 0x4347e8

// -[SCSnapTokenStorage _readAccessTokenFromDiskForAccessType:userId:op:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}40@0:8Q16@24@32
// Implementation: 0x434a74

// -[SCSnapTokenStorage _writeToDiskAccessToken:accessType:userId:]
// Type encoding: v120@0:8{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})}16Q104@112
// Implementation: 0x434c4c

// -[SCSnapTokenStorage _removeAccessTokenFromDiskForAccessType:userId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x434da8

// -[SCSnapTokenStorage _readRefreshTokenFromDiskForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x434e60

// -[SCSnapTokenStorage _writeToDiskRefreshToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x434f88

// -[SCSnapTokenStorage _removeRefreshTokenFromDiskForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x435074

// -[SCSnapTokenStorage _readCloud1TLTokenFromDiskForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x435100

// -[SCSnapTokenStorage _writeToDiskCloud1TLToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x435228

// -[SCSnapTokenStorage _removeCloud1TLTokenFromDiskForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x435314

// -[SCSnapTokenStorage refreshToken]
// Type encoding: @16@0:8
// Implementation: 0x4353a0

// -[SCSnapTokenStorage setRefreshToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x4353a8

// -[SCSnapTokenStorage cloud1TLToken]
// Type encoding: @16@0:8
// Implementation: 0x4353d8

// -[SCSnapTokenStorage setCloud1TLToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x4353e0

// -[SCSnapTokenStorage invalidated]
// Type encoding: B16@0:8
// Implementation: 0x435410

// -[SCSnapTokenStorage setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x435418

// -[SCSnapTokenStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x435420

// -[SCSnapTokenStorage .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x43547c

@end
