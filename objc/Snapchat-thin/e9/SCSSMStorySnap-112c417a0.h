// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSSMStorySnap
// Superclass: GPBMessage
// Address: 0x112c417a0

@interface SCSSMStorySnap

// Property: rawSnapId; attributes: T@"NSString",C,D,N
// Property: snapClientId; attributes: T@"NSString",C,D,N
// Property: fragmentMetadata; attributes: T@"SCSSMSnapFragmentMetadata",&,D,N
// Property: hasFragmentMetadata; attributes: TB,D,N
// Property: sharedStorySubmissionId; attributes: T@"NSString",C,D,N
// Property: originalSnapId; attributes: T@"NSString",C,D,N
// Property: mediaInfo; attributes: T@"SCSSMSnapMediaInfo",&,D,N
// Property: hasMediaInfo; attributes: TB,D,N
// Property: snapThumbnail; attributes: T@"SCSSMStoryThumbnail",&,D,N
// Property: hasSnapThumbnail; attributes: TB,D,N
// Property: creationTimestampMs; attributes: Tq,D,N
// Property: sourceCreationTimestamp; attributes: Tq,D,N
// Property: expirationTimestampMs; attributes: Tq,D,N
// Property: title; attributes: T@"NSString",C,D,N
// Property: subTitlesArray; attributes: T@"NSMutableArray",&,D,N
// Property: subTitlesArray_Count; attributes: TQ,R,D,N
// Property: displayGeoInfo; attributes: T@"NSString",C,D,N
// Property: pivotInfo; attributes: T@"SCSSMSnapPivotInfo",&,D,N
// Property: hasPivotInfo; attributes: TB,D,N
// Property: creatorInfo; attributes: T@"SCSSMSnapCreatorInfo",&,D,N
// Property: hasCreatorInfo; attributes: TB,D,N
// Property: attachmentURL; attributes: T@"NSString",C,D,N
// Property: audioStitchData; attributes: T@"NSData",C,D,N
// Property: multiSnapExtension; attributes: T@"SCSCOREMultiSnapExtension",&,D,N
// Property: hasMultiSnapExtension; attributes: TB,D,N
// Property: snapSource; attributes: T@"SCSCORESnapSource",&,D,N
// Property: hasSnapSource; attributes: TB,D,N
// Property: encryptedGeoData; attributes: T@"NSString",C,D,N
// Property: storyFilterId; attributes: T@"NSString",C,D,N
// Property: filterId; attributes: T@"NSString",C,D,N
// Property: serializedUnlockablesSnapInfo; attributes: T@"NSData",C,D,N
// Property: lensId; attributes: T@"NSString",C,D,N
// Property: lensMetadata; attributes: T@"NSData",C,D,N
// Property: hasSnappablesMetadata; attributes: TB,D,N
// Property: externalId; attributes: T@"NSString",C,D,N
// Property: brandFriendliness; attributes: Ti,D,N
// Property: isPetraBrandSafe; attributes: TB,D,N
// Property: isPublic; attributes: TB,D,N
// Property: caption; attributes: T@"NSString",C,D,N
// Property: snapConnectAttributes; attributes: T@"SCConnectSnapConnectAttributes",&,D,N
// Property: hasSnapConnectAttributes; attributes: TB,D,N
// Property: boostMetadata; attributes: T@"BoostMetadata",&,D,N
// Property: hasBoostMetadata; attributes: TB,D,N
// Property: engagementStats; attributes: T@"SCSSMEngagementStats",&,D,N
// Property: hasEngagementStats; attributes: TB,D,N
// Property: animatedSnapType; attributes: Ti,D,N
// Property: isRotationLocked; attributes: TB,D,N
// Property: ourStoryDestinationsArray; attributes: T@"GPBEnumArray",&,D,N
// Property: ourStoryDestinationsArray_Count; attributes: TQ,R,D,N
// Property: blockedUserIdsArray; attributes: T@"NSMutableArray",&,D,N
// Property: blockedUserIdsArray_Count; attributes: TQ,R,D,N
// Property: spotlightSnapStatus; attributes: Ti,D,N
// Property: eventSignature; attributes: T@"NSData",C,D,N
// Property: isStitchedMedia; attributes: TB,D,N
// Property: geoLocation; attributes: T@"SCSCOREGeoLocation",&,D,N
// Property: hasGeoLocation; attributes: TB,D,N
// Property: snapDescription; attributes: T@"SCSCORESnapDescription",&,D,N
// Property: hasSnapDescription; attributes: TB,D,N
// Property: connectionType; attributes: Ti,D,N
// Property: cameo; attributes: T@"SDMCameoMetadata",&,D,N
// Property: hasCameo; attributes: TB,D,N
// Property: sponsor; attributes: T@"SDMSponsor",&,D,N
// Property: hasSponsor; attributes: TB,D,N
// Property: adsTracking; attributes: T@"SDMAdsTracking",&,D,N
// Property: hasAdsTracking; attributes: TB,D,N
// Property: cameoTile; attributes: T@"SCCameosCameoTile",&,D,N
// Property: hasCameoTile; attributes: TB,D,N
// Property: lensRankingId; attributes: T@"NSString",C,D,N
// Property: spotlightRejectionReason; attributes: Ti,D,N
// Property: spotlightModerationStatus; attributes: T@"IMPContentModerationStatus",&,D,N
// Property: hasSpotlightModerationStatus; attributes: TB,D,N
// Property: adminPermission; attributes: T@"SCSSMAdminPermission",&,D,N
// Property: hasAdminPermission; attributes: TB,D,N
// Property: attributionStatus; attributes: Ti,D,N
// Property: scanOnPublicContentEnabled; attributes: TB,D,N
// Property: contentModerationStatus; attributes: T@"IMPContentModerationStatus",&,D,N
// Property: hasContentModerationStatus; attributes: TB,D,N
// Property: garmBrandSafety; attributes: Ti,D,N
// Property: displayTimestampMs; attributes: Tq,D,N
// Property: mediaOriginsArray; attributes: T@"NSMutableArray",&,D,N
// Property: mediaOriginsArray_Count; attributes: TQ,R,D,N
// Property: suggestedQuery; attributes: T@"NSString",C,D,N
// Property: storyTypeVariant; attributes: Ti,D,N
// Property: commentSnapRepliesLabel; attributes: T@"SCSSMStorySnap_CommentSnapRepliesLabel",&,D,N
// Property: hasCommentSnapRepliesLabel; attributes: TB,D,N
// Property: fromCamera; attributes: TB,D,N
// Property: suggestedQueryCandidatesArray; attributes: T@"NSMutableArray",&,D,N
// Property: suggestedQueryCandidatesArray_Count; attributes: TQ,R,D,N
// Property: suggestedSearchType; attributes: Ti,D,N
// Property: poiEventEndTimeMs; attributes: Tq,D,N
// Property: llmGeneratedMetadata; attributes: T@"SCSIDXLLMGeneratedMetadata",&,D,N
// Property: hasLlmGeneratedMetadata; attributes: TB,D,N
// Property: contentCategoriesArray; attributes: T@"GPBEnumArray",&,D,N
// Property: contentCategoriesArray_Count; attributes: TQ,R,D,N
// Property: aiGeneratedInfo; attributes: T@"SCSSMAiGeneratedInfo",&,D,N
// Property: hasAiGeneratedInfo; attributes: TB,D,N

// +[SCSSMStorySnap descriptor]
// Type encoding: @16@0:8
// Implementation: 0x10afc1474

@end
