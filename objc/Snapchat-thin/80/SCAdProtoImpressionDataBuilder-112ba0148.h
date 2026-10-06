// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAdProtoImpressionDataBuilder
// Superclass: NSObject
// Address: 0x112ba0148

@interface SCAdProtoImpressionDataBuilder

// Property: adResponse; attributes: T@"SCAdResponse",R,N,V_adResponse
// Property: adTrackInfo; attributes: T@"SCAdTrackInfo",R,N,V_adTrackInfo
// Property: adConfigProvider; attributes: T@"<SCAdConfigProviding_DEPRECATED>",R,N,V_adConfigProvider
// Property: adConfigProviderV2; attributes: T@"<SCAdConfigProviding>",R,N,V_adConfigProviderV2
// Property: dpaConfigProvider; attributes: T@"<SCDpaConfigProviding>",R,N,V_dpaConfigProvider
// Property: valdiRuntimeProvider; attributes: T@"SCLazy",R,N,V_valdiRuntimeProvider
// Property: userBlizzard; attributes: T@"SCLazy",R,N,V_userBlizzard

// -[SCAdProtoImpressionDataBuilder protoWebViewContext:snapIndex:collectionItemIndex:]
// Type encoding: @40@0:8@16q24q32
// Implementation: 0x1084b62d4

// -[SCAdProtoImpressionDataBuilder _protoWebViewAutofillInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b6978

// -[SCAdProtoImpressionDataBuilder _protoWebViewLoadInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b6ebc

// -[SCAdProtoImpressionDataBuilder _updateProtoWebViewLoadInfo:withLoadInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1084b6f80

// -[SCAdProtoImpressionDataBuilder _updateProtoWebViewLoadInfo:withPerformanceInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1084b7828

// -[SCAdProtoImpressionDataBuilder _updateProtoWebViewLoadInfo:withTrackInfo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1084b79b4

// -[SCAdProtoImpressionDataBuilder _protoPrefetchMode:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084b7d44

// -[SCAdProtoImpressionDataBuilder protoViewContextFromDictionary:adPodTrackInfo:context:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1084b4650

// -[SCAdProtoImpressionDataBuilder _protoSwipeSensitivityConfigFromInteractiveAreaConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b5ebc

// -[SCAdProtoImpressionDataBuilder _protoViewContextPositionFromString:]
// Type encoding: i24@0:8@16
// Implementation: 0x1084b6230

// -[SCAdProtoImpressionDataBuilder _protoViewContextAttachmentTriggerTypeFromAttachmentTriggerType:]
// Type encoding: i24@0:8q16
// Implementation: 0x1084b62b0

// -[SCAdProtoImpressionDataBuilder _protoThreeVImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084b45a8

// -[SCAdProtoImpressionDataBuilder _protoSurveyImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084b4504

// -[SCAdProtoImpressionDataBuilder _protoStoryImpressionTrack:operaNavigationStyle:viewLocation:adTrackInfoContext:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x1084b3630

// -[SCAdProtoImpressionDataBuilder _getProtoStoryImpressionWithEngagementTrackBuilder:operaNavigationStyle:viewLocation:adTrackInfoContext:]
// Type encoding: @48@0:8@16q24q32@40
// Implementation: 0x1084b3c9c

// -[SCAdProtoImpressionDataBuilder _protoAdHintInteractionTrackFromNative:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b426c

// -[SCAdProtoImpressionDataBuilder _tileInteractionTrackWithAttachmentTrack:tileTimeViewedInMillis:viewLocation:]
// Type encoding: @40@0:8@16d24q32
// Implementation: 0x1084b435c

// -[SCAdProtoImpressionDataBuilder _protoShowcaseImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084b31f0

// -[SCAdProtoImpressionDataBuilder _protoAppInstallStatus:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084b2e04

// -[SCAdProtoImpressionDataBuilder _infoCardConfigFromCommonTrackInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b2e1c

// -[SCAdProtoImpressionDataBuilder _protoRemoteWebpageImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084b090c

// -[SCAdProtoImpressionDataBuilder _protoReminderImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084b075c

// -[SCAdProtoImpressionDataBuilder _protoLensCarouselImpressionTracksFromLensCarouselInteractions:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084af460

// -[SCAdProtoImpressionDataBuilder _protoConsentCheckboxes:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084ae6e8

// -[SCAdProtoImpressionDataBuilder _protoSubmittedConsentCheckboxes:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084ae84c

// -[SCAdProtoImpressionDataBuilder _protoLeadGenerationValidationType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084ae9d4

// -[SCAdProtoImpressionDataBuilder _protoLeadGenerationStandardFieldType:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084ae9e4

// -[SCAdProtoImpressionDataBuilder _protoLeadGenerationSubmittedLead:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084ae9f4

// -[SCAdProtoImpressionDataBuilder _protoFieldInputMethod:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084af280

// -[SCAdProtoImpressionDataBuilder _protoLeadGenerationImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084af290

// -[SCAdProtoImpressionDataBuilder _protoIndexedStoryImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:adTrackInfoContext:]
// Type encoding: @56@0:8@16d24q32q40@48
// Implementation: 0x1084ae0c0

// -[SCAdProtoImpressionDataBuilder _protoDeepLinkAttachmentImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084acf48

// -[SCAdProtoImpressionDataBuilder _protoDeepLinkFallbackType:]
// Type encoding: i24@0:8q16
// Implementation: 0x1084adcf4

// -[SCAdProtoImpressionDataBuilder _protoCtaActivity:]
// Type encoding: i24@0:8q16
// Implementation: 0x1084add04

// -[SCAdProtoImpressionDataBuilder _protoPromoImpressionTrack:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084a709c

// -[SCAdProtoImpressionDataBuilder _commonSnapAdImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:additionalSettings:]
// Type encoding: @56@0:8@16d24q32q40@?48
// Implementation: 0x1084a7214

// -[SCAdProtoImpressionDataBuilder _populateProtoCommonSnapAdTopSnapImpressionTrack:adSnapTrackInfo:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: v56@0:8@16@24d32q40q48
// Implementation: 0x1084a72c4

// -[SCAdProtoImpressionDataBuilder _protoCommonSnapAdImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084abb2c

// -[SCAdProtoImpressionDataBuilder _topSnapInteractionTracksFromTopSnapInteractionInfos:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084abda4

// -[SCAdProtoImpressionDataBuilder _topSnapImpressionsTracksFromImpressionInfos:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084ac388

// -[SCAdProtoImpressionDataBuilder _protoArShoppingExperienceTrack:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084ac51c

// -[SCAdProtoImpressionDataBuilder _protoCommercePdpImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a6e68

// -[SCAdProtoImpressionDataBuilder _protoCollectionImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a58f8

// -[SCAdProtoImpressionDataBuilder _protoAppInstallImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a4d54

// -[SCAdProtoImpressionDataBuilder _protoAdToLensImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a4828

// -[SCAdProtoImpressionDataBuilder _protoAdToCallImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a48f8

// -[SCAdProtoImpressionDataBuilder _protoAdToMessageImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a49f4

// -[SCAdProtoImpressionDataBuilder _protoAdToPlaceImpressionTrack:unskippableDurationMs:operaNavigationStyle:viewLocation:]
// Type encoding: @48@0:8@16d24q32q40
// Implementation: 0x1084a4af0

// -[SCAdProtoImpressionDataBuilder getProtoAdFlagData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084a43a8

// -[SCAdProtoImpressionDataBuilder getProtoAdHideData:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084a44f4

// -[SCAdProtoImpressionDataBuilder protoAdHiddenReasonFromReason:]
// Type encoding: i24@0:8q16
// Implementation: 0x1084a45a4

// -[SCAdProtoImpressionDataBuilder initWithAdTrackInfo:adResponse:thirdPartyImpressionURLs:thirdPartyClickURLs:thirdPartyEngagedViewClickURLs:adConfigProvider:adConfigProviderV2:dpaConfigProvider:valdiRuntimeProvider:userBlizzard:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x1084b1508

// -[SCAdProtoImpressionDataBuilder build]
// Type encoding: @16@0:8
// Implementation: 0x1084b1748

// -[SCAdProtoImpressionDataBuilder getChatFeedCellImpression:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b273c

// -[SCAdProtoImpressionDataBuilder getBannerImpression:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b2a20

// -[SCAdProtoImpressionDataBuilder protoBannerTapDestinationFromTapDestination:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084b2b40

// -[SCAdProtoImpressionDataBuilder _getViewLocationFromViewContext:]
// Type encoding: q24@0:8@16
// Implementation: 0x1084b2b50

// -[SCAdProtoImpressionDataBuilder _operaNavigationStyleFromViewContext:]
// Type encoding: q24@0:8@16
// Implementation: 0x1084b2c64

// -[SCAdProtoImpressionDataBuilder protoChatFeedCellTapDestinationFromTapDestination:]
// Type encoding: i24@0:8Q16
// Implementation: 0x1084b2d2c

// -[SCAdProtoImpressionDataBuilder adResponse]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d3c

// -[SCAdProtoImpressionDataBuilder adTrackInfo]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d44

// -[SCAdProtoImpressionDataBuilder adConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d4c

// -[SCAdProtoImpressionDataBuilder adConfigProviderV2]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d54

// -[SCAdProtoImpressionDataBuilder dpaConfigProvider]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d5c

// -[SCAdProtoImpressionDataBuilder valdiRuntimeProvider]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d64

// -[SCAdProtoImpressionDataBuilder userBlizzard]
// Type encoding: @16@0:8
// Implementation: 0x1084b2d6c

// -[SCAdProtoImpressionDataBuilder .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1084b2d74

// +[SCAdProtoImpressionDataBuilder _gpbStringArray:]
// Type encoding: @24@0:8@16
// Implementation: 0x1084b2f40

@end
