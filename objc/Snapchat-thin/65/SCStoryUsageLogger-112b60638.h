// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoryUsageLogger
// Superclass: NSObject
// Address: 0x112b60638

@interface SCStoryUsageLogger

// Property: storyStoryViewSession; attributes: T@"StoryStoryViewSession",&,N,V_storyStoryViewSession
// Property: previousStoryStoryViewSession; attributes: T@"StoryStoryViewSession",&,N,V_previousStoryStoryViewSession
// Property: shouldSamplePlaybackMetrics; attributes: TB,N,V_shouldSamplePlaybackMetrics
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoryUsageLogger initWithUserBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071e1960

// -[SCStoryUsageLogger applicationDidEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e1b9c

// -[SCStoryUsageLogger _logGeofilterStorySnapView:currentStoriesViewingSession:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071e1bd0

// -[SCStoryUsageLogger _logStoryAdTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e2350

// -[SCStoryUsageLogger _logGeofilterStorySnapScreenshotForStory:timeViewed:isLocal:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x1071e251c

// -[SCStoryUsageLogger onStoryStoryViewStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e29c0

// -[SCStoryUsageLogger logPlaybackStallCount:firstStallMediaTime:firstStallDuration:totalStallDuration:currentlyStalled:]
// Type encoding: v52@0:8Q16d24d32d40B48
// Implementation: 0x1071e2c98

// -[SCStoryUsageLogger logViewStorySnapWithRollMaxDegree:rollMinDegree:pinchToZoomMillis:videoViewTimeSec:isFullyViewed:source:currentStoriesViewingSession:snappableInviteAction:contextSnapViewMetrics:]
// Type encoding: v84@0:8d16d24d32d40B48q52@60q68@76
// Implementation: 0x1071e2e80

// -[SCStoryUsageLogger logScreenshotStorySnap:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e42a4

// -[SCStoryUsageLogger _storySnapScreenshotEventForStory:timeViewed:]
// Type encoding: @32@0:8@16d24
// Implementation: 0x1071e4474

// -[SCStoryUsageLogger logSkipStorySnapLegacy:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e4710

// -[SCStoryUsageLogger logStoryStoryView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e4714

// -[SCStoryUsageLogger _logStoryStoryView:friendStoriesViewingSession:firstStoryPosterSnapchatter:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071e495c

// -[SCStoryUsageLogger logStoryStorySession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e5420

// -[SCStoryUsageLogger logStorySnapContextMenuViewWithMediaType:storyType:storySnapId:entryEvent:]
// Type encoding: v48@0:8q16q24@32q40
// Implementation: 0x1071e5674

// -[SCStoryUsageLogger logStorySnapShareSendWithMediaType:storyType:storySnapId:recipientCount:entryEvent:trackingId:viewLocation:]
// Type encoding: v72@0:8q16q24@32Q40q48@56q64
// Implementation: 0x1071e5724

// -[SCStoryUsageLogger updateSnapIndexCount:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e582c

// -[SCStoryUsageLogger _setCommonPropertiesForViewEvent:story:videoViewTimeSec:isFullyViewed:currentStoriesViewingSession:]
// Type encoding: v52@0:8@16@24d32B40@44
// Implementation: 0x1071e58f4

// -[SCStoryUsageLogger _trackAdImpressionForThirdParty:currentStoriesViewingSession:snappableInviteAction:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x1071e5d60

// -[SCStoryUsageLogger _storyTypeSpecificForCurrentFriendStoriesViewingSession:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071e6660

// -[SCStoryUsageLogger _shouldReportViewLocationPosition:]
// Type encoding: B24@0:8q16
// Implementation: 0x1071e66fc

// -[SCStoryUsageLogger _storyAccessTypeForFriendStories:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071e6740

// -[SCStoryUsageLogger _containsGeofilter:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071e6800

// -[SCStoryUsageLogger _groupStoryLoggingIdForId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071e6920

// -[SCStoryUsageLogger _isGroupStoryPostable:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071e69cc

// -[SCStoryUsageLogger _storyTypeSpecificForGroupStoryId:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071e6a4c

// -[SCStoryUsageLogger _friendLinkHopForGroupStoryId:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071e6ad8

// -[SCStoryUsageLogger clearStoriesViewingSession]
// Type encoding: v16@0:8
// Implementation: 0x1071e6b68

// -[SCStoryUsageLogger clearCurrentStoryStoryViewSession]
// Type encoding: v16@0:8
// Implementation: 0x1071e6b94

// -[SCStoryUsageLogger _customStoryDataFetcher]
// Type encoding: @16@0:8
// Implementation: 0x1071e6bdc

// -[SCStoryUsageLogger _friendLinkHopFromCustomStoryMetadata:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071e6c20

// -[SCStoryUsageLogger storyStoryViewSession]
// Type encoding: @16@0:8
// Implementation: 0x1071e6cc8

// -[SCStoryUsageLogger setStoryStoryViewSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e6cd0

// -[SCStoryUsageLogger previousStoryStoryViewSession]
// Type encoding: @16@0:8
// Implementation: 0x1071e6d00

// -[SCStoryUsageLogger setPreviousStoryStoryViewSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071e6d08

// -[SCStoryUsageLogger shouldSamplePlaybackMetrics]
// Type encoding: B16@0:8
// Implementation: 0x1071e6d38

// -[SCStoryUsageLogger setShouldSamplePlaybackMetrics:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071e6d40

// -[SCStoryUsageLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071e6d48

// +[SCStoryUsageLogger storyTypeFromStory:]
// Type encoding: q24@0:8@16
// Implementation: 0x1071e27f0

// +[SCStoryUsageLogger _getStorySnapIndexPos:snapId:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1071e285c

// +[SCStoryUsageLogger storyTypeSpecificWithFriendStories:story:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x1071e66e8

@end
