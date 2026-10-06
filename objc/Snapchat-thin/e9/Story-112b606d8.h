// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: Story
// Superclass: EphemeralMedia
// Address: 0x112b606d8

@interface Story

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: savedUsername; attributes: T@"NSString",C,N,V_savedUsername
// Property: atomicUsername; attributes: T@"NSString",C,V_atomicUsername
// Property: atomicMediaState; attributes: Tq,V_atomicMediaState
// Property: lastMediaLoadError; attributes: T@"NSError",&,V_lastMediaLoadError
// Property: expirationDate; attributes: T@"NSDate",&,V_expirationDate
// Property: mediaKey; attributes: T@"NSString",C,V_mediaKey
// Property: mediaIv; attributes: T@"NSString",C,V_mediaIv
// Property: thumbnailIv; attributes: T@"NSString",C,V_thumbnailIv
// Property: thumbnailURL; attributes: T@"NSURL",&,V_thumbnailURL
// Property: thumbnailId; attributes: T@"NSString",C,V_thumbnailId
// Property: mediaAPPURL; attributes: T@"NSURL",&,V_mediaAPPURL
// Property: mediaD2SURL; attributes: T@"NSURL",&,V_mediaD2SURL
// Property: streamingMediaInfo; attributes: T@"SCStoriesStreamingInfo",C,V_streamingMediaInfo
// Property: shouldPostStoryAfterMediaUploaded; attributes: TB,V_shouldPostStoryAfterMediaUploaded
// Property: unrecoverable; attributes: TB,V_unrecoverable
// Property: searchStoryId; attributes: T@"NSString",C,V_searchStoryId
// Property: curationSourceStoryId; attributes: T@"NSString",C,V_curationSourceStoryId
// Property: mediaState; attributes: Tq
// Property: postingState; attributes: Tq,V_postingState
// Property: shouldShowToastWhenPostComplete; attributes: TB,V_shouldShowToastWhenPostComplete
// Property: mediaURL; attributes: T@"NSURL",&,N
// Property: mediaId; attributes: T@"NSString",C,N,V_mediaId
// Property: boltMedia; attributes: T@"NSString",&,N,V_boltMedia
// Property: boltOverlay; attributes: T@"NSString",&,N,V_boltOverlay
// Property: requestContexts; attributes: T@"NSArray",C,V_requestContexts
// Property: timestamp; attributes: T@"NSDate",&,V_timestamp
// Property: posterUserId; attributes: T@"NSString",C,V_posterUserId
// Property: userDisplayName; attributes: T@"NSString",C,V_userDisplayName
// Property: businessProfileHostUsername; attributes: T@"NSString",C,V_businessProfileHostUsername
// Property: userPostedTimestamp; attributes: T@"NSDate",&,V_userPostedTimestamp
// Property: markedAsViewedTimestamp; attributes: T@"NSDate",&,V_markedAsViewedTimestamp
// Property: clientIdSnapComponent; attributes: T@"NSString",R,N
// Property: isOfficialStory; attributes: TB,V_isOfficialStory
// Property: officialBadgeType; attributes: Tq,V_officialBadgeType
// Property: isBusinessStory; attributes: TB,R,N
// Property: isPublic; attributes: TB,V_isPublic
// Property: isSavedStory; attributes: TB,R,N
// Property: isPromotedStory; attributes: TB,V_isPromotedStory
// Property: boostMetadata; attributes: T@"SCBoostMetadata",&,V_boostMetadata
// Property: spotlightEngagementMetadata; attributes: T@"SCSpotlightEngagementMetadata",&,V_spotlightEngagementMetadata
// Property: viewed; attributes: TB,V_viewed
// Property: flushableStoryId; attributes: T@"NSString",C,V_flushableStoryId
// Property: needsAuthToFetch; attributes: TB,V_needsAuthToFetch
// Property: screenshotToReportCount; attributes: TQ,V_screenshotToReportCount
// Property: savedByUser; attributes: TB,V_savedByUser
// Property: framing; attributes: T@"SOJUStoryFrame",C,V_framing
// Property: ourStoriesMetadataToPostTo; attributes: T@"NSArray",&,V_ourStoriesMetadataToPostTo
// Property: shouldCreateHighlight; attributes: TB,V_shouldCreateHighlight
// Property: isSpotlightStory; attributes: TB,V_isSpotlightStory
// Property: spotlightSnapStatus; attributes: Tq,V_spotlightSnapStatus
// Property: sharedStoryGroupId; attributes: T@"NSString",&,V_sharedStoryGroupId
// Property: sharedStoryDisplayName; attributes: T@"NSString",&,V_sharedStoryDisplayName
// Property: sharedStoryUserId; attributes: T@"NSString",C,V_sharedStoryUserId
// Property: sharedStoryAvatarId; attributes: T@"NSString",C,V_sharedStoryAvatarId
// Property: sharedStorySelfieId; attributes: T@"NSString",C,V_sharedStorySelfieId
// Property: sharedStoryGeoLocation; attributes: T@"NSString",C,V_sharedStoryGeoLocation
// Property: selectedSponsor; attributes: T@"SCStoriesPostingSponsor",&,V_selectedSponsor
// Property: businessProfile; attributes: T@"IMPBusinessProfile",C,V_businessProfile
// Property: businessProfileUserData; attributes: T@"IMPBusinessProfileUserData",C,V_businessProfileUserData
// Property: businessStoryPlaybackInfo; attributes: T@"SCImpalaStoryPlaybackInfo",C,V_businessStoryPlaybackInfo
// Property: businessStoryPayToPromoteInfo; attributes: T@"SCCStoryPlayerStoryP2POptions",C,V_businessStoryPayToPromoteInfo
// Property: contentModerationStatus; attributes: T@"NSData",C,V_contentModerationStatus
// Property: contentModerationSnapSource; attributes: T@"NSNumber",C,V_contentModerationSnapSource
// Property: contentModerationType; attributes: T@"NSNumber",C,V_contentModerationType
// Property: highlightStoryInfo; attributes: T@"SCImpalaHighlightStoryInfo",C,V_highlightStoryInfo
// Property: publicationId; attributes: T@"NSString",R
// Property: submissionId; attributes: T@"NSString",C,V_submissionId
// Property: attribution; attributes: T@"SOJUBroadcastAttribution",C,V_attribution
// Property: audioStitch; attributes: T@"SOJUAudioStitch",C,V_audioStitch
// Property: geofilterId; attributes: T@"NSString",C,V_geofilterId
// Property: lensId; attributes: T@"NSString",C,V_lensId
// Property: hasLensMetadataOnServer; attributes: TB,N,V_hasLensMetadataOnServer
// Property: lensAssetUploadOperation; attributes: T@"<SCLensRemoteAssetsUploadOperation>",&,N,V_lensAssetUploadOperation
// Property: snapConnectClientDisplayName; attributes: T@"NSString",C,V_snapConnectClientDisplayName
// Property: snapKitClientId; attributes: T@"NSString",C,V_snapKitClientId
// Property: largeThumbnailUrl; attributes: T@"NSString",C,N,V_largeThumbnailUrl
// Property: mediaFormat; attributes: TQ,V_mediaFormat
// Property: storyMediaStoryType; attributes: TQ,N,V_storyMediaStoryType
// Property: cameoMetadata; attributes: T@"SDMCameoMetadata",&,N,V_cameoMetadata
// Property: spectaclesMetadata; attributes: T@"NSData",&,N,V_spectaclesMetadata
// Property: isShareable; attributes: TB,N,V_isShareable
// Property: isReportable; attributes: TB,N,V_isReportable
// Property: creatorEligibility; attributes: T@"SCSCORECreatorEligibility",&,N,V_creatorEligibility
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isSharedStory; attributes: TB,N,V_isSharedStory
// Property: isGroupStory; attributes: TB,N,V_isGroupStory
// Property: streamingFailureCode; attributes: Tq,N,V_streamingFailureCode
// Property: _id; attributes: T@"NSString",&,N
// Property: captionText; attributes: T@"NSString",&,N
// Property: attachmentUrl; attributes: T@"NSString",C,N
// Property: animatedSnapType; attributes: Tq,N
// Property: storiesAnimatedSnapType; attributes: Tq,R,N
// Property: clientId; attributes: T@"NSString",&,N
// Property: venueId; attributes: T@"NSString",C,N
// Property: ephemeralMediaState; attributes: Tq,N
// Property: firstPostDate; attributes: T@"NSDate",&,N
// Property: geoFilterId; attributes: T@"NSString",&,N
// Property: encryptedGeoData; attributes: T@"NSString",&,N
// Property: storyFilterId; attributes: T@"NSString",&,N
// Property: storyLensId; attributes: T@"NSString",&,N
// Property: postLocation; attributes: T@"CLLocation",&,N
// Property: captureLocation; attributes: T@"CLLocation",&,N
// Property: placeID; attributes: T@"NSString",C,N
// Property: media; attributes: T@"<SCLegacyMedia>",&,N
// Property: thumbnailMedia; attributes: T@"<SCLegacyMedia>",&,N
// Property: time; attributes: Td,N
// Property: infiniteDuration; attributes: TB,N
// Property: type; attributes: Tq,N
// Property: videoFilter; attributes: T@"<SCSnapVideoFiltering>",&,N
// Property: videoTimeSoFar; attributes: Td,N
// Property: viewedTimestamp; attributes: T@"NSDate",&,N
// Property: cameraFrontFacing; attributes: TB,N
// Property: orientation; attributes: Tq,N
// Property: ephemeralMediaKey; attributes: T@"NSString",R,N
// Property: ephemeralMediaIv; attributes: T@"NSString",R,N
// Property: gallerySnapId; attributes: T@"NSString",R,C,N
// Property: updateAnnouncer; attributes: T@"EphemeralMediaUpdateListenerAnnouncer",&,N
// Property: forceTranscodeOnServer; attributes: TB,N
// Property: crossPostToStoryInfo; attributes: T@"_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo",&,N
// Property: mediaChecksum; attributes: T@"NSString",&,N
// Property: rotationLocked; attributes: TB,N
// Property: commonLoggingParamsBuilder; attributes: T@"SCSnapCommonLoggingParamsBuilder",&,N
// Property: contextHint; attributes: T@"SCContextContextHint",C,N
// Property: notifiedUsernames; attributes: T@"NSArray",&,N
// Property: shouldIncludeLocationData; attributes: TB,N
// Property: multiSnapMetadata; attributes: T@"SOJUMultiSnapMetadata",&,N
// Property: storySnapClientMetadata; attributes: T@"SCR2StorySnapClientMetadata",C,N
// Property: lensMetadata; attributes: T@"NSData",C,N
// Property: unlockablesSnapInfo; attributes: T@"NSString",C,N
// Property: adsTracking; attributes: T@"SDMAdsTracking",&,N
// Property: snapSource; attributes: Tq,N
// Property: cameraDeepLinkMetadata; attributes: T@"SCCameraDeepLinkMetadata",C,N
// Property: rankingSignalsBase64String; attributes: T@"NSString",C,N
// Property: quotedUserId; attributes: T@"NSString",C,N
// Property: quotedStickerType; attributes: Tq,N
// Property: repostedMentionUserId; attributes: T@"NSString",C,N
// Property: shareYoursId; attributes: T@"NSString",C,N
// Property: externalContent; attributes: T@"NSArray",&,N
// Property: localPlatformData; attributes: T@"NSData",C,N
// Property: mediaOrigins; attributes: T@"NSArray",&,N

// -[Story initWithStoryElement:storyId:manifestDisplayName:enableStreaming:elementType:]
// Type encoding: @52@0:8@16@24@32B40Q44
// Implementation: 0x1071eb20c

// -[Story toStoryElement]
// Type encoding: @16@0:8
// Implementation: 0x1071ec7f8

// -[Story initWithGetMapStoryElementResponse:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071eabe8

// -[Story initWithGetMapStoryElementResponse:legacyStoryMediaCache:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071eabf0

// -[Story assetsUploaderForUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071ea9fc

// -[Story assetsStoreForUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071eaaa0

// -[Story assetsLoggerForUploadOperation:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071eab44

// -[Story initWithSnapDoc:title:subtitle:logoURL:decorateWithHighlightInfo:]
// Type encoding: @52@0:8@16@24@32@40B48
// Implementation: 0x10666eb08

// -[Story initWithFeedCardSnap:storyId:title:subtitle:logoURL:creatorUserId:creatorUsername:creatorDisplayName:creatorEligibility:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10666fbf4

// -[Story initFriendStoryWithSoju:userBlizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071ecebc

// -[Story initFriendStoryWithSoju:userBlizzardLogger:legacyStoryMediaCache:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1071ecec4

// -[Story initGroupStoryWithSoju:userBlizzardLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071ed9b4

// -[Story initGroupStoryWithSoju:userBlizzardLogger:legacyStoryMediaCache:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1071ed9bc

// -[Story copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x1071ed9fc

// -[Story setUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071eda20

// -[Story posterUsername]
// Type encoding: @16@0:8
// Implementation: 0x1071eda8c

// -[Story publicationId]
// Type encoding: @16@0:8
// Implementation: 0x1071edb34

// -[Story _storyWillEncodeObject]
// Type encoding: v16@0:8
// Implementation: 0x1071edb70

// -[Story _storyDidDecodeObject]
// Type encoding: v16@0:8
// Implementation: 0x1071edbac

// -[Story _markAndRemoveUnrecoverableStory]
// Type encoding: v16@0:8
// Implementation: 0x1071edc84

// -[Story initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071edcac

// -[Story encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ee654

// -[Story cacheMediaId]
// Type encoding: @16@0:8
// Implementation: 0x1071ef058

// -[Story setClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071ef0e4

// -[Story clientIdSnapComponent]
// Type encoding: @16@0:8
// Implementation: 0x1071ef15c

// -[Story storyId]
// Type encoding: @16@0:8
// Implementation: 0x1071ef1d4

// -[Story isReportable]
// Type encoding: B16@0:8
// Implementation: 0x1071ef234

// -[Story isSaveable]
// Type encoding: B16@0:8
// Implementation: 0x1071ef324

// -[Story canBusinessProfilePerformSpotlightDeleteAction]
// Type encoding: B16@0:8
// Implementation: 0x1071ef39c

// -[Story isDeletable]
// Type encoding: B16@0:8
// Implementation: 0x1071ef418

// -[Story isShareable]
// Type encoding: B16@0:8
// Implementation: 0x1071ef4d0

// -[Story isBusinessStory]
// Type encoding: B16@0:8
// Implementation: 0x1071ef538

// -[Story isSavedStory]
// Type encoding: B16@0:8
// Implementation: 0x1071ef56c

// -[Story isExpired]
// Type encoding: B16@0:8
// Implementation: 0x1071ef5a0

// -[Story isLensAssetUploadOperationComplete]
// Type encoding: B16@0:8
// Implementation: 0x1071ef610

// -[Story timeToSendHasExpired]
// Type encoding: B16@0:8
// Implementation: 0x1071ef684

// -[Story persistingFailuresURL]
// Type encoding: @16@0:8
// Implementation: 0x1071ef754

// -[Story reportSaveIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1071ef808

// -[Story isStoryMedia]
// Type encoding: B16@0:8
// Implementation: 0x1071ef994

// -[Story mediaIdForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071ef99c

// -[Story mediaURL]
// Type encoding: @16@0:8
// Implementation: 0x1071efa14

// -[Story setMediaURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071efa18

// -[Story usingD2SForMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071efa5c

// -[Story URLForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071efae0

// -[Story decryptData:forMedia:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1071efbdc

// -[Story expirationForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071efcd8

// -[Story encryptionKeyForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071efcdc

// -[Story encryptionIvForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071efce0

// -[Story shouldEncryptOnDiskForMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071efd54

// -[Story isMediaAlreadyEncrypted:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071efdb4

// -[Story encryptionDictionaryForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071efe40

// -[Story persist]
// Type encoding: B16@0:8
// Implementation: 0x1071effb4

// -[Story encrypt]
// Type encoding: B16@0:8
// Implementation: 0x1071effbc

// -[Story requestPriorityUserInitiated:]
// Type encoding: q20@0:8B16
// Implementation: 0x1071effc4

// -[Story trackingId]
// Type encoding: @16@0:8
// Implementation: 0x1071efff4

// -[Story trackingIdForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f0044

// -[Story trackingTypeForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f00b8

// -[Story storyType]
// Type encoding: @16@0:8
// Implementation: 0x1071f0170

// -[Story trackingMediaTypeForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f01c0

// -[Story trackingExpirationInDaysForMedia:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1071f026c

// -[Story isFromCameraRoll]
// Type encoding: B16@0:8
// Implementation: 0x1071f0274

// -[Story isRemix]
// Type encoding: B16@0:8
// Implementation: 0x1071f0300

// -[Story isCreatedByCurrentUser]
// Type encoding: B16@0:8
// Implementation: 0x1071f035c

// -[Story fetchMediaResponseHandlerCustom:request:response:error:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1071f03d0

// -[Story fetchMediaIsLoadingForMedia:userInitiated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1071f059c

// -[Story fetchMediaDidFailForMedia:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f0630

// -[Story fetchMediaNotFoundForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f06ac

// -[Story fetchMediaBadRequestForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f072c

// -[Story handleMediaNotFoundOrBadRequestForMedia:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f07ac

// -[Story fetchMediaDidSucceedForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f0834

// -[Story didStartDownload:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f08ac

// -[Story isVideoStreaming]
// Type encoding: B16@0:8
// Implementation: 0x1071f08b0

// -[Story mediaType]
// Type encoding: q16@0:8
// Implementation: 0x1071f08e4

// -[Story uploadMediaIdForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1071f08e8

// -[Story mediaUploadDidSucceedForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f08ec

// -[Story mediaUploadDidFailForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f09c0

// -[Story imageProcessingDidCompleteForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f0a24

// -[Story _imageProcessingDidCompleteForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f0ab4

// -[Story _streamingMediaInfoCanBePrefetched:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071f0bc4

// -[Story fetchStoryMediaUserInitiated:completion:source:]
// Type encoding: v36@0:8B16@?20@28
// Implementation: 0x1071f0c34

// -[Story verifyMediaState]
// Type encoding: v16@0:8
// Implementation: 0x1071f0df0

// -[Story postedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1071f0eb8

// -[Story _captureDate]
// Type encoding: @16@0:8
// Implementation: 0x1071f0f50

// -[Story _cameraMode]
// Type encoding: @16@0:8
// Implementation: 0x1071f1068

// -[Story _subscribeOnLensUploadOperationEvent]
// Type encoding: v16@0:8
// Implementation: 0x1071f10cc

// -[Story taggedUsernames]
// Type encoding: @16@0:8
// Implementation: 0x1071f13a4

// -[Story _removeUnrecoverablePendingStory]
// Type encoding: v16@0:8
// Implementation: 0x1071f13a8

// -[Story uploadMedia]
// Type encoding: v16@0:8
// Implementation: 0x1071f144c

// -[Story _shouldLetPostMasterUploadMedia]
// Type encoding: B16@0:8
// Implementation: 0x1071f1554

// -[Story uploadStoryWithMediaUploaded]
// Type encoding: v16@0:8
// Implementation: 0x1071f155c

// -[Story invalidateLensAssetUploadOperation]
// Type encoding: v16@0:8
// Implementation: 0x1071f1560

// -[Story saveStory]
// Type encoding: v16@0:8
// Implementation: 0x1071f1684

// -[Story saveStoryWithGrapheneRegistry:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f16c0

// -[Story exportToVideoURLCompletion:progressBlock:spectaclesExportSettings:snapVideoFilterAdaptor:previewAssetVideoProviderFactory:]
// Type encoding: v56@0:8@?16@?24@32@40@48
// Implementation: 0x1071f2860

// -[Story didFinishSavingSnapToAlbumWithError:isVideo:videoDuration:]
// Type encoding: v36@0:8@16B24d28
// Implementation: 0x1071f2868

// -[Story postSaveWithSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f29e8

// -[Story _saveMediaToCacheAndPersistentStoreWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1071f29f4

// -[Story _saveStoryDataToPersistentStoreWithData:completionQueue:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1071f2c78

// -[Story _saveThumbnailDataToThumbnailCoordinatorIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x1071f2db8

// -[Story removePersistedFailedStoryData]
// Type encoding: v16@0:8
// Implementation: 0x1071f2f5c

// -[Story markAsViewed]
// Type encoding: v16@0:8
// Implementation: 0x1071f2f60

// -[Story mediaLoadError]
// Type encoding: @16@0:8
// Implementation: 0x1071f2fe4

// -[Story isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1071f2fe8

// -[Story hash]
// Type encoding: Q16@0:8
// Implementation: 0x1071f30ac

// -[Story hasOfficialStoryAttribution]
// Type encoding: B16@0:8
// Implementation: 0x1071f30e8

// -[Story isHD]
// Type encoding: B16@0:8
// Implementation: 0x1071f3154

// -[Story isSpectaclesMedia]
// Type encoding: B16@0:8
// Implementation: 0x1071f315c

// -[Story isSpectacles60fps]
// Type encoding: B16@0:8
// Implementation: 0x1071f3194

// -[Story spectaclesExportSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x1071f319c

// -[Story isGenAISnap]
// Type encoding: B16@0:8
// Implementation: 0x1071f31f4

// -[Story setMediaState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f3350

// -[Story mediaState]
// Type encoding: q16@0:8
// Implementation: 0x1071f33d4

// -[Story updateMediaState:error:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1071f33d8

// -[Story updatePostingState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f343c

// -[Story checkAndSetStreamingMediaInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f34ec

// -[Story mediaStateListenerAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x1071f34f0

// -[Story addMediaStateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3550

// -[Story removeMediaStateListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f35a0

// -[Story handleVideoProcessingCallback:data:retriable:error:]
// Type encoding: v44@0:8@16@24B32@36
// Implementation: 0x1071f367c

// -[Story videoProcessingDidSucceedForSnapVideoFilter:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f3690

// -[Story _videoProcessingDidSucceedForSnapVideoFilter:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1071f37b8

// -[Story videoProcessingDidFailForSnapVideoFilter:retriable:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x1071f38e4

// -[Story loggingParamsForViewingType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1071f3b20

// -[Story storySpecificType]
// Type encoding: q16@0:8
// Implementation: 0x1071f3c74

// -[Story myStorySpecificType]
// Type encoding: q16@0:8
// Implementation: 0x1071f3d6c

// -[Story myStoryType]
// Type encoding: q16@0:8
// Implementation: 0x1071f3d70

// -[Story isBrandSnapStory]
// Type encoding: B16@0:8
// Implementation: 0x1071f3db0

// -[Story baseLayerType]
// Type encoding: Q16@0:8
// Implementation: 0x1071f3df4

// -[Story storyTypeFromStory]
// Type encoding: q16@0:8
// Implementation: 0x1071f3e48

// -[Story streamingFailureCode]
// Type encoding: q16@0:8
// Implementation: 0x1071f3e9c

// -[Story setStreamingFailureCode:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f3eac

// -[Story isGroupStory]
// Type encoding: B16@0:8
// Implementation: 0x1071f3ebc

// -[Story setIsGroupStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f3ecc

// -[Story isSharedStory]
// Type encoding: B16@0:8
// Implementation: 0x1071f3edc

// -[Story setIsSharedStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f3eec

// -[Story postingState]
// Type encoding: q16@0:8
// Implementation: 0x1071f3efc

// -[Story setPostingState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f3f0c

// -[Story expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x1071f3f1c

// -[Story setExpirationDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3f2c

// -[Story shouldShowToastWhenPostComplete]
// Type encoding: B16@0:8
// Implementation: 0x1071f3f38

// -[Story setShouldShowToastWhenPostComplete:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f3f4c

// -[Story mediaKey]
// Type encoding: @16@0:8
// Implementation: 0x1071f3f5c

// -[Story setMediaKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3f6c

// -[Story mediaIv]
// Type encoding: @16@0:8
// Implementation: 0x1071f3f78

// -[Story setMediaIv:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3f88

// -[Story thumbnailIv]
// Type encoding: @16@0:8
// Implementation: 0x1071f3f94

// -[Story setThumbnailIv:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3fa4

// -[Story mediaId]
// Type encoding: @16@0:8
// Implementation: 0x1071f3fb0

// -[Story setMediaId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3fc0

// -[Story boltMedia]
// Type encoding: @16@0:8
// Implementation: 0x1071f3fcc

// -[Story setBoltMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f3fdc

// -[Story boltOverlay]
// Type encoding: @16@0:8
// Implementation: 0x1071f401c

// -[Story setBoltOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f402c

// -[Story thumbnailURL]
// Type encoding: @16@0:8
// Implementation: 0x1071f406c

// -[Story setThumbnailURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f407c

// -[Story requestContexts]
// Type encoding: @16@0:8
// Implementation: 0x1071f4088

// -[Story setRequestContexts:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4098

// -[Story timestamp]
// Type encoding: @16@0:8
// Implementation: 0x1071f40a4

// -[Story setTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f40b4

// -[Story posterUserId]
// Type encoding: @16@0:8
// Implementation: 0x1071f40c0

// -[Story setPosterUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f40d0

// -[Story userDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1071f40dc

// -[Story setUserDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f40ec

// -[Story businessProfileHostUsername]
// Type encoding: @16@0:8
// Implementation: 0x1071f40f8

// -[Story setBusinessProfileHostUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4108

// -[Story userPostedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1071f4114

// -[Story setUserPostedTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4124

// -[Story markedAsViewedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x1071f4130

// -[Story setMarkedAsViewedTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4140

// -[Story isOfficialStory]
// Type encoding: B16@0:8
// Implementation: 0x1071f414c

// -[Story setIsOfficialStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4160

// -[Story officialBadgeType]
// Type encoding: q16@0:8
// Implementation: 0x1071f4170

// -[Story setOfficialBadgeType:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f4180

// -[Story isPublic]
// Type encoding: B16@0:8
// Implementation: 0x1071f4190

// -[Story setIsPublic:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f41a4

// -[Story isPromotedStory]
// Type encoding: B16@0:8
// Implementation: 0x1071f41b4

// -[Story setIsPromotedStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f41c8

// -[Story streamingMediaInfo]
// Type encoding: @16@0:8
// Implementation: 0x1071f41d8

// -[Story setStreamingMediaInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f41e8

// -[Story boostMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1071f41f4

// -[Story setBoostMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4204

// -[Story spotlightEngagementMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1071f4210

// -[Story setSpotlightEngagementMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4220

// -[Story viewed]
// Type encoding: B16@0:8
// Implementation: 0x1071f422c

// -[Story setViewed:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4240

// -[Story flushableStoryId]
// Type encoding: @16@0:8
// Implementation: 0x1071f4250

// -[Story setFlushableStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4260

// -[Story needsAuthToFetch]
// Type encoding: B16@0:8
// Implementation: 0x1071f426c

// -[Story setNeedsAuthToFetch:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4280

// -[Story screenshotToReportCount]
// Type encoding: Q16@0:8
// Implementation: 0x1071f4290

// -[Story setScreenshotToReportCount:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071f42a0

// -[Story savedByUser]
// Type encoding: B16@0:8
// Implementation: 0x1071f42b0

// -[Story setSavedByUser:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f42c4

// -[Story framing]
// Type encoding: @16@0:8
// Implementation: 0x1071f42d4

// -[Story setFraming:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f42e4

// -[Story ourStoriesMetadataToPostTo]
// Type encoding: @16@0:8
// Implementation: 0x1071f42f0

// -[Story setOurStoriesMetadataToPostTo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4300

// -[Story shouldCreateHighlight]
// Type encoding: B16@0:8
// Implementation: 0x1071f430c

// -[Story setShouldCreateHighlight:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4320

// -[Story isSpotlightStory]
// Type encoding: B16@0:8
// Implementation: 0x1071f4330

// -[Story setIsSpotlightStory:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4344

// -[Story spotlightSnapStatus]
// Type encoding: q16@0:8
// Implementation: 0x1071f4354

// -[Story setSpotlightSnapStatus:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f4364

// -[Story sharedStoryGroupId]
// Type encoding: @16@0:8
// Implementation: 0x1071f4374

// -[Story setSharedStoryGroupId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4384

// -[Story sharedStoryDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1071f4390

// -[Story setSharedStoryDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f43a0

// -[Story sharedStoryUserId]
// Type encoding: @16@0:8
// Implementation: 0x1071f43ac

// -[Story setSharedStoryUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f43bc

// -[Story sharedStoryAvatarId]
// Type encoding: @16@0:8
// Implementation: 0x1071f43c8

// -[Story setSharedStoryAvatarId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f43d8

// -[Story sharedStorySelfieId]
// Type encoding: @16@0:8
// Implementation: 0x1071f43e4

// -[Story setSharedStorySelfieId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f43f4

// -[Story sharedStoryGeoLocation]
// Type encoding: @16@0:8
// Implementation: 0x1071f4400

// -[Story setSharedStoryGeoLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4410

// -[Story searchStoryId]
// Type encoding: @16@0:8
// Implementation: 0x1071f441c

// -[Story setSearchStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f442c

// -[Story curationSourceStoryId]
// Type encoding: @16@0:8
// Implementation: 0x1071f4438

// -[Story setCurationSourceStoryId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4448

// -[Story selectedSponsor]
// Type encoding: @16@0:8
// Implementation: 0x1071f4454

// -[Story setSelectedSponsor:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4464

// -[Story businessProfile]
// Type encoding: @16@0:8
// Implementation: 0x1071f4470

// -[Story setBusinessProfile:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4480

// -[Story businessProfileUserData]
// Type encoding: @16@0:8
// Implementation: 0x1071f448c

// -[Story setBusinessProfileUserData:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f449c

// -[Story businessStoryPlaybackInfo]
// Type encoding: @16@0:8
// Implementation: 0x1071f44a8

// -[Story setBusinessStoryPlaybackInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f44b8

// -[Story businessStoryPayToPromoteInfo]
// Type encoding: @16@0:8
// Implementation: 0x1071f44c4

// -[Story setBusinessStoryPayToPromoteInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f44d4

// -[Story contentModerationStatus]
// Type encoding: @16@0:8
// Implementation: 0x1071f44e0

// -[Story setContentModerationStatus:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f44f0

// -[Story contentModerationSnapSource]
// Type encoding: @16@0:8
// Implementation: 0x1071f44fc

// -[Story setContentModerationSnapSource:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f450c

// -[Story contentModerationType]
// Type encoding: @16@0:8
// Implementation: 0x1071f4518

// -[Story setContentModerationType:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4528

// -[Story highlightStoryInfo]
// Type encoding: @16@0:8
// Implementation: 0x1071f4534

// -[Story setHighlightStoryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4544

// -[Story unrecoverable]
// Type encoding: B16@0:8
// Implementation: 0x1071f4550

// -[Story setUnrecoverable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4564

// -[Story submissionId]
// Type encoding: @16@0:8
// Implementation: 0x1071f4574

// -[Story setSubmissionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4584

// -[Story attribution]
// Type encoding: @16@0:8
// Implementation: 0x1071f4590

// -[Story setAttribution:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f45a0

// -[Story audioStitch]
// Type encoding: @16@0:8
// Implementation: 0x1071f45ac

// -[Story setAudioStitch:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f45bc

// -[Story mediaAPPURL]
// Type encoding: @16@0:8
// Implementation: 0x1071f45c8

// -[Story setMediaAPPURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f45d8

// -[Story mediaD2SURL]
// Type encoding: @16@0:8
// Implementation: 0x1071f45e4

// -[Story setMediaD2SURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f45f4

// -[Story geofilterId]
// Type encoding: @16@0:8
// Implementation: 0x1071f4600

// -[Story setGeofilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4610

// -[Story lensId]
// Type encoding: @16@0:8
// Implementation: 0x1071f461c

// -[Story setLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f462c

// -[Story hasLensMetadataOnServer]
// Type encoding: B16@0:8
// Implementation: 0x1071f4638

// -[Story setHasLensMetadataOnServer:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f4648

// -[Story lensAssetUploadOperation]
// Type encoding: @16@0:8
// Implementation: 0x1071f4658

// -[Story setLensAssetUploadOperation:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4668

// -[Story snapConnectClientDisplayName]
// Type encoding: @16@0:8
// Implementation: 0x1071f46a8

// -[Story setSnapConnectClientDisplayName:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f46b8

// -[Story snapKitClientId]
// Type encoding: @16@0:8
// Implementation: 0x1071f46c4

// -[Story setSnapKitClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f46d4

// -[Story largeThumbnailUrl]
// Type encoding: @16@0:8
// Implementation: 0x1071f46e0

// -[Story setLargeThumbnailUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f46f0

// -[Story mediaFormat]
// Type encoding: Q16@0:8
// Implementation: 0x1071f46fc

// -[Story setMediaFormat:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071f470c

// -[Story storyMediaStoryType]
// Type encoding: Q16@0:8
// Implementation: 0x1071f471c

// -[Story setStoryMediaStoryType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1071f472c

// -[Story cameoMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1071f473c

// -[Story setCameoMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f474c

// -[Story spectaclesMetadata]
// Type encoding: @16@0:8
// Implementation: 0x1071f478c

// -[Story setSpectaclesMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f479c

// -[Story setIsShareable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f47dc

// -[Story setIsReportable:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f47ec

// -[Story creatorEligibility]
// Type encoding: @16@0:8
// Implementation: 0x1071f47fc

// -[Story setCreatorEligibility:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f480c

// -[Story savedUsername]
// Type encoding: @16@0:8
// Implementation: 0x1071f484c

// -[Story setSavedUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f485c

// -[Story atomicUsername]
// Type encoding: @16@0:8
// Implementation: 0x1071f4868

// -[Story setAtomicUsername:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f4878

// -[Story atomicMediaState]
// Type encoding: q16@0:8
// Implementation: 0x1071f4884

// -[Story setAtomicMediaState:]
// Type encoding: v24@0:8q16
// Implementation: 0x1071f4894

// -[Story lastMediaLoadError]
// Type encoding: @16@0:8
// Implementation: 0x1071f48a4

// -[Story setLastMediaLoadError:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f48b4

// -[Story thumbnailId]
// Type encoding: @16@0:8
// Implementation: 0x1071f48c0

// -[Story setThumbnailId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1071f48d0

// -[Story shouldPostStoryAfterMediaUploaded]
// Type encoding: B16@0:8
// Implementation: 0x1071f48dc

// -[Story setShouldPostStoryAfterMediaUploaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x1071f48f0

// -[Story .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1071f4900

// +[Story _postNotificationWithName:object:userInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1071f35f0

@end
