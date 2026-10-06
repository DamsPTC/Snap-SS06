// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCChatMediaRequestManager
// Superclass: NSObject
// Address: 0x112b052d8

@interface SCChatMediaRequestManager


// -[SCChatMediaRequestManager initWithMediaRequestAPI:mediaStateManager:chatLogger:loadMessageLogger:chatGraphene:messagingExperimentService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x1004960d0

// -[SCChatMediaRequestManager initWithMediaRequestAPI:chatLogger:loadMessageLogger:chatGraphene:mediaContentDownloadHandler:messagingExperimentService:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100496238

// -[SCChatMediaRequestManager downloadChatMediaForChatMediaContent:messageBodyType:messageId:messageTrackingId:conversationId:isGroupConversation:requestContext:requestSource:downloadSuccess:downloadFailure:]
// Type encoding: v92@0:8@16q24@32@40@48B56q60q68@?76@?84
// Implementation: 0x1068f26bc

// -[SCChatMediaRequestManager _downloadChatMediaForChatMediaContent:messageBodyType:messageId:messageTrackingId:conversationId:isGroupConversation:requestContext:requestSource:downloadSuccess:downloadFailure:]
// Type encoding: v92@0:8@16q24@32@40@48B56q60q68@?76@?84
// Implementation: 0x1068f2940

// -[SCChatMediaRequestManager _logDiscreteStepForMessageId:mediaId:itemMediaId:mediaDurationSec:bodyType:conversationId:mediaType:isGroupConversation:multiSnapMetadata:requestContext:]
// Type encoding: v92@0:8@16@24@32d40q48@56q64B72@76q84
// Implementation: 0x1068f2cb4

// -[SCChatMediaRequestManager _startDownloadHandler:downloableItem:downloadSuccess:downloadFailure:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1068f315c

// -[SCChatMediaRequestManager _startDownloadHandler:downloableItem:mediaId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068f33b4

// -[SCChatMediaRequestManager _boostDownloadRequestForHandler:downloableItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068f3684

// -[SCChatMediaRequestManager _startDownloadHandler:downloableItem:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068f37d0

// -[SCChatMediaRequestManager _removeDownloadableItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068f37dc

// -[SCChatMediaRequestManager _isDownloadingForMediaId:]
// Type encoding: B24@0:8@16
// Implementation: 0x1068f388c

// -[SCChatMediaRequestManager _insertDownloadableItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068f3920

// -[SCChatMediaRequestManager _insertDownloadCompletionHandler:failureHandler:mediaId:]
// Type encoding: v40@0:8@?16@?24@32
// Implementation: 0x1068f3a4c

// -[SCChatMediaRequestManager _dispatchCompletionHandlersWithSuccess:mediaId:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1068f3b80

// -[SCChatMediaRequestManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068f3ce0

@end
