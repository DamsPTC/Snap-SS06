// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesTopicsBlizzardLogger
// Superclass: NSObject
// Address: 0x112b77bf8

@interface SCStoriesTopicsBlizzardLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesTopicsBlizzardLogger initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x107c9dce8

// -[SCStoriesTopicsBlizzardLogger logTopicPageOpenWithTopic:sessionId:sourcePage:sourcePageSessionId:pageEntryType:storyType:extraParams:]
// Type encoding: v72@0:8@16@24q32@40q48q56@64
// Implementation: 0x107c9dd5c

// -[SCStoriesTopicsBlizzardLogger logTopicPageViewWithTopic:sessionId:sourcePageSessionId:viewTimeSec:pageExitType:storyType:numSnaps:extraParams:]
// Type encoding: v80@0:8@16@24@32d40q48q56@64@72
// Implementation: 0x107c9df2c

// -[SCStoriesTopicsBlizzardLogger logFeedPageViewWithTopic:sessionId:hasJoinTheChatButton:hasSoundShareButton:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x107c9e124

// -[SCStoriesTopicsBlizzardLogger logTopicItemActionForTopic:sessionId:sourcePageSessionId:itemLogParameters:actionType:storyType:numSnaps:extraParams:]
// Type encoding: v80@0:8@16@24@32@40q48q56@64@72
// Implementation: 0x107c9e1e8

// -[SCStoriesTopicsBlizzardLogger logTopicItemImpressionForTopic:sessionId:itemLogParameters:impressionType:storyType:]
// Type encoding: v56@0:8@16@24@32q40q48
// Implementation: 0x107c9e4c8

// -[SCStoriesTopicsBlizzardLogger logJoinTopicChatTappedWithTopic:sessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c9e6b8

// -[SCStoriesTopicsBlizzardLogger logSoundFavoriteAction:trackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:]
// Type encoding: v68@0:8B16@20@28@36q44@52@60
// Implementation: 0x107c9e794

// -[SCStoriesTopicsBlizzardLogger logTrendingSoundsButtonTapWithTrackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:]
// Type encoding: v64@0:8@16@24@32q40@48@56
// Implementation: 0x107c9e7a4

// -[SCStoriesTopicsBlizzardLogger logShareSoundTapWithTrackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:]
// Type encoding: v64@0:8@16@24@32q40@48@56
// Implementation: 0x107c9e7e0

// -[SCStoriesTopicsBlizzardLogger logShareSoundSubmitWithTrackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:]
// Type encoding: v64@0:8@16@24@32q40@48@56
// Implementation: 0x107c9e81c

// -[SCStoriesTopicsBlizzardLogger _logSoundTopicItemActionWithActionType:trackId:sessionId:sourcePageSessionId:storyType:numSnaps:extraParams:]
// Type encoding: v72@0:8q16@24@32@40q48@56@64
// Implementation: 0x107c9e858

// -[SCStoriesTopicsBlizzardLogger _pageInstanceInfoWithTopic:sessionId:storyType:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107c9ea4c

// -[SCStoriesTopicsBlizzardLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c9eaf4

@end
