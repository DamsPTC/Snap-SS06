// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGeoFilter
// Superclass: SCGeofencedObject
// Address: 0x112be8538

@interface SCGeoFilter

// Property: expirationDate; attributes: T@"NSDate",R,N,V_expirationDate
// Property: assetTTL; attributes: Td,R,N,V_assetTTL
// Property: eligibility; attributes: Tq,R,N,V_eligibility
// Property: filterId; attributes: T@"NSString",R,C,N,V_filterId
// Property: venueId; attributes: T@"NSString",R,C,N,V_venueId
// Property: displayName; attributes: T@"NSString",R,C,N,V_displayName
// Property: isFromPostCaptureLensExplorer; attributes: TB,R,N,V_isFromPostCaptureLensExplorer
// Property: isSnapchatPlusExclusive; attributes: TB,R,N,V_isSnapchatPlusExclusive
// Property: editingStateIdentifier; attributes: T@"NSString",R,N
// Property: unlockableId; attributes: T@"NSString",R,C,N
// Property: unlockableContentType; attributes: Tq,R,N,V_unlockableContentType
// Property: priority; attributes: Tq,R,N,V_priority
// Property: scaleSetting; attributes: Tq,R,N,V_scaleSetting
// Property: positionSetting; attributes: TQ,R,N,V_positionSetting
// Property: targetingType; attributes: TQ,R,N,V_targetingType
// Property: isSponsored; attributes: TB,R,N,V_isSponsored
// Property: isFrameFilter; attributes: TB,R,N,V_isFrameFilter
// Property: isActionmoji; attributes: TB,R,N
// Property: isFriendFilter; attributes: TB,R,N
// Property: isBitmoji; attributes: TB,R,N
// Property: isUnifiedCameraObject; attributes: TB,R,N,V_isUnifiedCameraObject
// Property: sponsoredSlug; attributes: T@"SCSponsoredSlug",R,N,V_sponsoredSlug
// Property: loadingMetaData; attributes: T@"SCGeoFilterLoadingMetaData",R,N,V_loadingMetaData
// Property: belowDrawingLayer; attributes: TB,R,N,GisBelowDrawingLayer,V_belowDrawingLayer
// Property: isAnimated; attributes: TB,R,N,V_isAnimated
// Property: encryptedGeoData; attributes: T@"NSString",R,C,N,V_encryptedGeoData
// Property: imageURL; attributes: T@"NSURL",R,C,N,V_imageURL
// Property: croppedImageURL; attributes: T@"NSURL",R,C,N,V_croppedImageURL
// Property: extraImageMetadata; attributes: T@"SOJUGeofilterImageMetadata",R,C,N,V_extraImageMetadata
// Property: imageURLParams; attributes: T@"NSDictionary",R,C,N,V_imageURLParams
// Property: isPrecached; attributes: TB,R,N,V_isPrecached
// Property: autoStacking; attributes: Tq,R,N,V_autoStacking
// Property: unlockableContexts; attributes: T@"NSDictionary",R,N,V_unlockableContexts
// Property: unlockableAttributes; attributes: T@"NSArray",R,C,N,V_unlockableAttributes
// Property: unlockableCategory; attributes: T@"NSString",R,C,N,V_unlockableCategory
// Property: requestId; attributes: T@"NSString",&,N,V_requestId
// Property: autoRefreshDelayInMilliseconds; attributes: Tq,R,N,V_autoRefreshDelayInMilliseconds
// Property: autoRefreshLabelPosition; attributes: T{CGPoint=dd},R,N,V_autoRefreshLabelPosition
// Property: dynamicFilterRefreshHint; attributes: T@"NSString",R,C,N,V_dynamicFilterRefreshHint
// Property: dynamicFilterUpdatingMessage; attributes: T@"NSString",R,C,N,V_dynamicFilterUpdatingMessage
// Property: unlockImageLink; attributes: T@"NSString",C,N,V_unlockImageLink
// Property: filterPrompt; attributes: T@"NSDictionary",R,C,N,V_filterPrompt
// Property: filterScore; attributes: T@"NSNumber",R,C,N,V_filterScore
// Property: carouselGlobalScoreList; attributes: T@"NSArray",R,C,N,V_carouselGlobalScoreList
// Property: exclusionTags; attributes: T@"NSSet",R,C,N,V_exclusionTags
// Property: excludedByTags; attributes: T@"NSSet",R,C,N,V_excludedByTags
// Property: scheduleIntervals; attributes: T@"NSArray",R,C,N,V_scheduleIntervals
// Property: isMenuFilter; attributes: TB,R,N,V_isMenuFilter
// Property: mediaFilterSubType; attributes: Tq,R,N
// Property: metaTags; attributes: T@"NSSet",R,C,N,V_metaTags
// Property: carouselGroup; attributes: T@"SOJUUnlockablesCarouselGroup",R,N,V_carouselGroup
// Property: tooltip; attributes: T@"SOJUUnlockablesTooltip",R,N,V_tooltip
// Property: attachment; attributes: T@"SOJUUnlockablesAttachment",R,N,V_attachment
// Property: unlockableTrackInfo; attributes: T@"SOJUUnlockableTrackInfo",R,C,N,V_unlockableTrackInfo
// Property: eligibleForNotification; attributes: TB,R,N,V_eligibleForNotification
// Property: arSegmentation; attributes: T@"SOJUUnlockablesArSegmentationFilter",R,C,N,V_arSegmentation
// Property: audio; attributes: T@"SOJUUnlockablesAudio",R,C,N,V_audio
// Property: dynamicContextProperties; attributes: T@"NSDictionary",R,C,N,V_dynamicContextProperties
// Property: debugInfo; attributes: T@"NSString",R,C,N,V_debugInfo

// -[SCGeoFilter appearanceSettings]
// Type encoding: @16@0:8
// Implementation: 0x109138d4c

// -[SCGeoFilter initWithCTPFilterEntity:requestId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10913918c

// -[SCGeoFilter initWithLocationId:geoFenceLocationPoints:filterId:displayName:isFromPostCaptureLensExplorer:expirationDate:scaleSetting:positionSetting:isSponsored:sponsoredSlug:targetingType:autoRefreshDelayInMilliseconds:autoRefreshLabelPosition:dynamicFilterRefreshHint:dynamicFilterUpdatingMessage:belowDrawingLayer:isAnimated:encryptedGeoData:unlockableContentType:isFrameFilter:unlockableTrackInfo:imageURL:imageURLParams:dynamicContextProperties:autoStacking:arSegmentation:carouselGroup:carouselGlobalScoreList:audio:isUnifiedCameraObject:isSnapchatPlusExclusive:]
// Type encoding: @244@0:8@16@24@32@40B48@52q60Q68B76@80Q88q96{CGPoint=dd}104@120@128B136B140@144q152B160@164@172@180@188q196@204@212@220@228B236B240
// Implementation: 0x10913b900

// -[SCGeoFilter initWithDictionary:]
// Type encoding: @24@0:8@16
// Implementation: 0x10913be14

// -[SCGeoFilter initWithFilterId:isUnifiedCameraObject:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10913be20

// -[SCGeoFilter initWithDictionary:isPreCached:isUnifiedCameraObject:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x10913beb8

// -[SCGeoFilter mapUnlockablesContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x10913cdf4

// -[SCGeoFilter initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x10913d064

// -[SCGeoFilter encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913d6ec

// -[SCGeoFilter geoFilterImageWithCompletion:contextData:unifiedCameraObjectDataFetcher:userSession:bitmojiImageFetcher:bitmojiAvatarProvider:displayName:skipLensContent:]
// Type encoding: v76@0:8@?16@24@32@40@48@56@64B72
// Implementation: 0x10913dd44

// -[SCGeoFilter prepareGeoFilterImageWithCompletion:contextData:unifiedCameraObjectDataFetcher:userSession:bitmojiImageFetcher:bitmojiAvatarProvider:displayName:skipLensContent:]
// Type encoding: v76@0:8@?16@24@32@40@48@56@64B72
// Implementation: 0x10913dfac

// -[SCGeoFilter fetchBitmojiImageWithContextData:bitmojiImageFetcher:bitmojiAvatarProvider:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x10913e060

// -[SCGeoFilter imageLoadingKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x10913e67c

// -[SCGeoFilter loadContextFilterInputWithGroup:userSession:fetchErrors:contextFilterInputWrapper:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10913e730

// -[SCGeoFilter loadAudioInputWithGroup:userSession:fetchErrors:audioInputWrapper:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10913e8f0

// -[SCGeoFilter loadUCODataWithGroup:unifiedCameraObjectDataFetcher:fetchErrors:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10913eab0

// -[SCGeoFilter loadUCOIconWithGroup:UCODataFetcher:fetchErrors:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10913ed84

// -[SCGeoFilter isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10913f058

// -[SCGeoFilter hash]
// Type encoding: Q16@0:8
// Implementation: 0x10913f064

// -[SCGeoFilter geofilterMissLoggingType]
// Type encoding: q16@0:8
// Implementation: 0x10913f068

// -[SCGeoFilter urlAttachment]
// Type encoding: @16@0:8
// Implementation: 0x10913f0bc

// -[SCGeoFilter isActionmoji]
// Type encoding: B16@0:8
// Implementation: 0x10913f11c

// -[SCGeoFilter isFriendFilter]
// Type encoding: B16@0:8
// Implementation: 0x10913f184

// -[SCGeoFilter isBitmoji]
// Type encoding: B16@0:8
// Implementation: 0x10913f1f0

// -[SCGeoFilter mediaFilterSubType]
// Type encoding: q16@0:8
// Implementation: 0x10913f214

// -[SCGeoFilter shouldFlattenImageLayers]
// Type encoding: B16@0:8
// Implementation: 0x10913f24c

// -[SCGeoFilter unlockableId]
// Type encoding: @16@0:8
// Implementation: 0x10913f254

// -[SCGeoFilter editingStateIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x10913f284

// -[SCGeoFilter _encodingForAdsBase64:]
// Type encoding: @24@0:8@16
// Implementation: 0x10913f2d0

// -[SCGeoFilter _carouselGlobalScoreListFromCarouselPosition:]
// Type encoding: @24@0:8@16
// Implementation: 0x10913f338

// -[SCGeoFilter unlockableContexts]
// Type encoding: @16@0:8
// Implementation: 0x10913f4a8

// -[SCGeoFilter expirationDate]
// Type encoding: @16@0:8
// Implementation: 0x10913f4b8

// -[SCGeoFilter assetTTL]
// Type encoding: d16@0:8
// Implementation: 0x10913f4c8

// -[SCGeoFilter eligibility]
// Type encoding: q16@0:8
// Implementation: 0x10913f4d8

// -[SCGeoFilter filterId]
// Type encoding: @16@0:8
// Implementation: 0x10913f4e8

// -[SCGeoFilter venueId]
// Type encoding: @16@0:8
// Implementation: 0x10913f4f8

// -[SCGeoFilter displayName]
// Type encoding: @16@0:8
// Implementation: 0x10913f508

// -[SCGeoFilter isFromPostCaptureLensExplorer]
// Type encoding: B16@0:8
// Implementation: 0x10913f518

// -[SCGeoFilter isSnapchatPlusExclusive]
// Type encoding: B16@0:8
// Implementation: 0x10913f528

// -[SCGeoFilter unlockableContentType]
// Type encoding: q16@0:8
// Implementation: 0x10913f538

// -[SCGeoFilter priority]
// Type encoding: q16@0:8
// Implementation: 0x10913f548

// -[SCGeoFilter scaleSetting]
// Type encoding: q16@0:8
// Implementation: 0x10913f558

// -[SCGeoFilter positionSetting]
// Type encoding: Q16@0:8
// Implementation: 0x10913f568

// -[SCGeoFilter targetingType]
// Type encoding: Q16@0:8
// Implementation: 0x10913f578

// -[SCGeoFilter isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x10913f588

// -[SCGeoFilter isFrameFilter]
// Type encoding: B16@0:8
// Implementation: 0x10913f598

// -[SCGeoFilter isUnifiedCameraObject]
// Type encoding: B16@0:8
// Implementation: 0x10913f5a8

// -[SCGeoFilter sponsoredSlug]
// Type encoding: @16@0:8
// Implementation: 0x10913f5b8

// -[SCGeoFilter loadingMetaData]
// Type encoding: @16@0:8
// Implementation: 0x10913f5c8

// -[SCGeoFilter isBelowDrawingLayer]
// Type encoding: B16@0:8
// Implementation: 0x10913f5d8

// -[SCGeoFilter isAnimated]
// Type encoding: B16@0:8
// Implementation: 0x10913f5e8

// -[SCGeoFilter encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x10913f5f8

// -[SCGeoFilter imageURL]
// Type encoding: @16@0:8
// Implementation: 0x10913f608

// -[SCGeoFilter croppedImageURL]
// Type encoding: @16@0:8
// Implementation: 0x10913f618

// -[SCGeoFilter extraImageMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10913f628

// -[SCGeoFilter imageURLParams]
// Type encoding: @16@0:8
// Implementation: 0x10913f638

// -[SCGeoFilter isPrecached]
// Type encoding: B16@0:8
// Implementation: 0x10913f648

// -[SCGeoFilter autoStacking]
// Type encoding: q16@0:8
// Implementation: 0x10913f658

// -[SCGeoFilter unlockableAttributes]
// Type encoding: @16@0:8
// Implementation: 0x10913f668

// -[SCGeoFilter unlockableCategory]
// Type encoding: @16@0:8
// Implementation: 0x10913f678

// -[SCGeoFilter requestId]
// Type encoding: @16@0:8
// Implementation: 0x10913f688

// -[SCGeoFilter setRequestId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913f698

// -[SCGeoFilter autoRefreshDelayInMilliseconds]
// Type encoding: q16@0:8
// Implementation: 0x10913f6d8

// -[SCGeoFilter autoRefreshLabelPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10913f6e8

// -[SCGeoFilter dynamicFilterRefreshHint]
// Type encoding: @16@0:8
// Implementation: 0x10913f6fc

// -[SCGeoFilter dynamicFilterUpdatingMessage]
// Type encoding: @16@0:8
// Implementation: 0x10913f70c

// -[SCGeoFilter unlockImageLink]
// Type encoding: @16@0:8
// Implementation: 0x10913f71c

// -[SCGeoFilter setUnlockImageLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10913f72c

// -[SCGeoFilter filterPrompt]
// Type encoding: @16@0:8
// Implementation: 0x10913f738

// -[SCGeoFilter filterScore]
// Type encoding: @16@0:8
// Implementation: 0x10913f748

// -[SCGeoFilter carouselGlobalScoreList]
// Type encoding: @16@0:8
// Implementation: 0x10913f758

// -[SCGeoFilter exclusionTags]
// Type encoding: @16@0:8
// Implementation: 0x10913f768

// -[SCGeoFilter excludedByTags]
// Type encoding: @16@0:8
// Implementation: 0x10913f778

// -[SCGeoFilter scheduleIntervals]
// Type encoding: @16@0:8
// Implementation: 0x10913f788

// -[SCGeoFilter isMenuFilter]
// Type encoding: B16@0:8
// Implementation: 0x10913f798

// -[SCGeoFilter metaTags]
// Type encoding: @16@0:8
// Implementation: 0x10913f7a8

// -[SCGeoFilter carouselGroup]
// Type encoding: @16@0:8
// Implementation: 0x10913f7b8

// -[SCGeoFilter tooltip]
// Type encoding: @16@0:8
// Implementation: 0x10913f7c8

// -[SCGeoFilter attachment]
// Type encoding: @16@0:8
// Implementation: 0x10913f7d8

// -[SCGeoFilter unlockableTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x10913f7e8

// -[SCGeoFilter eligibleForNotification]
// Type encoding: B16@0:8
// Implementation: 0x10913f7f8

// -[SCGeoFilter arSegmentation]
// Type encoding: @16@0:8
// Implementation: 0x10913f808

// -[SCGeoFilter audio]
// Type encoding: @16@0:8
// Implementation: 0x10913f818

// -[SCGeoFilter dynamicContextProperties]
// Type encoding: @16@0:8
// Implementation: 0x10913f828

// -[SCGeoFilter debugInfo]
// Type encoding: @16@0:8
// Implementation: 0x10913f838

// -[SCGeoFilter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10913f848

// +[SCGeoFilter geoFilterWithDictionary:isPreCached:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10913903c

// +[SCGeoFilter geoFilterWithDictionary:isPreCached:isUnifiedCameraObject:]
// Type encoding: @32@0:8@16B24B28
// Implementation: 0x109139044

// +[SCGeoFilter geoFilterWithCTPFilterEntity:requestId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1091390ec

@end
