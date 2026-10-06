// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapCameraUtil
// Superclass: NSObject
// Address: 0x112b23b48

@interface SCMapCameraUtil


// +[SCMapCameraUtil dynamicDurationForFlyToCoordinate:zoomLevel:mapViewport:mapView:]
// Type encoding: d56@0:8{CLLocationCoordinate2D=dd}16d32@40@48
// Implementation: 0x106c1bc90

// +[SCMapCameraUtil dynamicDurationForFlyToCoordinate:toZoomLevel:fromCoordinate:fromZoomLevel:mapSize:]
// Type encoding: d80@0:8{CLLocationCoordinate2D=dd}16d32{CLLocationCoordinate2D=dd}40d56{CGSize=dd}64
// Implementation: 0x106c1bd58

// +[SCMapCameraUtil dynamicDurationForFlyToCoordinateBounds:edgePadding:mapViewport:mapView:]
// Type encoding: d96@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48@80@88
// Implementation: 0x106c1be88

// +[SCMapCameraUtil dynamicDurationForAnimationForCamera:otherCamera:mapSize:]
// Type encoding: d48@0:8@16@24{CGSize=dd}32
// Implementation: 0x106c1c06c

// +[SCMapCameraUtil initialCoordinateBoundsForFriendLocations:mapView:mapViewport:edgePadding:minZoom:maxZoom:]
// Type encoding: {SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}88@0:8@16@24@32{UIEdgeInsets=dddd}40d72d80
// Implementation: 0x106c1c24c

// +[SCMapCameraUtil initialCoordinateBoundsForFriendLocations:mapView:mapViewport:edgePadding:userLocation:minZoom:maxZoom:]
// Type encoding: {SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}96@0:8@16@24@32{UIEdgeInsets=dddd}40@72d80d88
// Implementation: 0x106c1c8c0

// +[SCMapCameraUtil flyToCoordinateBounds:mapViewport:duration:edgePadding:completion:]
// Type encoding: v104@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@48d56{UIEdgeInsets=dddd}64@?96
// Implementation: 0x106c1ccc4

// +[SCMapCameraUtil flyToCoordinateBounds:pitch:mapViewport:duration:edgePadding:completion:]
// Type encoding: v112@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16d48@56d64{UIEdgeInsets=dddd}72@?104
// Implementation: 0x106c1cce0

// +[SCMapCameraUtil centerMapViewport:bounds:animated:edgePadding:completion:]
// Type encoding: v100@0:8@16{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}24B56{UIEdgeInsets=dddd}60@?92
// Implementation: 0x106c1d0c4

// +[SCMapCameraUtil flyToCoordinate:zoomLevel:mapView:mapViewport:duration:edgePadding:completion:]
// Type encoding: v104@0:8{CLLocationCoordinate2D=dd}16d32@40@48d56{UIEdgeInsets=dddd}64@?96
// Implementation: 0x106c1d1b8

// +[SCMapCameraUtil cameraForCoordinate:zoomLevel:pitch:heading:mapView:edgePadding:]
// Type encoding: @96@0:8{CLLocationCoordinate2D=dd}16d32d40d48@56{UIEdgeInsets=dddd}64
// Implementation: 0x106c1d1e8

// +[SCMapCameraUtil flyToCoordinate:zoomLevel:pitch:mapView:mapViewport:duration:edgePadding:completion:]
// Type encoding: v112@0:8{CLLocationCoordinate2D=dd}16d32d40@48@56d64{UIEdgeInsets=dddd}72@?104
// Implementation: 0x106c1d340

@end
