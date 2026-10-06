// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatExternalMediaPreparer
// Superclass: NSObject
// Address: 0x112b050a8

@interface SCChatExternalMediaPreparer


// -[SCChatExternalMediaPreparer initWithMediaDataIngester:mediaStateManager:contentDelivery:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1068eef74

// -[SCChatExternalMediaPreparer _durationMs:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1068ef08c

// -[SCChatExternalMediaPreparer prepareUploadForMedia:mediaMetadata:trackingId:captureSessionId:conversationIds:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1068ef16c

// -[SCChatExternalMediaPreparer prepareUploadForMedia:snapDocKey:snapDocMediaMetadata:trackingId:captureSessionId:conversationIds:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1068ef49c

// -[SCChatExternalMediaPreparer prepareUploadForMediaData:mediaMetadata:trackingId:captureSessionId:conversationIds:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1068efa70

// -[SCChatExternalMediaPreparer _recordVideoCodecHintFromMedia:forMediaId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068efd18

// -[SCChatExternalMediaPreparer _setMediaUploadReferenceForMediaData:mediaMetadata:trackingId:captureSessionId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1068efd90

// -[SCChatExternalMediaPreparer _setMediaUploadReferenceForMediaData:snapDocKey:snapDocMediaMetadata:trackingId:captureSessionId:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x1068f0098

// -[SCChatExternalMediaPreparer _setMediaUploadReferenceForVideoFilter:snapDocKey:snapDocMediaMetadata:trackingId:captureSessionId:transcodeCompletionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x1068f0464

// -[SCChatExternalMediaPreparer _eligibleForChunkedUploadingWithMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068f08fc

// -[SCChatExternalMediaPreparer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f09a8

@end
