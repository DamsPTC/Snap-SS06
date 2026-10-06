// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapMultiTrayManager
// Superclass: NSObject
// Address: 0x112aac688

@interface SCMapMultiTrayManager

// Property: trayHostFrameSize; attributes: T{CGSize=dd},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: mapCameraInsetsForSinglePoint; attributes: T{UIEdgeInsets=dddd},R,N
// Property: mapCameraInsetsForHalfTrayPosition; attributes: T{UIEdgeInsets=dddd},R,N
// Property: mapCameraInsetsForMeTrayPosition; attributes: T{UIEdgeInsets=dddd},R,N
// Property: mapCameraInsetsForCoordinateBounds; attributes: T{UIEdgeInsets=dddd},R,N

// -[SCMapMultiTrayManager initWithMapView:mapBrowsingContextManager:sdkSession:gestureManager:mapChromeV2Provider:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x105f29504

// -[SCMapMultiTrayManager mapCameraInsetsForSinglePoint]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f29704

// -[SCMapMultiTrayManager mapCameraInsetsForHalfTrayPosition]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f297bc

// -[SCMapMultiTrayManager mapCameraInsetsForMeTrayPosition]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f29874

// -[SCMapMultiTrayManager mapCameraInsetsForCoordinateBounds]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f2992c

// -[SCMapMultiTrayManager mapCameraInsetsForTrayWithHeightRatio:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8d16
// Implementation: 0x105f299f8

// -[SCMapMultiTrayManager setParentViewController:defaultCameraProvider:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f29aac

// -[SCMapMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:]
// Type encoding: @60@0:8@16@24B32Q36d44d52
// Implementation: 0x105f29b38

// -[SCMapMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @92@0:8@16@24B32Q36d44d52Q60@68@?76@?84
// Implementation: 0x105f29b60

// -[SCMapMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @92@0:8@16@24B32Q36d44d52Q60@68@?76@?84
// Implementation: 0x105f29ba4

// -[SCMapMultiTrayManager createTrayWithViewController:accessoryViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @108@0:8@16@24@32B40Q44d52d60d68Q76@84@?92@?100
// Implementation: 0x105f29bec

// -[SCMapMultiTrayManager createTrayWithViewController:actionBarDataSource:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @100@0:8@16@24@32B40Q44d52d60Q68@76@?84@?92
// Implementation: 0x105f29fbc

// -[SCMapMultiTrayManager activeTrayFeatureObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f2a0f8

// -[SCMapMultiTrayManager currentActiveTrayFeature]
// Type encoding: @16@0:8
// Implementation: 0x105f2a120

// -[SCMapMultiTrayManager restoreTray:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2a1fc

// -[SCMapMultiTrayManager removeTray:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2a300

// -[SCMapMultiTrayManager removeTray:animated:interactionMethod:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x105f2a308

// -[SCMapMultiTrayManager removeAllTraysAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f2a488

// -[SCMapMultiTrayManager removeTraysWithLifecycles:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2a4d0

// -[SCMapMultiTrayManager setTrayPosition:position:animated:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105f2a6e0

// -[SCMapMultiTrayManager setTrayPosition:position:animated:interactionMethod:]
// Type encoding: v44@0:8@16Q24B32Q36
// Implementation: 0x105f2a7f0

// -[SCMapMultiTrayManager resizeTray:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2a904

// -[SCMapMultiTrayManager visibleTrayHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2aa00

// -[SCMapMultiTrayManager visibleTrayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2aa7c

// -[SCMapMultiTrayManager addFloatingAccessoryView:position:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f2aac4

// -[SCMapMultiTrayManager removeFloatingAccessoryView]
// Type encoding: v16@0:8
// Implementation: 0x105f2ad08

// -[SCMapMultiTrayManager _currentTrayController]
// Type encoding: @16@0:8
// Implementation: 0x105f2ad44

// -[SCMapMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105f2ad8c

// -[SCMapMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:interactionMethod:]
// Type encoding: v40@0:8@16B24B28Q32
// Implementation: 0x105f2ad94

// -[SCMapMultiTrayManager _restoreTrayWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2ae94

// -[SCMapMultiTrayManager _removeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2af18

// -[SCMapMultiTrayManager _applyCameraForState:context:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f2b0d4

// -[SCMapMultiTrayManager _applyChromeConfigurationForState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2b1c0

// -[SCMapMultiTrayManager _handleAllTraysClosedWithLastState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2b3e8

// -[SCMapMultiTrayManager _resetChromeToDefaults]
// Type encoding: v16@0:8
// Implementation: 0x105f2b524

// -[SCMapMultiTrayManager _resetBrowsingState]
// Type encoding: v16@0:8
// Implementation: 0x105f2b56c

// -[SCMapMultiTrayManager _hideOtherTraysForNewState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2b574

// -[SCMapMultiTrayManager _handleTrayInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2b668

// -[SCMapMultiTrayManager _setupChromeUpdateObservations]
// Type encoding: v16@0:8
// Implementation: 0x105f2b968

// -[SCMapMultiTrayManager _setupMapInteractionObservationsWithGestureManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2ba80

// -[SCMapMultiTrayManager _handleMapInteraction:state:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105f2bc14

// -[SCMapMultiTrayManager _updateTrayPositionIfNecessary:interactionMethod:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f2bd14

// -[SCMapMultiTrayManager parentViewControllerDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x105f2bd98

// -[SCMapMultiTrayManager parentViewLayoutDidChange]
// Type encoding: v16@0:8
// Implementation: 0x105f2bd9c

// -[SCMapMultiTrayManager _reanchorVisibleTray]
// Type encoding: v16@0:8
// Implementation: 0x105f2bddc

// -[SCMapMultiTrayManager _updateSDKEdgeInsets]
// Type encoding: v16@0:8
// Implementation: 0x105f2be44

// -[SCMapMultiTrayManager trayHeightObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f2c184

// -[SCMapMultiTrayManager trayHostFrameSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105f2c1ac

// -[SCMapMultiTrayManager trayFullishOffsetFromTopForTrayController:]
// Type encoding: d24@0:8@16
// Implementation: 0x105f2c27c

// -[SCMapMultiTrayManager trayHalfTrayHeightRatioForTrayController:]
// Type encoding: d24@0:8@16
// Implementation: 0x105f2c288

// -[SCMapMultiTrayManager mapTrayController:didUpdateHeight:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x105f2c31c

// -[SCMapMultiTrayManager trayCollapsedHeightForTrayController:]
// Type encoding: d24@0:8@16
// Implementation: 0x105f2c448

// -[SCMapMultiTrayManager handleModalTrayScrimInteraction:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f2c4a4

// -[SCMapMultiTrayManager _updateSDKEdgeInsetsDebugView:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x105f2c4f4

// -[SCMapMultiTrayManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f2c4f8

@end
