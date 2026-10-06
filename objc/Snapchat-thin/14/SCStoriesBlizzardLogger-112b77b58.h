// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesBlizzardLogger
// Superclass: NSObject
// Address: 0x112b77b58

@interface SCStoriesBlizzardLogger

// Property: listenerAnnouncer; attributes: T@"SCStoriesBlizzardEventLoggingListenerAnnouncer",R,N,V_listenerAnnouncer
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesBlizzardLogger initWithUserTrackedLogger:lazyLensLogger:postingLogger:snapProProfilesProvider:currentUserId:performer:unlockableCounterBlock:circumstanceEngine:lensPlusTierService:lensPlusCofService:editContentDivergenceServices:]
// Type encoding: @104@0:8@16@24@32@40@48@56@?64@72@80@88@96
// Implementation: 0x1004310c8

// -[SCStoriesBlizzardLogger addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c93288

// -[SCStoriesBlizzardLogger removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c93290

// -[SCStoriesBlizzardLogger logStorySnapPost:loggingParams:sendMessageAttemptId:postClientId:snapId:relatedSnapId:snapIndex:storyId:destinationMetadata:customStory:actionTs:hasQuote:goLiveTimestamp:quotedUserId:quotedStickerType:repostLogParams:attemptType:]
// Type encoding: v148@0:8@16@24@32@40@48@56q64@72@80@88@96B104q108@116q124@132q140
// Implementation: 0x107c93298

// -[SCStoriesBlizzardLogger logQuickPostTrayPageView:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c93ce4

// -[SCStoriesBlizzardLogger logQuickPostRouteDecision:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c93d34

// -[SCStoriesBlizzardLogger _logStorySegmentPostIfNeededForSnap:loggingParams:postClientId:snapId:relatedSnapId:storyId:destinationMetadata:customStory:actionTs:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107c93d84

// -[SCStoriesBlizzardLogger _logStorySegmentPostForSnap:segmentLoggingParams:postClientId:snapId:relatedSnapId:storyId:destinationMetadata:customStory:actionTs:]
// Type encoding: v88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x107c93fa8

// -[SCStoriesBlizzardLogger _setStoryPostEventFields:withSnapDoc:loggingParams:uniqueId:relatedSnapId:storyId:destinationMetadata:customStory:actionTs:goLiveTimestamp:]
// Type encoding: v96@0:8@16@24@32@40@48@56@64@72@80q88
// Implementation: 0x107c9442c

// -[SCStoriesBlizzardLogger _setStoryPostEventFields:withAllSegmentLoggingParams:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c94af0

// -[SCStoriesBlizzardLogger _handleSnapProfilesResult:uniqueId:storySnapPostWithEvent:snap:loggingParams:postClientId:snapId:storyId:destinationMetadata:customStory:actionTs:sendMessageAttemptId:]
// Type encoding: v112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x107c94bd0

// -[SCStoriesBlizzardLogger _logStorySnapPostWithEvent:snap:loggingParams:sendMessageAttemptId:storyId:destinationMetadata:customStory:snapProAccountOwnerId:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x107c95378

// -[SCStoriesBlizzardLogger _logGeofilterStorySnapPostWithSnap:loggingParams:sendMessageAttemptId:storyId:destinationMetadata:customStory:snapProAccountOwnerId:]
// Type encoding: v72@0:8@16@24@32@40@48@56@64
// Implementation: 0x107c95670

// -[SCStoriesBlizzardLogger logDirectSnapPreviewIfNeededForSnapDoc:loggingParams:storyIdToDestinationMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107c96988

// -[SCStoriesBlizzardLogger logStoryStoryView:loggingInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c9794c

// -[SCStoriesBlizzardLogger logStorySnapView:loggingInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c97de0

// -[SCStoriesBlizzardLogger logStorySnapScreenshot:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c98f6c

// -[SCStoriesBlizzardLogger logStoryStorySave:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c990d0

// -[SCStoriesBlizzardLogger logStorySnapSave:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c991f8

// -[SCStoriesBlizzardLogger logStoryStorySession:loggingInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107c99378

// -[SCStoriesBlizzardLogger logFailedToCreateCustomStoryWithFailType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107c994b0

// -[SCStoriesBlizzardLogger logDeleteCustomStoryWithPublicationId:storyTypeSpecific:leaveType:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107c99518

// -[SCStoriesBlizzardLogger logCreateCustomStoryWithLogParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c995e8

// -[SCStoriesBlizzardLogger logSharedStoryProfileOpenWithPublicationId:sourcePage:sourcePageSessionId:pageEntryType:]
// Type encoding: v48@0:8@16q24@32q40
// Implementation: 0x107c997a8

// -[SCStoriesBlizzardLogger logSharedStoryProfileViewWithPublicationId:sourcePage:viewTimeSec:pageExitType:]
// Type encoding: v48@0:8@16q24d32q40
// Implementation: 0x107c998a4

// -[SCStoriesBlizzardLogger logSharedStoryProfileActionWithPublicationId:isCreator:actionName:]
// Type encoding: v36@0:8@16B24q28
// Implementation: 0x107c99980

// -[SCStoriesBlizzardLogger logSharedStoryInviteWithLogParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c99a3c

// -[SCStoriesBlizzardLogger logCustomStoryCreationOptionSelectWithCreateType:createSource:sourcePageSessionId:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x107c99b38

// -[SCStoriesBlizzardLogger logStoryPrivacyUpdateFrom:to:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107c99bdc

// -[SCStoriesBlizzardLogger logCustomStoryItemImpWithPublicationId:itemType:storyTypeSpecific:readyLatency:]
// Type encoding: v48@0:8@16q24q32d40
// Implementation: 0x107c99c90

// -[SCStoriesBlizzardLogger logCustomStoryItemActionWithPublicationId:itemType:storyTypeSpecific:actionName:]
// Type encoding: v48@0:8@16q24q32q40
// Implementation: 0x107c99d58

// -[SCStoriesBlizzardLogger logDeleteStorySnapWithId:posterGuid:posted:viewCount:storyType:storyTypeSpecific:storyId:goLiveTimestamp:]
// Type encoding: v76@0:8@16@24B32q36q44q52@60q68
// Implementation: 0x107c99e18

// -[SCStoriesBlizzardLogger logStoryManagementViewWithStoryType:timeViewed:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x107c99f70

// -[SCStoriesBlizzardLogger logStoryViewerListPageViewWithViewerCount:timeViewed:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x107c99ff0

// -[SCStoriesBlizzardLogger logStoryManagementSpotlightStatusActionWithActionType:snapId:spotlightSnapStatus:]
// Type encoding: v40@0:8q16@24q32
// Implementation: 0x107c9a07c

// -[SCStoriesBlizzardLogger logWatchOnSpotlightCTATap]
// Type encoding: v16@0:8
// Implementation: 0x107c9a120

// -[SCStoriesBlizzardLogger logV2WatchOnSpotlightCTATapWithContextSessionId:reshareItemId:subitemId:contentSharerUserId:postingVersion:buttonType:]
// Type encoding: v64@0:8@16@24@32@40q48q56
// Implementation: 0x107c9a174

// -[SCStoriesBlizzardLogger logSnapTakedownWithId:liveTime:takeDownSessionId:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x107c9a280

// -[SCStoriesBlizzardLogger logCreatorSubscribeEntryPointImpressionWithCreatorId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107c9a334

// -[SCStoriesBlizzardLogger _segmentSourceFromCommonParams:]
// Type encoding: q24@0:8@16
// Implementation: 0x107c9a3d4

// -[SCStoriesBlizzardLogger listenerAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x107c9a464

// -[SCStoriesBlizzardLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107c9a46c

// +[SCStoriesBlizzardLogger announcerIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x107c9327c

@end
