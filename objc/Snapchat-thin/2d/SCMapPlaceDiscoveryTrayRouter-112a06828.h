// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlaceDiscoveryTrayRouter
// Superclass: NSObject
// Address: 0x112a06828

@interface SCMapPlaceDiscoveryTrayRouter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMapPlaceDiscoveryTrayRouter initWithMultiTrayServices:composerServices:placeDiscoveryScope:mapPlacesContentServices:placeDiscoveryController:placeDiscoveryContextCreator:storyPlaybackScopeExposer:storyPlaybackScopeServices:operaPresenterViewController:circumstanceEngine:placeSharingScopeExposer:mapPlaceProfileFactoryServices:mapVisitedBySharingFactoryServices:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x104ed360c

// -[SCMapPlaceDiscoveryTrayRouter updateWithTrayDetails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed3920

// -[SCMapPlaceDiscoveryTrayRouter presentPlaceDiscoveryResultsTrayWithTrayDetails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed39a4

// -[SCMapPlaceDiscoveryTrayRouter closeAllTrays:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed3b10

// -[SCMapPlaceDiscoveryTrayRouter didRemoveTray:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed3cf8

// -[SCMapPlaceDiscoveryTrayRouter updateTrayPositionToPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104ed3dd0

// -[SCMapPlaceDiscoveryTrayRouter handleDismissKeyboard]
// Type encoding: v16@0:8
// Implementation: 0x104ed3f3c

// -[SCMapPlaceDiscoveryTrayRouter launchPlaceProfileWithPlace:coordinate:bounds:sourceType:]
// Type encoding: v56@0:8@16{CLLocationCoordinate2D=dd}24@40@48
// Implementation: 0x104ed401c

// -[SCMapPlaceDiscoveryTrayRouter handleEditSearchWithSearchQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed42f4

// -[SCMapPlaceDiscoveryTrayRouter handleCloseButtonTapped]
// Type encoding: v16@0:8
// Implementation: 0x104ed4364

// -[SCMapPlaceDiscoveryTrayRouter activeDiscoveryTray]
// Type encoding: @16@0:8
// Implementation: 0x104ed44b4

// -[SCMapPlaceDiscoveryTrayRouter searchStatusButton]
// Type encoding: @16@0:8
// Implementation: 0x104ed44f0

// -[SCMapPlaceDiscoveryTrayRouter placesBasemapLayer:placeWasTapped:screenPoint:touchWorldLocation:shouldPlayStory:]
// Type encoding: v68@0:8@16@24{CGPoint=dd}32{CLLocationCoordinate2D=dd}48B64
// Implementation: 0x104ed4518

// -[SCMapPlaceDiscoveryTrayRouter handleOpenPlaceForBasemapPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed4610

// -[SCMapPlaceDiscoveryTrayRouter handlePlayPlaceStoryForPlaceID:touchPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x104ed46a4

// -[SCMapPlaceDiscoveryTrayRouter handlePlayFriendStoryForPlaceID:friendID:touchPoint:]
// Type encoding: v48@0:8@16@24{CGPoint=dd}32
// Implementation: 0x104ed46a8

// -[SCMapPlaceDiscoveryTrayRouter handleOpenPlaceCalloutWithPlaceID:userID:location:]
// Type encoding: v48@0:8@16@24{CLLocationCoordinate2D=dd}32
// Implementation: 0x104ed46ac

// -[SCMapPlaceDiscoveryTrayRouter mapStoryDidFinishPresentingWithTransitionAnimator:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed46b0

// -[SCMapPlaceDiscoveryTrayRouter mapStoryDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x104ed46e4

// -[SCMapPlaceDiscoveryTrayRouter mapStoryManifestRequestDidFailWithResult:]
// Type encoding: v24@0:8Q16
// Implementation: 0x104ed472c

// -[SCMapPlaceDiscoveryTrayRouter _launchMediaPinStoryForPlaceId:touchPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x104ed4774

// -[SCMapPlaceDiscoveryTrayRouter _setupPlaceProfileTrayForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed49d8

// -[SCMapPlaceDiscoveryTrayRouter _dismissOpenPlaceProfile]
// Type encoding: v16@0:8
// Implementation: 0x104ed4b40

// -[SCMapPlaceDiscoveryTrayRouter _isResultsTrayActive]
// Type encoding: B16@0:8
// Implementation: 0x104ed4b7c

// -[SCMapPlaceDiscoveryTrayRouter _getCurrentTrayForLogging]
// Type encoding: @16@0:8
// Implementation: 0x104ed4bcc

// -[SCMapPlaceDiscoveryTrayRouter _createSearchStatusButton]
// Type encoding: v16@0:8
// Implementation: 0x104ed4bf4

// -[SCMapPlaceDiscoveryTrayRouter _removeSearchStatusButton]
// Type encoding: v16@0:8
// Implementation: 0x104ed4bf8

// -[SCMapPlaceDiscoveryTrayRouter launchVisitationLongPressMenu:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed4c24

// -[SCMapPlaceDiscoveryTrayRouter _launchPlaceSharingScope:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed5004

// -[SCMapPlaceDiscoveryTrayRouter _clearVisitationForPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed5294

// -[SCMapPlaceDiscoveryTrayRouter launchVisitedBySharingFlow:numPlaces:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x104ed530c

// -[SCMapPlaceDiscoveryTrayRouter mapPlaceShareEnded]
// Type encoding: v16@0:8
// Implementation: 0x104ed54b0

// -[SCMapPlaceDiscoveryTrayRouter mapPlaceProfilePresenter]
// Type encoding: @16@0:8
// Implementation: 0x104ed54f8

// -[SCMapPlaceDiscoveryTrayRouter _metricsDataWithOpenSource:hasMediaPin:placesSourceType:sourceSessionId:viewportSessionData:]
// Type encoding: @52@0:8q16B24q28@36@44
// Implementation: 0x104ed55bc

// -[SCMapPlaceDiscoveryTrayRouter _focusedPlaceWithPlaceId:metricsData:coordinate:bounds:basemapPlace:isPromoted:]
// Type encoding: @68@0:8@16@24{CLLocationCoordinate2D=dd}32@48@56B64
// Implementation: 0x104ed56a8

// -[SCMapPlaceDiscoveryTrayRouter onPlaceProfileHidden]
// Type encoding: v16@0:8
// Implementation: 0x104ed5834

// -[SCMapPlaceDiscoveryTrayRouter onPlaceProfileRemoved]
// Type encoding: v16@0:8
// Implementation: 0x104ed5868

// -[SCMapPlaceDiscoveryTrayRouter onPlaceVisitRemovedForPlaceId:]
// Type encoding: v24@0:8@16
// Implementation: 0x104ed5878

// -[SCMapPlaceDiscoveryTrayRouter onSharingWorkflowComplete]
// Type encoding: v16@0:8
// Implementation: 0x104ed594c

// -[SCMapPlaceDiscoveryTrayRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ed595c

@end
