// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBloopsFriendsBloopsDataCacheImpl
// Superclass: NSObject
// Address: 0x112a3d9b8

@interface SCBloopsFriendsBloopsDataCacheImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBloopsFriendsBloopsDataCacheImpl initWithTTLInSeconds:retrieveCount:retryProgression:cache:isEnabled:diskCacheTTLInSecond:]
// Type encoding: @60@0:8Q16Q24Q32@40B48Q52
// Implementation: 0x1054bc668

// -[SCBloopsFriendsBloopsDataCacheImpl configureForNewConversation]
// Type encoding: v16@0:8
// Implementation: 0x1054bc7b0

// -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendsBloopsDataForConversationId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054bc89c

// -[SCBloopsFriendsBloopsDataCacheImpl addFriendsBloopsTargetsData:forConversationId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054bcc44

// -[SCBloopsFriendsBloopsDataCacheImpl removeCachedFriendsBloopsDataForConversationId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054bd148

// -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendBloopsDataForUsers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054bd268

// -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendsBloopsDataArrayForUsers:callbackPerformer:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1054bd53c

// -[SCBloopsFriendsBloopsDataCacheImpl getCachedFriendsBloopsDataForUsers:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1054bda04

// -[SCBloopsFriendsBloopsDataCacheImpl removeCachedFriendBloopsDataForUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054be11c

// -[SCBloopsFriendsBloopsDataCacheImpl addFriendBloopsData:forUserId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054be1a0

// -[SCBloopsFriendsBloopsDataCacheImpl addFriendsBloopsData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1054be4a4

// -[SCBloopsFriendsBloopsDataCacheImpl removeAllFriendsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054be5c8

// -[SCBloopsFriendsBloopsDataCacheImpl _cacheKeyForUserId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054be67c

// -[SCBloopsFriendsBloopsDataCacheImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054be710

@end
