// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGallerySendController
// Superclass: NSObject
// Address: 0x112b3a0c8

@interface SCGallerySendController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGallerySendController initWithUserSession:cloudFS:memoriesCloudFSServices:encryptedContentManager:dataObjectContext:autoSaveMutating:cameraActiveVideoPaths:circumstanceEngine:contentDelivery:musicSelectionLoader:musicMediaLoader:grapheneRegistry:conversationDestinationParser:currrentPageTracker:customStoriesDataFetcher:customStoriesDataMutator:ephemeralMediaFactory:featureSettingsService:memoriesAutosaveMigrator:galleryMediaSender:imageProcessCommandProvider:legacyEphemeralMediaFactory:snapchattersSynchronousDataFetcher:legacyGalleryStorySaver:lensAssetsDeliveryServices:myStoriesDataCoordinator:memoriesStoryMessageSender:offPlatformLinkGenerationService:performerProvider:previewCameraSourceOverlayService:snapchatterPublicInfoFetcher:previewAssetVideoProviderFactory:previewURLVideoProviderFactory:userInfoServices:snapProUserProfileIdProvider:userTrackedLogger:videoImporter:imageImporter:targetTrajectoryFactory:legacySendToScopeExposer:inviteService:shareYoursClient:snapDocManager:externalMediaLinkSendingService:memoriesThumbnailLogger:memoriesEngagementLogger:snapVideoFilterScopeExposer:snapVideoFilterServices:mergedDataSource:galleryLogger:cachingMediaManager:networker:galleryEncryptedDatabase:reverseAudioCache:galleryStorySaver:memoriesSnapTranscoder:memoriesMediaRetriever:memoriesEntryThumbnailGeneratorBuilder:memoriesTranscodingHelper:memoriesCachingMediaHelper:memoriesSnapDocSaveManager:memoriesSaveManager:memoriesExperimentService:memoriesSnapDocTranscodingManager:memoriesSnapDocParser:videoTrackingServices:storyQuickPostScopeExposer:snapDocDownloadingService:creativeToolsMemoriesResources:usernameToSnapchatterFetcher:topicTrackerCreator:snapDocEditorServices:importEditsResolver:offPlatformShareServices:sendToMentionsConfiguration:snapchatterFetcher:watermarkGenerator:shareScopeExposer:previewSnapSenderFactory:contentPostSendUpsellServices:sendToMemoriesThumbnailGenerator:spotlightNavigationService:createPostScopeExposer:genAIDreamsServices:applicationStorageServices:dreamsSessionService:genAiAnalyticsService:previewABProvider:spotlightAutoShareService:sendToMassSnapNotificationService:valdiRuntimeProvider:mediaVideoImportServices:temporaryFileWriter:spotlightTileServices:memoriesTweaksServices:]
// Type encoding: @776@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616@624@632@640@648@656@664@672@680@688@696@704@712@720@728@736@744@752@760@768
// Implementation: 0x106dc0cf0

// -[SCGallerySendController presentSendViewControllerWithGalleryEntry:sourcePage:fromViewController:userContext:preselectedShareDestination:]
// Type encoding: v56@0:8@16q24@32q40q48
// Implementation: 0x106dc2030

// -[SCGallerySendController presentSendViewControllerWithGallerySnap:sourcePage:fromViewController:userContext:preselectedShareDestination:]
// Type encoding: v56@0:8@16q24@32q40q48
// Implementation: 0x106dc20ec

// -[SCGallerySendController presentSendViewControllerWithGalleryItems:gallerySnaps:orderedGallerySnaps:sourcePage:fromViewController:contextSessionId:userContext:quickPostType:assetIdToCRFeaturedStory:sendControllerDelegate:quickPostFlowDelegate:fromActionMenu:preselectedShareDestination:isPrivate:]
// Type encoding: v120@0:8@16@24@32q40@48@56q64q72@80@88@96B104q108B116
// Implementation: 0x106dc21b4

// -[SCGallerySendController cleanupIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x106dc2b6c

// -[SCGallerySendController _handleCopyLinkFromViewController:fromActionMenu:assetIdToCRFeaturedStory:isPrivate:]
// Type encoding: v40@0:8@16B24@28B36
// Implementation: 0x106dc2bd0

// -[SCGallerySendController _processGalleryItemsForSendingAndShowAlertsWhenFails:gallerySnaps:orderedGallerySnaps:shouldShowToast:fromViewController:userContext:assetIdToCRFeaturedStory:sendItemsTaskBlock:]
// Type encoding: v76@0:8@16@24@32B40@44q52@60@?68
// Implementation: 0x106dc3074

// -[SCGallerySendController _spotlightThumbnailFutureIfEnabledForStoriesPostingConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dc43dc

// -[SCGallerySendController _handleSpotlightCrossPostingEligibilityForConfig:crossPostEligibility:additionalText:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106dc4448

// -[SCGallerySendController _sendTaskWithRecipients:massSnapRecipients:storiesPostingConfig:businessIds:groups:additionalText:]
// Type encoding: v64@0:8@16@24@32@40@48@56
// Implementation: 0x106dc45ac

// -[SCGallerySendController sendItemsTaskDidSendChatOrStoryWithSuccess:storiesPostingConfig:completion:]
// Type encoding: v36@0:8B16@20@?28
// Implementation: 0x106dc49f0

// -[SCGallerySendController sendItemsTaskDidAutoSaveDraft]
// Type encoding: v16@0:8
// Implementation: 0x106dc4aac

// -[SCGallerySendController _sendMemoriesLinkToPhoneNumbers:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106dc4ad8

// -[SCGallerySendController _sendMemoriesLinkToPhoneNumbersHelper:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106dc4be4

// -[SCGallerySendController _resetExternalLinkSendingParameters:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106dc5164

// -[SCGallerySendController _presentSendViewControllerFromViewController:spectaclesOnly:sourcePage:hasMusicSnaps:hasImageSnaps:isShortVideo:hasLongVideo:contextSessionId:snapSource:assetIdToCRFeaturedStory:preselectedShareDestination:]
// Type encoding: v84@0:8@16B24q28B36B40B44B48@52q60@68q76
// Implementation: 0x106dc51dc

// -[SCGallerySendController _createSendPreviewModel:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106dc5488

// -[SCGallerySendController _thumbnailPreviewModelForGalleryMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dc5b74

// -[SCGallerySendController _firstThumbnailPreviewModel]
// Type encoding: @16@0:8
// Implementation: 0x106dc5cd0

// -[SCGallerySendController _multiSelectPreviewModelWithBasePreviewModel:isMultiSelect:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x106dc5e90

// -[SCGallerySendController _createMultiSnapPreviewModel:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dc6098

// -[SCGallerySendController _createLegacySendToScope:fromViewController:spectaclesOnly:sourcePage:hasMusicSnaps:hasImageSnaps:isShortVideo:hasLongVideo:contextSessionId:snapSource:topicTracker:userMentions:lensIds:hasUserTaggedVenue:assetIdToCRFeaturedStory:preselectedShareDestination:]
// Type encoding: @120@0:8@16@24B32q36B44B48B52B56@60q68@76@84@92B100@104q112
// Implementation: 0x106dc61e8

// -[SCGallerySendController _tileCoverSnapDocFromEditor:localVideoURL:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dc6d4c

// -[SCGallerySendController _exportedLocalVideoURLForSnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dc7158

// -[SCGallerySendController _currentSnapDocLazyFuture]
// Type encoding: @16@0:8
// Implementation: 0x106dc7300

// -[SCGallerySendController _generateContentConfiguration:cameraRollGalleryItems:cameraRollPHAssets:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106dc823c

// -[SCGallerySendController generateShareSheetConfiguration:externalShareDreamsMetadata:cameraRollGalleryItems:cameraRollPHAssets:offPlatformShareOnCameraRollEnabled:enableSelectableContacts:assetIdToCRFeaturedStory:preselectedShareDestination:isPrivate:isMultiSnapStory:]
// Type encoding: @80@0:8@16@24@32@40B48B52@56q64B72B76
// Implementation: 0x106dc8558

// -[SCGallerySendController _createTopicTrackerForGallerySnap:hasUserTaggedVenue:]
// Type encoding: @32@0:8@16^B24
// Implementation: 0x106dc9574

// -[SCGallerySendController _captionTopicModelsFromOverlay:snapDocData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dc9770

// -[SCGallerySendController _generateAddFriendLinkShareTextConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x106dc9904

// -[SCGallerySendController _generateShareMediaConfigurationWithCameraRollGalleryItems:cameraRollPHAssets:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dc9a18

// -[SCGallerySendController _hasMusicSnaps:]
// Type encoding: B24@0:8@16
// Implementation: 0x106dc9dc0

// -[SCGallerySendController _hasImageSnaps:phAssets:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x106dc9ed4

// -[SCGallerySendController _snapsAreSpectaclesOnly:]
// Type encoding: B24@0:8@16
// Implementation: 0x106dca0a0

// -[SCGallerySendController _entryIdsForEntryLevelSnapDocs:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dca1d0

// -[SCGallerySendController _preselectedItemsForUserIds:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dca338

// -[SCGallerySendController _preselectedItemsByAddingSpotlight:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dca6f4

// -[SCGallerySendController _startLegacyEagerTranscodingIfEnabledForSnaps:cloudFiles:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106dca990

// -[SCGallerySendController legacySendToScopeDidDismiss:selectedItems:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcae74

// -[SCGallerySendController legacySendToScopeWillSend:sendToSelection:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcafd8

// -[SCGallerySendController _didEndLaunchedFeatureWithSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dcb114

// -[SCGallerySendController _legacySendToScopeWillSendWithSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dcb260

// -[SCGallerySendController _willSendToChatOrStoryWithIsPostingStory:hasRecipientUsernames:hasRecipientUserIds:hasBusinessIds:hasGroups:]
// Type encoding: B36@0:8B16B20B24B28B32
// Implementation: 0x106dcb394

// -[SCGallerySendController _didDismissSendViewController]
// Type encoding: v16@0:8
// Implementation: 0x106dcb3a8

// -[SCGallerySendController _createPerformerWithPerformerProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dcb428

// -[SCGallerySendController didPresentStoryQuickPost]
// Type encoding: v16@0:8
// Implementation: 0x106dcb484

// -[SCGallerySendController didPressSendFromQuickPost:postToMyStory:withBusinessProfiles:withOurStory:withMobStories:withBusinessStoryVariants:]
// Type encoding: v56@0:8i16B20@24@32@40@48
// Implementation: 0x106dcb488

// -[SCGallerySendController postDirectlyToMyStoryAfterInterceptorCheck:withBusinessProfiles:withOurStory:withMobStories:withBusinessStoryVariants:]
// Type encoding: v52@0:8B16@20@28@36@44
// Implementation: 0x106dcb59c

// -[SCGallerySendController _quickPostWithConfig:businessIds:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcb634

// -[SCGallerySendController quickPostShowHintLabel]
// Type encoding: B16@0:8
// Implementation: 0x106dcb67c

// -[SCGallerySendController quickPostSendToDTTRCTAEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106dcb684

// -[SCGallerySendController quickPostUserId]
// Type encoding: @16@0:8
// Implementation: 0x106dcb68c

// -[SCGallerySendController _cleanupQuickPost]
// Type encoding: v16@0:8
// Implementation: 0x106dcb694

// -[SCGallerySendController _exposeQuickPostFromViewController:]
// Type encoding: v24@0:8@16
// Implementation: 0x106dcb740

// -[SCGallerySendController _exposeCreatePostScopeFromViewController:gallerySnaps:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcba1c

// -[SCGallerySendController _exposeCreatePostScopeFromViewController:phAssets:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcba2c

// -[SCGallerySendController _generateThumbnailsForGallerySnaps:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dcba3c

// -[SCGallerySendController _generateThumbnailsForPHAssets:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dcbe80

// -[SCGallerySendController _captionDescriptionForGallerySnap:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dcc2dc

// -[SCGallerySendController _generateThumbnailsAndExposeCreatePostScope:fromViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcc418

// -[SCGallerySendController _generateThumbnailsAndExposeCreatePostScopeFromPHAssets:fromViewController:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcc808

// -[SCGallerySendController _exposeCreatePostScopeWithPreviewAssets:fromViewController:snapCaptureLocation:captionDescription:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x106dccadc

// -[SCGallerySendController _createPostConfigurationWithCaptionDescription:]
// Type encoding: @24@0:8@16
// Implementation: 0x106dcce70

// -[SCGallerySendController tray:positionDidChange:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106dccfa4

// -[SCGallerySendController tray:heightForPosition:]
// Type encoding: d32@0:8@16Q24
// Implementation: 0x106dcd008

// -[SCGallerySendController handleShareDestination:standardExternalContentShareScope:]
// Type encoding: B32@0:8q16@24
// Implementation: 0x106dcd010

// -[SCGallerySendController shareSheetDismissedWithShareDestination:]
// Type encoding: v24@0:8q16
// Implementation: 0x106dcd018

// -[SCGallerySendController createPostScope:didCreatePostWithConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcd060

// -[SCGallerySendController _finishCreatePostWithConfig:spotlightTile:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcd1f4

// -[SCGallerySendController createPostScope:didDismissWithConfig:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcd8f0

// -[SCGallerySendController createPostScope:didSelectMusic:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106dcd904

// -[SCGallerySendController _dismissCreatePostTray]
// Type encoding: v16@0:8
// Implementation: 0x106dcd908

// -[SCGallerySendController _notifySpotlightQuickPostFlowDismissedIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106dcd964

// -[SCGallerySendController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106dcda04

@end
