// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDrawerMediaSender
// Superclass: NSObject
// Address: 0x112b0c1c8

@interface SCDrawerMediaSender


// -[SCDrawerMediaSender initWithCoreMessageSender:externalMediaPreparer:voiceNoteTranscriptionService:messagingExperimentService:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106a25548

// -[SCDrawerMediaSender sendDrawerMedias:quotedMessageId:conversationIds:platformAnalytics:botMetadata:completionHandler:]
// Type encoding: v64@0:8@16@24@32@40@48@?56
// Implementation: 0x106a25660

// -[SCDrawerMediaSender forwardExternalMedias:mediaType:localMediaReferences:conversationIds:platformAnalytics:completionHandler:]
// Type encoding: v64@0:8@16q24@32@40@48@?56
// Implementation: 0x106a2588c

// -[SCDrawerMediaSender sendGif:quotedMessageId:conversationIds:platformAnalytics:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106a25a24

// -[SCDrawerMediaSender prepareUploadForAudioNote:conversationIds:trackingId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a25bc8

// -[SCDrawerMediaSender sendAudioNote:quotedMessageId:conversationIds:platformAnalytics:completionHandler:]
// Type encoding: v56@0:8@16@24@32@40@?48
// Implementation: 0x106a25cac

// -[SCDrawerMediaSender _locale]
// Type encoding: @16@0:8
// Implementation: 0x106a26000

// -[SCDrawerMediaSender _prepareUploadForExternalMedia:trackingId:conversationIds:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106a26094

// -[SCDrawerMediaSender .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106a261f8

@end
