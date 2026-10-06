// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStoriesTrayDataSource
// Superclass: NSObject
// Address: 0x112b93768

@interface SCStoriesTrayDataSource

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStoriesTrayDataSource initWithUserSession:snapchattersDataFetcher:customStoriesDataFetcher:customStoriesDataMutator:snapProProfilesProvider:snapProUserProfileIdProvider:snapProPreferencesManager:previewTooltipsProvider:mediaSupportsSpotlightSection:circumstanceEngine:complianceEngine:ourStoriesOnboardingManager:ourStoriesAttributionManager:topicsCollection:hideSnapMap:hidePublicStory:quickPostTrayRefreshEnabled:storyPrivacySettingManager:featureSettingsService:snapchatterPublicInfoFetcher:creatorInfoProvider:]
// Type encoding: @168@0:8@16@24@32@40@48@56@64@72B80@84@92@100@108@116B124B128B132@136@144@152@160
// Implementation: 0x1080378b8

// -[SCStoriesTrayDataSource _setCanPostToHostPublicProfile:]
// Type encoding: v20@0:8B16
// Implementation: 0x108037e68

// -[SCStoriesTrayDataSource _handleSnapProManagedProfiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x108037e70

// -[SCStoriesTrayDataSource _refreshOurStoryTopics]
// Type encoding: v16@0:8
// Implementation: 0x10803815c

// -[SCStoriesTrayDataSource fetchDataWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108038284

// -[SCStoriesTrayDataSource canPostToHostPublicProfile]
// Type encoding: B16@0:8
// Implementation: 0x108038400

// -[SCStoriesTrayDataSource _addCustomStoryWithMutableRowData:storyType:displayName:subText:storyID:error:quickPostTrayRefreshEnabled:]
// Type encoding: v68@0:8@16Q24@32@40@48@56B64
// Implementation: 0x108038408

// -[SCStoriesTrayDataSource _repositionStory:toIndex:inArray:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x1080384e0

// -[SCStoriesTrayDataSource _getRowOrderWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108038578

// -[SCStoriesTrayDataSource _getFirstNameFromUserId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108039300

// -[SCStoriesTrayDataSource _buildParticipantsString:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108039654

// -[SCStoriesTrayDataSource customStoryMetadataForStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108039e88

// -[SCStoriesTrayDataSource getSelectedRowStories:]
// Type encoding: @24@0:8@16
// Implementation: 0x108039e90

// -[SCStoriesTrayDataSource dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10803a314

// -[SCStoriesTrayDataSource _enablePrivateStoryRecencyRanking]
// Type encoding: B16@0:8
// Implementation: 0x10803a35c

// -[SCStoriesTrayDataSource _enableCommunityStories]
// Type encoding: B16@0:8
// Implementation: 0x10803a374

// -[SCStoriesTrayDataSource _enablePublicStoryOrdering]
// Type encoding: B16@0:8
// Implementation: 0x10803a38c

// -[SCStoriesTrayDataSource _impalaPublicStoryAfterMyStoryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10803a3a4

// -[SCStoriesTrayDataSource _updateCustomStories]
// Type encoding: v16@0:8
// Implementation: 0x10803a3ac

// -[SCStoriesTrayDataSource _handleUpdatePostableCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x10803a4e4

// -[SCStoriesTrayDataSource didUpdateCustomStoriesWithPublicationIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10803a590

// -[SCStoriesTrayDataSource didUpdatePostableStories]
// Type encoding: v16@0:8
// Implementation: 0x10803a594

// -[SCStoriesTrayDataSource _shareAnonymouslySpotlightEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10803a598

// -[SCStoriesTrayDataSource _shareAnonymouslySnapMapEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10803a5d8

// -[SCStoriesTrayDataSource _spotlightSubtext]
// Type encoding: @16@0:8
// Implementation: 0x10803a618

// -[SCStoriesTrayDataSource _snapMapSubtext]
// Type encoding: @16@0:8
// Implementation: 0x10803a674

// -[SCStoriesTrayDataSource _generateShareAnonymouslyMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10803a678

// -[SCStoriesTrayDataSource automaticallyCreateHighlight]
// Type encoding: B16@0:8
// Implementation: 0x10803a690

// -[SCStoriesTrayDataSource _myStoryTitleText]
// Type encoding: @16@0:8
// Implementation: 0x10803a704

// -[SCStoriesTrayDataSource _myStorySubtitleText]
// Type encoding: @16@0:8
// Implementation: 0x10803a760

// -[SCStoriesTrayDataSource .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10803a7e4

@end
