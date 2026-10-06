// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSelectionStoryObservableRepositoryImpl
// Superclass: NSObject
// Address: 0x112b07d08

@interface SCSelectionStoryObservableRepositoryImpl

// Property: selectionStoryObservable; attributes: T@"SCObservable",R,N
// Property: viewMoreThresholdObservable; attributes: T@"SCObservable",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSelectionStoryObservableRepositoryImpl initWithCustomStoriesDataFetcher:myStoriesDataCoordinator:storyPrivacySettingManager:storyCustomTTLSettingManager:ourStoriesDataCoordinator:snapProProfileIdProvider:snapProProfilesProvider:avatarProvider:selfieProvider:plusFeatureGating:storiesConfigProvider:selectionStoriesLastPostTimeRepository:userPreferences:eligibleForSpotlight:currentUserId:currentUsername:querySorter:circumstanceEngine:snapSource:preSelectedItems:overridePerformer:]
// Type encoding: @180@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112B120@124@132@?140@148q156@164@172
// Implementation: 0x1069722f8

// -[SCSelectionStoryObservableRepositoryImpl _createSelectionStoryObservable]
// Type encoding: @16@0:8
// Implementation: 0x106972ff8

// -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdateOurStoryMostRecentPostTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069736d8

// -[SCSelectionStoryObservableRepositoryImpl _handleUpdateOurStoryMostRecentPostTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069737e4

// -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedStoryPrivacyValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069737e8

// -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedStoryPrivacyValue:]
// Type encoding: v24@0:8@16
// Implementation: 0x1069738f4

// -[SCSelectionStoryObservableRepositoryImpl _performInitializeSnapProProfiles]
// Type encoding: v16@0:8
// Implementation: 0x10697394c

// -[SCSelectionStoryObservableRepositoryImpl _initializeSnapProProfiles]
// Type encoding: v16@0:8
// Implementation: 0x106973a20

// -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedSnapProProfiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x106973a78

// -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedSnapProProfiles:]
// Type encoding: v24@0:8@16
// Implementation: 0x106973b84

// -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106973be4

// -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedCustomStories:]
// Type encoding: v24@0:8@16
// Implementation: 0x106973cf0

// -[SCSelectionStoryObservableRepositoryImpl getMyStories]
// Type encoding: @16@0:8
// Implementation: 0x106973d28

// -[SCSelectionStoryObservableRepositoryImpl _getPrivateStories]
// Type encoding: @16@0:8
// Implementation: 0x106974084

// -[SCSelectionStoryObservableRepositoryImpl _getCustomStoriesByType:]
// Type encoding: @24@0:8q16
// Implementation: 0x10697408c

// -[SCSelectionStoryObservableRepositoryImpl _getSharedStories]
// Type encoding: @16@0:8
// Implementation: 0x106974344

// -[SCSelectionStoryObservableRepositoryImpl _getCommunitySelectionStory]
// Type encoding: @16@0:8
// Implementation: 0x1069743c0

// -[SCSelectionStoryObservableRepositoryImpl _getMapsStory]
// Type encoding: @16@0:8
// Implementation: 0x10697450c

// -[SCSelectionStoryObservableRepositoryImpl getSelectionStoryRankerParameters]
// Type encoding: @16@0:8
// Implementation: 0x106974614

// -[SCSelectionStoryObservableRepositoryImpl defaultMyStoryAudienceRanker]
// Type encoding: q16@0:8
// Implementation: 0x106974c4c

// -[SCSelectionStoryObservableRepositoryImpl _updateSelectionStoriesAboveBelowFoldWithRanker]
// Type encoding: @16@0:8
// Implementation: 0x106974f34

// -[SCSelectionStoryObservableRepositoryImpl _updateSelectionStories]
// Type encoding: v16@0:8
// Implementation: 0x106974fa8

// -[SCSelectionStoryObservableRepositoryImpl _restrictToMyStoryAndPrivateStoryForSpotlightSnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106975cd4

// -[SCSelectionStoryObservableRepositoryImpl _shouldHideEveryoneSetting]
// Type encoding: B16@0:8
// Implementation: 0x106975e88

// -[SCSelectionStoryObservableRepositoryImpl _customTTLInfoForCustomStoryPublicationId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106975fb0

// -[SCSelectionStoryObservableRepositoryImpl _customTTLInfoForBusinessStoryId:]
// Type encoding: @24@0:8@16
// Implementation: 0x106976084

// -[SCSelectionStoryObservableRepositoryImpl selectionStoryObservable]
// Type encoding: @16@0:8
// Implementation: 0x10697616c

// -[SCSelectionStoryObservableRepositoryImpl viewMoreThresholdObservable]
// Type encoding: @16@0:8
// Implementation: 0x106976174

// -[SCSelectionStoryObservableRepositoryImpl searchSelectionStoryObservableForQuery:]
// Type encoding: @24@0:8@16
// Implementation: 0x10697617c

// -[SCSelectionStoryObservableRepositoryImpl selectedSelectionStoryObservable:]
// Type encoding: @24@0:8@16
// Implementation: 0x1069762bc

// -[SCSelectionStoryObservableRepositoryImpl setOurStorySubtextObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x106976418

// -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedOurStorySubtext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106976558

// -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedOurStorySubtext:]
// Type encoding: v24@0:8@16
// Implementation: 0x106976664

// -[SCSelectionStoryObservableRepositoryImpl setOurStorySubtextAndPlaceTagObservable:placeTagsTracker:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1069766c4

// -[SCSelectionStoryObservableRepositoryImpl _performHandleUpdatedOurStorySubtextAndPlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x10697682c

// -[SCSelectionStoryObservableRepositoryImpl _handleUpdatedOurStorySubtextAndPlaceTag:]
// Type encoding: v24@0:8@16
// Implementation: 0x106976938

// -[SCSelectionStoryObservableRepositoryImpl setShowBestOfSpectacles:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976b24

// -[SCSelectionStoryObservableRepositoryImpl _setShowBestOfSpectacles:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976c10

// -[SCSelectionStoryObservableRepositoryImpl setAllowPostingToMapStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976c28

// -[SCSelectionStoryObservableRepositoryImpl _setAllowPostingToMapStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976d14

// -[SCSelectionStoryObservableRepositoryImpl setAllowPostingToPublicStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976d2c

// -[SCSelectionStoryObservableRepositoryImpl _setAllowPostingToPublicStories:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976e18

// -[SCSelectionStoryObservableRepositoryImpl setAllowSavingHighlights:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976e20

// -[SCSelectionStoryObservableRepositoryImpl _setAllowSavingHighlights:]
// Type encoding: v20@0:8B16
// Implementation: 0x106976f0c

// -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forSelectionStory:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106976f14

// -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forMyStoryType:]
// Type encoding: v32@0:8q16Q24
// Implementation: 0x106976f18

// -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forBusinessStoryId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106977094

// -[SCSelectionStoryObservableRepositoryImpl setCustomTTL:forCustomStoryPublicationId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x106977210

// -[SCSelectionStoryObservableRepositoryImpl _setCustomTTL:forSelectionStory:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10697738c

// -[SCSelectionStoryObservableRepositoryImpl _setMyStoryCustomTTLIsAvailable:]
// Type encoding: v20@0:8B16
// Implementation: 0x106977498

// -[SCSelectionStoryObservableRepositoryImpl didSetMyStoryAudience]
// Type encoding: v16@0:8
// Implementation: 0x1069774b0

// -[SCSelectionStoryObservableRepositoryImpl warmUp]
// Type encoding: v16@0:8
// Implementation: 0x106977584

// -[SCSelectionStoryObservableRepositoryImpl _showMyStory]
// Type encoding: B16@0:8
// Implementation: 0x1069775a4

// -[SCSelectionStoryObservableRepositoryImpl _showMyStoryFriendsOnly]
// Type encoding: B16@0:8
// Implementation: 0x1069775f4

// -[SCSelectionStoryObservableRepositoryImpl _showMyStoryCustom]
// Type encoding: B16@0:8
// Implementation: 0x106977644

// -[SCSelectionStoryObservableRepositoryImpl _isSnapProUser]
// Type encoding: B16@0:8
// Implementation: 0x106977688

// -[SCSelectionStoryObservableRepositoryImpl _hasSnapProStandardProfile]
// Type encoding: B16@0:8
// Implementation: 0x1069776ec

// -[SCSelectionStoryObservableRepositoryImpl _isCreateHighlightEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10697772c

// -[SCSelectionStoryObservableRepositoryImpl fetchFromRemote:]
// Type encoding: @20@0:8B16
// Implementation: 0x10697777c

// -[SCSelectionStoryObservableRepositoryImpl sync]
// Type encoding: v16@0:8
// Implementation: 0x106977780

// -[SCSelectionStoryObservableRepositoryImpl provideSnapMapSelectionStoryIfAllowed]
// Type encoding: @16@0:8
// Implementation: 0x106977784

// -[SCSelectionStoryObservableRepositoryImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106977828

@end
