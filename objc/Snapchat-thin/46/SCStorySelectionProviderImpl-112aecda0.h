// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStorySelectionProviderImpl
// Superclass: NSObject
// Address: 0x112aecda0

@interface SCStorySelectionProviderImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStorySelectionProviderImpl initWithEntrypoint:]
// Type encoding: @24@0:8@16
// Implementation: 0x1066720d8

// -[SCStorySelectionProviderImpl getSelectionWithForceShowPicker:uiContainer:]
// Type encoding: @28@0:8B16@20
// Implementation: 0x106672174

// -[SCStorySelectionProviderImpl getSelectionWithForceShowPicker:forceDirectSend:preselectPublicStoryId:preselectPrivateStoryId:preselectFanPassStoryId:uiContainer:captureSessionId:snapSessionId:sendToSessionId:postSessionClientId:]
// Type encoding: @88@0:8B16B20@24@32@40@48@56@64@72@80
// Implementation: 0x1066721ac

// -[SCStorySelectionProviderImpl _evaluateShouldDirectPostToMyStoryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10667254c

// -[SCStorySelectionProviderImpl getSelectionForceDirectMyStoryWithCaptureSessionId:sendToSessionId:postSessionClientId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106672bd8

// -[SCStorySelectionProviderImpl shouldDirectPostToMyStory]
// Type encoding: @16@0:8
// Implementation: 0x106672d40

// -[SCStorySelectionProviderImpl _completeWithDirectMyStoryResult]
// Type encoding: v16@0:8
// Implementation: 0x106672e24

// -[SCStorySelectionProviderImpl _completeWithDirectPublicStoryResultWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106672f38

// -[SCStorySelectionProviderImpl _completeWithDirectFanPassStoryResultWithStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106673084

// -[SCStorySelectionProviderImpl _completeWithDirectCustomStoryResultWithStoryId:uiContainer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106673240

// -[SCStorySelectionProviderImpl _completeWithDirectStoryResultWithStoryId:postToMyStory:postToPublicStory:businessIds:allCustomStoriesMetadata:customStoryExternalIds:businessStoryVariants:]
// Type encoding: v64@0:8@16B24B28@32@40@48@56
// Implementation: 0x106673480

// -[SCStorySelectionProviderImpl _presentStoriesTrayWithUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10667366c

// -[SCStorySelectionProviderImpl getSpotlightSelectionWithSnapDoc:uiViewController:memberRoleProfileInfo:originalPostCompositeStoryId:createPostABConfig:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1066741b4

// -[SCStorySelectionProviderImpl didPressStoriesTraySendWithAddToMyStory:fanPassSelected:fanPassBusinessId:ourStorySelected:customStoriesSelected:businessProfilesSelected:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:sendPressSourceType:exitType:]
// Type encoding: v112@0:8B16B20@24@32@40@48q56@64@72@80q88q96q104
// Implementation: 0x106674750

// -[SCStorySelectionProviderImpl logPendingQuickPostTrayPageViewWithPostSessionClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x106675024

// -[SCStorySelectionProviderImpl didDismissStoriesTray]
// Type encoding: v16@0:8
// Implementation: 0x106675088

// -[SCStorySelectionProviderImpl emitQuickPostDismissTrayWithoutSendEventWithExitType:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:]
// Type encoding: v64@0:8q16q24@32@40@48q56
// Implementation: 0x106675090

// -[SCStorySelectionProviderImpl createPostScope:didCreatePostWithConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066750cc

// -[SCStorySelectionProviderImpl _finishCreatePostWithConfig:spotlightTile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1066752b4

// -[SCStorySelectionProviderImpl createPostScope:didDismissWithConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106675a70

// -[SCStorySelectionProviderImpl _dismissCreatePostTray]
// Type encoding: v16@0:8
// Implementation: 0x106675b44

// -[SCStorySelectionProviderImpl _completeWithSpotlightOnlyStoryId:storyMetadata:isRemixAllowed:additionalText:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x106675c2c

// -[SCStorySelectionProviderImpl _completeWithAutoShareStoriesConfig:spotlightStoryId:additionalText:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x106675dd4

// -[SCStorySelectionProviderImpl cancelCurrentSelection]
// Type encoding: v16@0:8
// Implementation: 0x106675f70

// -[SCStorySelectionProviderImpl _completeWithValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106675f78

// -[SCStorySelectionProviderImpl _storyTypeCountsFromArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x106676010

// -[SCStorySelectionProviderImpl _mapToSCAStoryTypeSpecific:]
// Type encoding: q24@0:8Q16
// Implementation: 0x1066761b0

// -[SCStorySelectionProviderImpl _logQuickPostTrayPageViewWithExitType:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:postSessionClientId:]
// Type encoding: v72@0:8q16q24@32@40@48q56@64
// Implementation: 0x1066761d0

// -[SCStorySelectionProviderImpl _logQuickPostRouteDecision:]
// Type encoding: v24@0:8q16
// Implementation: 0x1066763c8

// -[SCStorySelectionProviderImpl _stageQuickPostTrayPageViewWithExitType:storyTrayOpenedTimestampMs:storyTrayStoryTypesAvailable:storyTrayStoryTypesSeen:storyTrayStoryTypesSelected:storyTrayFirstStorySeenAtTimestampMs:]
// Type encoding: v64@0:8q16q24@32@40@48q56
// Implementation: 0x10667648c

// -[SCStorySelectionProviderImpl _clearPendingQuickPostTrayPageView]
// Type encoding: v16@0:8
// Implementation: 0x106676540

// -[SCStorySelectionProviderImpl _clearQuickPostLoggingContext]
// Type encoding: v16@0:8
// Implementation: 0x106676594

// -[SCStorySelectionProviderImpl _bitmojiSelfieFetchRequestForCurrentUser]
// Type encoding: @16@0:8
// Implementation: 0x1066765dc

// -[SCStorySelectionProviderImpl _preselectedCustomStoriesPublicationIDs]
// Type encoding: @16@0:8
// Implementation: 0x1066767e4

// -[SCStorySelectionProviderImpl _beginCreatePostFlowWithPreviewAssets:uiViewController:memberRoleProfileInfo:originalPostCompositeStoryId:createPostABConfig:snapDoc:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x1066769b0

// -[SCStorySelectionProviderImpl _spotlightDescriptionFromSnapDocCaptions:]
// Type encoding: @24@0:8@16
// Implementation: 0x106677078

// -[SCStorySelectionProviderImpl _signedInUserMemberRoleProfile]
// Type encoding: @16@0:8
// Implementation: 0x106677350

// -[SCStorySelectionProviderImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106677514

@end
