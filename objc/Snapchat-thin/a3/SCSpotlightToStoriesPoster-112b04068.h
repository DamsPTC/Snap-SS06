// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpotlightToStoriesPoster
// Superclass: NSObject
// Address: 0x112b04068

@interface SCSpotlightToStoriesPoster

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSpotlightToStoriesPoster initWithUserSession:ephemeralMediaFactory:galleryStorySaver:legacyEphemeralMediaFactory:snapSender:snapVideoFilterCoordinator:mediaDataIngestor:storiesThumbnailCoordinator:networkConnectivityMonitor:circumstanceEngine:spotlightConfigProvider:contentProductSnapRenderer:snapDocManagerServices:snapDocEditorFactory:lensMetadataBuilder:storiesMediaCoordinator:myStoriesDataCoordinating:storiesGrapheneMetricsEmitter:storyPrivacySettingManager:snapVideoFilterFactory:userInfoServices:snapUploaderServices:notificationManager:]
// Type encoding: @200@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192
// Implementation: 0x1068a3af4

// -[SCSpotlightToStoriesPoster postSpotlightWithPlaybackMetadata:spotlightObservable:storiesConfig:delayInSecond:showUndoToast:]
// Type encoding: v52@0:8@16@24@32d40B48
// Implementation: 0x1068a40f8

// -[SCSpotlightToStoriesPoster deleteSpotlightPostingWithPlaybackMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068a43ac

// -[SCSpotlightToStoriesPoster _getOrCreateStateForSpotlightStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068a44fc

// -[SCSpotlightToStoriesPoster _getStateForSpotlightStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1068a4574

// -[SCSpotlightToStoriesPoster _startPostingWithPlaybackMetadata:spotlightObservable:storiesConfig:delayInSecond:]
// Type encoding: v48@0:8@16@24@32d40
// Implementation: 0x1068a457c

// -[SCSpotlightToStoriesPoster _postSpotlightWithParams:spotlightStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068a49f0

// -[SCSpotlightToStoriesPoster _postSpotlightOnPerformerWithParams:spotlightStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068a4b24

// -[SCSpotlightToStoriesPoster _performSpotlightPostWithParams:spotlightStoryId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1068a4be8

// -[SCSpotlightToStoriesPoster _deleteSpotlightPostingOnPerformerWithSpotlightStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068a4f30

// -[SCSpotlightToStoriesPoster _deleteSpotlightPostingWithClientId:serverId:spotlightStoryId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1068a53d0

// -[SCSpotlightToStoriesPoster didUpdateMyStoriesDataRequest:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068a5544

// -[SCSpotlightToStoriesPoster _announcePostedClientIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x1068a5740

// -[SCSpotlightToStoriesPoster .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1068a58a0

@end
