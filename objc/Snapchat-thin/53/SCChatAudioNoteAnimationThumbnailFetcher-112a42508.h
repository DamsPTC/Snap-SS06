// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatAudioNoteAnimationThumbnailFetcher
// Superclass: NSObject
// Address: 0x112a42508

@interface SCChatAudioNoteAnimationThumbnailFetcher

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCChatAudioNoteAnimationThumbnailFetcher initWithContentDelivery:loadMessageLogger:timeProvider:decoder:userTrackedLogger:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1054f7c3c

// -[SCChatAudioNoteAnimationThumbnailFetcher processSamplesForMessage:conversationId:sampleCount:metricsInfo:completion:]
// Type encoding: v56@0:8@16@24q32@40@?48
// Implementation: 0x1054f7d80

// -[SCChatAudioNoteAnimationThumbnailFetcher coverAnimationImagesForMediaId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054f80f0

// -[SCChatAudioNoteAnimationThumbnailFetcher _processCachedAnimationData:cacheItem:metricsInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1054f8180

// -[SCChatAudioNoteAnimationThumbnailFetcher _processAnimationData:cacheItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054f8378

// -[SCChatAudioNoteAnimationThumbnailFetcher _processCachedAudioNoteData:startTimestamp:cacheItem:shouldFetch:metricsInfo:]
// Type encoding: v52@0:8@16d24@32B40@44
// Implementation: 0x1054f84a8

// -[SCChatAudioNoteAnimationThumbnailFetcher _processAudioNoteData:cacheItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1054f8760

// -[SCChatAudioNoteAnimationThumbnailFetcher _processAudioLinearPCMData:cacheItem:startTimestamp:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x1054f8a0c

// -[SCChatAudioNoteAnimationThumbnailFetcher _onFetchAudioNoteDataForCacheItem:success:startTime:metricsInfo:]
// Type encoding: v44@0:8@16B24d28@36
// Implementation: 0x1054f8b5c

// -[SCChatAudioNoteAnimationThumbnailFetcher _logVoiceNoteFetchWithSuccess:startTime:metricsInfo:]
// Type encoding: v36@0:8B16d20@28
// Implementation: 0x1054f8d6c

// -[SCChatAudioNoteAnimationThumbnailFetcher _logStep:mediaId:startTimestamp:success:]
// Type encoding: v44@0:8q16@24d32B40
// Implementation: 0x1054f8e94

// -[SCChatAudioNoteAnimationThumbnailFetcher .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054f8f30

@end
