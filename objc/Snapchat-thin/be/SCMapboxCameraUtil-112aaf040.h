// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapboxCameraUtil
// Superclass: NSObject
// Address: 0x112aaf040

@interface SCMapboxCameraUtil


// +[SCMapboxCameraUtil centerMap:bounds:edgePadding:animated:completion:]
// Type encoding: v100@0:8@16{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}24{UIEdgeInsets=dddd}56B88@?92
// Implementation: 0x105f5c0d4

// +[SCMapboxCameraUtil centerMap:bounds:duration:edgePadding:completion:]
// Type encoding: v104@0:8@16{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}24d56{UIEdgeInsets=dddd}64@?96
// Implementation: 0x105f5c114

// +[SCMapboxCameraUtil centerMap:coordinate:zoomLevel:edgePadding:duration:completion:]
// Type encoding: v96@0:8@16{CLLocationCoordinate2D=dd}24d40{UIEdgeInsets=dddd}48d80@?88
// Implementation: 0x105f5c22c

// +[SCMapboxCameraUtil flyToCoordinate:zoomLevel:mapView:duration:completion:]
// Type encoding: v64@0:8{CLLocationCoordinate2D=dd}16d32@40d48@?56
// Implementation: 0x105f5c320

// +[SCMapboxCameraUtil flyToCoordinate:zoomLevel:mapView:duration:edgePadding:completion:]
// Type encoding: v96@0:8{CLLocationCoordinate2D=dd}16d32@40d48{UIEdgeInsets=dddd}56@?88
// Implementation: 0x105f5c3c0

// +[SCMapboxCameraUtil flyToCoordinate:zoomLevel:pitch:mapView:duration:edgePadding:completion:]
// Type encoding: v104@0:8{CLLocationCoordinate2D=dd}16d32d40@48d56{UIEdgeInsets=dddd}64@?96
// Implementation: 0x105f5c3f0

// +[SCMapboxCameraUtil flyToCoordinateBounds:mapView:duration:edgePadding:completion:]
// Type encoding: v104@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@48d56{UIEdgeInsets=dddd}64@?96
// Implementation: 0x105f5c850

// +[SCMapboxCameraUtil flyToCoordinateBounds:pitch:mapView:duration:edgePadding:completion:]
// Type encoding: v112@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16d48@56d64{UIEdgeInsets=dddd}72@?104
// Implementation: 0x105f5c86c

// +[SCMapboxCameraUtil _mapCamera:isEqualToCamera:ignoreAltitude:]
// Type encoding: B36@0:8@16@24B32
// Implementation: 0x105f5cc4c

@end
