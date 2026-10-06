// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPlusStoreKitUserServiceImpl
// Superclass: NSObject
// Address: 0x112b265c8

@interface SCPlusStoreKitUserServiceImpl


// -[SCPlusStoreKitUserServiceImpl initWithPerformerProvider:grpcClientFactory:plusServices:userInfoFetcherServices:snapchattersDataMutator:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106c5f158

// -[SCPlusStoreKitUserServiceImpl forceSyncSubscriptionState]
// Type encoding: @16@0:8
// Implementation: 0x106c5f2cc

// -[SCPlusStoreKitUserServiceImpl forceSyncSubscriptionStateWithTargetTier:targetStatus:]
// Type encoding: @24@0:8I16I20
// Implementation: 0x106c5f58c

// -[SCPlusStoreKitUserServiceImpl fetchExternalUserIdWithSk2Transaction:]
// Type encoding: @24@0:8@16
// Implementation: 0x106c5f638

// -[SCPlusStoreKitUserServiceImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106c5ffd8

// +[SCPlusStoreKitUserServiceImpl _syncUserInfoIfNeeded:userInfoFetcherServices:snapchattersDataMutator:performer:targetTier:targetStatus:]
// Type encoding: @56@0:8@16@24@32@40i48i52
// Implementation: 0x106c5f6bc

// +[SCPlusStoreKitUserServiceImpl _syncUserInfoWithBackoff:userInfoFetcherServices:snapchattersDataMutator:performer:promise:targetTier:targetStatus:currentAttempt:]
// Type encoding: v72@0:8@16@24@32@40@48i56i60q64
// Implementation: 0x106c5f7ac

// +[SCPlusStoreKitUserServiceImpl _sendGetExternalUserIDRequestWithGrpcClient:sk2Transaction:promise:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106c5fc8c

// +[SCPlusStoreKitUserServiceImpl _syncFriends:]
// Type encoding: v24@0:8@16
// Implementation: 0x106c5ff6c

@end
