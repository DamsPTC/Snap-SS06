// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryPostingMediaInjestor
// Superclass: NSObject
// Address: 0x112b69c38

@interface SCStoryPostingMediaInjestor

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: showToastWhenComplete; attributes: TB,R,N,V_showToastWhenComplete

// -[SCStoryPostingMediaInjestor initWithEphemeralMedia:completion:showToastWhenComplete:lazyMediaDataIngestor:lazyStoriesMediaCoordinator:lazyMyStoriesDataCoordinator:storiesGrapheneMetricsEmitter:]
// Type encoding: @68@0:8@16@?24B32@36@44@52@60
// Implementation: 0x107a08198

// -[SCStoryPostingMediaInjestor initWithEphemeralMedia:mediaCoordinator:myStoriesDataCoordinator:mediaInjestor:grapheneMetricsEmitter:completion:showToastWhenComplete:timeoutInterval:]
// Type encoding: @76@0:8@16@24@32@40@48@?56B64d68
// Implementation: 0x107a081bc

// -[SCStoryPostingMediaInjestor mentionedUsernames]
// Type encoding: @16@0:8
// Implementation: 0x107a08448

// -[SCStoryPostingMediaInjestor mentionedUserIds]
// Type encoding: @16@0:8
// Implementation: 0x107a08450

// -[SCStoryPostingMediaInjestor trayMentionedUserIds]
// Type encoding: @16@0:8
// Implementation: 0x107a085a4

// -[SCStoryPostingMediaInjestor quotedUserId]
// Type encoding: @16@0:8
// Implementation: 0x107a0871c

// -[SCStoryPostingMediaInjestor quotedStickerType]
// Type encoding: q16@0:8
// Implementation: 0x107a08724

// -[SCStoryPostingMediaInjestor repostedMentionUserId]
// Type encoding: @16@0:8
// Implementation: 0x107a0872c

// -[SCStoryPostingMediaInjestor shareYoursId]
// Type encoding: @16@0:8
// Implementation: 0x107a08734

// -[SCStoryPostingMediaInjestor ephemeralMediaVideoProcessingDidSucceedForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a0873c

// -[SCStoryPostingMediaInjestor ephemeralMediaVideoProcessingDidFailForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a087c8

// -[SCStoryPostingMediaInjestor ephemeralMediaImageProcessingDidCompleteForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a088e4

// -[SCStoryPostingMediaInjestor ephemeralMediaUploadDidStartForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a08970

// -[SCStoryPostingMediaInjestor ephemeralMediaUploadDidSucceedForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a08994

// -[SCStoryPostingMediaInjestor ephemeralMediaUploadDidFailForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a089b8

// -[SCStoryPostingMediaInjestor _saveMediaToCache]
// Type encoding: v16@0:8
// Implementation: 0x107a089bc

// -[SCStoryPostingMediaInjestor _handleFetchedDataToUpload:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a08be0

// -[SCStoryPostingMediaInjestor _handleFetchMediaTimeout]
// Type encoding: v16@0:8
// Implementation: 0x107a08fd4

// -[SCStoryPostingMediaInjestor _updatePostingState]
// Type encoding: v16@0:8
// Implementation: 0x107a09028

// -[SCStoryPostingMediaInjestor _startMonitoringUploadProgress]
// Type encoding: v16@0:8
// Implementation: 0x107a090c8

// -[SCStoryPostingMediaInjestor _updateUploadProgressWithProgress:]
// Type encoding: v24@0:8@16
// Implementation: 0x107a092b8

// -[SCStoryPostingMediaInjestor _updateUploadProgressToUploaded]
// Type encoding: v16@0:8
// Implementation: 0x107a09384

// -[SCStoryPostingMediaInjestor showToastWhenComplete]
// Type encoding: B16@0:8
// Implementation: 0x107a09404

// -[SCStoryPostingMediaInjestor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107a0940c

@end
