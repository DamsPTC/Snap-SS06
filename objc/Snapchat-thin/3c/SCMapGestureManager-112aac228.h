// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapGestureManager
// Superclass: NSObject
// Address: 0x112aac228

@interface SCMapGestureManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: statsProvider; attributes: T@"<SCMapGestureStatsProviding>",R,N
// Property: mapTouchObservable; attributes: T@"SCObservable",R,N
// Property: interactionObservable; attributes: T@"SCObservable",R,N
// Property: mapViewportItemTapObservable; attributes: T@"SCObservable",R,N
// Property: delegate; attributes: T@"<SCMapGestureManagingDelegate>",W,N,V_delegate
// Property: leftAltitudeSliderView; attributes: T@"UIView",R,N
// Property: rightAltitudeSliderView; attributes: T@"UIView",R,N
// Property: automaticTiltValue; attributes: Td,R,N

// -[SCMapGestureManager initWithMapGestures:mapViewport:mapConfiguration:gestureView:mapSdkSession:basemapPersonalization:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x105f1e1bc

// -[SCMapGestureManager _setLongPressListenerOnSdk]
// Type encoding: v16@0:8
// Implementation: 0x105f1e5e4

// -[SCMapGestureManager _setPressDownListenerOnSdk]
// Type encoding: v16@0:8
// Implementation: 0x105f1e80c

// -[SCMapGestureManager _nativeTapShouldBeHandled]
// Type encoding: B16@0:8
// Implementation: 0x105f1eadc

// -[SCMapGestureManager mapTouchObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f1eb5c

// -[SCMapGestureManager mapViewportItemTapObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f1eb84

// -[SCMapGestureManager addTouchResponder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ebac

// -[SCMapGestureManager removeTouchResponder:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ec90

// -[SCMapGestureManager removeAllTouchResponders]
// Type encoding: v16@0:8
// Implementation: 0x105f1ec98

// -[SCMapGestureManager setConflictingDoubleTapZoomGesture:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1eca0

// -[SCMapGestureManager leftAltitudeSliderView]
// Type encoding: @16@0:8
// Implementation: 0x105f1eca8

// -[SCMapGestureManager rightAltitudeSliderView]
// Type encoding: @16@0:8
// Implementation: 0x105f1ecb0

// -[SCMapGestureManager hideSliders]
// Type encoding: v16@0:8
// Implementation: 0x105f1ecb8

// -[SCMapGestureManager setLeftSliderEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f1ece0

// -[SCMapGestureManager setRightSliderEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f1ecec

// -[SCMapGestureManager _setSlider:enabled:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f1ecf8

// -[SCMapGestureManager cancelAllTouchesWithReason:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ed88

// -[SCMapGestureManager statsProvider]
// Type encoding: @16@0:8
// Implementation: 0x105f1ee94

// -[SCMapGestureManager interactionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f1eebc

// -[SCMapGestureManager registerZoomLockTargetProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1eee4

// -[SCMapGestureManager unregisterZoomLockTargetProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ef48

// -[SCMapGestureManager _disableDefaultGestures]
// Type encoding: v16@0:8
// Implementation: 0x105f1ef58

// -[SCMapGestureManager _setupGestureRecognizersWithBasemapPersonalizationConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1efb8

// -[SCMapGestureManager _onDoubleTapZoomRecognized:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1f9ec

// -[SCMapGestureManager _onPan:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1faec

// -[SCMapGestureManager _onZoom:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1fb88

// -[SCMapGestureManager _onTilt:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1fd78

// -[SCMapGestureManager _onGradualZoom:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ff0c

// -[SCMapGestureManager _onAtomicZoom:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ff88

// -[SCMapGestureManager _onRotate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f1ffd8

// -[SCMapGestureManager _cancelTouches:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f20098

// -[SCMapGestureManager gestureRecognizerShouldBegin:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f2015c

// -[SCMapGestureManager gestureRecognizer:shouldReceiveTouch:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f201ec

// -[SCMapGestureManager gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x105f20234

// -[SCMapGestureManager _gestureViewHasActiveGesture]
// Type encoding: B16@0:8
// Implementation: 0x105f2023c

// -[SCMapGestureManager _sendToTouchRepondersIfEnabledWithBlock:]
// Type encoding: B24@0:8@?16
// Implementation: 0x105f20358

// -[SCMapGestureManager isResponderDisabled:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f204e8

// -[SCMapGestureManager _sendTouchDownOnMapAtPointToResponders:featureDescriptors:]
// Type encoding: v40@0:8{CGPoint=dd}16@32
// Implementation: 0x105f204f0

// -[SCMapGestureManager _sendTouchUpOnMapAtPointToResponders:touchWorldLocation:featureDescriptors:]
// Type encoding: v56@0:8{CGPoint=dd}16{CLLocationCoordinate2D=dd}32@48
// Implementation: 0x105f20598

// -[SCMapGestureManager handleMapViewportItemTap]
// Type encoding: v16@0:8
// Implementation: 0x105f206e8

// -[SCMapGestureManager _sendLongPressOnMapAtPointToResponders:featureDescriptors:]
// Type encoding: v40@0:8{CGPoint=dd}16@32
// Implementation: 0x105f2076c

// -[SCMapGestureManager _sendDidPanMapToResponders]
// Type encoding: v16@0:8
// Implementation: 0x105f2081c

// -[SCMapGestureManager _sendDidZoomMapToResponders]
// Type encoding: v16@0:8
// Implementation: 0x105f20930

// -[SCMapGestureManager lockTargetForAltitudeZoom]
// Type encoding: {?={CLLocationCoordinate2D=dd}d}16@0:8
// Implementation: 0x105f20a44

// -[SCMapGestureManager edgeInsetsForAltitudeZoom]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f20c14

// -[SCMapGestureManager handleAltitudeZoomStarted]
// Type encoding: v16@0:8
// Implementation: 0x105f20c74

// -[SCMapGestureManager handleAltitudeZoomEnded]
// Type encoding: v16@0:8
// Implementation: 0x105f20cd0

// -[SCMapGestureManager handleMapAltitudeSliderController:isVisible:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f20cd4

// -[SCMapGestureManager automaticTiltValueForZoom:]
// Type encoding: d24@0:8d16
// Implementation: 0x105f20d88

// -[SCMapGestureManager _onProgrammaticViewportChanges]
// Type encoding: v16@0:8
// Implementation: 0x105f20d90

// -[SCMapGestureManager _unblockAutomaticTiltIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x105f20e38

// -[SCMapGestureManager _automaticTiltForZoom:]
// Type encoding: d24@0:8d16
// Implementation: 0x105f20ea8

// -[SCMapGestureManager _onZoomedToLowerThanDisableTiltAndRotateThreshold]
// Type encoding: v16@0:8
// Implementation: 0x105f20eb0

// -[SCMapGestureManager _onZoomedToHigherThanDisableTiltAndRotateThreshold]
// Type encoding: v16@0:8
// Implementation: 0x105f211a8

// -[SCMapGestureManager _onStoppedChangingViewportWhileLowerThanThreshold]
// Type encoding: v16@0:8
// Implementation: 0x105f21234

// -[SCMapGestureManager _mapIsTiltedOrRotated]
// Type encoding: B16@0:8
// Implementation: 0x105f21340

// -[SCMapGestureManager automaticTiltValue]
// Type encoding: d16@0:8
// Implementation: 0x105f2142c

// -[SCMapGestureManager resetUserInteractionForAutomaticTilt]
// Type encoding: v16@0:8
// Implementation: 0x105f21454

// -[SCMapGestureManager delegate]
// Type encoding: @16@0:8
// Implementation: 0x105f2145c

// -[SCMapGestureManager setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f21474

// -[SCMapGestureManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f21480

@end
