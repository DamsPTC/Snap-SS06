// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLGGeofilterResponse
// Superclass: GPBMessage
// Address: 0x112a4f550

@interface SCLGGeofilterResponse

// Property: filterId; attributes: T@"NSString",C,D,N
// Property: expiresCountdown; attributes: Tq,D,N
// Property: image; attributes: T@"NSString",C,D,N
// Property: URLParams; attributes: T@"NSMutableDictionary",&,D,N
// Property: URLParams_Count; attributes: TQ,R,D,N
// Property: imageCroppedToVisible; attributes: T@"NSString",C,D,N
// Property: extraImageMetadata; attributes: T@"SCLGGeofilterResponse_GeofilterImageMetadata",&,D,N
// Property: hasExtraImageMetadata; attributes: TB,D,N
// Property: geofence; attributes: T@"SCLGGeofence",&,D,N
// Property: hasGeofence; attributes: TB,D,N
// Property: unlockableContentType; attributes: T@"NSString",C,D,N
// Property: unlockableContentId; attributes: T@"NSString",C,D,N
// Property: priority; attributes: Ti,D,N
// Property: positionArray; attributes: T@"NSMutableArray",&,D,N
// Property: positionArray_Count; attributes: TQ,R,D,N
// Property: dynamicContentArray; attributes: T@"NSMutableArray",&,D,N
// Property: dynamicContentArray_Count; attributes: TQ,R,D,N
// Property: isDynamicGeofilter; attributes: TB,D,N
// Property: clientCacheExpirationDateTime; attributes: Tq,D,N
// Property: clientCacheTtlMinutes; attributes: Tq,D,N
// Property: isSponsored; attributes: TB,D,N
// Property: sponsoredSlug; attributes: T@"SCLGSponsoredSlugPosAndText",&,D,N
// Property: hasSponsoredSlug; attributes: TB,D,N
// Property: sponsoredSlugPosition; attributes: T@"NSString",C,D,N
// Property: sponsoredSlugImgLink; attributes: T@"NSString",C,D,N
// Property: dynamicContentSetting; attributes: T@"SCLGGeofilterResponse_DynamicContentSetting",&,D,N
// Property: hasDynamicContentSetting; attributes: TB,D,N
// Property: isLens; attributes: TB,D,N
// Property: section; attributes: T@"NSString",C,D,N
// Property: isFeatured; attributes: TB,D,N
// Property: appstoreIapId; attributes: T@"NSString",C,D,N
// Property: gplayIapId; attributes: T@"NSString",C,D,N
// Property: targetingType; attributes: T@"NSString",C,D,N
// Property: belowDrawingLayer; attributes: TB,D,N
// Property: encGeoData; attributes: T@"NSString",C,D,N
// Property: geofilterPrompt; attributes: T@"SCLGGeofilterResponse_GeofilterPrompt",&,D,N
// Property: hasGeofilterPrompt; attributes: TB,D,N
// Property: schedule; attributes: T@"SCLGUnlockablesSchedule",&,D,N
// Property: hasSchedule; attributes: TB,D,N
// Property: unlockDurationMessage; attributes: T@"NSString",C,D,N
// Property: filterScore; attributes: Td,D,N
// Property: shouldSubsampleImage; attributes: TB,D,N
// Property: serverTimestamp; attributes: Tq,D,N
// Property: guaranteeDelivery; attributes: TB,D,N
// Property: exclusionTagsArray; attributes: T@"NSMutableArray",&,D,N
// Property: exclusionTagsArray_Count; attributes: TQ,R,D,N
// Property: excludedByTagsArray; attributes: T@"NSMutableArray",&,D,N
// Property: excludedByTagsArray_Count; attributes: TQ,R,D,N
// Property: lensCarouselIndex; attributes: Ti,D,N
// Property: isFrameFilter; attributes: TB,D,N
// Property: unlockableTrackInfo; attributes: T@"SCLGUnlockableTrackInfo",&,D,N
// Property: hasUnlockableTrackInfo; attributes: TB,D,N
// Property: unlockableCategory; attributes: T@"NSString",C,D,N
// Property: unlockableContext; attributes: T@"SCLGGeofilterResponse_UnlockableContext",&,D,N
// Property: hasUnlockableContext; attributes: TB,D,N
// Property: unlockableAttributesArray; attributes: T@"NSMutableArray",&,D,N
// Property: unlockableAttributesArray_Count; attributes: TQ,R,D,N
// Property: eligibleForNotification; attributes: TB,D,N
// Property: dynamicContextProperties; attributes: T@"SCLGGeofilterResponse_DynamicContextProperties",&,D,N
// Property: hasDynamicContextProperties; attributes: TB,D,N
// Property: stickerPackData; attributes: T@"SCLGStickerPack",&,D,N
// Property: hasStickerPackData; attributes: TB,D,N
// Property: autoStacking; attributes: T@"SCLGGeofilterResponse_AutoStacking",&,D,N
// Property: hasAutoStacking; attributes: TB,D,N
// Property: isAnimated; attributes: TB,D,N
// Property: syncSensitivity; attributes: T@"NSString",C,D,N
// Property: populatedUnlockableContextTypesArray; attributes: T@"NSMutableArray",&,D,N
// Property: populatedUnlockableContextTypesArray_Count; attributes: TQ,R,D,N
// Property: sponsoredSlugStyle; attributes: T@"SCLGGeofilterResponse_SponsoredSlugStyle",&,D,N
// Property: hasSponsoredSlugStyle; attributes: TB,D,N
// Property: isMenuFilter; attributes: TB,D,N
// Property: metaTagsArray; attributes: T@"NSMutableArray",&,D,N
// Property: metaTagsArray_Count; attributes: TQ,R,D,N
// Property: hasContextCard; attributes: TB,D,N
// Property: carouselGroup; attributes: T@"SCLGGeofilterResponse_CarouselGroup",&,D,N
// Property: hasCarouselGroup; attributes: TB,D,N
// Property: arSegmentation; attributes: T@"SCLGArSegmentationFilter",&,D,N
// Property: hasArSegmentation; attributes: TB,D,N
// Property: attachment; attributes: T@"SCLGAttachment",&,D,N
// Property: hasAttachment; attributes: TB,D,N
// Property: debugInfo; attributes: T@"SCLGGeofilterResponse_DebugInfo",&,D,N
// Property: hasDebugInfo; attributes: TB,D,N
// Property: scannableData; attributes: T@"SCLGGeofilterResponse_ScannableData",&,D,N
// Property: hasScannableData; attributes: TB,D,N
// Property: tooltip; attributes: T@"SCLGGeofilterResponse_Tooltip",&,D,N
// Property: hasTooltip; attributes: TB,D,N
// Property: contextHint; attributes: T@"NSString",C,D,N
// Property: audio; attributes: T@"SCLGGeofilterResponse_Audio",&,D,N
// Property: hasAudio; attributes: TB,D,N
// Property: captionStyle; attributes: T@"SCLGCaptionStyle",&,D,N
// Property: hasCaptionStyle; attributes: TB,D,N
// Property: filterIdLong; attributes: Tq,D,N
// Property: checksum; attributes: T@"NSData",C,D,N
// Property: eligibleForLensExplorer; attributes: TB,D,N
// Property: snapInfo; attributes: T@"NSString",C,D,N
// Property: additionalCaptionStylesArray; attributes: T@"NSMutableArray",&,D,N
// Property: additionalCaptionStylesArray_Count; attributes: TQ,R,D,N
// Property: musicTrackMetadataArray; attributes: T@"NSMutableArray",&,D,N
// Property: musicTrackMetadataArray_Count; attributes: TQ,R,D,N

// +[SCLGGeofilterResponse descriptor]
// Type encoding: @16@0:8
// Implementation: 0x1055eab74

@end
