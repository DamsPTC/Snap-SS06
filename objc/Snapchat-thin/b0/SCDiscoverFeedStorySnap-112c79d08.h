// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDiscoverFeedStorySnap
// Superclass: NSObject
// Address: 0x112c79d08

@interface SCDiscoverFeedStorySnap

// Property: snapId; attributes: T@"NSString",R,C,N,V_snapId
// Property: sssId; attributes: T@"NSString",R,C,N,V_sssId
// Property: mediaId; attributes: T@"NSString",R,C,N,V_mediaId
// Property: mediaKey; attributes: T@"NSString",R,C,N,V_mediaKey
// Property: mediaIv; attributes: T@"NSString",R,C,N,V_mediaIv
// Property: mediaURL; attributes: T@"NSString",R,C,N,V_mediaURL
// Property: videoStreamingInfo; attributes: T@"SCStoriesStreamingInfo",R,C,N,V_videoStreamingInfo
// Property: streamingFailureCode; attributes: Tq,R,N,V_streamingFailureCode
// Property: duration; attributes: Td,R,N,V_duration
// Property: isZipped; attributes: TB,R,N,V_isZipped
// Property: isInfiniteDuration; attributes: TB,R,N,V_isInfiniteDuration
// Property: attachmentUrl; attributes: T@"NSString",R,C,N,V_attachmentUrl
// Property: mediaType; attributes: Tq,R,N,V_mediaType
// Property: sourceType; attributes: Tq,R,N,V_sourceType
// Property: title; attributes: T@"NSString",R,C,N,V_title
// Property: subtitles; attributes: T@"NSArray",R,C,N,V_subtitles
// Property: displayGeoInfo; attributes: T@"NSString",R,C,N,V_displayGeoInfo
// Property: creationTime; attributes: T@"NSDate",R,C,N,V_creationTime
// Property: expirationTime; attributes: T@"NSDate",R,C,N,V_expirationTime
// Property: debugInfo; attributes: T@"NSDictionary",R,C,N,V_debugInfo
// Property: creatorInfo; attributes: T@"SCStoriesSnapCreatorInfo",R,C,N,V_creatorInfo
// Property: pivotInfo; attributes: T@"SCStoriesSnapPivotInfo",R,C,N,V_pivotInfo
// Property: lensData; attributes: T@"SCStoriesSnapLensData",R,C,N,V_lensData
// Property: audioStitchData; attributes: T@"NSData",R,C,N,V_audioStitchData
// Property: hasLensFilter; attributes: TB,R,N,V_hasLensFilter
// Property: contextHintData; attributes: T@"NSData",R,C,N,V_contextHintData
// Property: encryptedGeoData; attributes: T@"NSString",R,C,N,V_encryptedGeoData
// Property: serializedUnlockablesSnapInfo; attributes: T@"NSString",R,C,N,V_serializedUnlockablesSnapInfo
// Property: boltMedia; attributes: T@"NSString",R,C,N,V_boltMedia
// Property: boltOverlay; attributes: T@"NSString",R,C,N,V_boltOverlay
// Property: boltAudioTranscription; attributes: T@"NSString",R,C,N,V_boltAudioTranscription
// Property: boltFirstFrame; attributes: T@"NSData",R,C,N,V_boltFirstFrame
// Property: isAudioTranscriptionEncrypted; attributes: TB,R,N,V_isAudioTranscriptionEncrypted
// Property: brandFriendliness; attributes: Tq,R,N,V_brandFriendliness
// Property: garmBrandSafety; attributes: Tq,R,N,V_garmBrandSafety
// Property: contentCategories; attributes: T@"NSArray",R,C,N,V_contentCategories
// Property: sequence; attributes: Tq,R,N,V_sequence
// Property: boostMetadata; attributes: T@"SCBoostMetadataModel",R,C,N,V_boostMetadata
// Property: spotlightEngagementMetadata; attributes: T@"SCSpotlightEngagementMetadata",R,C,N,V_spotlightEngagementMetadata
// Property: spotlightStoryCardDisplayMetadata; attributes: T@"SCSpotlightStoryCardDisplayMetadata",R,C,N,V_spotlightStoryCardDisplayMetadata
// Property: rotationLocked; attributes: TB,R,N,V_rotationLocked
// Property: snapViewSignature; attributes: T@"NSData",R,C,N,V_snapViewSignature
// Property: boltWatermarkedVideoUrl; attributes: T@"NSString",R,C,N,V_boltWatermarkedVideoUrl
// Property: flatNonWatermarkVideoUrl; attributes: T@"NSString",R,C,N,V_flatNonWatermarkVideoUrl
// Property: snapDescription; attributes: T@"NSString",R,C,N,V_snapDescription
// Property: sponsor; attributes: T@"SCStoriesSnapSponsorInfo",R,C,N,V_sponsor
// Property: adsTracking; attributes: T@"SCStoriesSnapAdsTracking",R,C,N,V_adsTracking
// Property: lastUpdatedAt; attributes: Td,R,N,V_lastUpdatedAt
// Property: cameo; attributes: T@"SCStoriesCameoMetadata",R,C,N,V_cameo
// Property: spotlightRepliesEnabledOnSnap; attributes: TB,R,N,V_spotlightRepliesEnabledOnSnap
// Property: isOwnLocallyPostedContent; attributes: TB,R,N,V_isOwnLocallyPostedContent
// Property: scanOnPublicContentEnabled; attributes: TB,R,N,V_scanOnPublicContentEnabled
// Property: snapImageThumbnail; attributes: T@"SCDiscoverFeedStoryThumbnail",R,C,N,V_snapImageThumbnail
// Property: snapThumbnailMetadata; attributes: T@"SCDiscoverFeedStorySnapThumbnailMetadata",R,C,N,V_snapThumbnailMetadata
// Property: managementMetadata; attributes: T@"SCDiscoverFeedStorySnapManagement",R,C,N,V_managementMetadata
// Property: multiSnapInfo; attributes: T@"SCStoriesSnapMultiSnapInfo",R,C,N,V_multiSnapInfo
// Property: mediaOrigin; attributes: T@"NSArray",R,C,N,V_mediaOrigin
// Property: storyTypeVariant; attributes: Tq,R,N,V_storyTypeVariant
// Property: inFeedSurvey; attributes: T@"SCContentInFeedSurvey",R,C,N,V_inFeedSurvey
// Property: fromSnapchatCamera; attributes: TB,R,N,V_fromSnapchatCamera
// Property: suggestedSearchQueryCandidates; attributes: T@"NSArray",R,C,N,V_suggestedSearchQueryCandidates
// Property: suggestedSearchType; attributes: Tq,R,N,V_suggestedSearchType
// Property: poiEventEndTimeMs; attributes: Tq,R,N,V_poiEventEndTimeMs
// Property: storyShareProbability; attributes: T@"NSNumber",R,C,N,V_storyShareProbability
// Property: fanPassSnapPlaceholderCount; attributes: Tq,R,N,V_fanPassSnapPlaceholderCount
// Property: isSharingDisabled; attributes: TB,R,N,V_isSharingDisabled
// Property: tileId; attributes: T@"NSString",R,C,N,V_tileId

// -[SCDiscoverFeedStorySnap initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10b60a234

// -[SCDiscoverFeedStorySnap initWithSnapId:sssId:mediaId:mediaKey:mediaIv:mediaURL:videoStreamingInfo:streamingFailureCode:duration:isZipped:isInfiniteDuration:attachmentUrl:mediaType:sourceType:title:subtitles:displayGeoInfo:creationTime:expirationTime:debugInfo:creatorInfo:pivotInfo:lensData:audioStitchData:hasLensFilter:contextHintData:encryptedGeoData:serializedUnlockablesSnapInfo:boltMedia:boltOverlay:boltAudioTranscription:boltFirstFrame:isAudioTranscriptionEncrypted:brandFriendliness:garmBrandSafety:contentCategories:sequence:boostMetadata:spotlightEngagementMetadata:spotlightStoryCardDisplayMetadata:rotationLocked:snapViewSignature:boltWatermarkedVideoUrl:flatNonWatermarkVideoUrl:snapDescription:sponsor:adsTracking:lastUpdatedAt:cameo:spotlightRepliesEnabledOnSnap:isOwnLocallyPostedContent:scanOnPublicContentEnabled:snapImageThumbnail:snapThumbnailMetadata:managementMetadata:multiSnapInfo:mediaOrigin:storyTypeVariant:inFeedSurvey:fromSnapchatCamera:suggestedSearchQueryCandidates:suggestedSearchType:poiEventEndTimeMs:storyShareProbability:fanPassSnapPlaceholderCount:isSharingDisabled:tileId:]
// Type encoding: @512@0:8@16@24@32@40@48@56@64q72d80B88B92@96q104q112@120@128@136@144@152@160@168@176@184@192B200@204@212@220@228@236@244@252B260q264q272@280q288@296@304@312B320@324@332@340@348@356@364d372@380B388B392B396@400@408@416@424@432q440@448B456@460q468q476@484q492B500@504
// Implementation: 0x10b60ab54

// -[SCDiscoverFeedStorySnap copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10b60b570

// -[SCDiscoverFeedStorySnap encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b60b594

// -[SCDiscoverFeedStorySnap hash]
// Type encoding: Q16@0:8
// Implementation: 0x10b60bb08

// -[SCDiscoverFeedStorySnap isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10b60be60

// -[SCDiscoverFeedStorySnap snapId]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4c0

// -[SCDiscoverFeedStorySnap sssId]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4c8

// -[SCDiscoverFeedStorySnap mediaId]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4d0

// -[SCDiscoverFeedStorySnap mediaKey]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4d8

// -[SCDiscoverFeedStorySnap mediaIv]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4e0

// -[SCDiscoverFeedStorySnap mediaURL]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4e8

// -[SCDiscoverFeedStorySnap videoStreamingInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c4f0

// -[SCDiscoverFeedStorySnap streamingFailureCode]
// Type encoding: q16@0:8
// Implementation: 0x10b60c4f8

// -[SCDiscoverFeedStorySnap duration]
// Type encoding: d16@0:8
// Implementation: 0x10b60c500

// -[SCDiscoverFeedStorySnap isZipped]
// Type encoding: B16@0:8
// Implementation: 0x10b60c508

// -[SCDiscoverFeedStorySnap isInfiniteDuration]
// Type encoding: B16@0:8
// Implementation: 0x10b60c510

// -[SCDiscoverFeedStorySnap attachmentUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b60c518

// -[SCDiscoverFeedStorySnap mediaType]
// Type encoding: q16@0:8
// Implementation: 0x10b60c520

// -[SCDiscoverFeedStorySnap sourceType]
// Type encoding: q16@0:8
// Implementation: 0x10b60c528

// -[SCDiscoverFeedStorySnap title]
// Type encoding: @16@0:8
// Implementation: 0x10b60c530

// -[SCDiscoverFeedStorySnap subtitles]
// Type encoding: @16@0:8
// Implementation: 0x10b60c538

// -[SCDiscoverFeedStorySnap displayGeoInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c540

// -[SCDiscoverFeedStorySnap creationTime]
// Type encoding: @16@0:8
// Implementation: 0x10b60c548

// -[SCDiscoverFeedStorySnap expirationTime]
// Type encoding: @16@0:8
// Implementation: 0x10b60c550

// -[SCDiscoverFeedStorySnap debugInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c558

// -[SCDiscoverFeedStorySnap creatorInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c560

// -[SCDiscoverFeedStorySnap pivotInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c568

// -[SCDiscoverFeedStorySnap lensData]
// Type encoding: @16@0:8
// Implementation: 0x10b60c570

// -[SCDiscoverFeedStorySnap audioStitchData]
// Type encoding: @16@0:8
// Implementation: 0x10b60c578

// -[SCDiscoverFeedStorySnap hasLensFilter]
// Type encoding: B16@0:8
// Implementation: 0x10b60c580

// -[SCDiscoverFeedStorySnap contextHintData]
// Type encoding: @16@0:8
// Implementation: 0x10b60c588

// -[SCDiscoverFeedStorySnap encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x10b60c590

// -[SCDiscoverFeedStorySnap serializedUnlockablesSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c598

// -[SCDiscoverFeedStorySnap boltMedia]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5a0

// -[SCDiscoverFeedStorySnap boltOverlay]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5a8

// -[SCDiscoverFeedStorySnap boltAudioTranscription]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5b0

// -[SCDiscoverFeedStorySnap boltFirstFrame]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5b8

// -[SCDiscoverFeedStorySnap isAudioTranscriptionEncrypted]
// Type encoding: B16@0:8
// Implementation: 0x10b60c5c0

// -[SCDiscoverFeedStorySnap brandFriendliness]
// Type encoding: q16@0:8
// Implementation: 0x10b60c5c8

// -[SCDiscoverFeedStorySnap garmBrandSafety]
// Type encoding: q16@0:8
// Implementation: 0x10b60c5d0

// -[SCDiscoverFeedStorySnap contentCategories]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5d8

// -[SCDiscoverFeedStorySnap sequence]
// Type encoding: q16@0:8
// Implementation: 0x10b60c5e0

// -[SCDiscoverFeedStorySnap boostMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5e8

// -[SCDiscoverFeedStorySnap spotlightEngagementMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5f0

// -[SCDiscoverFeedStorySnap spotlightStoryCardDisplayMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b60c5f8

// -[SCDiscoverFeedStorySnap rotationLocked]
// Type encoding: B16@0:8
// Implementation: 0x10b60c600

// -[SCDiscoverFeedStorySnap snapViewSignature]
// Type encoding: @16@0:8
// Implementation: 0x10b60c608

// -[SCDiscoverFeedStorySnap boltWatermarkedVideoUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b60c610

// -[SCDiscoverFeedStorySnap flatNonWatermarkVideoUrl]
// Type encoding: @16@0:8
// Implementation: 0x10b60c618

// -[SCDiscoverFeedStorySnap snapDescription]
// Type encoding: @16@0:8
// Implementation: 0x10b60c620

// -[SCDiscoverFeedStorySnap sponsor]
// Type encoding: @16@0:8
// Implementation: 0x10b60c628

// -[SCDiscoverFeedStorySnap adsTracking]
// Type encoding: @16@0:8
// Implementation: 0x10b60c630

// -[SCDiscoverFeedStorySnap lastUpdatedAt]
// Type encoding: d16@0:8
// Implementation: 0x10b60c638

// -[SCDiscoverFeedStorySnap cameo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c640

// -[SCDiscoverFeedStorySnap spotlightRepliesEnabledOnSnap]
// Type encoding: B16@0:8
// Implementation: 0x10b60c648

// -[SCDiscoverFeedStorySnap isOwnLocallyPostedContent]
// Type encoding: B16@0:8
// Implementation: 0x10b60c650

// -[SCDiscoverFeedStorySnap scanOnPublicContentEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10b60c658

// -[SCDiscoverFeedStorySnap snapImageThumbnail]
// Type encoding: @16@0:8
// Implementation: 0x10b60c660

// -[SCDiscoverFeedStorySnap snapThumbnailMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b60c668

// -[SCDiscoverFeedStorySnap managementMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10b60c670

// -[SCDiscoverFeedStorySnap multiSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x10b60c678

// -[SCDiscoverFeedStorySnap mediaOrigin]
// Type encoding: @16@0:8
// Implementation: 0x10b60c680

// -[SCDiscoverFeedStorySnap storyTypeVariant]
// Type encoding: q16@0:8
// Implementation: 0x10b60c688

// -[SCDiscoverFeedStorySnap inFeedSurvey]
// Type encoding: @16@0:8
// Implementation: 0x10b60c690

// -[SCDiscoverFeedStorySnap fromSnapchatCamera]
// Type encoding: B16@0:8
// Implementation: 0x10b60c698

// -[SCDiscoverFeedStorySnap suggestedSearchQueryCandidates]
// Type encoding: @16@0:8
// Implementation: 0x10b60c6a0

// -[SCDiscoverFeedStorySnap suggestedSearchType]
// Type encoding: q16@0:8
// Implementation: 0x10b60c6a8

// -[SCDiscoverFeedStorySnap poiEventEndTimeMs]
// Type encoding: q16@0:8
// Implementation: 0x10b60c6b0

// -[SCDiscoverFeedStorySnap storyShareProbability]
// Type encoding: @16@0:8
// Implementation: 0x10b60c6b8

// -[SCDiscoverFeedStorySnap fanPassSnapPlaceholderCount]
// Type encoding: q16@0:8
// Implementation: 0x10b60c6c0

// -[SCDiscoverFeedStorySnap isSharingDisabled]
// Type encoding: B16@0:8
// Implementation: 0x10b60c6c8

// -[SCDiscoverFeedStorySnap tileId]
// Type encoding: @16@0:8
// Implementation: 0x10b60c6d0

// -[SCDiscoverFeedStorySnap .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10b60c6d8

@end
