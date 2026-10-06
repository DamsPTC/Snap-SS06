// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SOJUGeofilterResponse
// Superclass: SCSojuMessage
// Address: 0x112cc83e0

@interface SOJUGeofilterResponse

// Property: filterId; attributes: T@"NSString",R,D,N
// Property: expiresCountdown; attributes: T@"NSNumber",R,D,N
// Property: image; attributes: T@"NSString",R,D,N
// Property: urlParams; attributes: T@"NSDictionary",R,D,N
// Property: imageCroppedToVisible; attributes: T@"NSString",R,D,N
// Property: extraImageMetadata; attributes: T@"SOJUGeofilterImageMetadata",R,D,N
// Property: geofence; attributes: T@"SOJUGeofence",R,D,N
// Property: unlockableContentType; attributes: T@"NSString",R,D,N
// Property: unlockableContentId; attributes: T@"NSString",R,D,N
// Property: priority; attributes: T@"NSNumber",R,D,N
// Property: position; attributes: T@"NSArray",R,D,N
// Property: dynamicContent; attributes: T@"NSArray",R,D,N
// Property: isDynamicGeofilter; attributes: T@"NSNumber",R,D,N
// Property: clientCacheExpirationDateTimeDeprecated; attributes: T@"NSNumber",R,D,N
// Property: clientCacheTtlMinutes; attributes: T@"NSNumber",R,D,N
// Property: isSponsored; attributes: T@"NSNumber",R,D,N
// Property: sponsoredSlug; attributes: T@"SOJUSponsoredSlugPosAndText",R,D,N
// Property: sponsoredSlugPosition; attributes: T@"NSString",R,D,N
// Property: sponsoredSlugImgLink; attributes: T@"NSString",R,D,N
// Property: dynamicContentSetting; attributes: T@"SOJUDynamicContentSetting",R,D,N
// Property: isLens; attributes: T@"NSNumber",R,D,N
// Property: lensData; attributes: T@"SOJULensData",R,D,N
// Property: lensCategories; attributes: T@"NSArray",R,D,N
// Property: section; attributes: T@"NSString",R,D,N
// Property: isFeatured; attributes: T@"NSNumber",R,D,N
// Property: appstoreIapId; attributes: T@"NSString",R,D,N
// Property: gplayIapId; attributes: T@"NSString",R,D,N
// Property: targetingType; attributes: T@"NSString",R,D,N
// Property: belowDrawingLayer; attributes: T@"NSNumber",R,D,N
// Property: encGeoData; attributes: T@"NSString",R,D,N
// Property: geofilterPrompt; attributes: T@"SOJUGeofilterPrompt",R,D,N
// Property: schedule; attributes: T@"SOJUUnlockablesSchedule",R,D,N
// Property: unlockDurationMessage; attributes: T@"NSString",R,D,N
// Property: filterScore; attributes: T@"NSNumber",R,D,N
// Property: shouldSubsampleImage; attributes: T@"NSNumber",R,D,N
// Property: lensCategoriesData; attributes: T@"NSArray",R,D,N
// Property: serverTimestamp; attributes: T@"NSNumber",R,D,N
// Property: guaranteeDelivery; attributes: T@"NSNumber",R,D,N
// Property: exclusionTags; attributes: T@"NSArray",R,D,N
// Property: excludedByTags; attributes: T@"NSArray",R,D,N
// Property: lensCarouselIndex; attributes: T@"NSNumber",R,D,N
// Property: lensPlacementInfo; attributes: T@"SOJULensPlacementInfo",R,D,N
// Property: isFrameFilter; attributes: T@"NSNumber",R,D,N
// Property: unlockableTrackInfo; attributes: T@"SOJUUnlockableTrackInfo",R,D,N
// Property: unlockableCategory; attributes: T@"NSString",R,D,N
// Property: unlockableContext; attributes: T@"SOJUUnlockablesUnlockableContext",R,D,N
// Property: unlockableAttributes; attributes: T@"NSArray",R,D,N
// Property: eligibleForNotification; attributes: T@"NSNumber",R,D,N
// Property: dynamicContextProperties; attributes: T@"SOJUUnlockablesDynamicContextProperties",R,D,N
// Property: stickerPackData; attributes: T@"SOJUStickerPack",R,D,N
// Property: autoStacking; attributes: T@"SOJUUnlockablesAutoStacking",R,D,N
// Property: isAnimated; attributes: T@"NSNumber",R,D,N
// Property: syncSensitivity; attributes: T@"NSString",R,D,N
// Property: populatedUnlockableContextTypes; attributes: T@"NSArray",R,D,N
// Property: sponsoredSlugStyle; attributes: T@"SOJUSponsoredSlugStyle",R,D,N
// Property: isMenuFilter; attributes: T@"NSNumber",R,D,N
// Property: metaTags; attributes: T@"NSArray",R,D,N
// Property: hasContextCard; attributes: T@"NSNumber",R,D,N
// Property: carouselGroup; attributes: T@"SOJUUnlockablesCarouselGroup",R,D,N
// Property: arSegmentation; attributes: T@"SOJUUnlockablesArSegmentationFilter",R,D,N
// Property: attachment; attributes: T@"SOJUUnlockablesAttachment",R,D,N
// Property: debugInfo; attributes: T@"SOJUUnlockablesDebugInfo",R,D,N
// Property: scannableData; attributes: T@"SOJUUnlockablesScannableData",R,D,N
// Property: tooltip; attributes: T@"SOJUUnlockablesTooltip",R,D,N
// Property: contextHint; attributes: T@"NSString",R,D,N
// Property: audio; attributes: T@"SOJUUnlockablesAudio",R,D,N
// Property: postCaptureLensDataDeprecated; attributes: T@"SOJUUnlockablesPostCaptureLensData",R,D,N
// Property: captionStyle; attributes: T@"SOJUUnlockablesCaptionStyle",R,D,N
// Property: filterIdLong; attributes: T@"NSNumber",R,D,N
// Property: checksum; attributes: T@"NSData",R,D,N
// Property: eligibleForLensExplorer; attributes: T@"NSNumber",R,D,N
// Property: snapInfo; attributes: T@"NSString",R,D,N
// Property: additionalCaptionStyles; attributes: T@"NSArray",R,D,N
// Property: musicTrackMetadata; attributes: T@"NSArray",R,D,N
// Property: adPlacements; attributes: T@"NSDictionary",R,D,N
// Property: sponsoredType; attributes: T@"NSString",R,D,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SOJUGeofilterResponse initWithFilterId:expiresCountdown:image:urlParams:imageCroppedToVisible:extraImageMetadata:geofence:unlockableContentType:unlockableContentId:priority:position:dynamicContent:isDynamicGeofilter:clientCacheExpirationDateTimeDeprecated:clientCacheTtlMinutes:isSponsored:sponsoredSlug:sponsoredSlugPosition:sponsoredSlugImgLink:dynamicContentSetting:isLens:lensData:lensCategories:section:isFeatured:appstoreIapId:gplayIapId:targetingType:belowDrawingLayer:encGeoData:geofilterPrompt:schedule:unlockDurationMessage:filterScore:shouldSubsampleImage:lensCategoriesData:serverTimestamp:guaranteeDelivery:exclusionTags:excludedByTags:lensCarouselIndex:lensPlacementInfo:isFrameFilter:unlockableTrackInfo:unlockableCategory:unlockableContext:unlockableAttributes:eligibleForNotification:dynamicContextProperties:stickerPackData:autoStacking:isAnimated:syncSensitivity:populatedUnlockableContextTypes:sponsoredSlugStyle:isMenuFilter:metaTags:hasContextCard:carouselGroup:arSegmentation:attachment:debugInfo:scannableData:tooltip:contextHint:audio:postCaptureLensDataDeprecated:captionStyle:filterIdLong:checksum:eligibleForLensExplorer:snapInfo:additionalCaptionStyles:musicTrackMetadata:adPlacements:sponsoredType:]
// Type encoding: @624@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168@176@184@192@200@208@216@224@232@240@248@256@264@272@280@288@296@304@312@320@328@336@344@352@360@368@376@384@392@400@408@416@424@432@440@448@456@464@472@480@488@496@504@512@520@528@536@544@552@560@568@576@584@592@600@608@616
// Implementation: 0x10b781e9c

// +[SOJUGeofilterResponse canInitFromProto]
// Type encoding: B16@0:8
// Implementation: 0x10b781e94

// +[SOJUGeofilterResponse registerMessageFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x10b782024

@end
