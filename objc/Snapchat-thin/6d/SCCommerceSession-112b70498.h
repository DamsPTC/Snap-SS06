// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCommerceSession
// Superclass: NSObject
// Address: 0x112b70498

@interface SCCommerceSession

// Property: pageIdStack; attributes: T@"NSMutableArray",&,V_pageIdStack
// Property: grapheneLogger; attributes: T@"SCCommerceGrapheneLogger",&,N,V_grapheneLogger
// Property: grapheneNetworkLogger; attributes: T@"SCCommerceGrapheneNetworkLogger",&,N,V_grapheneNetworkLogger
// Property: blizzardUserLogger; attributes: T@"<SCUserBlizzard>",&,N,V_blizzardUserLogger
// Property: pageImpressionDate; attributes: T@"NSDate",&,N,V_pageImpressionDate
// Property: sessionConfiguration; attributes: T@"SCCommerceProductCatalogSessionConfiguration",&,N,V_sessionConfiguration
// Property: commerceSessionId; attributes: T@"NSString",R,N,V_commerceSessionId
// Property: displayId; attributes: T@"NSString",R,N,V_displayId
// Property: originType; attributes: Tq,R,N,V_originType
// Property: source; attributes: Tq,R,N,V_source
// Property: isSponsored; attributes: TB,R,N,V_isSponsored
// Property: productType; attributes: Tq,N,V_productType
// Property: productArea; attributes: Tq,N,V_productArea
// Property: productId; attributes: T@"NSString",&,N,V_productId
// Property: storeId; attributes: T@"NSString",&,N,V_storeId
// Property: productSetId; attributes: T@"NSString",&,N,V_productSetId
// Property: sourceId; attributes: T@"NSString",&,N,V_sourceId
// Property: sourceSessionId; attributes: T@"NSString",&,N,V_sourceSessionId
// Property: trackingId; attributes: T@"NSString",&,N,V_trackingId
// Property: productItemType; attributes: Tq,N,V_productItemType
// Property: primaryAvatarType; attributes: Tq,N,V_primaryAvatarType
// Property: secondaryAvatarType; attributes: Tq,N,V_secondaryAvatarType
// Property: snapAttachmentType; attributes: Tq,N,V_snapAttachmentType
// Property: isShowcase; attributes: TB,N,V_isShowcase
// Property: comicId; attributes: T@"NSString",C,N,V_comicId
// Property: currentCheckoutId; attributes: T@"NSString",C,N,V_currentCheckoutId
// Property: isCheckoutOnboarding; attributes: TB,N,V_isCheckoutOnboarding
// Property: topic; attributes: T@"NSString",&,N,V_topic
// Property: sectionName; attributes: T@"NSString",&,N,V_sectionName
// Property: sectionIndex; attributes: T@"NSString",&,N,V_sectionIndex
// Property: contextMetrics; attributes: T@"SCCommerceContextMetricsModel",&,N,V_contextMetrics
// Property: snapToProductMetrics; attributes: T@"SCCommerceSnapToProductMetricsModel",&,N,V_snapToProductMetrics
// Property: adMetrics; attributes: T@"SCCommerceAdMetricsModel",&,N,V_adMetrics
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCommerceSession initWithSource:productType:originType:grapheneRegistry:blizzardUserLogger:]
// Type encoding: @56@0:8q16q24q32@40@48
// Implementation: 0x107aec504

// -[SCCommerceSession initWithSessionConfig:source:grapheneRegistry:blizzardUserLogger:]
// Type encoding: @48@0:8@16q24@32@40
// Implementation: 0x107aec638

// -[SCCommerceSession startNewPageSession:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aed0b0

// -[SCCommerceSession endCurrentPageSession]
// Type encoding: v16@0:8
// Implementation: 0x107aed130

// -[SCCommerceSession logPageOpen:sourcePage:metricsDataSource:jsonMetadata:eventId:]
// Type encoding: v56@0:8q16q24@32@40@48
// Implementation: 0x107aed160

// -[SCCommerceSession logPageOpen:sourcePage:metricsDataSource:jsonMetadata:eventId:cartItems:]
// Type encoding: v64@0:8q16q24@32@40@48@56
// Implementation: 0x107aed2f0

// -[SCCommerceSession logPageClose:destinationPage:timeUntilPageReadySeconds:metricsDataSource:availableModules:exitEvent:cartItems:]
// Type encoding: v72@0:8q16q24d32@40@48q56@64
// Implementation: 0x107aed4c8

// -[SCCommerceSession logPageClose:destinationPage:metricsDataSource:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x107aed630

// -[SCCommerceSession logPageClose:destinationPage:metricsDataSource:exitEvent:cartItems:]
// Type encoding: v56@0:8q16q24@32q40@48
// Implementation: 0x107aed6a8

// -[SCCommerceSession logPageClose:destinationPage:timeUntilPageReadySeconds:metricsDataSource:exitEvent:]
// Type encoding: v56@0:8q16q24d32@40q48
// Implementation: 0x107aed78c

// -[SCCommerceSession logPageClose:destinationPage:timeUntilPageReadySeconds:metricsDataSource:availableModules:exitEvent:]
// Type encoding: v64@0:8q16q24d32@40@48q56
// Implementation: 0x107aed86c

// -[SCCommerceSession logCardOpen:currentPage:metricsDataSource:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x107aed970

// -[SCCommerceSession logCardClose:currentPage:metricsDataSource:]
// Type encoding: v40@0:8q16q24@32
// Implementation: 0x107aeda98

// -[SCCommerceSession logCommercePickerOpen:picker:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107aedb3c

// -[SCCommerceSession logCommercePickerClose:picker:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107aedb9c

// -[SCCommerceSession logProductImpression:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aedbfc

// -[SCCommerceSession logWidgetImpressionWithDuration:source:pageSessionId:availableSections:]
// Type encoding: v48@0:8d16q24@32@40
// Implementation: 0x107aedd28

// -[SCCommerceSession logProductTapWithProductImpressionData:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aede30

// -[SCCommerceSession logScreenshopOnboardingModalImpressionWithLocation:retryCounter:isNewUser:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x107aedf5c

// -[SCCommerceSession logSwipeUpOnPage:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aedfe8

// -[SCCommerceSession logCardAction:card:currentPage:]
// Type encoding: v40@0:8q16q24q32
// Implementation: 0x107aee04c

// -[SCCommerceSession logButtonTap:currentCard:currentPage:jsonMetadata:]
// Type encoding: v48@0:8q16q24q32@40
// Implementation: 0x107aee0c0

// -[SCCommerceSession logButtonTap:currentCard:currentPage:jsonMetadata:productId:]
// Type encoding: v56@0:8q16q24q32@40@48
// Implementation: 0x107aee158

// -[SCCommerceSession logSharePDPButtonTapForProductId:storeId:trackingId:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107aee210

// -[SCCommerceSession logProductCellTappedAtRow:column:productId:]
// Type encoding: v40@0:8Q16Q24@32
// Implementation: 0x107aee328

// -[SCCommerceSession logHeroSessionCloseOnPage:timeSpentSeconds:timeUntilReadySeconds:heroImageCount:heroImagePos:]
// Type encoding: v56@0:8q16d24d32q40q48
// Implementation: 0x107aee3b4

// -[SCCommerceSession logScreenshopScannerSessionCloseWithDuration:totalScreenshotCount:processedScreenshotCount:fashionScreenshotCount:screenshopEnabled:]
// Type encoding: v52@0:8d16q24q32q40B48
// Implementation: 0x107aee46c

// -[SCCommerceSession logSendPDPForProductId:storeId:trackingId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107aee518

// -[SCCommerceSession logCommercePickerCellTap:category:content:picker:]
// Type encoding: v48@0:8q16@24@32q40
// Implementation: 0x107aee5f4

// -[SCCommerceSession logPostAttachment:toGroup:toFriend:]
// Type encoding: v28@0:8B16B20B24
// Implementation: 0x107aee6a0

// -[SCCommerceSession logAddAttachment]
// Type encoding: v16@0:8
// Implementation: 0x107aee718

// -[SCCommerceSession logRemoveAttachment]
// Type encoding: v16@0:8
// Implementation: 0x107aee754

// -[SCCommerceSession logAttachmentCellDeselect]
// Type encoding: v16@0:8
// Implementation: 0x107aee790

// -[SCCommerceSession logAttachmentCellSelect]
// Type encoding: v16@0:8
// Implementation: 0x107aee7d4

// -[SCCommerceSession logTextFieldInput:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aee818

// -[SCCommerceSession logCategoryOpenWithMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aee868

// -[SCCommerceSession logCategoryCloseWithMetrics:timeSpent:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x107aee8d0

// -[SCCommerceSession logCategoryHeaderTapWithMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aee998

// -[SCCommerceSession logProductTileTapWithMetrics:productId:tileRow:tileColumn:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x107aeea00

// -[SCCommerceSession logHeroImageTapWithMetrics:imageId:tileRow:tileColumn:]
// Type encoding: v48@0:8@16@24Q32Q40
// Implementation: 0x107aeeae0

// -[SCCommerceSession logValidationFailure:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aeeb8c

// -[SCCommerceSession logUnlockMappingWithUnlockableId:unlockableType:currentPage:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107aeebdc

// -[SCCommerceSession logOpenFromLink:]
// Type encoding: v24@0:8q16
// Implementation: 0x107aeec68

// -[SCCommerceSession logDiscountEventWithDiscountCode:discountAmount:currency:actionType:success:errorCode:]
// Type encoding: v60@0:8@16@24@32q40B48@52
// Implementation: 0x107aeecf0

// -[SCCommerceSession logCreditCardEventWithPaymentMethodId:cardtype:actionType:success:errorCode:]
// Type encoding: v52@0:8@16q24q32B40@44
// Implementation: 0x107aeedfc

// -[SCCommerceSession logShippingAddressEventWithShippingAddressId:actionType:success:errorCode:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x107aeeeb4

// -[SCCommerceSession logContactDetailsEventWithSuccess:errorCode:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x107aeef54

// -[SCCommerceSession logCheckoutObjectUpdateWithCheckoutId:currency:tax:total:subtotal:hasValidPaymentMethod:setHasValidShippingAddress:hasValidContactInfo:shippingAmount:shippingMethodId:discountAmount:actionType:success:errorCode:]
// Type encoding: v112@0:8@16@24d32d40d48B56B60B64d68@76d84q92B100@104
// Implementation: 0x107aeefc8

// -[SCCommerceSession logShippingMethodEventWithShippingId:optionPriceAmount:optionCurrency:actionType:success:errorCode:]
// Type encoding: v60@0:8@16d24@32q40B48@52
// Implementation: 0x107aef16c

// -[SCCommerceSession logOperationalMetricForUserAction:endpoint:statusCode:duration:requestPayloadSize:responsePayloadSize:errorCode:jsonMetadata:]
// Type encoding: v80@0:8Q16Q24q32d40Q48Q56@64@72
// Implementation: 0x107aef25c

// -[SCCommerceSession logScreenshopSettingsUpdateWithOption:]
// Type encoding: v20@0:8B16
// Implementation: 0x107aef4fc

// -[SCCommerceSession getCommerceSession]
// Type encoding: @16@0:8
// Implementation: 0x107aef54c

// -[SCCommerceSession updateCommerceSessionWithCommerceSession:]
// Type encoding: @24@0:8@16
// Implementation: 0x107aef8a4

// -[SCCommerceSession shouldRetainInstanceWhenMarshalling]
// Type encoding: B16@0:8
// Implementation: 0x107aefaac

// -[SCCommerceSession pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x107aefab4

// -[SCCommerceSession _logCategoryBaseEvent:categoryMetrics:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aefac0

// -[SCCommerceSession _logBaseEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aefb98

// -[SCCommerceSession _logBaseEvent:productId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107aefbdc

// -[SCCommerceSession _logCommerceActionBaseEvent:currentCard:currentPage:]
// Type encoding: v40@0:8@16q24q32
// Implementation: 0x107aefc48

// -[SCCommerceSession _logCommerceActionBaseEvent:currentCard:currentPage:productId:]
// Type encoding: v48@0:8@16q24q32@40
// Implementation: 0x107aefce0

// -[SCCommerceSession _populateBasePropertiesForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107aefd98

// -[SCCommerceSession _populateOptionalPropertiesForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0010

// -[SCCommerceSession _populateSessionConfigurationPropertiesForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0330

// -[SCCommerceSession _populateBitmojiPropertiesForEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af05f4

// -[SCCommerceSession _appendToJsonMetadataOnEvent:key:value:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107af0650

// -[SCCommerceSession _mutableJsonMetadataDictionaryForEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x107af076c

// -[SCCommerceSession _logBaseAPIEvent:actionType:success:errorCode:]
// Type encoding: v44@0:8@16q24B32@36
// Implementation: 0x107af08c0

// -[SCCommerceSession _logCommercePageBaseEvent:currentPage:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x107af0948

// -[SCCommerceSession _pageSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107af0998

// -[SCCommerceSession _commerceEndpointForODPEndpoint:]
// Type encoding: q24@0:8Q16
// Implementation: 0x107af09dc

// -[SCCommerceSession _restActionForUserAction:]
// Type encoding: q24@0:8Q16
// Implementation: 0x107af0a00

// -[SCCommerceSession _currencyTypeForCurrencyString:]
// Type encoding: q24@0:8@16
// Implementation: 0x107af0a24

// -[SCCommerceSession _msSpentOnLastPage]
// Type encoding: @16@0:8
// Implementation: 0x107af0a4c

// -[SCCommerceSession _preparePageCloseEventWithDestination:]
// Type encoding: @24@0:8q16
// Implementation: 0x107af0acc

// -[SCCommerceSession _logScanEventWithScanSource:currentPage:]
// Type encoding: v32@0:8q16q24
// Implementation: 0x107af0b44

// -[SCCommerceSession displayId]
// Type encoding: @16@0:8
// Implementation: 0x107af0d60

// -[SCCommerceSession commerceSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107af0d68

// -[SCCommerceSession originType]
// Type encoding: q16@0:8
// Implementation: 0x107af0d70

// -[SCCommerceSession source]
// Type encoding: q16@0:8
// Implementation: 0x107af0d78

// -[SCCommerceSession productType]
// Type encoding: q16@0:8
// Implementation: 0x107af0d80

// -[SCCommerceSession setProductType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af0d88

// -[SCCommerceSession productArea]
// Type encoding: q16@0:8
// Implementation: 0x107af0d90

// -[SCCommerceSession setProductArea:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af0d98

// -[SCCommerceSession productId]
// Type encoding: @16@0:8
// Implementation: 0x107af0da0

// -[SCCommerceSession setProductId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0da8

// -[SCCommerceSession storeId]
// Type encoding: @16@0:8
// Implementation: 0x107af0dd8

// -[SCCommerceSession setStoreId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0de0

// -[SCCommerceSession productSetId]
// Type encoding: @16@0:8
// Implementation: 0x107af0e10

// -[SCCommerceSession setProductSetId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0e18

// -[SCCommerceSession trackingId]
// Type encoding: @16@0:8
// Implementation: 0x107af0e48

// -[SCCommerceSession setTrackingId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0e50

// -[SCCommerceSession productItemType]
// Type encoding: q16@0:8
// Implementation: 0x107af0e80

// -[SCCommerceSession setProductItemType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af0e88

// -[SCCommerceSession primaryAvatarType]
// Type encoding: q16@0:8
// Implementation: 0x107af0e90

// -[SCCommerceSession setPrimaryAvatarType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af0e98

// -[SCCommerceSession secondaryAvatarType]
// Type encoding: q16@0:8
// Implementation: 0x107af0ea0

// -[SCCommerceSession setSecondaryAvatarType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af0ea8

// -[SCCommerceSession comicId]
// Type encoding: @16@0:8
// Implementation: 0x107af0eb0

// -[SCCommerceSession setComicId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0eb8

// -[SCCommerceSession currentCheckoutId]
// Type encoding: @16@0:8
// Implementation: 0x107af0ec0

// -[SCCommerceSession setCurrentCheckoutId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0ec8

// -[SCCommerceSession snapAttachmentType]
// Type encoding: q16@0:8
// Implementation: 0x107af0ed0

// -[SCCommerceSession setSnapAttachmentType:]
// Type encoding: v24@0:8q16
// Implementation: 0x107af0ed8

// -[SCCommerceSession isShowcase]
// Type encoding: B16@0:8
// Implementation: 0x107af0ee0

// -[SCCommerceSession setIsShowcase:]
// Type encoding: v20@0:8B16
// Implementation: 0x107af0ee8

// -[SCCommerceSession isCheckoutOnboarding]
// Type encoding: B16@0:8
// Implementation: 0x107af0ef0

// -[SCCommerceSession setIsCheckoutOnboarding:]
// Type encoding: v20@0:8B16
// Implementation: 0x107af0ef8

// -[SCCommerceSession contextMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107af0f00

// -[SCCommerceSession setContextMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0f08

// -[SCCommerceSession snapToProductMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107af0f38

// -[SCCommerceSession setSnapToProductMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0f40

// -[SCCommerceSession adMetrics]
// Type encoding: @16@0:8
// Implementation: 0x107af0f70

// -[SCCommerceSession setAdMetrics:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0f78

// -[SCCommerceSession sourceId]
// Type encoding: @16@0:8
// Implementation: 0x107af0fa8

// -[SCCommerceSession setSourceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0fb0

// -[SCCommerceSession sourceSessionId]
// Type encoding: @16@0:8
// Implementation: 0x107af0fe0

// -[SCCommerceSession setSourceSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af0fe8

// -[SCCommerceSession isSponsored]
// Type encoding: B16@0:8
// Implementation: 0x107af1018

// -[SCCommerceSession topic]
// Type encoding: @16@0:8
// Implementation: 0x107af1020

// -[SCCommerceSession setTopic:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af1028

// -[SCCommerceSession sectionName]
// Type encoding: @16@0:8
// Implementation: 0x107af1058

// -[SCCommerceSession setSectionName:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af1060

// -[SCCommerceSession sectionIndex]
// Type encoding: @16@0:8
// Implementation: 0x107af1090

// -[SCCommerceSession setSectionIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af1098

// -[SCCommerceSession sessionConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x107af10c8

// -[SCCommerceSession setSessionConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af10d0

// -[SCCommerceSession pageIdStack]
// Type encoding: @16@0:8
// Implementation: 0x107af1100

// -[SCCommerceSession setPageIdStack:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af110c

// -[SCCommerceSession grapheneLogger]
// Type encoding: @16@0:8
// Implementation: 0x107af1114

// -[SCCommerceSession setGrapheneLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af111c

// -[SCCommerceSession grapheneNetworkLogger]
// Type encoding: @16@0:8
// Implementation: 0x107af114c

// -[SCCommerceSession setGrapheneNetworkLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af1154

// -[SCCommerceSession blizzardUserLogger]
// Type encoding: @16@0:8
// Implementation: 0x107af1184

// -[SCCommerceSession setBlizzardUserLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af118c

// -[SCCommerceSession pageImpressionDate]
// Type encoding: @16@0:8
// Implementation: 0x107af11bc

// -[SCCommerceSession setPageImpressionDate:]
// Type encoding: v24@0:8@16
// Implementation: 0x107af11c4

// -[SCCommerceSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107af11f4

// +[SCCommerceSession sessionFromCommerceSource:grapheneRegistry:blizzardUserLogger:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x107aec820

// +[SCCommerceSession logAffiliateWebAttachmentWithEditionId:publisherId:mediaPlaybackSessionId:isTopSnap:blizzardUserLogger:]
// Type encoding: v52@0:8@16@24@32B40@44
// Implementation: 0x107aef400

// +[SCCommerceSession _populateCommonFieldsWithImpressionData:event:commerceSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x107af0ba4

@end
