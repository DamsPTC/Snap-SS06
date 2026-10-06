// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdSnap
// Superclass: NSObject
// Address: 0x1129d3fc8

@interface SCAdSnap

// Property: screenshots; attributes: T@"NSArray",N,R
// Property: creativeId; attributes: T@"NSString",N,R
// Property: adType; attributes: Tq,N,R,VadType
// Property: adProductType; attributes: TQ,N,R,VadProductType
// Property: identifier; attributes: T@"NSString",N,R
// Property: brandName; attributes: T@"NSString",N,R
// Property: brandHeadline; attributes: T@"NSString",N,R
// Property: snapMedia; attributes: T@"SCAdSnapMedia",N,R,VsnapMedia
// Property: isSharable; attributes: TB,N,R,VisSharable
// Property: isUnskippable; attributes: TB,N,R,VisUnskippable
// Property: renditionList; attributes: T@"NSArray",N,R
// Property: payingAdvertiserName; attributes: T@"NSString",N,R
// Property: unskippableDurationMs; attributes: Td,N,R,VunskippableDurationMs
// Property: adSkippableType; attributes: Tq,N,R,VadSkippableType
// Property: promotePublisherStoryInfo; attributes: T@"SCPromotePublisherStoryInfo",N,R,VpromotePublisherStoryInfo
// Property: offerDetail; attributes: T@"NSString",N,R
// Property: interactiveAreaConfig; attributes: T@"SCAdInteractiveAreaConfigValue",N,R,VinteractiveAreaConfig
// Property: vOperaInteractiveAreaConfig; attributes: T@"SCAdInteractiveAreaConfigValue",N,R,VvOperaInteractiveAreaConfig
// Property: pageTransitionConfig; attributes: T@"SCAdPageTransitionConfig",N,R,VpageTransitionConfig
// Property: tapToAdvanceDelaySec; attributes: T@"NSNumber",N,R,VtapToAdvanceDelaySec
// Property: creatorName; attributes: T@"NSString",N,R
// Property: nameTaggedInHeadline; attributes: T@"NSString",N,R
// Property: adSlugRenderPosition; attributes: Tq,N,R,VadSlugRenderPosition
// Property: adSpecEndCard; attributes: T@"SCAdSpecificationEndCard",N,R,VadSpecEndCard
// Property: adSpecData; attributes: T@"NSData",N,R
// Property: adSpec; attributes: T@"SCAdSpec",N,R,VadSpec
// Property: isAiContent; attributes: TB,N,R,VisAiContent
// Property: chatFeedAdSlugPosition; attributes: TQ,N,R,VchatFeedAdSlugPosition
// Property: isDynamicProduct; attributes: TB,N,R,VisDynamicProduct
// Property: organicSpotlightSnapId; attributes: T@"NSString",N,R
// Property: hash; attributes: Tq,N,R
// Property: description; attributes: T@"NSString",N,R

// -[SCAdSnap isMediaDpa]
// Type encoding: B16@0:8
// Implementation: 0x1084cc880

// -[SCAdSnap isMediaComposer]
// Type encoding: B16@0:8
// Implementation: 0x1084cc8b4

// -[SCAdSnap isTopSnapMediaStreaming]
// Type encoding: B16@0:8
// Implementation: 0x1084cc914

// -[SCAdSnap uniqueIdentifier]
// Type encoding: @16@0:8
// Implementation: 0x1084c73b8

// -[SCAdSnap defaultExbModeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1084c747c

// -[SCAdSnap adMediaDurationMs]
// Type encoding: q16@0:8
// Implementation: 0x1084c75f8

// -[SCAdSnap hasCidMetadata]
// Type encoding: B16@0:8
// Implementation: 0x1084c7680

// -[SCAdSnap hasAttachment]
// Type encoding: B16@0:8
// Implementation: 0x1084c77e4

// -[SCAdSnap topSnap]
// Type encoding: @16@0:8
// Implementation: 0x1084c7818

// -[SCAdSnap bottomSnap]
// Type encoding: @16@0:8
// Implementation: 0x1084c785c

// -[SCAdSnap collectionAdType]
// Type encoding: q16@0:8
// Implementation: 0x1084c78a0

// -[SCAdSnap webViewAttachment]
// Type encoding: @16@0:8
// Implementation: 0x1084c7940

// -[SCAdSnap appInstall]
// Type encoding: @16@0:8
// Implementation: 0x1084c7948

// -[SCAdSnap deepLink]
// Type encoding: @16@0:8
// Implementation: 0x1084c7950

// -[SCAdSnap opensPublicProfile]
// Type encoding: B16@0:8
// Implementation: 0x1084c7958

// -[SCAdSnap playableInfo]
// Type encoding: @16@0:8
// Implementation: 0x1084c7c20

// -[SCAdSnap appTitle]
// Type encoding: @16@0:8
// Implementation: 0x1084c7cb8

// -[SCAdSnap productPageId]
// Type encoding: @16@0:8
// Implementation: 0x1084c7df8

// -[SCAdSnap webViewAttachmentAtItemIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084c7f38

// -[SCAdSnap webViewAttachmentAtItemIndex:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084c7f40

// -[SCAdSnap retargetPromptInfo]
// Type encoding: @16@0:8
// Implementation: 0x1084c80f4

// -[SCAdSnap appInstallAtItemIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084c817c

// -[SCAdSnap appInstallAtItemIndex:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084c8184

// -[SCAdSnap deepLinkAtItemIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084c8240

// -[SCAdSnap deepLinkAtItemIndex:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084c8248

// -[SCAdSnap showcaseAttachmentAtItemIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084c83d8

// -[SCAdSnap showcaseAttachmentAtItemIndex:adConfigProviderV2:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084c83e0

// -[SCAdSnap enableExternalBrowser]
// Type encoding: B16@0:8
// Implementation: 0x1084c85e0

// -[SCAdSnap isRedirectExternalBrowser]
// Type encoding: B16@0:8
// Implementation: 0x1084c8644

// -[SCAdSnap externalBrowserUrlWithAdConfigProvider:adConfigProviderV2:adResponse:applicationPreferences:itemIndex:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1084c8778

// -[SCAdSnap attachmentDataModelWithAdResponse:adConfigProvider:adConfigProviderV2:applicationPreferences:itemIndex:attachmentCallbacks:skImpressionSource:deepLinkFallbackCallbacks:broadcastViewLocation:tapAttachmentSource:]
// Type encoding: @96@0:8@16@24@32@40@48@56q64@72@80q88
// Implementation: 0x1084c88f8

// -[SCAdSnap hasCommercePdpAttachment]
// Type encoding: B16@0:8
// Implementation: 0x1084c9be8

// -[SCAdSnap shouldOptoutInfoCard]
// Type encoding: B16@0:8
// Implementation: 0x1084c9c34

// -[SCAdSnap collectionItemTotalCount]
// Type encoding: Q16@0:8
// Implementation: 0x1084c9c90

// -[SCAdSnap composerTopSnap]
// Type encoding: @16@0:8
// Implementation: 0x1084c9d24

// -[SCAdSnap oneTapAttachmentOpenEligible]
// Type encoding: B16@0:8
// Implementation: 0x1084c9e04

// -[SCAdSnap oneTapAttachmentOpenTimeThresholdMs]
// Type encoding: @16@0:8
// Implementation: 0x1084c9ecc

// -[SCAdSnap dpaItemViewModels]
// Type encoding: @16@0:8
// Implementation: 0x1084c9fc4

// -[SCAdSnap dpaDecorationInfo]
// Type encoding: @16@0:8
// Implementation: 0x1084caf0c

// -[SCAdSnap _webviewAttachmentWithUrl:webViewCallbacks:adCommonConfig:attachmentPresentation:instantPage:engagementStreamMetadata:instantPageCallbacks:profileIconUrl:cidParams:pixelId:isShopPayUser:dynamicScriptConfig:storefrontToken:promotionInfo:enableSkoverlay:]
// Type encoding: @128@0:8@16@24@32q40@48@56@64@72@80@88B96@100@108@116B124
// Implementation: 0x1084cb0e4

// -[SCAdSnap _appInstallAttachmentWithAppInstall:adConfigProvider:adNetworkAttribution:callbacks:skanImpressionSource:adCommonConfig:backgroundExitBehavior:]
// Type encoding: @72@0:8@16@24@32@40q48@56@64
// Implementation: 0x1084cb4e4

// -[SCAdSnap _deepLinkAttachmentWithDeepLink:callbacks:adCommonConfig:adConfigProvider:deepLinkFallbackCallbacks:adResponse:skImpressionSource:isChatFeedAttachmentSource:]
// Type encoding: @76@0:8@16@24@32@40@48@56q64B72
// Implementation: 0x1084cb748

// -[SCAdSnap _deepLinkFallbackToAppInstallWithDeepLink:adConfigProvider:adNetworkAttribution:deepLinkFallbackCallbacks:skImpressionSource:adCommonConfig:]
// Type encoding: @64@0:8@16@24@32@40q48@56
// Implementation: 0x1084cbd7c

// -[SCAdSnap _collectionItemAtIndex:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084cbf54

// -[SCAdSnap collectionDefaultAttachmentIndex]
// Type encoding: @16@0:8
// Implementation: 0x1084cc208

// -[SCAdSnap _appInstallCustomProductPageIdWithProductPageId:adConfigProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1084cc2c0

// -[SCAdSnap isInstantPageEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1084cc344

// -[SCAdSnap hasShopifyStorefrontToken]
// Type encoding: B16@0:8
// Implementation: 0x1084cc430

// -[SCAdSnap isShopPayUser]
// Type encoding: B16@0:8
// Implementation: 0x1084cc540

// -[SCAdSnap isEligibleToAppendCidForExbHoppingWithCollectionItemIndex:]
// Type encoding: B24@0:8q16
// Implementation: 0x1084cc5a8

// -[SCAdSnap isMultiSegment]
// Type encoding: B16@0:8
// Implementation: 0x1084cc63c

// -[SCAdSnap isMultiSegmentVerticalEndCard]
// Type encoding: B16@0:8
// Implementation: 0x1084cc6b4

// -[SCAdSnap isSpotlightSourced]
// Type encoding: B16@0:8
// Implementation: 0x1084cc7a0

// -[SCAdSnap organicSpotlightCompositeStoryId]
// Type encoding: @16@0:8
// Implementation: 0x1084cc7e0

// -[SCAdSnap withIdentifier:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046da1d0

// -[SCAdSnap withAdProductType:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1046da2d4

// -[SCAdSnap withAdType:]
// Type encoding: @24@0:8q16
// Implementation: 0x1046da3c0

// -[SCAdSnap withSnapMedia:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046da618

// -[SCAdSnap withRenditionList:]
// Type encoding: @24@0:8@16
// Implementation: 0x1046da9b8

// -[SCAdSnap screenshots]
// Type encoding: @16@0:8
// Implementation: 0x102d20e14

// -[SCAdSnap canDisplayEndCardWithConfigProvider:]
// Type encoding: B24@0:8@16
// Implementation: 0x102d20ef8

// -[SCAdSnap creativeId]
// Type encoding: @16@0:8
// Implementation: 0x1047c1f3c

// -[SCAdSnap adType]
// Type encoding: q16@0:8
// Implementation: 0x1047c1f48

// -[SCAdSnap adProductType]
// Type encoding: Q16@0:8
// Implementation: 0x1047c1f58

// -[SCAdSnap identifier]
// Type encoding: @16@0:8
// Implementation: 0x1047c1f68

// -[SCAdSnap brandName]
// Type encoding: @16@0:8
// Implementation: 0x1047c1fb4

// -[SCAdSnap brandHeadline]
// Type encoding: @16@0:8
// Implementation: 0x1047c1fc0

// -[SCAdSnap snapMedia]
// Type encoding: @16@0:8
// Implementation: 0x1047c1fcc

// -[SCAdSnap isSharable]
// Type encoding: B16@0:8
// Implementation: 0x1047c1fdc

// -[SCAdSnap isUnskippable]
// Type encoding: B16@0:8
// Implementation: 0x1047c1fec

// -[SCAdSnap renditionList]
// Type encoding: @16@0:8
// Implementation: 0x1047c1ffc

// -[SCAdSnap payingAdvertiserName]
// Type encoding: @16@0:8
// Implementation: 0x1047c2058

// -[SCAdSnap unskippableDurationMs]
// Type encoding: d16@0:8
// Implementation: 0x1047c2064

// -[SCAdSnap adSkippableType]
// Type encoding: q16@0:8
// Implementation: 0x1047c2074

// -[SCAdSnap promotePublisherStoryInfo]
// Type encoding: @16@0:8
// Implementation: 0x1047c2084

// -[SCAdSnap offerDetail]
// Type encoding: @16@0:8
// Implementation: 0x1047c2094

// -[SCAdSnap interactiveAreaConfig]
// Type encoding: @16@0:8
// Implementation: 0x1047c20a0

// -[SCAdSnap vOperaInteractiveAreaConfig]
// Type encoding: @16@0:8
// Implementation: 0x1047c20b0

// -[SCAdSnap pageTransitionConfig]
// Type encoding: @16@0:8
// Implementation: 0x1047c20c0

// -[SCAdSnap tapToAdvanceDelaySec]
// Type encoding: @16@0:8
// Implementation: 0x1047c20d0

// -[SCAdSnap creatorName]
// Type encoding: @16@0:8
// Implementation: 0x1047c20e0

// -[SCAdSnap nameTaggedInHeadline]
// Type encoding: @16@0:8
// Implementation: 0x1047c20ec

// -[SCAdSnap adSlugRenderPosition]
// Type encoding: q16@0:8
// Implementation: 0x1047c20f8

// -[SCAdSnap adSpecEndCard]
// Type encoding: @16@0:8
// Implementation: 0x1047c2108

// -[SCAdSnap adSpecData]
// Type encoding: @16@0:8
// Implementation: 0x1047c2118

// -[SCAdSnap adSpec]
// Type encoding: @16@0:8
// Implementation: 0x1047c218c

// -[SCAdSnap isAiContent]
// Type encoding: B16@0:8
// Implementation: 0x1047c219c

// -[SCAdSnap chatFeedAdSlugPosition]
// Type encoding: Q16@0:8
// Implementation: 0x1047c21ac

// -[SCAdSnap isDynamicProduct]
// Type encoding: B16@0:8
// Implementation: 0x1047c21bc

// -[SCAdSnap organicSpotlightSnapId]
// Type encoding: @16@0:8
// Implementation: 0x1047c21cc

// -[SCAdSnap initWithCreativeId:adType:adProductType:identifier:brandName:brandHeadline:snapMedia:isSharable:isUnskippable:renditionList:payingAdvertiserName:unskippableDurationMs:adSkippableType:promotePublisherStoryInfo:offerDetail:interactiveAreaConfig:vOperaInteractiveAreaConfig:pageTransitionConfig:tapToAdvanceDelaySec:creatorName:nameTaggedInHeadline:adSlugRenderPosition:adSpecEndCard:adSpecData:adSpec:isAiContent:chatFeedAdSlugPosition:isDynamicProduct:organicSpotlightSnapId:]
// Type encoding: @232@0:8@16q24Q32@40@48@56@64B72B76@80@88d96q104@112@120@128@136@144@152@160@168q176@184@192@200B208Q212B220@224
// Implementation: 0x1047c2790

// -[SCAdSnap hash]
// Type encoding: q16@0:8
// Implementation: 0x1047c3474

// -[SCAdSnap isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1047c4460

// -[SCAdSnap copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1047c450c

// -[SCAdSnap encodeWithCoder:]
// Type encoding: v24@0:8@16
// Implementation: 0x1047c4e98

// -[SCAdSnap initWithCoder:]
// Type encoding: @24@0:8@16
// Implementation: 0x1047c65c8

// -[SCAdSnap description]
// Type encoding: @16@0:8
// Implementation: 0x1047c65f0

// -[SCAdSnap init]
// Type encoding: @16@0:8
// Implementation: 0x1047c667c

// -[SCAdSnap .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1047c66f4

// +[SCAdSnap identity]
// Type encoding: @16@0:8
// Implementation: 0x1046da190

@end
