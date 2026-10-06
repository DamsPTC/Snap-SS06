// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapboxViewportController
// Superclass: NSObject
// Address: 0x112aaef78

@interface SCMapboxViewportController

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: contentInset; attributes: T{UIEdgeInsets=dddd},N
// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},N
// Property: zoomLevel; attributes: Td,N
// Property: pitch; attributes: Td,N
// Property: direction; attributes: Td,N
// Property: visibleCoordinateBounds; attributes: T{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}},N
// Property: target; attributes: T@"<SCMapViewportTarget>",&,N

// -[SCMapboxViewportController initWithMapboxView:mapboxListenerAnnouncer:gestureController:configProvider:viewportMetadataProvider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f58504

// -[SCMapboxViewportController viewportMetadataObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f58658

// -[SCMapboxViewportController upperHalfEdgeInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f58660

// -[SCMapboxViewportController contentInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f586f0

// -[SCMapboxViewportController setContentInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x105f58750

// -[SCMapboxViewportController viewportChangeObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f587ac

// -[SCMapboxViewportController centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x105f587d4

// -[SCMapboxViewportController setCenterCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105f5881c

// -[SCMapboxViewportController setCenterCoordinate:animated:]
// Type encoding: v36@0:8{CLLocationCoordinate2D=dd}16B32
// Implementation: 0x105f58824

// -[SCMapboxViewportController setCenterCoordinate:zoomLevel:animated:completionHandler:]
// Type encoding: v52@0:8{CLLocationCoordinate2D=dd}16d32B40@?44
// Implementation: 0x105f58878

// -[SCMapboxViewportController getTileCover:]
// Type encoding: @24@0:8q16
// Implementation: 0x105f58908

// -[SCMapboxViewportController zoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x105f58970

// -[SCMapboxViewportController setZoomLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f589b0

// -[SCMapboxViewportController setZoomLevel:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105f589b8

// -[SCMapboxViewportController setPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f58a04

// -[SCMapboxViewportController pitch]
// Type encoding: d16@0:8
// Implementation: 0x105f58a40

// -[SCMapboxViewportController setPitch:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105f58a80

// -[SCMapboxViewportController setPitch:andDirection:animated:]
// Type encoding: v36@0:8d16d24B32
// Implementation: 0x105f58ac4

// -[SCMapboxViewportController resetPitchAndDirectionAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f58b10

// -[SCMapboxViewportController setCenterCoordinate:zoomLevel:animated:]
// Type encoding: v44@0:8{CLLocationCoordinate2D=dd}16d32B40
// Implementation: 0x105f58b44

// -[SCMapboxViewportController direction]
// Type encoding: d16@0:8
// Implementation: 0x105f58ba8

// -[SCMapboxViewportController setDirection:]
// Type encoding: v24@0:8d16
// Implementation: 0x105f58be8

// -[SCMapboxViewportController setDirection:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x105f58bf0

// -[SCMapboxViewportController visibleCoordinateBounds]
// Type encoding: {SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@0:8
// Implementation: 0x105f58c3c

// -[SCMapboxViewportController setVisibleCoordinateBounds:]
// Type encoding: v48@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x105f58d38

// -[SCMapboxViewportController setVisibleCoordinateBounds:animated:]
// Type encoding: v52@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16B48
// Implementation: 0x105f58d50

// -[SCMapboxViewportController setVisibleCoordinateBounds:edgePadding:animated:]
// Type encoding: v84@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48B80
// Implementation: 0x105f58d64

// -[SCMapboxViewportController convertPoint:toCoordinateFromView:]
// Type encoding: {CLLocationCoordinate2D=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x105f58e20

// -[SCMapboxViewportController convertCoordinate:toPointToView:]
// Type encoding: {CGPoint=dd}40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x105f58e94

// -[SCMapboxViewportController convertRect:toCoordinateBoundsFromView:]
// Type encoding: {SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x105f58f08

// -[SCMapboxViewportController convertCoordinateBounds:toRectToView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@48
// Implementation: 0x105f58fa4

// -[SCMapboxViewportController viewportAwareCompareCoordinate1:coordinate2:toView:]
// Type encoding: q56@0:8{CLLocationCoordinate2D=dd}16{CLLocationCoordinate2D=dd}32@48
// Implementation: 0x105f59040

// -[SCMapboxViewportController target]
// Type encoding: @16@0:8
// Implementation: 0x105f590cc

// -[SCMapboxViewportController setTarget:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f590f4

// -[SCMapboxViewportController setTarget:transition:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105f59158

// -[SCMapboxViewportController setTarget:layerGate:transition:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105f59168

// -[SCMapboxViewportController flyToCoordinate:zoomLevel:pitch:duration:edgePadding:completion:]
// Type encoding: v96@0:8{CLLocationCoordinate2D=dd}16d32d40d48{UIEdgeInsets=dddd}56@?88
// Implementation: 0x105f59418

// -[SCMapboxViewportController camera]
// Type encoding: @16@0:8
// Implementation: 0x105f59794

// -[SCMapboxViewportController cameraThatFitsCoordinateBounds:edgePadding:]
// Type encoding: @80@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48
// Implementation: 0x105f59930

// -[SCMapboxViewportController flyToCamera:withDuration:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x105f59ad8

// -[SCMapboxViewportController setCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f59f98

// -[SCMapboxViewportController setCamera:withDuration:completion:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x105f59fe0

// -[SCMapboxViewportController setCameraWithDynamicDuration:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f5a474

// -[SCMapboxViewportController setCamera:withTransition:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105f5a538

// -[SCMapboxViewportController setCamera:layerGate:withTransition:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x105f5a548

// -[SCMapboxViewportController easeToZoomLevel:withDuration:completion:]
// Type encoding: v40@0:8d16d24@?32
// Implementation: 0x105f5ad2c

// -[SCMapboxViewportController setTileDebuggingOverlayEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f5af9c

// -[SCMapboxViewportController screenLocationForCoordinate:]
// Type encoding: Q32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105f5afd8

// -[SCMapboxViewportController screenLocationForCoordinate:visibleCoordinateBounds:]
// Type encoding: Q64@0:8{CLLocationCoordinate2D=dd}16{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}32
// Implementation: 0x105f5b034

// -[SCMapboxViewportController relativeScreenCoordinatesForLocation:]
// Type encoding: @32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105f5b2cc

// -[SCMapboxViewportController mapView:regionWillChangeAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f5b3fc

// -[SCMapboxViewportController mapViewRegionIsChanging:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f5b584

// -[SCMapboxViewportController mapView:regionDidChangeAnimated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f5b588

// -[SCMapboxViewportController mapView:didChangeUserTrackingMode:animated:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105f5b590

// -[SCMapboxViewportController mapView:willSettleOnCoordinateFromPanning:]
// Type encoding: v40@0:8@16{CLLocationCoordinate2D=dd}24
// Implementation: 0x105f5b598

// -[SCMapboxViewportController _clearTargetIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105f5b59c

// -[SCMapboxViewportController _handleTargetChange:layerGate:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x105f5b5b0

// -[SCMapboxViewportController _handleDividingVisibleBoundsIntoSectionsWithVisibleBounds:]
// Type encoding: v48@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x105f5b6f8

// -[SCMapboxViewportController _areVisibleBoundsSectionsCalculatedForBounds:]
// Type encoding: B48@0:8{SCMapCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x105f5b89c

// -[SCMapboxViewportController _publishDidChangeFollowingUserLocationWithAnimatedEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f5ba2c

// -[SCMapboxViewportController _publishDidChangeTargetEvent]
// Type encoding: v16@0:8
// Implementation: 0x105f5ba88

// -[SCMapboxViewportController _publishDidChangeWithoutGesturesEvent]
// Type encoding: v16@0:8
// Implementation: 0x105f5bae4

// -[SCMapboxViewportController _publishViewportIsChangingEvent]
// Type encoding: v16@0:8
// Implementation: 0x105f5bb40

// -[SCMapboxViewportController _publishRegionDidChangeWithAnimatedEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f5bb84

// -[SCMapboxViewportController _publishRegionWillChangeWithAnimatedEvent:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f5bbe0

// -[SCMapboxViewportController _publishWillMoveWithCoordinateEvent:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105f5bc3c

// -[SCMapboxViewportController _publishWillSettleOnCoordinateFromPanningWithCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x105f5bc98

// -[SCMapboxViewportController .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f5bcf4

@end
