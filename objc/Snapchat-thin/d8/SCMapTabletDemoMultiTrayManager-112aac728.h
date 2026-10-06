// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMapTabletDemoMultiTrayManager
// Superclass: NSObject
// Address: 0x112aac728

@interface SCMapTabletDemoMultiTrayManager

// Property: trayHostFrameSize; attributes: T{CGSize=dd},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: mapCameraInsetsForSinglePoint; attributes: T{UIEdgeInsets=dddd},R,N
// Property: mapCameraInsetsForHalfTrayPosition; attributes: T{UIEdgeInsets=dddd},R,N
// Property: mapCameraInsetsForMeTrayPosition; attributes: T{UIEdgeInsets=dddd},R,N
// Property: mapCameraInsetsForCoordinateBounds; attributes: T{UIEdgeInsets=dddd},R,N

// -[SCMapTabletDemoMultiTrayManager initWithMapView:sdkSession:gestureManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105f2ca38

// -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForSinglePoint]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f2cc70

// -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForCoordinateBounds]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f2cc84

// -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForMeTrayPosition]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f2cc98

// -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForHalfTrayPosition]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105f2ccac

// -[SCMapTabletDemoMultiTrayManager mapCameraInsetsForTrayWithHeightRatio:]
// Type encoding: {UIEdgeInsets=dddd}24@0:8d16
// Implementation: 0x105f2ccc0

// -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:]
// Type encoding: @60@0:8@16@24B32Q36d44d52
// Implementation: 0x105f2ccd4

// -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @92@0:8@16@24B32Q36d44d52Q60@68@?76@?84
// Implementation: 0x105f2ccfc

// -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @92@0:8@16@24B32Q36d44d52Q60@68@?76@?84
// Implementation: 0x105f2cd40

// -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:actionBarDataSource:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @100@0:8@16@24@32B40Q44d52d60Q68@76@?84@?92
// Implementation: 0x105f2cd88

// -[SCMapTabletDemoMultiTrayManager createTrayWithViewController:accessoryViewController:configuration:isModal:initialPosition:collapsedHeight:halfTrayHeightRatioOverride:halfTrayHeight:desiredPositionOnMapInteraction:chromeConfiguration:mapCameraProvider:closeButtonCompletion:]
// Type encoding: @108@0:8@16@24@32B40Q44d52d60d68Q76@84@?92@?100
// Implementation: 0x105f2cec4

// -[SCMapTabletDemoMultiTrayManager activeTrayFeatureObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f2d23c

// -[SCMapTabletDemoMultiTrayManager currentActiveTrayFeature]
// Type encoding: @16@0:8
// Implementation: 0x105f2d264

// -[SCMapTabletDemoMultiTrayManager parentViewControllerDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x105f2d340

// -[SCMapTabletDemoMultiTrayManager parentViewLayoutDidChange]
// Type encoding: v16@0:8
// Implementation: 0x105f2d344

// -[SCMapTabletDemoMultiTrayManager removeAllTraysAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105f2d348

// -[SCMapTabletDemoMultiTrayManager removeTray:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2d390

// -[SCMapTabletDemoMultiTrayManager removeTray:animated:interactionMethod:]
// Type encoding: v36@0:8@16B24Q28
// Implementation: 0x105f2d398

// -[SCMapTabletDemoMultiTrayManager removeTraysWithLifecycles:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2d4cc

// -[SCMapTabletDemoMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:]
// Type encoding: v32@0:8@16B24B28
// Implementation: 0x105f2d6fc

// -[SCMapTabletDemoMultiTrayManager _hideTrayWithState:animated:destroyOnHidden:interactionMethod:]
// Type encoding: v40@0:8@16B24B28Q32
// Implementation: 0x105f2d704

// -[SCMapTabletDemoMultiTrayManager resizeTray:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2d7a4

// -[SCMapTabletDemoMultiTrayManager restoreTray:animated:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x105f2d7a8

// -[SCMapTabletDemoMultiTrayManager setParentViewController:defaultCameraProvider:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105f2d7ac

// -[SCMapTabletDemoMultiTrayManager setTrayPosition:position:animated:]
// Type encoding: v36@0:8@16Q24B32
// Implementation: 0x105f2d7b8

// -[SCMapTabletDemoMultiTrayManager addFloatingAccessoryView:position:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f2d7bc

// -[SCMapTabletDemoMultiTrayManager removeFloatingAccessoryView]
// Type encoding: v16@0:8
// Implementation: 0x105f2d7c0

// -[SCMapTabletDemoMultiTrayManager visibleTrayAccessoryHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2d7c4

// -[SCMapTabletDemoMultiTrayManager visibleTrayHeight]
// Type encoding: d16@0:8
// Implementation: 0x105f2d7cc

// -[SCMapTabletDemoMultiTrayManager trayHeightObservable]
// Type encoding: @16@0:8
// Implementation: 0x105f2d7d4

// -[SCMapTabletDemoMultiTrayManager trayHostFrameSize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x105f2d7fc

// -[SCMapTabletDemoMultiTrayManager _removeState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2d808

// -[SCMapTabletDemoMultiTrayManager _hideOtherTraysForNewState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2d9c4

// -[SCMapTabletDemoMultiTrayManager _applyCameraForState:context:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x105f2dac0

// -[SCMapTabletDemoMultiTrayManager _handleTrayInteraction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2dbac

// -[SCMapTabletDemoMultiTrayManager _restoreTrayWithState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2de1c

// -[SCMapTabletDemoMultiTrayManager _isMapCloudFooterTray:]
// Type encoding: B24@0:8@16
// Implementation: 0x105f2de94

// -[SCMapTabletDemoMultiTrayManager _handleAllTraysClosedWithLastState:]
// Type encoding: v24@0:8@16
// Implementation: 0x105f2df18

// -[SCMapTabletDemoMultiTrayManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105f2dfa0

@end
