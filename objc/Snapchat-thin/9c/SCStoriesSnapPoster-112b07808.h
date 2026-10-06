// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesSnapPoster
// Superclass: NSObject
// Address: 0x112b07808

@interface SCStoriesSnapPoster


// -[SCStoriesSnapPoster initWithDocObjectContext:performer:myStoriesStore:mediaInjestor:mediaCoordinator:thumbnailCoordinator:storyPrivacySettingManager:grapheneMetricsEmitter:currentUserId:currentUsername:snapSender:circumstanceEngine:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x10081df60

// -[SCStoriesSnapPoster retryPostingSnapsWithSnapComponentId:storyIds:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1069620c8

// -[SCStoriesSnapPoster retryPostingSnapsWithSnapComponentId:storyIds:skipRetryCount:completion:]
// Type encoding: v44@0:8@16@24B32@?36
// Implementation: 0x1069620d4

// -[SCStoriesSnapPoster _logNoMediaData]
// Type encoding: v16@0:8
// Implementation: 0x106962b20

// -[SCStoriesSnapPoster _retryPostingSnapsWithSnapComponentId:snap:postingInfo:storyIds:unrecoverableStoryIds:mediaInfo:mediaData:overlayData:skipRetryCount:completion:]
// Type encoding: v92@0:8@16@24@32@40@48@56@64@72B80@?84
// Implementation: 0x106962b30

// -[SCStoriesSnapPoster _retryPostingSnapsOnPerformerWithSnapComponentId:snap:postingInfo:storyIds:unrecoverableStoryIds:mediaInfo:mediaData:overlayData:skipRetryCount:completion:]
// Type encoding: v92@0:8@16@24@32@40@48@56@64@72B80@?84
// Implementation: 0x106962d5c

// -[SCStoriesSnapPoster _logMediaUploadResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069635f4

// -[SCStoriesSnapPoster _postStoryWithPostingInfo:snapDoc:incidentalAttachments:postClientId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1069635fc

// -[SCStoriesSnapPoster .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106963818

@end
