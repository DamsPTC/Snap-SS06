// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceProfileV2Router
// Superclass: NSObject
// Address: 0x112a06f08

@interface SCMapPlaceProfileV2Router

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceProfileV2Router initWithPlaceProfileV2Scope:mapSession:contentFetcher:notificationPool:venueEditorScopeExposer:webBrowsingScopeExposer:webBrowsingUIContainer:unifiedPublicProfilesPresenterScopeLauncher:placeSharingScopeExposer:deepLinkHandler:bitmojiAvatarId:eventSender:workflowManager:mapPlaceSuggestAttributeTrayScopeExposer:circumstanceEngine:promotedPlaceActionPublisher:promotedPlaceRepository:mapBitmojiAvatarGenerator:cameraScopeExposer:caasCameraScopeBuilderServices:]
// Type encoding: @176@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120@128@136@144@152@160@168
// Implementation: 0x104eeae88

// -[SCMapPlaceProfileV2Router setActivePlaceProfileV2Controller:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeb2c8

// -[SCMapPlaceProfileV2Router launchPlaceDiscoveryResultsTrayWithPivot:placeSessionId:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104eeb2d4

// -[SCMapPlaceProfileV2Router getETADataForPlaceWithLat:lng:]
// Type encoding: v32@0:8d16d24
// Implementation: 0x104eeb2d8

// -[SCMapPlaceProfileV2Router closeTray]
// Type encoding: v16@0:8
// Implementation: 0x104eeb2dc

// -[SCMapPlaceProfileV2Router maximizeTray]
// Type encoding: v16@0:8
// Implementation: 0x104eeb308

// -[SCMapPlaceProfileV2Router openWebPageForUrlWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeb338

// -[SCMapPlaceProfileV2Router openGoogleReviewsPageWithUrl:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeb464

// -[SCMapPlaceProfileV2Router openCallForPlacePhoneNumberWithPhoneNumber:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeb690

// -[SCMapPlaceProfileV2Router _logPromotedPlaceActionIfNeeded:]
// Type encoding: v24@0:8q16
// Implementation: 0x104eeb7cc

// -[SCMapPlaceProfileV2Router openDirectionsForPlaceWithPlaceName:formattedAddress:lat:lng:travelMode:]
// Type encoding: v52@0:8@16@24d32d40i48
// Implementation: 0x104eeb8b4

// -[SCMapPlaceProfileV2Router openActionSheetForPlaceWithPlaceId:placeName:lat:lng:]
// Type encoding: v48@0:8@16@24d32d40
// Implementation: 0x104eeba04

// -[SCMapPlaceProfileV2Router openOrderActionSheetForPlaceWithPartnerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eebb10

// -[SCMapPlaceProfileV2Router openReservationsActionSheetForPlaceWithPartnerInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eebbf0

// -[SCMapPlaceProfileV2Router openShopDeeplinkWithStoreUrl:placeId:sessionId:]
// Type encoding: v40@0:8@16@24d32
// Implementation: 0x104eebcd0

// -[SCMapPlaceProfileV2Router copyAddressForPlaceWithPlaceName:formattedAddress:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eebe24

// -[SCMapPlaceProfileV2Router _openActionSheetForPartnerInfo:title:metricType:allowNativeApp:skipSheetIfOnlyOneOption:]
// Type encoding: v44@0:8@16@24i32B36B40
// Implementation: 0x104eebf38

// -[SCMapPlaceProfileV2Router _openVenueEditorWithPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eec6d8

// -[SCMapPlaceProfileV2Router launchTicketmasterEventWithUrl:eventId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eec7e0

// -[SCMapPlaceProfileV2Router launchBusinessProfileWithBusinessId:placeId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eec8a4

// -[SCMapPlaceProfileV2Router openPlaceProfileWithPlaceId:boundingBox:placeType:]
// Type encoding: v36@0:8@16@24i32
// Implementation: 0x104eec9f8

// -[SCMapPlaceProfileV2Router sendPlaceProfileWithPlaceId:placeName:boundingBox:placeType:]
// Type encoding: v44@0:8@16@24@32i40
// Implementation: 0x104eecc4c

// -[SCMapPlaceProfileV2Router handlePlacePivotTapWithPivot:placeSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eecee0

// -[SCMapPlaceProfileV2Router handlePlacePivotLongPressWithPivot:placeSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eed1a0

// -[SCMapPlaceProfileV2Router handleAttributeEditorTapWithInitialAttributes:placeId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eed710

// -[SCMapPlaceProfileV2Router onFavoriteTappedWithWillBeFavorited:]
// Type encoding: v20@0:8B16
// Implementation: 0x104eed930

// -[SCMapPlaceProfileV2Router handlePlaceLoyaltyShareTapWithStickerData:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eed938

// -[SCMapPlaceProfileV2Router _fetchBitmojiImageWithPoseId:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104eedbac

// -[SCMapPlaceProfileV2Router _downloadTrophyImageWithImageUrl:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x104eedc58

// -[SCMapPlaceProfileV2Router _launchCameraWithPlaceLoyaltySticker:bitmojiImage:trophyImage:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x104eedcf0

// -[SCMapPlaceProfileV2Router _clearVisitationForCurrentPlace]
// Type encoding: v16@0:8
// Implementation: 0x104eee040

// -[SCMapPlaceProfileV2Router _visitRemovalCompletedWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eee140

// -[SCMapPlaceProfileV2Router _presentWebBrowserWithURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eee31c

// -[SCMapPlaceProfileV2Router _presentActionSheetForDirectionsWithName:address:lat:lng:travelMode:]
// Type encoding: v52@0:8@16@24d32d40i48
// Implementation: 0x104eee3b8

// -[SCMapPlaceProfileV2Router _loadDirectionsIconUrls]
// Type encoding: v16@0:8
// Implementation: 0x104eeeb50

// -[SCMapPlaceProfileV2Router _setUrlString:forIconKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eeee0c

// -[SCMapPlaceProfileV2Router _iconUrlForKey:]
// Type encoding: @24@0:8@16
// Implementation: 0x104eeee14

// -[SCMapPlaceProfileV2Router venueEditorScreenDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104eeeec4

// -[SCMapPlaceProfileV2Router removeVenueEditorScope]
// Type encoding: v16@0:8
// Implementation: 0x104eeeec8

// -[SCMapPlaceProfileV2Router webBrowserDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eeef10

// -[SCMapPlaceProfileV2Router _launchBusinessProfile:placeId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104eeef58

// -[SCMapPlaceProfileV2Router unifiedPublicProfilesPresenterScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x104eef0f4

// -[SCMapPlaceProfileV2Router presentingViewControllerForUnifiedPublicProfilesPresenterScope]
// Type encoding: @16@0:8
// Implementation: 0x104eef12c

// -[SCMapPlaceProfileV2Router mapPlaceShareEnded]
// Type encoding: v16@0:8
// Implementation: 0x104eef16c

// -[SCMapPlaceProfileV2Router mapPlaceSuggestAttributeTrayScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x104eef1b4

// -[SCMapPlaceProfileV2Router .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104eef1fc

@end
