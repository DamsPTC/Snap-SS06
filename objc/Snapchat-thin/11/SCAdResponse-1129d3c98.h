// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdResponse
// Superclass: NSObject
// Address: 0x1129d3c98

@interface SCAdResponse

// Property: servedEndCardType; attributes: Tq,N,R
// Property: adMediaDurationMs; attributes: Tq,R,N
// Property: adSourceType; attributes: Tq,R,N
// Property: adNetworkAttribution; attributes: T@"SCAppInstallAttachmentAdNetworkAttribution",R,N
// Property: resolvedTimeStampMillis; attributes: Td,N,R,VresolvedTimeStampMillis
// Property: expireTimeStampMillis; attributes: Td,N,R,VexpireTimeStampMillis
// Property: backupCacheExpireTimeStampMillis; attributes: Td,N,R,VbackupCacheExpireTimeStampMillis
// Property: serveTimeStampMillis; attributes: Td,N,R,VserveTimeStampMillis
// Property: adProductType; attributes: TQ,N,R,VadProductType
// Property: identifier; attributes: T@"NSString",N,R
// Property: adId; attributes: T@"NSString",N,R
// Property: serveItemId; attributes: T@"NSString",N,R
// Property: lineItemId; attributes: T@"NSString",N,R
// Property: adServeRequestId; attributes: T@"NSString",N,R
// Property: pixelId; attributes: T@"NSString",N,R
// Property: adSquadId; attributes: T@"NSUUID",N,R
// Property: campaignId; attributes: T@"NSUUID",N,R
// Property: adAccountId; attributes: T@"NSUUID",N,R
// Property: adType; attributes: Tq,N,R,VadType
// Property: adSnapArray; attributes: T@"NSArray",N,R
// Property: thirdPartyImpressionTrackUrls; attributes: T@"NSArray",N,R
// Property: thirdPartyImpressionClickUrls; attributes: T@"NSArray",N,R
// Property: thirdPartyEngagedViewClickUrls; attributes: T@"NSArray",N,R
// Property: storyAd; attributes: T@"SCAdMediaStoryAd",N,R,VstoryAd
// Property: isValid; attributes: TB,N,R,VisValid
// Property: serveLoggingContext; attributes: T@"SCAdServeLoggingContext",N,R,VserveLoggingContext
// Property: targetingParameters; attributes: T@"SCAdTargetingParameters",N,R,VtargetingParameters
// Property: adRenderData; attributes: T@"NSData",N,R
// Property: hideAdSlug; attributes: TB,N,R,VhideAdSlug
// Property: rawUserData; attributes: T@"NSString",N,R
// Property: rawAdData; attributes: T@"NSString",N,R
// Property: protoTrackURL; attributes: T@"NSString",N,R
// Property: viewReceipt; attributes: T@"NSData",N,R
// Property: skAdNetworkAttribution; attributes: T@"SCSKAdNetworkAttribution",N,R,VskAdNetworkAttribution
// Property: brandNameProfileInfo; attributes: T@"SCAdBrandNameProfileInfo",N,R,VbrandNameProfileInfo
// Property: organicValue; attributes: Tf,N,R,VorganicValue
// Property: hideReportAdCommentBox; attributes: TB,N,R,VhideReportAdCommentBox
// Property: adInsertionConfig; attributes: T@"SCAdInsertionConfig",N,R,VadInsertionConfig
// Property: cacheType; attributes: Tq,N,R,VcacheType
// Property: adSwipeUpLikely; attributes: TB,N,R,VadSwipeUpLikely
// Property: nonFeedStoryAdVisibleSnapCount; attributes: Tq,N,R,VnonFeedStoryAdVisibleSnapCount
// Property: preferredDownloadMethod; attributes: Tq,N,R,VpreferredDownloadMethod
// Property: brandSafetyInventoryType; attributes: Tq,N,R,VbrandSafetyInventoryType
// Property: storeContext; attributes: T@"SCAdStoreContextValue",N,R,VstoreContext
// Property: optimizationGoal; attributes: Tq,N,R,VoptimizationGoal
// Property: thirdPartyLoginSource; attributes: Tq,N,R,VthirdPartyLoginSource
// Property: creatorProfileInfo; attributes: T@"SCAdBrandNameProfileInfo",N,R,VcreatorProfileInfo
// Property: profileTaggedInHeadline; attributes: T@"SCAdBrandNameProfileInfo",N,R,VprofileTaggedInHeadline
// Property: chatFeedProperties; attributes: T@"SCAdChatFeedProperties",N,R,VchatFeedProperties
// Property: createEventSource; attributes: Tq,N,R,VcreateEventSource
// Property: adDemandSource; attributes: Tq,N,R,VadDemandSource
// Property: isDynamicProduct; attributes: TB,N,R,VisDynamicProduct
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdResponse adMediaDurationMs]
// Type encoding: q16@0:8
// Implementation: 0x1084c55bc

// -[SCAdResponse adSourceType]
// Type encoding: q16@0:8
// Implementation: 0x1084c5618

// -[SCAdResponse adNetworkAttribution]
// Type encoding: @16@0:8
// Implementation: 0x1084c567c

// -[SCAdResponse adSnapAtIndex:]
// Type encoding: @24@0:8q16
// Implementation: 0x1084c5928

// -[SCAdResponse instantPageEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1084c59b8

// -[SCAdResponse oneTapAttachmentOpenEligible]
// Type encoding: B16@0:8
// Implementation: 0x1084c5adc

// -[SCAdResponse oneTapAttachmentOpenTimeThresholdMs]
// Type encoding: @16@0:8
// Implementation: 0x1084c5b40

// -[SCAdResponse brandName]
// Type encoding: @16@0:8
// Implementation: 0x1084c5bac

// -[SCAdResponse displayName]
// Type encoding: @16@0:8
// Implementation: 0x1084c5c10

// -[SCAdResponse profileInfo]
// Type encoding: @16@0:8
// Implementation: 0x1084c5c78

// -[SCAdResponse profileLogoUrl]
// Type encoding: @16@0:8
// Implementation: 0x1084c5d04

// -[SCAdResponse darkProfileLogoUrl]
// Type encoding: @16@0:8
// Implementation: 0x1084c5da8

// -[SCAdResponse isGenericProfile]
// Type encoding: B16@0:8
// Implementation: 0x1084c5e48

// -[SCAdResponse isSponsoredSnapInventory]
// Type encoding: B16@0:8
// Implementation: 0x1084c5e84

// -[SCAdResponse isSponsoredSnapWithGenericProfile]
// Type encoding: B16@0:8
// Implementation: 0x1084c5ec4

// -[SCAdResponse isSponsoredSnapWithGenericIcon]
// Type encoding: B16@0:8
// Implementation: 0x1084c5ef8

// -[SCAdResponse creatorName]
// Type encoding: @16@0:8
// Implementation: 0x1084c5f50

// -[SCAdResponse creatorProfileLogoUrl]
// Type encoding: @16@0:8
// Implementation: 0x1084c5fb4

// -[SCAdResponse isEligibleToAppendCidForExbWithSnapIndex:collectionItemIndex:]
// Type encoding: B32@0:8q16q24
// Implementation: 0x1084c6018

// -[SCAdResponse withAdInsertionConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cc448

// -[SCAdResponse withCacheType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046cc4a8

// -[SCAdResponse withServeLoggingContext:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cc704

// -[SCAdResponse withTargetingParameters:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cc8b8

// -[SCAdResponse withIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cc918

// -[SCAdResponse withAdId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cca1c

// -[SCAdResponse withPixelId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046ccb30

// -[SCAdResponse withAdSnapArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cce88

// -[SCAdResponse withStoryAd:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cd07c

// -[SCAdResponse withAdProductType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1046cd0dc

// -[SCAdResponse withServeItemId:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cd1c8

// -[SCAdResponse withAdType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046cd2dc

// -[SCAdResponse withIsValid:]
// Type encoding: @20@0:8B16
// Implementation: 0x1046cd3d0

// -[SCAdResponse withPreferredDownloadMethod:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046cd4c4

// -[SCAdResponse withResolvedTimeStampMillis:]
// Type encoding: @24@0:8d16
// Implementation: 0x1046cd5b8

// -[SCAdResponse withExpireTimeStampMillis:]
// Type encoding: @24@0:8d16
// Implementation: 0x1046cd6ac

// -[SCAdResponse withBackupCacheExpireTimeStampMillis:]
// Type encoding: @24@0:8d16
// Implementation: 0x1046cd7a0

// -[SCAdResponse withServeTimeStampMillis:]
// Type encoding: @24@0:8d16
// Implementation: 0x1046cd894

// -[SCAdResponse withProtoTrackURL:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cd988

// -[SCAdResponse withViewReceipt:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cdaa8

// -[SCAdResponse withBrandSafetyInventoryType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046cdc0c

// -[SCAdResponse withSkAdNetworkAttribution:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046cde7c

// -[SCAdResponse withOptimizationGoal:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046cdedc

// -[SCAdResponse withThirdPartyLoginSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046cdfd0

// -[SCAdResponse withAdDemandSource:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046ce0c4

// -[SCAdResponse servedEndCardType]
// Type encoding: q16@0:8
// Implementation: 0x103bfcafc

// -[SCAdResponse numberOfMultiSegmentEndCardsWithConfigProvider:]
// Type encoding: Q24@0:8@16
// Implementation: 0x102d20db8

// -[SCAdResponse resolvedTimeStampMillis]
// Type encoding: d16@0:8
// Implementation: 0x1047b7cd0

// -[SCAdResponse expireTimeStampMillis]
// Type encoding: d16@0:8
// Implementation: 0x1047b7ce0

// -[SCAdResponse backupCacheExpireTimeStampMillis]
// Type encoding: d16@0:8
// Implementation: 0x1047b7cf0

// -[SCAdResponse serveTimeStampMillis]
// Type encoding: d16@0:8
// Implementation: 0x1047b7d00

// -[SCAdResponse adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1047b7d10

// -[SCAdResponse identifier]
// Type encoding: @16@0:8
// Implementation: 0x1047b7d20

// -[SCAdResponse adId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7d6c

// -[SCAdResponse serveItemId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7d78

// -[SCAdResponse lineItemId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7d84

// -[SCAdResponse adServeRequestId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7d90

// -[SCAdResponse pixelId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7d9c

// -[SCAdResponse adSquadId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7da8

// -[SCAdResponse campaignId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7db4

// -[SCAdResponse adAccountId]
// Type encoding: @16@0:8
// Implementation: 0x1047b7ea0

// -[SCAdResponse adType]
// Type encoding: q16@0:8
// Implementation: 0x1047b7eac

// -[SCAdResponse adSnapArray]
// Type encoding: @16@0:8
// Implementation: 0x1047b7ebc

// -[SCAdResponse thirdPartyImpressionTrackUrls]
// Type encoding: @16@0:8
// Implementation: 0x1047b7f18

// -[SCAdResponse thirdPartyImpressionClickUrls]
// Type encoding: @16@0:8
// Implementation: 0x1047b7f24

// -[SCAdResponse thirdPartyEngagedViewClickUrls]
// Type encoding: @16@0:8
// Implementation: 0x1047b7f30

// -[SCAdResponse storyAd]
// Type encoding: @16@0:8
// Implementation: 0x1047b7f8c

// -[SCAdResponse isValid]
// Type encoding: B16@0:8
// Implementation: 0x1047b7f9c

// -[SCAdResponse serveLoggingContext]
// Type encoding: @16@0:8
// Implementation: 0x1047b7fac

// -[SCAdResponse targetingParameters]
// Type encoding: @16@0:8
// Implementation: 0x1047b7fbc

// -[SCAdResponse adRenderData]
// Type encoding: @16@0:8
// Implementation: 0x1047b7fcc

// -[SCAdResponse hideAdSlug]
// Type encoding: B16@0:8
// Implementation: 0x1047b7fd8

// -[SCAdResponse rawUserData]
// Type encoding: @16@0:8
// Implementation: 0x1047b7fe8

// -[SCAdResponse rawAdData]
// Type encoding: @16@0:8
// Implementation: 0x1047b7ff4

// -[SCAdResponse protoTrackURL]
// Type encoding: @16@0:8
// Implementation: 0x1047b8000

// -[SCAdResponse viewReceipt]
// Type encoding: @16@0:8
// Implementation: 0x1047b8064

// -[SCAdResponse skAdNetworkAttribution]
// Type encoding: @16@0:8
// Implementation: 0x1047b80e0

// -[SCAdResponse brandNameProfileInfo]
// Type encoding: @16@0:8
// Implementation: 0x1047b80f0

// -[SCAdResponse organicValue]
// Type encoding: f16@0:8
// Implementation: 0x1047b8100

// -[SCAdResponse hideReportAdCommentBox]
// Type encoding: B16@0:8
// Implementation: 0x1047b8110

// -[SCAdResponse adInsertionConfig]
// Type encoding: @16@0:8
// Implementation: 0x1047b8120

// -[SCAdResponse cacheType]
// Type encoding: q16@0:8
// Implementation: 0x1047b8130

// -[SCAdResponse adSwipeUpLikely]
// Type encoding: B16@0:8
// Implementation: 0x1047b8140

// -[SCAdResponse nonFeedStoryAdVisibleSnapCount]
// Type encoding: q16@0:8
// Implementation: 0x1047b8150

// -[SCAdResponse preferredDownloadMethod]
// Type encoding: q16@0:8
// Implementation: 0x1047b8160

// -[SCAdResponse brandSafetyInventoryType]
// Type encoding: q16@0:8
// Implementation: 0x1047b8170

// -[SCAdResponse storeContext]
// Type encoding: @16@0:8
// Implementation: 0x1047b8180

// -[SCAdResponse optimizationGoal]
// Type encoding: q16@0:8
// Implementation: 0x1047b8190

// -[SCAdResponse thirdPartyLoginSource]
// Type encoding: q16@0:8
// Implementation: 0x1047b81a0

// -[SCAdResponse creatorProfileInfo]
// Type encoding: @16@0:8
// Implementation: 0x1047b81b0

// -[SCAdResponse profileTaggedInHeadline]
// Type encoding: @16@0:8
// Implementation: 0x1047b81c0

// -[SCAdResponse chatFeedProperties]
// Type encoding: @16@0:8
// Implementation: 0x1047b81d0

// -[SCAdResponse createEventSource]
// Type encoding: q16@0:8
// Implementation: 0x1047b81e0

// -[SCAdResponse adDemandSource]
// Type encoding: q16@0:8
// Implementation: 0x1047b81f0

// -[SCAdResponse isDynamicProduct]
// Type encoding: B16@0:8
// Implementation: 0x1047b8200

// -[SCAdResponse initWithResolvedTimeStampMillis:expireTimeStampMillis:backupCacheExpireTimeStampMillis:serveTimeStampMillis:adProductType:identifier:adId:serveItemId:lineItemId:adServeRequestId:pixelId:adSquadId:campaignId:adAccountId:adType:adSnapArray:thirdPartyImpressionTrackUrls:thirdPartyImpressionClickUrls:thirdPartyEngagedViewClickUrls:storyAd:isValid:serveLoggingContext:targetingParameters:adRenderData:hideAdSlug:rawUserData:rawAdData:protoTrackURL:viewReceipt:skAdNetworkAttribution:brandNameProfileInfo:organicValue:hideReportAdCommentBox:adInsertionConfig:cacheType:adSwipeUpLikely:nonFeedStoryAdVisibleSnapCount:preferredDownloadMethod:brandSafetyInventoryType:storeContext:optimizationGoal:thirdPartyLoginSource:creatorProfileInfo:profileTaggedInHeadline:chatFeedProperties:createEventSource:adDemandSource:isDynamicProduct:]
// Type encoding: @376@0:8d16d24d32d40Q48@56@64@72@80@88@96@104@112@120q128@136@144@152@160@168B176@180@188@196B204@208@216@224@232@240@248f256B260@264q272B280q284q292q300@308q316q324@332@340@348q356q364B372
// Implementation: 0x1047b8be0

// -[SCAdResponse hash]
// Type encoding: q16@0:8
// Implementation: 0x1047ba4d8

// -[SCAdResponse isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1047bc7d4

// -[SCAdResponse copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1047bc894

// -[SCAdResponse encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1047bd95c

// -[SCAdResponse initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1047c0620

// -[SCAdResponse description]
// Type encoding: @16@0:8
// Implementation: 0x1047c0648

// -[SCAdResponse init]
// Type encoding: @16@0:8
// Implementation: 0x1047c06d4

// -[SCAdResponse .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1047c0750

// +[SCAdResponse identity]
// Type encoding: @16@0:8
// Implementation: 0x1046cc274

// +[SCAdResponse minNumberOfEndCardScreenshots]
// Type encoding: q16@0:8
// Implementation: 0x102d20c9c

@end
