// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapPlacesBasemapLayerManager
// Superclass: NSObject
// Address: 0x112aac7c8

@interface SCMapPlacesBasemapLayerManager

// Property: delegate; attributes: T@"<SCMapPlacesBasemapLayerDelegate>",W,N,V_delegate
// Property: presentingUIContainer; attributes: T@"SCLazy",W,N,V_presentingUIContainer

// -[SCMapPlacesBasemapLayerManager initWithPlaceManager:mapView:gestureManager:mapLoggerSession:circumstanceEngine:mapPlaceProfileFactoryServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105f2e2f0

// -[SCMapPlacesBasemapLayerManager setVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f2e47c

// -[SCMapPlacesBasemapLayerManager setHiddenPlaceIds:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2e48c

// -[SCMapPlacesBasemapLayerManager restoreToDefaultSettings]
// Type encoding: v16@0:8
// Implementation: 0x105f2e4d0

// -[SCMapPlacesBasemapLayerManager _registerPlaceTapAppTriggers]
// Type encoding: v16@0:8
// Implementation: 0x105f2e4d8

// -[SCMapPlacesBasemapLayerManager _handlePlayFriendStoryActionWithTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2e91c

// -[SCMapPlacesBasemapLayerManager _handlePlayPlaceStoryActionWithTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2ea3c

// -[SCMapPlacesBasemapLayerManager _handleOpenPlaceActionWithTrigger:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2eb18

// -[SCMapPlacesBasemapLayerManager _handleOnPlaceCalloutTappedWithPlaceID:location:]
// Type encoding: v40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x105f2ec94

// -[SCMapPlacesBasemapLayerManager _handleOnPlaceTappedWithPlaceID:coordinate:placeData:]
// Type encoding: v48@0:8@16{CLLocationCoordinate2D=dd}24@40
// Implementation: 0x105f2ed04

// -[SCMapPlacesBasemapLayerManager mapPlaceProfilePresenter]
// Type encoding: @16@0:8
// Implementation: 0x105f2f11c

// -[SCMapPlacesBasemapLayerManager _presentPlaceProfileWithMapPlace:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2f224

// -[SCMapPlacesBasemapLayerManager _presentPlaceCalloutWithPlaceId:coordinate:]
// Type encoding: v40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x105f2f3c8

// -[SCMapPlacesBasemapLayerManager onPlaceProfileHidden]
// Type encoding: v16@0:8
// Implementation: 0x105f2f4b4

// -[SCMapPlacesBasemapLayerManager onPlaceProfileRemoved]
// Type encoding: v16@0:8
// Implementation: 0x105f2f4e8

// -[SCMapPlacesBasemapLayerManager presentingUIContainer]
// Type encoding: @16@0:8
// Implementation: 0x105f2f4f8

// -[SCMapPlacesBasemapLayerManager setPresentingUIContainer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2f510

// -[SCMapPlacesBasemapLayerManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x105f2f51c

// -[SCMapPlacesBasemapLayerManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2f534

// -[SCMapPlacesBasemapLayerManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f2f540

@end
