// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: MGLMapView
// Superclass: UIView
// Address: 0x112b616c8

@interface MGLMapView

// Property: cameraChangeReasonBitmask; attributes: TQ,N,V_cameraChangeReasonBitmask
// Property: scale; attributes: Td,N,V_scale
// Property: angle; attributes: Td,N,V_angle
// Property: pressDownStart; attributes: T{CGPoint=dd},N,V_pressDownStart
// Property: pressDownStartTime; attributes: Td,N,V_pressDownStartTime
// Property: longPressStart; attributes: T{CGPoint=dd},N,V_longPressStart
// Property: dormant; attributes: TB,N,GisDormant,V_dormant
// Property: displayLinkActive; attributes: TB,R,N,GisDisplayLinkActive
// Property: rotationAllowed; attributes: TB,R,N,GisRotationAllowed
// Property: rotationBeforeThresholdMet; attributes: Td,N,V_rotationBeforeThresholdMet
// Property: isZooming; attributes: TB,N,V_isZooming
// Property: isRotating; attributes: TB,N,V_isRotating
// Property: pendingCompletionBlocks; attributes: T@"NSMutableArray",&,N,V_pendingCompletionBlocks
// Property: experimental_enableFrameRateMeasurement; attributes: TB,N,V_experimental_enableFrameRateMeasurement
// Property: averageFrameRate; attributes: Td,N,V_averageFrameRate
// Property: frameTime; attributes: Td,N,V_frameTime
// Property: averageFrameTime; attributes: Td,N,V_averageFrameTime
// Property: terminated; attributes: TB,N,V_terminated
// Property: residualCamera; attributes: T@"MGLMapCamera",C,N,V_residualCamera
// Property: residualDebugMask; attributes: TQ,N,V_residualDebugMask
// Property: residualStyleURL; attributes: T@"NSURL",C,N,V_residualStyleURL
// Property: dragGestureMiddlePoint; attributes: T{CGPoint=dd},N,V_dragGestureMiddlePoint
// Property: displayLinkScreen; attributes: T@"UIScreen",W,N,V_displayLinkScreen
// Property: displayLink; attributes: T@"CADisplayLink",&,N,V_displayLink
// Property: needsDisplayRefresh; attributes: TB,N,V_needsDisplayRefresh
// Property: delegate; attributes: T@"<MGLMapViewDelegate>",W,N,V_delegate
// Property: styleURL; attributes: T@"NSURL",&,N
// Property: preferredFramesPerSecond; attributes: Tq,N,V_preferredFramesPerSecond
// Property: prefetchesTiles; attributes: TB,N
// Property: zoomEnabled; attributes: TB,N,GisZoomEnabled,V_zoomEnabled
// Property: scrollEnabled; attributes: TB,N,GisScrollEnabled,V_scrollEnabled
// Property: rotateEnabled; attributes: TB,N,GisRotateEnabled,V_rotateEnabled
// Property: pitchEnabled; attributes: TB,N,GisPitchEnabled,V_pitchEnabled
// Property: hapticFeedbackEnabled; attributes: TB,N,GisHapticFeedbackEnabled,V_hapticFeedbackEnabled
// Property: decelerationRate; attributes: Td,N,V_decelerationRate
// Property: centerCoordinate; attributes: T{CLLocationCoordinate2D=dd},N
// Property: zoomLevel; attributes: Td,N
// Property: minimumZoomLevel; attributes: Td,N
// Property: maximumZoomLevel; attributes: Td,N
// Property: direction; attributes: Td,N
// Property: minimumPitch; attributes: Td,N
// Property: maximumPitch; attributes: Td,N
// Property: pitch; attributes: Td,N
// Property: visibleCoordinateBounds; attributes: T{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}},N
// Property: camera; attributes: T@"MGLMapCamera",C,N
// Property: contentInset; attributes: T{UIEdgeInsets=dddd},N,V_contentInset
// Property: debugMask; attributes: TQ,N
// Property: mapSdk; attributes: T@"SCNSnapMapsSdkMapSdk",R,W,N,V_mapSdk
// Property: mapSdkSession; attributes: T@"SCNSnapMapsSdkMapSdkSession",R,N
// Property: panGestureRecognizer; attributes: T@"UIPanGestureRecognizer",R,N,V_panGestureRecognizer
// Property: twoFingerPanGestureRecognizer; attributes: T@"UIPanGestureRecognizer",R,N,V_twoFingerPanGestureRecognizer
// Property: pinchGestureRecognizer; attributes: T@"UIPinchGestureRecognizer",R,N,V_pinchGestureRecognizer
// Property: rotationGestureRecognizer; attributes: T@"UIRotationGestureRecognizer",R,N,V_rotationGestureRecognizer
// Property: doubleTapGestureRecognizer; attributes: T@"UITapGestureRecognizer",R,N,V_doubleTapGestureRecognizer
// Property: twoFingerTapGestureRecognizer; attributes: T@"UITapGestureRecognizer",R,N,V_twoFingerTapGestureRecognizer
// Property: rotationThresholdWhileZooming; attributes: Td,N,V_rotationThresholdWhileZooming
// Property: horizontalTiltToleranceDegrees; attributes: Td,N,V_horizontalTiltToleranceDegrees
// Property: tiltForZoom; attributes: T@?,C,N,V_tiltForZoom
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: styleName; attributes: T@"NSString",R,N,V_styleName

// -[MGLMapView setCustomStyleLayersNeedDisplay:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f57150

// -[MGLMapView forceDisplayCustomStyleLayers:]
// Type encoding: v24@0:8q16
// Implementation: 0x105f57154

// -[MGLMapView initWithFrame:styleURL:mapSdk:]
// Type encoding: @64@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56
// Implementation: 0x107250ee4

// -[MGLMapView styleURL]
// Type encoding: @16@0:8
// Implementation: 0x107251104

// -[MGLMapView setStyleURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072511ec

// -[MGLMapView mbglMap]
// Type encoding: ^v16@0:8
// Implementation: 0x107251440

// -[MGLMapView mapSdkSession]
// Type encoding: @16@0:8
// Implementation: 0x107251488

// -[MGLMapView renderer]
// Type encoding: ^v16@0:8
// Implementation: 0x1072514ec

// -[MGLMapView commonInitWithMapSdk:]
// Type encoding: v24@0:8@16
// Implementation: 0x107251500

// -[MGLMapView size]
// Type encoding: {Size=II}16@0:8
// Implementation: 0x1072523b4

// -[MGLMapView reachabilityChanged:]
// Type encoding: v24@0:8@16
// Implementation: 0x107252418

// -[MGLMapView destroyCoreObjects]
// Type encoding: v16@0:8
// Implementation: 0x107252578

// -[MGLMapView dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107252670

// -[MGLMapView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072527b0

// -[MGLMapView didReceiveMemoryWarning]
// Type encoding: v16@0:8
// Implementation: 0x1072527f8

// -[MGLMapView viewImpl]
// Type encoding: ^{MGLMapViewImpl=^^?@}16@0:8
// Implementation: 0x107252920

// -[MGLMapView isOpaque]
// Type encoding: B16@0:8
// Implementation: 0x107252934

// -[MGLMapView setOpaque:]
// Type encoding: v20@0:8B16
// Implementation: 0x107252940

// -[MGLMapView updateViewsPostMapRendering]
// Type encoding: v16@0:8
// Implementation: 0x107252970

// -[MGLMapView renderSync]
// Type encoding: v16@0:8
// Implementation: 0x107252974

// -[MGLMapView layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x107252a2c

// -[MGLMapView setContentInset:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x107252a94

// -[MGLMapView setContentInset:animated:]
// Type encoding: v52@0:8{UIEdgeInsets=dddd}16B48
// Implementation: 0x107252aa0

// -[MGLMapView setContentInset:animated:completionHandler:]
// Type encoding: v60@0:8{UIEdgeInsets=dddd}16B48@?52
// Implementation: 0x107252aa8

// -[MGLMapView contentFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x107252c08

// -[MGLMapView contentCenter]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x107252c60

// -[MGLMapView processPendingBlocks]
// Type encoding: v16@0:8
// Implementation: 0x107252ca8

// -[MGLMapView scheduleTransitionCompletion:]
// Type encoding: B24@0:8@?16
// Implementation: 0x107252dd0

// -[MGLMapView updateFromDisplayLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x107252e50

// -[MGLMapView setNeedsRerender]
// Type encoding: v16@0:8
// Implementation: 0x107253118

// -[MGLMapView willTerminate]
// Type encoding: v16@0:8
// Implementation: 0x10725321c

// -[MGLMapView windowScreen]
// Type encoding: @16@0:8
// Implementation: 0x107253384

// -[MGLMapView isVisible]
// Type encoding: B16@0:8
// Implementation: 0x1072533c8

// -[MGLMapView validateDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107253418

// -[MGLMapView updateDisplayLinkPreferredFramesPerSecond]
// Type encoding: v16@0:8
// Implementation: 0x1072535a4

// -[MGLMapView setPreferredFramesPerSecond:]
// Type encoding: v24@0:8q16
// Implementation: 0x10725365c

// -[MGLMapView updatePresentsWithTransaction]
// Type encoding: v16@0:8
// Implementation: 0x10725367c

// -[MGLMapView willMoveToWindow:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072536c0

// -[MGLMapView didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x107253720

// -[MGLMapView didMoveToSuperview]
// Type encoding: v16@0:8
// Implementation: 0x107253770

// -[MGLMapView stopDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x1072537a4

// -[MGLMapView createDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x1072537f0

// -[MGLMapView destroyDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107253bb4

// -[MGLMapView startDisplayLink]
// Type encoding: v16@0:8
// Implementation: 0x107253c0c

// -[MGLMapView willResignActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x107253db4

// -[MGLMapView didEnterBackground:]
// Type encoding: v24@0:8@16
// Implementation: 0x107253ee4

// -[MGLMapView willEnterForeground:]
// Type encoding: v24@0:8@16
// Implementation: 0x107254040

// -[MGLMapView didBecomeActive:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072540c0

// -[MGLMapView context]
// Type encoding: @16@0:8
// Implementation: 0x1072540ec

// -[MGLMapView supportsBackgroundRendering]
// Type encoding: B16@0:8
// Implementation: 0x107254104

// -[MGLMapView resumeRenderingIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x10725410c

// -[MGLMapView isDisplayLinkActive]
// Type encoding: B16@0:8
// Implementation: 0x107254290

// -[MGLMapView setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x107254308

// -[MGLMapView canBecomeFirstResponder]
// Type encoding: B16@0:8
// Implementation: 0x107254360

// -[MGLMapView touchesBegan:withEvent:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x107254368

// -[MGLMapView notifyGestureDidBegin]
// Type encoding: v16@0:8
// Implementation: 0x1072543f8

// -[MGLMapView notifyGestureDidEndWithDrift:]
// Type encoding: v20@0:8B16
// Implementation: 0x107254450

// -[MGLMapView isSuppressingChangeDelimiters]
// Type encoding: B16@0:8
// Implementation: 0x107254594

// -[MGLMapView _shouldChangeFromCamera:toCamera:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1072545ac

// -[MGLMapView handlePanGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072546cc

// -[MGLMapView handlePinchGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107254ac8

// -[MGLMapView handleRotateGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107255108

// -[MGLMapView handleSdkSingleTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725565c

// -[MGLMapView handleDoubleTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x1072556b0

// -[MGLMapView handleTwoFingerTapGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725590c

// -[MGLMapView handlePressDownGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107255b44

// -[MGLMapView handleLongPressGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107255cd4

// -[MGLMapView _sps_handleTwoFingerDragGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107255d30

// -[MGLMapView handleTwoFingerDragGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x107255f28

// -[MGLMapView cameraByPanningWithTranslation:panGesture:]
// Type encoding: @40@0:8{CGPoint=dd}16@32
// Implementation: 0x1072561f4

// -[MGLMapView cameraByZoomingToZoomLevel:aroundAnchorPoint:]
// Type encoding: @40@0:8d16{CGPoint=dd}24
// Implementation: 0x1072562e4

// -[MGLMapView cameraByRotatingToDirection:aroundAnchorPoint:]
// Type encoding: @40@0:8d16{CGPoint=dd}24
// Implementation: 0x1072563cc

// -[MGLMapView cameraByTiltingToPitch:]
// Type encoding: @24@0:8d16
// Implementation: 0x107256440

// -[MGLMapView anchorPointForGesture:]
// Type encoding: {CGPoint=dd}24@0:8@16
// Implementation: 0x1072564b0

// -[MGLMapView gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x107256538

// -[MGLMapView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x107256610

// -[MGLMapView angleBetweenPoints:endPoint:]
// Type encoding: d48@0:8{CGPoint=dd}16{CGPoint=dd}32
// Implementation: 0x10725672c

// -[MGLMapView debugMask]
// Type encoding: Q16@0:8
// Implementation: 0x107256784

// -[MGLMapView setDebugMask:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1072567b8

// -[MGLMapView resetNorth]
// Type encoding: v16@0:8
// Implementation: 0x1072567f0

// -[MGLMapView resetNorthAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1072568a8

// -[MGLMapView resetPosition]
// Type encoding: v16@0:8
// Implementation: 0x1072568e0

// -[MGLMapView setZoomEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107256a60

// -[MGLMapView setScrollEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107256ac0

// -[MGLMapView setRotateEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107256acc

// -[MGLMapView setPitchEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x107256ad8

// -[MGLMapView setPrefetchesTiles:]
// Type encoding: v20@0:8B16
// Implementation: 0x107256ae4

// -[MGLMapView prefetchesTiles]
// Type encoding: B16@0:8
// Implementation: 0x107256b18

// -[MGLMapView setCenterCoordinate:animated:]
// Type encoding: v36@0:8{CLLocationCoordinate2D=dd}16B32
// Implementation: 0x107256b40

// -[MGLMapView setCenterCoordinate:]
// Type encoding: v32@0:8{CLLocationCoordinate2D=dd}16
// Implementation: 0x107256b80

// -[MGLMapView centerCoordinate]
// Type encoding: {CLLocationCoordinate2D=dd}16@0:8
// Implementation: 0x107256b88

// -[MGLMapView setCenterCoordinate:zoomLevel:animated:]
// Type encoding: v44@0:8{CLLocationCoordinate2D=dd}16d32B40
// Implementation: 0x107256bc0

// -[MGLMapView setCenterCoordinate:zoomLevel:direction:animated:]
// Type encoding: v52@0:8{CLLocationCoordinate2D=dd}16d32d40B48
// Implementation: 0x107256c08

// -[MGLMapView setCenterCoordinate:zoomLevel:direction:animated:completionHandler:]
// Type encoding: v60@0:8{CLLocationCoordinate2D=dd}16d32d40B48@?52
// Implementation: 0x107256c10

// -[MGLMapView _setCenterCoordinate:edgePadding:zoomLevel:direction:duration:animationTimingFunction:completionHandler:]
// Type encoding: v104@0:8{CLLocationCoordinate2D=dd}16{UIEdgeInsets=dddd}32d64d72d80@88@?96
// Implementation: 0x107256cc4

// -[MGLMapView zoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x107257218

// -[MGLMapView setZoomLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725724c

// -[MGLMapView setZoomLevel:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107257254

// -[MGLMapView setCoordinateBounds:]
// Type encoding: v48@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x1072573b0

// -[MGLMapView setMinimumZoomLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x107257438

// -[MGLMapView minimumZoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x107257468

// -[MGLMapView setMaximumZoomLevel:]
// Type encoding: v24@0:8d16
// Implementation: 0x107257488

// -[MGLMapView maximumZoomLevel]
// Type encoding: d16@0:8
// Implementation: 0x1072574b8

// -[MGLMapView minimumPitch]
// Type encoding: d16@0:8
// Implementation: 0x1072574d8

// -[MGLMapView setMinimumPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x1072574f8

// -[MGLMapView maximumPitch]
// Type encoding: d16@0:8
// Implementation: 0x107257528

// -[MGLMapView setMaximumPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x107257548

// -[MGLMapView pitch]
// Type encoding: d16@0:8
// Implementation: 0x107257578

// -[MGLMapView setPitch:]
// Type encoding: v24@0:8d16
// Implementation: 0x1072575a0

// -[MGLMapView setPitch:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x1072575a8

// -[MGLMapView setPitch:andDirection:animated:]
// Type encoding: v36@0:8d16d24B32
// Implementation: 0x107257744

// -[MGLMapView resetPitchAndDirectionAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107257974

// -[MGLMapView visibleCoordinateBounds]
// Type encoding: {MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@0:8
// Implementation: 0x107257980

// -[MGLMapView setVisibleCoordinateBounds:]
// Type encoding: v48@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x1072579a4

// -[MGLMapView setVisibleCoordinateBounds:animated:]
// Type encoding: v52@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16B48
// Implementation: 0x1072579ac

// -[MGLMapView setVisibleCoordinateBounds:edgePadding:animated:]
// Type encoding: v84@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48B80
// Implementation: 0x1072579c4

// -[MGLMapView setVisibleCoordinateBounds:edgePadding:animated:completionHandler:]
// Type encoding: v92@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48B80@?84
// Implementation: 0x1072579cc

// -[MGLMapView setVisibleCoordinates:count:edgePadding:animated:]
// Type encoding: v68@0:8r^{CLLocationCoordinate2D=dd}16Q24{UIEdgeInsets=dddd}32B64
// Implementation: 0x107257abc

// -[MGLMapView setVisibleCoordinates:count:edgePadding:direction:duration:animationTimingFunction:]
// Type encoding: v88@0:8r^{CLLocationCoordinate2D=dd}16Q24{UIEdgeInsets=dddd}32d64d72@80
// Implementation: 0x107257b30

// -[MGLMapView setVisibleCoordinates:count:edgePadding:direction:duration:animationTimingFunction:completionHandler:]
// Type encoding: v96@0:8r^{CLLocationCoordinate2D=dd}16Q24{UIEdgeInsets=dddd}32d64d72@80@?88
// Implementation: 0x107257b38

// -[MGLMapView _setVisibleCoordinates:count:edgePadding:direction:duration:animationTimingFunction:completionHandler:]
// Type encoding: v96@0:8r^{CLLocationCoordinate2D=dd}16Q24{UIEdgeInsets=dddd}32d64d72@80@?88
// Implementation: 0x107257bdc

// -[MGLMapView direction]
// Type encoding: d16@0:8
// Implementation: 0x10725801c

// -[MGLMapView setDirection:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x107258050

// -[MGLMapView _setDirection:animated:]
// Type encoding: v28@0:8d16B24
// Implementation: 0x10725809c

// -[MGLMapView setDirection:]
// Type encoding: v24@0:8d16
// Implementation: 0x107258204

// -[MGLMapView camera]
// Type encoding: @16@0:8
// Implementation: 0x10725820c

// -[MGLMapView setCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x107258270

// -[MGLMapView setCamera:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x107258278

// -[MGLMapView setCamera:withDuration:animationTimingFunction:]
// Type encoding: v40@0:8@16d24@32
// Implementation: 0x107258294

// -[MGLMapView setCamera:withDuration:animationTimingFunction:completionHandler:]
// Type encoding: v48@0:8@16d24@32@?40
// Implementation: 0x10725829c

// -[MGLMapView setCamera:withDuration:animationTimingFunction:edgePadding:completionHandler:]
// Type encoding: v80@0:8@16d24@32{UIEdgeInsets=dddd}40@?72
// Implementation: 0x1072582b0

// -[MGLMapView flyToCamera:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1072585f0

// -[MGLMapView flyToCamera:withDuration:completionHandler:]
// Type encoding: v40@0:8@16d24@?32
// Implementation: 0x1072585f8

// -[MGLMapView flyToCamera:withDuration:peakAltitude:completionHandler:]
// Type encoding: v48@0:8@16d24d32@?40
// Implementation: 0x107258600

// -[MGLMapView _flyToCamera:edgePadding:withDuration:peakAltitude:completionHandler:]
// Type encoding: v80@0:8@16{UIEdgeInsets=dddd}24d56d64@?72
// Implementation: 0x10725866c

// -[MGLMapView cancelTransitions]
// Type encoding: v16@0:8
// Implementation: 0x107258990

// -[MGLMapView cameraThatFitsCoordinateBounds:]
// Type encoding: @48@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16
// Implementation: 0x107258a04

// -[MGLMapView cameraThatFitsCoordinateBounds:edgePadding:]
// Type encoding: @80@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48
// Implementation: 0x107258a18

// -[MGLMapView cameraThatFitsCoordinateBounds:edgePadding:pitch:]
// Type encoding: @88@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16{UIEdgeInsets=dddd}48d80
// Implementation: 0x107258b1c

// -[MGLMapView camera:fittingCoordinateBounds:edgePadding:]
// Type encoding: @88@0:8@16{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}24{UIEdgeInsets=dddd}56
// Implementation: 0x107258c58

// -[MGLMapView cameraForCameraOptions:]
// Type encoding: @24@0:8r^v16
// Implementation: 0x107258e0c

// -[MGLMapView cameraOptionsObjectForAnimatingToCamera:edgePadding:]
// Type encoding: {CameraOptions={optional<mbgl::LatLng>=(?=c{LatLng=dd})B}{optional<mbgl::EdgeInsets>=(?=c{EdgeInsets=dddd})B}{optional<mapbox::geometry::point<double>>=(?=c{point<double>=dd})B}{optional<double>=(?=cd)B}{optional<double>=(?=cd)B}{optional<double>=(?=cd)B}}56@0:8@16{UIEdgeInsets=dddd}24
// Implementation: 0x107258f90

// -[MGLMapView convertPoint:toCoordinateFromView:]
// Type encoding: {CLLocationCoordinate2D=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x1072590e4

// -[MGLMapView convertPoint:toLatLngFromView:]
// Type encoding: {LatLng=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x107259130

// -[MGLMapView convertCoordinate:toPointToView:]
// Type encoding: {CGPoint=dd}40@0:8{CLLocationCoordinate2D=dd}16@32
// Implementation: 0x1072591a8

// -[MGLMapView convertLatLng:toPointToView:]
// Type encoding: {CGPoint=dd}40@0:8{LatLng=dd}16@32
// Implementation: 0x107259204

// -[MGLMapView convertRect:toCoordinateBoundsFromView:]
// Type encoding: {MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x107259268

// -[MGLMapView convertCoordinateBounds:toRectToView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}56@0:8{MGLCoordinateBounds={CLLocationCoordinate2D=dd}{CLLocationCoordinate2D=dd}}16@48
// Implementation: 0x1072592ec

// -[MGLMapView convertLatLngBounds:toRectToView:]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}64@0:8{LatLngBounds={LatLng=dd}{LatLng=dd}B}16@56
// Implementation: 0x10725936c

// -[MGLMapView convertRect:toLatLngBoundsFromView:]
// Type encoding: {LatLngBounds={LatLng=dd}{LatLng=dd}B}56@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48
// Implementation: 0x1072595d0

// -[MGLMapView metersPerPointAtLatitude:]
// Type encoding: d24@0:8d16
// Implementation: 0x10725972c

// -[MGLMapView resetCameraChangeReason]
// Type encoding: v16@0:8
// Implementation: 0x107259760

// -[MGLMapView animateWithDelay:animations:]
// Type encoding: v32@0:8d16@?24
// Implementation: 0x107259768

// -[MGLMapView currentMinimumZoom]
// Type encoding: d16@0:8
// Implementation: 0x1072597b4

// -[MGLMapView isRotationAllowed]
// Type encoding: B16@0:8
// Implementation: 0x1072597e4

// -[MGLMapView unrotateIfNeededForGesture]
// Type encoding: v16@0:8
// Implementation: 0x107259820

// -[MGLMapView unrotateIfNeededAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725989c

// -[MGLMapView cameraWillChangeAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107259a48

// -[MGLMapView cameraIsChanging]
// Type encoding: v16@0:8
// Implementation: 0x107259b30

// -[MGLMapView cameraDidChangeAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x107259bf4

// -[MGLMapView mapViewWillStartLoadingMap]
// Type encoding: v16@0:8
// Implementation: 0x107259d40

// -[MGLMapView mapViewDidFinishLoadingMap]
// Type encoding: v16@0:8
// Implementation: 0x107259dbc

// -[MGLMapView mapViewDidFailLoadingMapWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x107259e38

// -[MGLMapView mapViewWillStartRenderingFrame]
// Type encoding: v16@0:8
// Implementation: 0x107259ec8

// -[MGLMapView mapViewDidFinishRenderingFrameFullyRendered:]
// Type encoding: v20@0:8B16
// Implementation: 0x107259f44

// -[MGLMapView mapViewWillStartRenderingMap]
// Type encoding: v16@0:8
// Implementation: 0x107259fcc

// -[MGLMapView mapViewDidFinishRenderingMapFullyRendered:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a048

// -[MGLMapView mapViewDidBecomeIdle]
// Type encoding: v16@0:8
// Implementation: 0x10725a0d4

// -[MGLMapView mapViewDidFinishLoadingStyle]
// Type encoding: v16@0:8
// Implementation: 0x10725a150

// -[MGLMapView sourceDidChangeWithName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a2c8

// -[MGLMapView didFailToLoadImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a2cc

// -[MGLMapView shouldRemoveStyleImage:]
// Type encoding: B24@0:8@16
// Implementation: 0x10725a3e4

// -[MGLMapView imageForName:]
// Type encoding: @24@0:8@16
// Implementation: 0x10725a478

// -[MGLMapView styleName]
// Type encoding: @16@0:8
// Implementation: 0x10725a56c

// -[MGLMapView delegate]
// Type encoding: @16@0:8
// Implementation: 0x10725a578

// -[MGLMapView preferredFramesPerSecond]
// Type encoding: q16@0:8
// Implementation: 0x10725a594

// -[MGLMapView isZoomEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10725a5a0

// -[MGLMapView isScrollEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10725a5ac

// -[MGLMapView isRotateEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10725a5b8

// -[MGLMapView isPitchEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10725a5c4

// -[MGLMapView isHapticFeedbackEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10725a5d0

// -[MGLMapView setHapticFeedbackEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a5dc

// -[MGLMapView decelerationRate]
// Type encoding: d16@0:8
// Implementation: 0x10725a5e8

// -[MGLMapView setDecelerationRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a5f4

// -[MGLMapView contentInset]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x10725a600

// -[MGLMapView mapSdk]
// Type encoding: @16@0:8
// Implementation: 0x10725a618

// -[MGLMapView panGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10725a634

// -[MGLMapView twoFingerPanGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10725a640

// -[MGLMapView pinchGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10725a64c

// -[MGLMapView rotationGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10725a658

// -[MGLMapView doubleTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10725a664

// -[MGLMapView twoFingerTapGestureRecognizer]
// Type encoding: @16@0:8
// Implementation: 0x10725a670

// -[MGLMapView rotationThresholdWhileZooming]
// Type encoding: d16@0:8
// Implementation: 0x10725a67c

// -[MGLMapView setRotationThresholdWhileZooming:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a688

// -[MGLMapView horizontalTiltToleranceDegrees]
// Type encoding: d16@0:8
// Implementation: 0x10725a694

// -[MGLMapView setHorizontalTiltToleranceDegrees:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a6a0

// -[MGLMapView tiltForZoom]
// Type encoding: @?16@0:8
// Implementation: 0x10725a6ac

// -[MGLMapView setTiltForZoom:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10725a6b8

// -[MGLMapView cameraChangeReasonBitmask]
// Type encoding: Q16@0:8
// Implementation: 0x10725a6c4

// -[MGLMapView setCameraChangeReasonBitmask:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10725a6d0

// -[MGLMapView scale]
// Type encoding: d16@0:8
// Implementation: 0x10725a6e0

// -[MGLMapView setScale:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a6ec

// -[MGLMapView angle]
// Type encoding: d16@0:8
// Implementation: 0x10725a6f8

// -[MGLMapView setAngle:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a704

// -[MGLMapView pressDownStart]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10725a710

// -[MGLMapView setPressDownStart:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10725a71c

// -[MGLMapView pressDownStartTime]
// Type encoding: d16@0:8
// Implementation: 0x10725a728

// -[MGLMapView setPressDownStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a734

// -[MGLMapView longPressStart]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10725a740

// -[MGLMapView setLongPressStart:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10725a74c

// -[MGLMapView isDormant]
// Type encoding: B16@0:8
// Implementation: 0x10725a758

// -[MGLMapView setDormant:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a764

// -[MGLMapView rotationBeforeThresholdMet]
// Type encoding: d16@0:8
// Implementation: 0x10725a770

// -[MGLMapView setRotationBeforeThresholdMet:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a77c

// -[MGLMapView isZooming]
// Type encoding: B16@0:8
// Implementation: 0x10725a788

// -[MGLMapView setIsZooming:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a794

// -[MGLMapView isRotating]
// Type encoding: B16@0:8
// Implementation: 0x10725a7a0

// -[MGLMapView setIsRotating:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a7ac

// -[MGLMapView pendingCompletionBlocks]
// Type encoding: @16@0:8
// Implementation: 0x10725a7b8

// -[MGLMapView setPendingCompletionBlocks:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a7c4

// -[MGLMapView experimental_enableFrameRateMeasurement]
// Type encoding: B16@0:8
// Implementation: 0x10725a7f8

// -[MGLMapView setExperimental_enableFrameRateMeasurement:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a804

// -[MGLMapView averageFrameRate]
// Type encoding: d16@0:8
// Implementation: 0x10725a810

// -[MGLMapView setAverageFrameRate:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a81c

// -[MGLMapView frameTime]
// Type encoding: d16@0:8
// Implementation: 0x10725a828

// -[MGLMapView setFrameTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a834

// -[MGLMapView averageFrameTime]
// Type encoding: d16@0:8
// Implementation: 0x10725a840

// -[MGLMapView setAverageFrameTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10725a84c

// -[MGLMapView terminated]
// Type encoding: B16@0:8
// Implementation: 0x10725a858

// -[MGLMapView setTerminated:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a864

// -[MGLMapView residualCamera]
// Type encoding: @16@0:8
// Implementation: 0x10725a870

// -[MGLMapView setResidualCamera:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a87c

// -[MGLMapView residualDebugMask]
// Type encoding: Q16@0:8
// Implementation: 0x10725a888

// -[MGLMapView setResidualDebugMask:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10725a894

// -[MGLMapView residualStyleURL]
// Type encoding: @16@0:8
// Implementation: 0x10725a8a4

// -[MGLMapView setResidualStyleURL:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a8b0

// -[MGLMapView dragGestureMiddlePoint]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10725a8bc

// -[MGLMapView setDragGestureMiddlePoint:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x10725a8c8

// -[MGLMapView displayLinkScreen]
// Type encoding: @16@0:8
// Implementation: 0x10725a8d4

// -[MGLMapView setDisplayLinkScreen:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a8f0

// -[MGLMapView displayLink]
// Type encoding: @16@0:8
// Implementation: 0x10725a904

// -[MGLMapView setDisplayLink:]
// Type encoding: v24@0:8@16
// Implementation: 0x10725a910

// -[MGLMapView needsDisplayRefresh]
// Type encoding: B16@0:8
// Implementation: 0x10725a944

// -[MGLMapView setNeedsDisplayRefresh:]
// Type encoding: v20@0:8B16
// Implementation: 0x10725a950

// -[MGLMapView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10725a95c

// -[MGLMapView .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x10725aa68

// +[MGLMapView requiresConstraintBasedLayout]
// Type encoding: B16@0:8
// Implementation: 0x10725292c

@end
