// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: EphemeralMedia
// Superclass: NSObject
// Address: 0x112b9d808

@interface EphemeralMedia

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: secretShareLoggingParams; attributes: T@"NSMutableDictionary",&,N,V_secretShareLoggingParams
// Property: shareLoggingParams; attributes: T@"NSMutableDictionary",&,N,V_shareLoggingParams
// Property: eventLoggingParams; attributes: T@"NSMutableDictionary",&,N,V_eventLoggingParams
// Property: encryptedVenueId; attributes: T@"NSString",C,N,V_encryptedVenueId
// Property: _id; attributes: T@"NSString",&,N,V__id
// Property: captionText; attributes: T@"NSString",&,N,V_captionText
// Property: attachmentUrl; attributes: T@"NSString",C,N,V_attachmentUrl
// Property: animatedSnapType; attributes: Tq,N,V_animatedSnapType
// Property: clientId; attributes: T@"NSString",&,N,V_clientId
// Property: venueId; attributes: T@"NSString",C,N,V_venueId
// Property: ephemeralMediaState; attributes: Tq,N,V_ephemeralMediaState
// Property: firstPostDate; attributes: T@"NSDate",&,N,V_firstPostDate
// Property: geoFilterId; attributes: T@"NSString",&,N,V_geoFilterId
// Property: encryptedGeoData; attributes: T@"NSString",&,N,V_encryptedGeoData
// Property: storyFilterId; attributes: T@"NSString",&,N,V_storyFilterId
// Property: storyLensId; attributes: T@"NSString",&,N,V_storyLensId
// Property: postLocation; attributes: T@"CLLocation",&,N,V_postLocation
// Property: captureLocation; attributes: T@"CLLocation",&,N,V_captureLocation
// Property: placeID; attributes: T@"NSString",C,N,V_placeID
// Property: media; attributes: T@"Media",&,N,V_media
// Property: thumbnailMedia; attributes: T@"Media",&,N,V_thumbnailMedia
// Property: time; attributes: Td,N,V_time
// Property: infiniteDuration; attributes: TB,N,V_infiniteDuration
// Property: type; attributes: Tq,N,V_type
// Property: videoFilter; attributes: T@"<SCSnapVideoFiltering>",&,N,V_videoFilter
// Property: videoTimeSoFar; attributes: Td,N,V_videoTimeSoFar
// Property: viewedTimestamp; attributes: T@"NSDate",&,N,V_viewedTimestamp
// Property: cameraFrontFacing; attributes: TB,N,V_cameraFrontFacing
// Property: orientation; attributes: Tq,N,V_orientation
// Property: ephemeralMediaKey; attributes: T@"NSString",R,N,V_ephemeralMediaKey
// Property: ephemeralMediaIv; attributes: T@"NSString",R,N,V_ephemeralMediaIv
// Property: gallerySnapId; attributes: T@"NSString",R,C,N,V_gallerySnapId
// Property: updateAnnouncer; attributes: T@"EphemeralMediaUpdateListenerAnnouncer",&,N,V_updateAnnouncer
// Property: forceTranscodeOnServer; attributes: TB,N,V_forceTranscodeOnServer
// Property: crossPostToStoryInfo; attributes: T@"_TtC32SpotlightCrossPostToStoryInfoAPI20CrossPostToStoryInfo",&,N,V_crossPostToStoryInfo
// Property: mediaChecksum; attributes: T@"NSString",&,N,V_mediaChecksum
// Property: rotationLocked; attributes: TB,N,V_rotationLocked
// Property: contextHint; attributes: T@"SCContextContextHint",C,N,V_contextHint
// Property: notifiedUsernames; attributes: T@"NSArray",&,N,V_notifiedUsernames
// Property: shouldIncludeLocationData; attributes: TB,N,V_shouldIncludeLocationData
// Property: multiSnapMetadata; attributes: T@"SOJUMultiSnapMetadata",&,N,V_multiSnapMetadata
// Property: storySnapClientMetadata; attributes: T@"SCR2StorySnapClientMetadata",C,N,V_storySnapClientMetadata
// Property: lensMetadata; attributes: T@"NSData",C,N,V_lensMetadata
// Property: unlockablesSnapInfo; attributes: T@"NSString",C,N,V_unlockablesSnapInfo
// Property: adsTracking; attributes: T@"SDMAdsTracking",&,N,V_adsTracking
// Property: snapSource; attributes: Tq,N,V_snapSource
// Property: cameraDeepLinkMetadata; attributes: T@"SCCameraDeepLinkMetadata",C,N,V_cameraDeepLinkMetadata
// Property: rankingSignalsBase64String; attributes: T@"NSString",C,N,V_rankingSignalsBase64String
// Property: quotedUserId; attributes: T@"NSString",C,N,V_quotedUserId
// Property: quotedStickerType; attributes: Tq,N,V_quotedStickerType
// Property: shareYoursId; attributes: T@"NSString",C,N,V_shareYoursId
// Property: externalContent; attributes: T@"NSArray",&,N,V_externalContent
// Property: localPlatformData; attributes: T@"NSData",C,N,V_localPlatformData
// Property: mediaOrigins; attributes: T@"NSArray",&,N,V_mediaOrigins
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: storiesAnimatedSnapType; attributes: Tq,R,N
// Property: commonLoggingParamsBuilder; attributes: T@"SCSnapCommonLoggingParamsBuilder",&,N,V_commonLoggingParamsBuilder
// Property: repostedMentionUserId; attributes: T@"NSString",C,N,V_repostedMentionUserId

// -[EphemeralMedia setMentionedUserIds:usernames:sources:textRanges:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10841a274

// -[EphemeralMedia setGenAIFeaturedStoryInfo:]
// Type encoding: v20@0:8i16
// Implementation: 0x10841a584

// -[EphemeralMedia setTopics:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841a6c0

// -[EphemeralMedia setTopicStickers:storyTopics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10841a6c8

// -[EphemeralMedia _setTopicStickers:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841a800

// -[EphemeralMedia setSnapKitOAuthClientId:providedAppName:attachmentUrl:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10841aaac

// -[EphemeralMedia setTappableElementsFromEditState:mediaAspectRatio:fullMediaContentBounds:lensTappableElements:stickerInjector:]
// Type encoding: v80@0:8@16d24{CGRect={CGPoint=dd}{CGSize=dd}}32@64@72
// Implementation: 0x10841abd8

// -[EphemeralMedia _setAttachmentUrlWithTappableElements:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841b190

// -[EphemeralMedia _extractAttachmentUrlFromTappableElements:]
// Type encoding: @24@0:8@16
// Implementation: 0x10841b204

// -[EphemeralMedia _populateTappableElements:fromStickersState:mediaAspectRatio:fullMediaContentBounds:stickerInjector:]
// Type encoding: v80@0:8@16@24d32{CGRect={CGPoint=dd}{CGSize=dd}}40@72
// Implementation: 0x10841b3cc

// -[EphemeralMedia _populateTappableElements:fromLensTappableElements:mediaAspectRatio:fullMediaContentBounds:]
// Type encoding: v72@0:8@16@24d32{CGRect={CGPoint=dd}{CGSize=dd}}40
// Implementation: 0x10841bbb4

// -[EphemeralMedia _populateTappableElements:fromCaptionsState:mediaAspectRatio:fullMediaContentBounds:]
// Type encoding: v72@0:8@16@24d32{CGRect={CGPoint=dd}{CGSize=dd}}40
// Implementation: 0x10841be2c

// -[EphemeralMedia _populateTappableElements:fromFiltersState:mediaAspectRatio:fullMediaContentBounds:]
// Type encoding: v72@0:8@16@24d32{CGRect={CGPoint=dd}{CGSize=dd}}40
// Implementation: 0x10841c368

// -[EphemeralMedia setCameosStickersIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841c5e0

// -[EphemeralMedia setStoryInviteWithPublicationId:inviteId:storyName:storyType:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10841c7dc

// -[EphemeralMedia setMusicTrack:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841cabc

// -[EphemeralMedia setMusicSelection:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841cb2c

// -[EphemeralMedia setMusicStickerStyle:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841ccfc

// -[EphemeralMedia setAudioMixArrayFromMultiSnapEditingState:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841cdcc

// -[EphemeralMedia setAppMetadataWithAppAttachment:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841d090

// -[EphemeralMedia setAuraProfileInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841d2cc

// -[EphemeralMedia setRemixSourceSnapId:remixSourceUserId:remixLaunchSource:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10841d518

// -[EphemeralMedia setRepostSourceSnapId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841d72c

// -[EphemeralMedia setUserDisabledMentionRemixing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10841d7c0

// -[EphemeralMedia setUserDisabledRemixing:leaveRemixSettingUnsetExperimentEnabled:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x10841d8fc

// -[EphemeralMedia setTimelineMetadataWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841da58

// -[EphemeralMedia setDirectorModeMetadataWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841db7c

// -[EphemeralMedia setMultiCamModeMetadataWithContextInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841dc64

// -[EphemeralMedia setCommerceAttachmentV2DataModels:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841dd7c

// -[EphemeralMedia setShoppingLensProductIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841e284

// -[EphemeralMedia setCTItemInstances:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841e4b0

// -[EphemeralMedia setPoll:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841e594

// -[EphemeralMedia setQuestion:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841e99c

// -[EphemeralMedia setSnapMeInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841ea88

// -[EphemeralMedia setLensConfigInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841eb74

// -[EphemeralMedia setLensMusicInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841ece4

// -[EphemeralMedia setIsCheeriosVideo]
// Type encoding: v16@0:8
// Implementation: 0x10841edb0

// -[EphemeralMedia setDreamsInfoWithDreamId:dreamPackId:lensId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10841ee5c

// -[EphemeralMedia setSnapDocLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841f054

// -[EphemeralMedia setAIModeTextToImageInfo]
// Type encoding: v16@0:8
// Implementation: 0x10841f058

// -[EphemeralMedia setPostCaptureAIInfo]
// Type encoding: v16@0:8
// Implementation: 0x10841f0d4

// -[EphemeralMedia setTemplateInfoWithTemplateId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841f150

// -[EphemeralMedia setTextModeInfo]
// Type encoding: v16@0:8
// Implementation: 0x10841f214

// -[EphemeralMedia setBitmojiFashionContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841f290

// -[EphemeralMedia overrideContextClientInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10841f354

// -[EphemeralMedia _translateContextHashtagsFromTopics:topicStickers:captionHashtags:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10841f444

// -[EphemeralMedia initWithCurrentUsername:gallerySnapId:mediaEncryptionCoordinator:mediaDataIngestor:circumstanceEngine:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x108438eb8

// -[EphemeralMedia setTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x108439050

// -[EphemeralMedia animatedSnapType]
// Type encoding: q16@0:8
// Implementation: 0x108439058

// -[EphemeralMedia commonLoggingParamsBuilder]
// Type encoding: @16@0:8
// Implementation: 0x1084390a8

// -[EphemeralMedia eventLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x1084390f8

// -[EphemeralMedia typeParams]
// Type encoding: @16@0:8
// Implementation: 0x108439150

// -[EphemeralMedia addShareLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084391f0

// -[EphemeralMedia shareLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108439254

// -[EphemeralMedia storiesAnimatedSnapType]
// Type encoding: q16@0:8
// Implementation: 0x1084392bc

// -[EphemeralMedia addSecretShareLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x108439330

// -[EphemeralMedia secretShareLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x108439394

// -[EphemeralMedia eventLoggingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1084393ac

// -[EphemeralMedia addEventLoggingParameters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1084393c4

// -[EphemeralMedia setLoggingParameters:forEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10843941c

// -[EphemeralMedia initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843948c

// -[EphemeralMedia encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x108439c8c

// -[EphemeralMedia _ephemeralMediaWillEncodeObject]
// Type encoding: v16@0:8
// Implementation: 0x10843a280

// -[EphemeralMedia _ephemeralMediaDidDecodeObject]
// Type encoding: v16@0:8
// Implementation: 0x10843a284

// -[EphemeralMedia setMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843a37c

// -[EphemeralMedia media]
// Type encoding: @16@0:8
// Implementation: 0x10843a404

// -[EphemeralMedia setThumbnailMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843a490

// -[EphemeralMedia thumbnailMedia]
// Type encoding: @16@0:8
// Implementation: 0x10843a50c

// -[EphemeralMedia setVideoFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843a58c

// -[EphemeralMedia targetSetVideoFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843a620

// -[EphemeralMedia updateAnnouncer]
// Type encoding: @16@0:8
// Implementation: 0x10843a650

// -[EphemeralMedia setEphemeralMediaKey:ephemeralMediaIv:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10843a6a0

// -[EphemeralMedia rotationLocked]
// Type encoding: B16@0:8
// Implementation: 0x10843a770

// -[EphemeralMedia isStoryMedia]
// Type encoding: B16@0:8
// Implementation: 0x10843a7d0

// -[EphemeralMedia endpointForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843a7d8

// -[EphemeralMedia mediaIdForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843a838

// -[EphemeralMedia decryptData:forMedia:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10843a898

// -[EphemeralMedia encryptionDictionaryForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843a904

// -[EphemeralMedia persist]
// Type encoding: B16@0:8
// Implementation: 0x10843a90c

// -[EphemeralMedia encrypt]
// Type encoding: B16@0:8
// Implementation: 0x10843a960

// -[EphemeralMedia needsAuthToFetch]
// Type encoding: B16@0:8
// Implementation: 0x10843a9b4

// -[EphemeralMedia requestContexts]
// Type encoding: @16@0:8
// Implementation: 0x10843aa08

// -[EphemeralMedia expirationForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843aa5c

// -[EphemeralMedia encryptionKeyForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843aabc

// -[EphemeralMedia encryptionIvForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843ab1c

// -[EphemeralMedia shouldEncryptOnDiskForMedia:]
// Type encoding: B24@0:8@16
// Implementation: 0x10843ab7c

// -[EphemeralMedia isMediaAlreadyEncrypted:]
// Type encoding: B24@0:8@16
// Implementation: 0x10843abdc

// -[EphemeralMedia mediaType]
// Type encoding: q16@0:8
// Implementation: 0x10843ac3c

// -[EphemeralMedia durationMs]
// Type encoding: @16@0:8
// Implementation: 0x10843ac40

// -[EphemeralMedia isVideo]
// Type encoding: B16@0:8
// Implementation: 0x10843ac90

// -[EphemeralMedia isVideoWithSound]
// Type encoding: B16@0:8
// Implementation: 0x10843ace8

// -[EphemeralMedia isImage]
// Type encoding: B16@0:8
// Implementation: 0x10843ad1c

// -[EphemeralMedia isVideoStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10843ad50

// -[EphemeralMedia isSpectaclesVideo]
// Type encoding: B16@0:8
// Implementation: 0x10843ad58

// -[EphemeralMedia isSpectaclesImage]
// Type encoding: B16@0:8
// Implementation: 0x10843adf4

// -[EphemeralMedia isCheeriosImage]
// Type encoding: B16@0:8
// Implementation: 0x10843ae20

// -[EphemeralMedia isCheeriosVideo]
// Type encoding: B16@0:8
// Implementation: 0x10843ae3c

// -[EphemeralMedia isCircularMedia]
// Type encoding: B16@0:8
// Implementation: 0x10843ae7c

// -[EphemeralMedia isAudioStitch]
// Type encoding: B16@0:8
// Implementation: 0x10843aec8

// -[EphemeralMedia uploadMediaIdForMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x10843aee4

// -[EphemeralMedia mediaUploadDidSucceedForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843aee8

// -[EphemeralMedia mediaUploadDidStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843af2c

// -[EphemeralMedia encryptionKey]
// Type encoding: @16@0:8
// Implementation: 0x10843af64

// -[EphemeralMedia encryptionIv]
// Type encoding: @16@0:8
// Implementation: 0x10843af94

// -[EphemeralMedia captureSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10843afc4

// -[EphemeralMedia regenerateKeyIvIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x10843b008

// -[EphemeralMedia mediaUploadDidFailForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843b09c

// -[EphemeralMedia uploadMedia]
// Type encoding: v16@0:8
// Implementation: 0x10843b0e0

// -[EphemeralMedia imageProcessingDidCompleteForMedia:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843b120

// -[EphemeralMedia timeToSendHasExpired]
// Type encoding: B16@0:8
// Implementation: 0x10843b1f8

// -[EphemeralMedia logId]
// Type encoding: @16@0:8
// Implementation: 0x10843b2a0

// -[EphemeralMedia requestKeyWithIds]
// Type encoding: @16@0:8
// Implementation: 0x10843b2f4

// -[EphemeralMedia fallbackToSendAsImageWithFilter:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10843b438

// -[EphemeralMedia videoProcessingDidFinishMultiSnapOverlay:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843b73c

// -[EphemeralMedia videoProcessingDidSucceedForSnapVideoFilter:data:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10843b7c0

// -[EphemeralMedia videoProcessingDidFailForSnapVideoFilter:retriable:error:]
// Type encoding: v36@0:8@16B24@28
// Implementation: 0x10843bad8

// -[EphemeralMedia videoProcessingDone]
// Type encoding: v16@0:8
// Implementation: 0x10843bc7c

// -[EphemeralMedia rankingSignalsBase64String]
// Type encoding: @16@0:8
// Implementation: 0x10843bd2c

// -[EphemeralMedia setRankingSignalsBase64String:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bd34

// -[EphemeralMedia setCommonLoggingParamsBuilder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bd3c

// -[EphemeralMedia quotedStickerType]
// Type encoding: q16@0:8
// Implementation: 0x10843bd6c

// -[EphemeralMedia setQuotedStickerType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10843bd74

// -[EphemeralMedia repostedMentionUserId]
// Type encoding: @16@0:8
// Implementation: 0x10843bd7c

// -[EphemeralMedia setRepostedMentionUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bd84

// -[EphemeralMedia shareYoursId]
// Type encoding: @16@0:8
// Implementation: 0x10843bd8c

// -[EphemeralMedia setShareYoursId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bd94

// -[EphemeralMedia mediaOrigins]
// Type encoding: @16@0:8
// Implementation: 0x10843bd9c

// -[EphemeralMedia setMediaOrigins:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bda4

// -[EphemeralMedia _id]
// Type encoding: @16@0:8
// Implementation: 0x10843bdd4

// -[EphemeralMedia set_id:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bddc

// -[EphemeralMedia captionText]
// Type encoding: @16@0:8
// Implementation: 0x10843be0c

// -[EphemeralMedia setCaptionText:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843be14

// -[EphemeralMedia attachmentUrl]
// Type encoding: @16@0:8
// Implementation: 0x10843be44

// -[EphemeralMedia setAttachmentUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843be4c

// -[EphemeralMedia setAnimatedSnapType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10843be54

// -[EphemeralMedia clientId]
// Type encoding: @16@0:8
// Implementation: 0x10843be5c

// -[EphemeralMedia setClientId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843be64

// -[EphemeralMedia venueId]
// Type encoding: @16@0:8
// Implementation: 0x10843be94

// -[EphemeralMedia setVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843be9c

// -[EphemeralMedia ephemeralMediaState]
// Type encoding: q16@0:8
// Implementation: 0x10843bea4

// -[EphemeralMedia setEphemeralMediaState:]
// Type encoding: v24@0:8q16
// Implementation: 0x10843beac

// -[EphemeralMedia firstPostDate]
// Type encoding: @16@0:8
// Implementation: 0x10843beb4

// -[EphemeralMedia setFirstPostDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bebc

// -[EphemeralMedia geoFilterId]
// Type encoding: @16@0:8
// Implementation: 0x10843beec

// -[EphemeralMedia setGeoFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bef4

// -[EphemeralMedia encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x10843bf24

// -[EphemeralMedia setEncryptedGeoData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bf2c

// -[EphemeralMedia storyFilterId]
// Type encoding: @16@0:8
// Implementation: 0x10843bf5c

// -[EphemeralMedia setStoryFilterId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bf64

// -[EphemeralMedia storyLensId]
// Type encoding: @16@0:8
// Implementation: 0x10843bf94

// -[EphemeralMedia setStoryLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bf9c

// -[EphemeralMedia postLocation]
// Type encoding: @16@0:8
// Implementation: 0x10843bfcc

// -[EphemeralMedia setPostLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843bfd4

// -[EphemeralMedia captureLocation]
// Type encoding: @16@0:8
// Implementation: 0x10843c004

// -[EphemeralMedia setCaptureLocation:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c00c

// -[EphemeralMedia placeID]
// Type encoding: @16@0:8
// Implementation: 0x10843c03c

// -[EphemeralMedia setPlaceID:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c044

// -[EphemeralMedia time]
// Type encoding: d16@0:8
// Implementation: 0x10843c04c

// -[EphemeralMedia infiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x10843c054

// -[EphemeralMedia setInfiniteDuration:]
// Type encoding: v20@0:8B16
// Implementation: 0x10843c05c

// -[EphemeralMedia type]
// Type encoding: q16@0:8
// Implementation: 0x10843c064

// -[EphemeralMedia setType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10843c06c

// -[EphemeralMedia videoFilter]
// Type encoding: @16@0:8
// Implementation: 0x10843c074

// -[EphemeralMedia videoTimeSoFar]
// Type encoding: d16@0:8
// Implementation: 0x10843c07c

// -[EphemeralMedia setVideoTimeSoFar:]
// Type encoding: v24@0:8d16
// Implementation: 0x10843c084

// -[EphemeralMedia viewedTimestamp]
// Type encoding: @16@0:8
// Implementation: 0x10843c08c

// -[EphemeralMedia setViewedTimestamp:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c094

// -[EphemeralMedia cameraFrontFacing]
// Type encoding: B16@0:8
// Implementation: 0x10843c0c4

// -[EphemeralMedia setCameraFrontFacing:]
// Type encoding: v20@0:8B16
// Implementation: 0x10843c0cc

// -[EphemeralMedia orientation]
// Type encoding: q16@0:8
// Implementation: 0x10843c0d4

// -[EphemeralMedia setOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x10843c0dc

// -[EphemeralMedia ephemeralMediaKey]
// Type encoding: @16@0:8
// Implementation: 0x10843c0e4

// -[EphemeralMedia ephemeralMediaIv]
// Type encoding: @16@0:8
// Implementation: 0x10843c0ec

// -[EphemeralMedia gallerySnapId]
// Type encoding: @16@0:8
// Implementation: 0x10843c0f4

// -[EphemeralMedia setUpdateAnnouncer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c0fc

// -[EphemeralMedia forceTranscodeOnServer]
// Type encoding: B16@0:8
// Implementation: 0x10843c12c

// -[EphemeralMedia setForceTranscodeOnServer:]
// Type encoding: v20@0:8B16
// Implementation: 0x10843c134

// -[EphemeralMedia crossPostToStoryInfo]
// Type encoding: @16@0:8
// Implementation: 0x10843c13c

// -[EphemeralMedia setCrossPostToStoryInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c144

// -[EphemeralMedia mediaChecksum]
// Type encoding: @16@0:8
// Implementation: 0x10843c174

// -[EphemeralMedia setMediaChecksum:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c17c

// -[EphemeralMedia setRotationLocked:]
// Type encoding: v20@0:8B16
// Implementation: 0x10843c1ac

// -[EphemeralMedia contextHint]
// Type encoding: @16@0:8
// Implementation: 0x10843c1b4

// -[EphemeralMedia setContextHint:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c1bc

// -[EphemeralMedia notifiedUsernames]
// Type encoding: @16@0:8
// Implementation: 0x10843c1c4

// -[EphemeralMedia setNotifiedUsernames:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c1cc

// -[EphemeralMedia shouldIncludeLocationData]
// Type encoding: B16@0:8
// Implementation: 0x10843c1fc

// -[EphemeralMedia setShouldIncludeLocationData:]
// Type encoding: v20@0:8B16
// Implementation: 0x10843c204

// -[EphemeralMedia multiSnapMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10843c20c

// -[EphemeralMedia setMultiSnapMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c214

// -[EphemeralMedia storySnapClientMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10843c244

// -[EphemeralMedia setStorySnapClientMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c24c

// -[EphemeralMedia lensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10843c254

// -[EphemeralMedia setLensMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c25c

// -[EphemeralMedia unlockablesSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10843c264

// -[EphemeralMedia setUnlockablesSnapInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c26c

// -[EphemeralMedia adsTracking]
// Type encoding: @16@0:8
// Implementation: 0x10843c274

// -[EphemeralMedia setAdsTracking:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c27c

// -[EphemeralMedia snapSource]
// Type encoding: q16@0:8
// Implementation: 0x10843c2ac

// -[EphemeralMedia setSnapSource:]
// Type encoding: v24@0:8q16
// Implementation: 0x10843c2b4

// -[EphemeralMedia cameraDeepLinkMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10843c2bc

// -[EphemeralMedia setCameraDeepLinkMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c2c4

// -[EphemeralMedia quotedUserId]
// Type encoding: @16@0:8
// Implementation: 0x10843c2cc

// -[EphemeralMedia setQuotedUserId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c2d4

// -[EphemeralMedia externalContent]
// Type encoding: @16@0:8
// Implementation: 0x10843c2dc

// -[EphemeralMedia setExternalContent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c2e4

// -[EphemeralMedia localPlatformData]
// Type encoding: @16@0:8
// Implementation: 0x10843c314

// -[EphemeralMedia setLocalPlatformData:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c31c

// -[EphemeralMedia secretShareLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x10843c324

// -[EphemeralMedia setSecretShareLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c32c

// -[EphemeralMedia shareLoggingParams]
// Type encoding: @16@0:8
// Implementation: 0x10843c35c

// -[EphemeralMedia setShareLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c364

// -[EphemeralMedia setEventLoggingParams:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c394

// -[EphemeralMedia encryptedVenueId]
// Type encoding: @16@0:8
// Implementation: 0x10843c3c4

// -[EphemeralMedia setEncryptedVenueId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10843c3cc

// -[EphemeralMedia .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10843c3d4

@end
