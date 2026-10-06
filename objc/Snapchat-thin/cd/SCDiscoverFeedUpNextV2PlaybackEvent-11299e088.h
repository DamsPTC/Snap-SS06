// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedUpNextV2PlaybackEvent
// Superclass: NSObject
// Address: 0x11299e088

@interface SCDiscoverFeedUpNextV2PlaybackEvent

// Property: description; attributes: T@"NSString",N,R

// -[SCDiscoverFeedUpNextV2PlaybackEvent description]
// Type encoding: @16@0:8
// Implementation: 0x104335f10

// -[SCDiscoverFeedUpNextV2PlaybackEvent init]
// Type encoding: @16@0:8
// Implementation: 0x104335f44

// -[SCDiscoverFeedUpNextV2PlaybackEvent copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x104335f8c

// -[SCDiscoverFeedUpNextV2PlaybackEvent matchPlaybackOpenEvent:paginationEvent:boostEvent:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x104336390

// -[SCDiscoverFeedUpNextV2PlaybackEvent .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1043365b4

// +[SCDiscoverFeedUpNextV2PlaybackEvent playbackOpenEventWithInitialDFStories:initialStoryIds:defaultFallbackStories:triggeringAction:triggeringSource:debugBlock:triggeringStoryId:triggeringFeedType:presentingViewController:]
// Type encoding: @76@0:8@16@24@32i40i44@?48@56i64@68
// Implementation: 0x104335f94

// +[SCDiscoverFeedUpNextV2PlaybackEvent paginationEventWithOperaPresenter:lastPlaylistIndexBeforeUpNext:playbackDataProvider:]
// Type encoding: @40@0:8@16Q24@32
// Implementation: 0x1043360fc

// +[SCDiscoverFeedUpNextV2PlaybackEvent boostEventWithBoostedStory:operaPresenter:triggeringAction:]
// Type encoding: @36@0:8@16@24i32
// Implementation: 0x104336160

@end
