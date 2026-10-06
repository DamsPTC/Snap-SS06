// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSharedStorySnapManager
// Superclass: NSObject
// Address: 0x112b06688

@interface SCSharedStorySnapManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSharedStorySnapManager initWithStoriesMediaCoordinator:circumstanceEngine:chatContentDelivery:sharedStoryManagerNetworkRequester:userBlizzardLogger:legacyStoryMediaCache:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x10691b574

// -[SCSharedStorySnapManager fetchMediaForStoryId:senderUsername:sequenceNumber:conversationId:userInitiated:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:withRequestContexts:]
// Type encoding: v84@0:8@16@24@32@40B48@?52@?60@?68@76
// Implementation: 0x10691b6c8

// -[SCSharedStorySnapManager _fetchStoryMediaIfNeeded:readFromContentManager:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10691baa4

// -[SCSharedStorySnapManager _handleRequestSuccessWithStoryElementResponse:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:withRequestContexts:metadataFetchStartTs:]
// Type encoding: v64@0:8@16@?24@?32@?40@48d56
// Implementation: 0x10691bf50

// -[SCSharedStorySnapManager _handleRequestFailureWithError:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:metadataFetchStartTs:]
// Type encoding: v56@0:8@16@?24@?32@?40d48
// Implementation: 0x10691c2a0

// -[SCSharedStorySnapManager fetchMediaV2ForStoryId:senderUsername:sequenceNumber:conversationId:userInitiated:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:withRequestContexts:]
// Type encoding: v84@0:8@16@24@32@40B48@?52@?60@?68@76
// Implementation: 0x10691c3a4

// -[SCSharedStorySnapManager _handleRequestFailureV2WithError:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:metadataFetchStartTs:]
// Type encoding: v56@0:8@16@?24@?32@?40d48
// Implementation: 0x10691c768

// -[SCSharedStorySnapManager _handleRequestSuccessWithStory:metadataDownloadCompletion:storyDownloadCompletion:thumbnailDownloadCompletion:metadataFetchStartTs:]
// Type encoding: v56@0:8@16@?24@?32@?40d48
// Implementation: 0x10691c868

// -[SCSharedStorySnapManager _fetchStoryMediaV2:readFromContentManager:completion:]
// Type encoding: v36@0:8@16B24@?28
// Implementation: 0x10691ca90

// -[SCSharedStorySnapManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10691cf70

@end
