// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlacesController
// Superclass: NSObject
// Address: 0x112aaa068

@interface SCMapPlacesController

// Property: switchingBetweenTrays; attributes: TB,N,V_switchingBetweenTrays
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlacesController initWithMapViewport:mapView:circumstanceEngine:delegate:singlePointCameraPadding:placesBasemapLayer:storyPlaybackScopeExposer:storyPlaybackScopeServices:operaPresentingViewController:mapSession:halfTrayEdgeInsets:mapPeopleFriendsProvider:mapStoryPresenter:placeProfileV2ScopeExposer:]
// Type encoding: @176@0:8@16@24@32@40{UIEdgeInsets=dddd}48@80@88@96@104@112{UIEdgeInsets=dddd}120@152@160@168
// Implementation: 0x105efe23c

// -[SCMapPlacesController selectPlaceWithId:placeType:bounds:openSource:sourceType:sourceSessionId:hidePlacePin:placeLinkButtonData:]
// Type encoding: v100@0:8@16q24{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}32@64@72@80B88@92
// Implementation: 0x105efe518

// -[SCMapPlacesController selectPlaceWithId:coordinate:zoomLevel:showAnnotation:openSource:sourceType:hidePlacePin:]
// Type encoding: v72@0:8@16{CLLocationCoordinate2D=dd}24d40B48@52@60B68
// Implementation: 0x105efe72c

// -[SCMapPlacesController selectPlaceWithId:openSource:sourceType:sourceSessionId:hidePlacePin:placeLinkButtonData:]
// Type encoding: v60@0:8@16@24@32@40B48@52
// Implementation: 0x105efe748

// -[SCMapPlacesController handlePlace:wasFavorited:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105efe794

// -[SCMapPlacesController closeTray]
// Type encoding: v16@0:8
// Implementation: 0x105efe860

// -[SCMapPlacesController _setupPlaceProfileTrayForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x105efe8a0

// -[SCMapPlacesController _doExternallySetPlaceSetupForPlaceId:coordinate:startZoom:endZoom:openSource:sourceType:sourceSessionId:hidePlacePin:placeLinkButtonData:]
// Type encoding: v92@0:8@16{CLLocationCoordinate2D=dd}24d40d48@56@64@72B80@84
// Implementation: 0x105efea1c

// -[SCMapPlacesController _setupTrayForPlaceIdentifier:coordinate:openSource:sourceType:showImmediately:annotations:viewportSessionData:sourceSessionId:basemapPlace:hidePlacePin:isPromoted:placeLinkButtonData:]
// Type encoding: v108@0:8@16{CLLocationCoordinate2D=dd}24@40@48B56@60@68@76@84B92B96@100
// Implementation: 0x105efed10

// -[SCMapPlacesController _getCustomServerRankingIdForOpenSource:]
// Type encoding: @24@0:8@16
// Implementation: 0x105eff040

// -[SCMapPlacesController _showTray]
// Type encoding: v16@0:8
// Implementation: 0x105eff094

// -[SCMapPlacesController _handlePlaceAnimationFire]
// Type encoding: v16@0:8
// Implementation: 0x105eff108

// -[SCMapPlacesController _updateCameraForCoordinate:zoomLevel:animationDuration:]
// Type encoding: v48@0:8{CLLocationCoordinate2D=dd}16d32d40
// Implementation: 0x105eff160

// -[SCMapPlacesController _edgePaddingForHalfishTrayPosition]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105eff284

// -[SCMapPlacesController _launchStoryForFriendUserId:touchPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x105eff32c

// -[SCMapPlacesController _launchStoryForPlace:touchPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x105eff420

// -[SCMapPlacesController lockTargetForAltitudeSliderMapZoomWithinCoordinateBounds:]
// Type encoding: {CLLocationCoordinate2D=dd}48@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x105eff644

// -[SCMapPlacesController _hasFriendStoryForPlace:]
// Type encoding: B24@0:8@16
// Implementation: 0x105eff6c4

// -[SCMapPlacesController _getFriendUserIdForPlace:]
// Type encoding: @24@0:8@16
// Implementation: 0x105eff710

// -[SCMapPlacesController placesBasemapLayer:placeWasTapped:screenPoint:touchWorldLocation:shouldPlayStory:]
// Type encoding: v68@0:8@16@24{CGPoint=dd}32{CLLocationCoordinate2D=dd}48B64
// Implementation: 0x105eff880

// -[SCMapPlacesController handleOpenPlaceForBasemapPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x105eff9b0

// -[SCMapPlacesController handleOpenPlaceCalloutWithPlaceID:userID:location:]
// Type encoding: v48@0:8@16@24{CLLocationCoordinate2D=dd}32
// Implementation: 0x105eff9b8

// -[SCMapPlacesController handlePlayPlaceStoryForPlaceID:touchPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x105effaa0

// -[SCMapPlacesController handlePlayFriendStoryForPlaceID:friendID:touchPoint:]
// Type encoding: v48@0:8@16@24{CGPoint=dd}32
// Implementation: 0x105effaa4

// -[SCMapPlacesController mapPlaceProfileV2ScopeDidDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105effaac

// -[SCMapPlacesController mapStoryDidFinishPresentingWithTransitionAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x105effb88

// -[SCMapPlacesController mapStoryDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x105effbd4

// -[SCMapPlacesController mapStoryManifestRequestDidFailWithResult:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105effc1c

// -[SCMapPlacesController switchingBetweenTrays]
// Type encoding: B16@0:8
// Implementation: 0x105effc64

// -[SCMapPlacesController setSwitchingBetweenTrays:]
// Type encoding: v20@0:8B16
// Implementation: 0x105effc6c

// -[SCMapPlacesController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105effc74

@end
