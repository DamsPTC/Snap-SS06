// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensMetadataDataModel
// Superclass: NSObject
// Address: 0x112bfce98

@interface SCLensMetadataDataModel

// Property: lensId; attributes: T@"NSString",R,C,N,V_lensId
// Property: name; attributes: T@"NSString",R,C,N,V_name
// Property: code; attributes: T@"NSString",R,C,N,V_code
// Property: hintId; attributes: T@"NSString",R,C,N,V_hintId
// Property: hintTranslations; attributes: T@"NSArray",R,C,N,V_hintTranslations
// Property: iconURL; attributes: T@"NSString",R,C,N,V_iconURL
// Property: bitmojiComicId; attributes: T@"NSString",R,C,N,V_bitmojiComicId
// Property: resource; attributes: T@"SCLensMetadataLensResource",R,C,N,V_resource
// Property: expirationTimestamp; attributes: TQ,R,N,V_expirationTimestamp
// Property: lensType; attributes: Tc,R,N,V_lensType
// Property: section; attributes: Tc,R,N,V_section
// Property: categories; attributes: T@"NSArray",R,C,N,V_categories
// Property: isFeatured; attributes: TB,R,N,V_isFeatured
// Property: isSponsored; attributes: TB,R,N,V_isSponsored
// Property: sponsoredSlug; attributes: T@"SCLensMetadataSponsoredSlug",R,C,N,V_sponsoredSlug
// Property: scheduleIntervals; attributes: T@"NSArray",R,C,N,V_scheduleIntervals
// Property: isDemo; attributes: TB,R,N,V_isDemo
// Property: demoStartTimestamp; attributes: TQ,R,N,V_demoStartTimestamp
// Property: absoluteCarouselPosition; attributes: Tq,R,N,V_absoluteCarouselPosition
// Property: unlockableTrackInfo; attributes: T@"SCLensMetadataUnlockableTrackInfo",R,C,N,V_unlockableTrackInfo
// Property: manifest; attributes: T@"NSArray",R,C,N,V_manifest
// Property: isThirdParty; attributes: TB,R,N,V_isThirdParty
// Property: isStudioPreview; attributes: TB,R,N,V_isStudioPreview
// Property: activationCameraPosition; attributes: Tc,R,N,V_activationCameraPosition
// Property: encryptedGeoData; attributes: T@"NSString",R,C,N,V_encryptedGeoData
// Property: unlockCompanionBackReferenceId; attributes: T@"NSString",R,C,N,V_unlockCompanionBackReferenceId
// Property: cameraContexts; attributes: T@"NSArray",R,C,N,V_cameraContexts
// Property: applicableContexts; attributes: T@"NSArray",R,C,N,V_applicableContexts
// Property: hasContextCards; attributes: TB,R,N,V_hasContextCards
// Property: onDemandTemplateId; attributes: T@"NSString",R,C,N,V_onDemandTemplateId
// Property: isRanked; attributes: TB,R,N,V_isRanked
// Property: priority; attributes: Tq,R,N,V_priority
// Property: lensDescriptors; attributes: T@"NSArray",R,C,N,V_lensDescriptors
// Property: communityLensData; attributes: T@"SCLensMetadataCommunityLensData",R,C,N,V_communityLensData
// Property: snappablesReplyType; attributes: Tc,R,N,V_snappablesReplyType
// Property: snappablesTaglineKey; attributes: T@"NSString",R,C,N,V_snappablesTaglineKey
// Property: snappablesPlayButtonGradientColors; attributes: T@"NSArray",R,C,N,V_snappablesPlayButtonGradientColors
// Property: isLeftCarousel; attributes: TB,R,N,V_isLeftCarousel
// Property: contextHint; attributes: T@"NSString",R,C,N,V_contextHint
// Property: checksum; attributes: T@"NSData",R,C,N,V_checksum
// Property: isCommunity; attributes: TB,R,N,V_isCommunity
// Property: unlockablesAttachments; attributes: T@"SCLensMetadataUnlockablesAttachment",R,C,N,V_unlockablesAttachments
// Property: apiLevel; attributes: Tc,R,N,V_apiLevel
// Property: lensCollectionId; attributes: T@"NSString",R,C,N,V_lensCollectionId
// Property: carouselGroup; attributes: T@"SCLensMetadataUnlockablesCarouselGroup",R,C,N,V_carouselGroup
// Property: unlockableSnapInfo; attributes: T@"NSString",R,C,N,V_unlockableSnapInfo
// Property: connectedLensInfo; attributes: T@"SCLensMetadataConnectedLensInfo",R,C,N,V_connectedLensInfo
// Property: musicTrackMetadata; attributes: T@"NSArray",R,C,N,V_musicTrackMetadata
// Property: shoppingLensMetadata; attributes: T@"NSData",R,C,N,V_shoppingLensMetadata
// Property: sponsoredType; attributes: Tc,R,N,V_sponsoredType
// Property: remoteApiInfo; attributes: T@"SCLensMetadataRemoteApiInfo",R,C,N,V_remoteApiInfo
// Property: adRenderDataBytes; attributes: T@"NSData",R,C,N,V_adRenderDataBytes
// Property: carouselGlobalScoreList; attributes: T@"NSArray",R,C,N,V_carouselGlobalScoreList
// Property: lensExtensionData; attributes: T@"NSData",R,C,N,V_lensExtensionData
// Property: prefetchContexts; attributes: T@"NSArray",R,C,N,V_prefetchContexts
// Property: customizationInfo; attributes: T@"SCLensMetadataCustomizationInfo",R,C,N,V_customizationInfo
// Property: isSnapchatPlusExclusive; attributes: TB,R,N,V_isSnapchatPlusExclusive
// Property: resourceContainer; attributes: T@"SCLensMetadataResourceContainer",R,C,N,V_resourceContainer
// Property: targetingCampaignId; attributes: T@"NSString",R,C,N,V_targetingCampaignId
// Property: lensPreview; attributes: T@"SCLensMetadataLensPreview",R,C,N,V_lensPreview
// Property: primaryCategory; attributes: T@"NSString",R,C,N,V_primaryCategory
// Property: lensMiscData; attributes: T@"SCLensMetadataLensMiscData",R,C,N,V_lensMiscData
// Property: lensPlusTierConfig; attributes: T@"SCLensMetadataLensPlusTierConfig",R,C,N,V_lensPlusTierConfig

// -[SCLensMetadataDataModel initWithLensId:name:code:hintId:hintTranslations:iconURL:bitmojiComicId:resource:expirationTimestamp:lensType:section:categories:isFeatured:isSponsored:sponsoredSlug:scheduleIntervals:isDemo:demoStartTimestamp:absoluteCarouselPosition:unlockableTrackInfo:manifest:isThirdParty:isStudioPreview:activationCameraPosition:encryptedGeoData:unlockCompanionBackReferenceId:cameraContexts:applicableContexts:hasContextCards:onDemandTemplateId:isRanked:priority:lensDescriptors:communityLensData:snappablesReplyType:snappablesTaglineKey:snappablesPlayButtonGradientColors:isLeftCarousel:contextHint:checksum:isCommunity:unlockablesAttachments:apiLevel:lensCollectionId:carouselGroup:unlockableSnapInfo:connectedLensInfo:musicTrackMetadata:shoppingLensMetadata:sponsoredType:remoteApiInfo:adRenderDataBytes:carouselGlobalScoreList:lensExtensionData:prefetchContexts:customizationInfo:isSnapchatPlusExclusive:resourceContainer:targetingCampaignId:lensPreview:primaryCategory:lensMiscData:lensPlusTierConfig:]
// Type encoding: @456@0:8@16@24@32@40@48@56@64@72Q80c88c92@96B104B108@112@120B128Q132q140@148@156B164B168c172@176@184@192@200B208@212B220q224@232@240c248@252@260B268@272@280B288@292c300@304@312@320@328@336@344c352@356@364@372@380@388@396B404@408@416@424@432@440@448
// Implementation: 0x100be2ce4

// -[SCLensMetadataDataModel copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10aec8cd0

// -[SCLensMetadataDataModel hash]
// Type encoding: Q16@0:8
// Implementation: 0x10aec8cf4

// -[SCLensMetadataDataModel isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x10aec8fc0

// -[SCLensMetadataDataModel lensId]
// Type encoding: @16@0:8
// Implementation: 0x100bfd69c

// -[SCLensMetadataDataModel name]
// Type encoding: @16@0:8
// Implementation: 0x100bfdc20

// -[SCLensMetadataDataModel code]
// Type encoding: @16@0:8
// Implementation: 0x100bfdc28

// -[SCLensMetadataDataModel hintId]
// Type encoding: @16@0:8
// Implementation: 0x100bfdc30

// -[SCLensMetadataDataModel hintTranslations]
// Type encoding: @16@0:8
// Implementation: 0x100bfdc38

// -[SCLensMetadataDataModel iconURL]
// Type encoding: @16@0:8
// Implementation: 0x100bfddd4

// -[SCLensMetadataDataModel bitmojiComicId]
// Type encoding: @16@0:8
// Implementation: 0x100bfdddc

// -[SCLensMetadataDataModel resource]
// Type encoding: @16@0:8
// Implementation: 0x100bfddec

// -[SCLensMetadataDataModel expirationTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x100bfd6a4

// -[SCLensMetadataDataModel lensType]
// Type encoding: c16@0:8
// Implementation: 0x100bfe128

// -[SCLensMetadataDataModel section]
// Type encoding: c16@0:8
// Implementation: 0x100bfe26c

// -[SCLensMetadataDataModel categories]
// Type encoding: @16@0:8
// Implementation: 0x100bfe280

// -[SCLensMetadataDataModel isFeatured]
// Type encoding: B16@0:8
// Implementation: 0x100bfe288

// -[SCLensMetadataDataModel isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x100bfe290

// -[SCLensMetadataDataModel sponsoredSlug]
// Type encoding: @16@0:8
// Implementation: 0x100bfe298

// -[SCLensMetadataDataModel scheduleIntervals]
// Type encoding: @16@0:8
// Implementation: 0x100bfe9e8

// -[SCLensMetadataDataModel isDemo]
// Type encoding: B16@0:8
// Implementation: 0x100bfea2c

// -[SCLensMetadataDataModel demoStartTimestamp]
// Type encoding: Q16@0:8
// Implementation: 0x100bfd6ac

// -[SCLensMetadataDataModel absoluteCarouselPosition]
// Type encoding: q16@0:8
// Implementation: 0x100bfea34

// -[SCLensMetadataDataModel unlockableTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x100bfea3c

// -[SCLensMetadataDataModel manifest]
// Type encoding: @16@0:8
// Implementation: 0x100bff140

// -[SCLensMetadataDataModel isThirdParty]
// Type encoding: B16@0:8
// Implementation: 0x10aec9580

// -[SCLensMetadataDataModel isStudioPreview]
// Type encoding: B16@0:8
// Implementation: 0x100bff43c

// -[SCLensMetadataDataModel activationCameraPosition]
// Type encoding: c16@0:8
// Implementation: 0x100bff454

// -[SCLensMetadataDataModel encryptedGeoData]
// Type encoding: @16@0:8
// Implementation: 0x100bff470

// -[SCLensMetadataDataModel unlockCompanionBackReferenceId]
// Type encoding: @16@0:8
// Implementation: 0x100bff478

// -[SCLensMetadataDataModel cameraContexts]
// Type encoding: @16@0:8
// Implementation: 0x100bfd6b4

// -[SCLensMetadataDataModel applicableContexts]
// Type encoding: @16@0:8
// Implementation: 0x100bfd6bc

// -[SCLensMetadataDataModel hasContextCards]
// Type encoding: B16@0:8
// Implementation: 0x100bff480

// -[SCLensMetadataDataModel onDemandTemplateId]
// Type encoding: @16@0:8
// Implementation: 0x100bff488

// -[SCLensMetadataDataModel isRanked]
// Type encoding: B16@0:8
// Implementation: 0x100bffb60

// -[SCLensMetadataDataModel priority]
// Type encoding: q16@0:8
// Implementation: 0x100bffb68

// -[SCLensMetadataDataModel lensDescriptors]
// Type encoding: @16@0:8
// Implementation: 0x100bffb70

// -[SCLensMetadataDataModel communityLensData]
// Type encoding: @16@0:8
// Implementation: 0x100bffb78

// -[SCLensMetadataDataModel snappablesReplyType]
// Type encoding: c16@0:8
// Implementation: 0x100bfff24

// -[SCLensMetadataDataModel snappablesTaglineKey]
// Type encoding: @16@0:8
// Implementation: 0x100bfff44

// -[SCLensMetadataDataModel snappablesPlayButtonGradientColors]
// Type encoding: @16@0:8
// Implementation: 0x100bfff4c

// -[SCLensMetadataDataModel isLeftCarousel]
// Type encoding: B16@0:8
// Implementation: 0x100bfff90

// -[SCLensMetadataDataModel contextHint]
// Type encoding: @16@0:8
// Implementation: 0x100bfff98

// -[SCLensMetadataDataModel checksum]
// Type encoding: @16@0:8
// Implementation: 0x100bfffa8

// -[SCLensMetadataDataModel isCommunity]
// Type encoding: B16@0:8
// Implementation: 0x100bfffa0

// -[SCLensMetadataDataModel unlockablesAttachments]
// Type encoding: @16@0:8
// Implementation: 0x100bff490

// -[SCLensMetadataDataModel apiLevel]
// Type encoding: c16@0:8
// Implementation: 0x100bfd740

// -[SCLensMetadataDataModel lensCollectionId]
// Type encoding: @16@0:8
// Implementation: 0x100bfffb0

// -[SCLensMetadataDataModel carouselGroup]
// Type encoding: @16@0:8
// Implementation: 0x100bfffb8

// -[SCLensMetadataDataModel unlockableSnapInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c00200

// -[SCLensMetadataDataModel connectedLensInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c00310

// -[SCLensMetadataDataModel musicTrackMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100c00394

// -[SCLensMetadataDataModel shoppingLensMetadata]
// Type encoding: @16@0:8
// Implementation: 0x100c003e4

// -[SCLensMetadataDataModel sponsoredType]
// Type encoding: c16@0:8
// Implementation: 0x100bfe9cc

// -[SCLensMetadataDataModel remoteApiInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c004a0

// -[SCLensMetadataDataModel adRenderDataBytes]
// Type encoding: @16@0:8
// Implementation: 0x100c00a0c

// -[SCLensMetadataDataModel carouselGlobalScoreList]
// Type encoding: @16@0:8
// Implementation: 0x100c001e8

// -[SCLensMetadataDataModel lensExtensionData]
// Type encoding: @16@0:8
// Implementation: 0x100bfd748

// -[SCLensMetadataDataModel prefetchContexts]
// Type encoding: @16@0:8
// Implementation: 0x100c00a14

// -[SCLensMetadataDataModel customizationInfo]
// Type encoding: @16@0:8
// Implementation: 0x100c0054c

// -[SCLensMetadataDataModel isSnapchatPlusExclusive]
// Type encoding: B16@0:8
// Implementation: 0x100c00a84

// -[SCLensMetadataDataModel resourceContainer]
// Type encoding: @16@0:8
// Implementation: 0x100bfdde4

// -[SCLensMetadataDataModel targetingCampaignId]
// Type encoding: @16@0:8
// Implementation: 0x100c00a7c

// -[SCLensMetadataDataModel lensPreview]
// Type encoding: @16@0:8
// Implementation: 0x100bfd828

// -[SCLensMetadataDataModel primaryCategory]
// Type encoding: @16@0:8
// Implementation: 0x100c00a8c

// -[SCLensMetadataDataModel lensMiscData]
// Type encoding: @16@0:8
// Implementation: 0x100bfd9d4

// -[SCLensMetadataDataModel lensPlusTierConfig]
// Type encoding: @16@0:8
// Implementation: 0x100bfdb54

// -[SCLensMetadataDataModel .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100c0bf88

@end
