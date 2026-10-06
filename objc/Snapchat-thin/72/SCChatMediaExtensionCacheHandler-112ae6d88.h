// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaExtensionCacheHandler
// Superclass: NSObject
// Address: 0x112ae6d88

@interface SCChatMediaExtensionCacheHandler

// Property: delegate; attributes: T@"<SCUpdateMediaLoadStateHandler>",W,N,V_delegate

// -[SCChatMediaExtensionCacheHandler initWithUserId:nativeSessionManager:chatGraphene:loadMessageLogger:contentDelivery:prefetchedMediaReader:circumstanceEngine:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100496498

// -[SCChatMediaExtensionCacheHandler nativeConversationManager]
// Type encoding: @16@0:8
// Implementation: 0x10659e8c8

// -[SCChatMediaExtensionCacheHandler loadMediaFromExtensionForConversationId:messageId:messageTrackingId:messageBodyType:media:isGroupConversation:fetchArroyoConversation:userInitiated:]
// Type encoding: B68@0:8@16@24@32q40@48B56B60B64
// Implementation: 0x10659e910

// -[SCChatMediaExtensionCacheHandler _loadMediaFromExtensionForConversationId:messageId:messageTrackingId:messageBodyType:media:file:isGroupConversation:fetchArroyoConversation:userInitiated:]
// Type encoding: v76@0:8@16@24@32q40@48@56B64B68B72
// Implementation: 0x10659ebf8

// -[SCChatMediaExtensionCacheHandler _startLoadMediaFromExtensionForConversationId:messageId:messageTrackingId:messageBodyType:media:file:isGroupConversation:userInitiated:]
// Type encoding: v72@0:8@16@24@32q40@48@56B64B68
// Implementation: 0x10659f210

// -[SCChatMediaExtensionCacheHandler _logLoadMessageStartForConversationId:messageTrackingId:messageBodyType:media:isGroupConversation:]
// Type encoding: v52@0:8@16@24q32@40B48
// Implementation: 0x10659f990

// -[SCChatMediaExtensionCacheHandler _logSaveToCacheForMediaId:start:success:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x10659fc74

// -[SCChatMediaExtensionCacheHandler _processLoadMessageTimestamps:mediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10659fd1c

// -[SCChatMediaExtensionCacheHandler _shouldSkipLoadingMediaFromExtension:]
// Type encoding: B24@0:8@16
// Implementation: 0x1065a00e8

// -[SCChatMediaExtensionCacheHandler _prefetchedMediaDirectory]
// Type encoding: @16@0:8
// Implementation: 0x1065a01ac

// -[SCChatMediaExtensionCacheHandler _getBoltContentIdForPrefetchedMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065a01e4

// -[SCChatMediaExtensionCacheHandler delegate]
// Type encoding: @16@0:8
// Implementation: 0x1065a0310

// -[SCChatMediaExtensionCacheHandler setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1004966c4

// -[SCChatMediaExtensionCacheHandler .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065a0328

@end
