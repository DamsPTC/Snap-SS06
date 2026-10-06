// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapTokenStorage
// Superclass: NSObject
// Address: 0x112c2b3d8

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
// Implementation: 0x100105d1c

// -[SCSnapTokenStorage getRefreshTokenAsyncWithCompletionPerformer:userId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x10029cca8

// -[SCSnapTokenStorage getCloud1TLTokenAsyncWithCompletionPerformer:userId:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1002c026c

// -[SCSnapTokenStorage setSnapSessionSyncWithRefreshToken:accessTokens:userId:]
// Type encoding: v40@0:8@16r^v24@32
// Implementation: 0x10af7e8bc

// -[SCSnapTokenStorage _setSnapSessionSyncWithRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:]
// Type encoding: v52@0:8@16r^v24@32@40B48
// Implementation: 0x10af7e8cc

// -[SCSnapTokenStorage loadAccessTokensIntoMemoryForUserId:tokenForType:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16Q24
// Implementation: 0x100355a14

// -[SCSnapTokenStorage getAccessTokenAsyncForFetchOperation:userId:completionPerformer:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10af7e9e4

// -[SCSnapTokenStorage getAccessTokenSyncForAccessType:userId:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8Q16@24
// Implementation: 0x10af7ecf8

// -[SCSnapTokenStorage getMemoryCachedAccessTokenSyncForOp:userId:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16@24
// Implementation: 0x100499a3c

// -[SCSnapTokenStorage setAccessTokensSyncWithUserId:accessTokens:]
// Type encoding: v32@0:8@16r^v24
// Implementation: 0x10af7ed88

// -[SCSnapTokenStorage setAccessTokenSyncWithUserId:accessToken:accessType:]
// Type encoding: v128@0:8@16{optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24Q120
// Implementation: 0x10af7edfc

// -[SCSnapTokenStorage setCloud1TLTokenSyncWithUserId:cloud1TLToken:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af7eeb4

// -[SCSnapTokenStorage handleInvalidationSyncForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7ef34

// -[SCSnapTokenStorage clearAllAccessTokensSyncWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7ef8c

// -[SCSnapTokenStorage clearAllInMemoryAccessTokensSyncWithUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7f070

// -[SCSnapTokenStorage getAccessTokenDirectlyFromPersistentStorageForAccesstype:userId:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8Q16@24
// Implementation: 0x10af7f0dc

// -[SCSnapTokenStorage updateWithSession:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af7f1c4

// -[SCSnapTokenStorage updateWithUnverifiedSession:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af7f1cc

// -[SCSnapTokenStorage _updateWithSession:userId:isSessionVerified:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10af7f1d4

// -[SCSnapTokenStorage hasValidSnapTokenSession:]
// Type encoding: B24@0:8@16
// Implementation: 0x100105e68

// -[SCSnapTokenStorage _updateRefreshToken:accessTokens:cloud1TLToken:userId:isSessionVerified:]
// Type encoding: v52@0:8@16r^v24@32@40B48
// Implementation: 0x10af7f378

// -[SCSnapTokenStorage _clearAllTokensForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7f4c8

// -[SCSnapTokenStorage _updateAccessTokens:userId:]
// Type encoding: v32@0:8r^v16@24
// Implementation: 0x10af7f570

// -[SCSnapTokenStorage _clearAccessTokensForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7f708

// -[SCSnapTokenStorage _loadAccessTokenForUserId:op:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16@24
// Implementation: 0x100355f58

// -[SCSnapTokenStorage _getAccessTokenFromDiskForUserId:op:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}32@0:8@16@24
// Implementation: 0x1003565fc

// -[SCSnapTokenStorage _updateAccessToken:accessType:userId:]
// Type encoding: v120@0:8{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})}16Q104@112
// Implementation: 0x10af7f804

// -[SCSnapTokenStorage _clearAccessTokenForAccessType:userId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10af7f918

// -[SCSnapTokenStorage _loadRefreshTokenForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10029d024

// -[SCSnapTokenStorage _updateRefreshToken:userId:isSessionVerified:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10af7f9c0

// -[SCSnapTokenStorage _clearRefreshTokenForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7fa98

// -[SCSnapTokenStorage _loadCloud1TLTokenForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002c07a0

// -[SCSnapTokenStorage _updateCloud1TLToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af7fb40

// -[SCSnapTokenStorage _clearCloud1TLTokenForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af7fc10

// -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24@0:8@16
// Implementation: 0x100499a40

// -[SCSnapTokenStorage _loadInMemoryAccessTokenForOp:shouldValidate:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}28@0:8@16B24
// Implementation: 0x1003562bc

// -[SCSnapTokenStorage _accessTokenFromMemoryForAccessType:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}24@0:8Q16
// Implementation: 0x100356498

// -[SCSnapTokenStorage _removeAccessTokenFromMemoryForAccessTypeKey:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10af7fcb8

// -[SCSnapTokenStorage _setInMemoryAccessTokenValue:forAccessTypeKey:]
// Type encoding: v32@0:8r^v16Q24
// Implementation: 0x100362c7c

// -[SCSnapTokenStorage _readAccessTokenFromDiskForAccessType:userId:op:]
// Type encoding: {optional<snapchat::snaptoken::StoredAccessToken>=(?=c{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})})B}40@0:8Q16@24@32
// Implementation: 0x1003567f8

// -[SCSnapTokenStorage _writeToDiskAccessToken:accessType:userId:]
// Type encoding: v120@0:8{StoredAccessToken=^^?{InternalMetadata=q}(?={Impl_={RepeatedPtrField<std::string>=^vii^{Arena}}{ArenaStringPtr={TaggedStringPtr=^v}}{ArenaStringPtr={TaggedStringPtr=^v}}qqq{CachedSize=i}})}16Q104@112
// Implementation: 0x10af7fe64

// -[SCSnapTokenStorage _removeAccessTokenFromDiskForAccessType:userId:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x10af7ffc0

// -[SCSnapTokenStorage _readRefreshTokenFromDiskForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x100105f60

// -[SCSnapTokenStorage _writeToDiskRefreshToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af80078

// -[SCSnapTokenStorage _removeRefreshTokenFromDiskForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af80164

// -[SCSnapTokenStorage _readCloud1TLTokenFromDiskForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1002c0938

// -[SCSnapTokenStorage _writeToDiskCloud1TLToken:userId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10af801f0

// -[SCSnapTokenStorage _removeCloud1TLTokenFromDiskForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10af802dc

// -[SCSnapTokenStorage refreshToken]
// Type encoding: @16@0:8
// Implementation: 0x10029d128

// -[SCSnapTokenStorage setRefreshToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002be870

// -[SCSnapTokenStorage cloud1TLToken]
// Type encoding: @16@0:8
// Implementation: 0x1002c0930

// -[SCSnapTokenStorage setCloud1TLToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x10035173c

// -[SCSnapTokenStorage invalidated]
// Type encoding: B16@0:8
// Implementation: 0x100105f58

// -[SCSnapTokenStorage setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10af80368

// -[SCSnapTokenStorage .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10af80370

// -[SCSnapTokenStorage .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x100105d04

@end
