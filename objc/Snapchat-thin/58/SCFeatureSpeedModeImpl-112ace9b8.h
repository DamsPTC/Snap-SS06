// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureSpeedModeImpl
// Superclass: SCFeature
// Address: 0x112ace9b8

@interface SCFeatureSpeedModeImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isActive; attributes: TB,R,N
// Property: speedModeCurrentModeRecordingSpeed; attributes: Td,R,N
// Property: speedModeSelectionInfoObservable; attributes: T@"SCObservable",R,N

// -[SCFeatureSpeedModeImpl initWithApplicationLifecycleEvents:viewControllerLifecycleEvents:cameraUserActionLogger:valdiRuntimeProvider:directorModeActive:featureUpdateEventSubject:cameraConfiguration:cameraDeviceSettingsResolver:cameraUsageTier:appStartExperimentReader:]
// Type encoding: @92@0:8@16@24@32@40B48@52@60@68Q76@84
// Implementation: 0x106193370

// -[SCFeatureSpeedModeImpl shouldBlockTouchAtPoint:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x1061936c8

// -[SCFeatureSpeedModeImpl isCameraModeActivated]
// Type encoding: B16@0:8
// Implementation: 0x106193730

// -[SCFeatureSpeedModeImpl cameraModeType]
// Type encoding: i16@0:8
// Implementation: 0x106193748

// -[SCFeatureSpeedModeImpl didRegisterProviderToken:noFormatFoundError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106193750

// -[SCFeatureSpeedModeImpl didUnregisterProviderToken:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061937f0

// -[SCFeatureSpeedModeImpl featureNameForToken:]
// Type encoding: @24@0:8@16
// Implementation: 0x10619384c

// -[SCFeatureSpeedModeImpl _createSpeedModeWidget]
// Type encoding: @16@0:8
// Implementation: 0x106193858

// -[SCFeatureSpeedModeImpl _didChangeSpeedModeOptionFromWidget:]
// Type encoding: v20@0:8i16
// Implementation: 0x106193a64

// -[SCFeatureSpeedModeImpl _setSpeedModeOption:]
// Type encoding: v20@0:8i16
// Implementation: 0x106193acc

// -[SCFeatureSpeedModeImpl _isSelectedStateChangedWhenGoingFromSpeedMode:toSpeedMode:]
// Type encoding: B24@0:8i16i20
// Implementation: 0x106193b64

// -[SCFeatureSpeedModeImpl _updateToolbarIconsForSpeedMode:animated:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x106193b7c

// -[SCFeatureSpeedModeImpl _updateWidgetForSpeedMode:]
// Type encoding: v20@0:8i16
// Implementation: 0x106193c28

// -[SCFeatureSpeedModeImpl _setSpeedModeActiveForSpeedMode:animateToolbarIcon:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x106193c78

// -[SCFeatureSpeedModeImpl _selectionInfoForSpeedMode:]
// Type encoding: @20@0:8i16
// Implementation: 0x106193f94

// -[SCFeatureSpeedModeImpl _recordingSpeedForSpeedMode:]
// Type encoding: d20@0:8i16
// Implementation: 0x106193fec

// -[SCFeatureSpeedModeImpl _isHighFrameRateEnabledForSpeedMode:]
// Type encoding: B20@0:8i16
// Implementation: 0x10619400c

// -[SCFeatureSpeedModeImpl _isSpeedModeActiveForSpeedMode:]
// Type encoding: B20@0:8i16
// Implementation: 0x10619401c

// -[SCFeatureSpeedModeImpl _finishedSettingSpeedModeActiveForSpeedMode:animateToolbarIcon:]
// Type encoding: v24@0:8i16B20
// Implementation: 0x106194028

// -[SCFeatureSpeedModeImpl _buildFeatureContainerView]
// Type encoding: v16@0:8
// Implementation: 0x106194128

// -[SCFeatureSpeedModeImpl _setTapToDismissGesture]
// Type encoding: v16@0:8
// Implementation: 0x1061946a4

// -[SCFeatureSpeedModeImpl _tapToDismissWidget:]
// Type encoding: v24@0:8@16
// Implementation: 0x106194718

// -[SCFeatureSpeedModeImpl _toolbarItemTapped]
// Type encoding: v16@0:8
// Implementation: 0x1061947e8

// -[SCFeatureSpeedModeImpl _childToolbarItemTapped]
// Type encoding: v16@0:8
// Implementation: 0x106194888

// -[SCFeatureSpeedModeImpl _buildFeatureContainerViewIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106194910

// -[SCFeatureSpeedModeImpl _presentWidgetFromChildToolbarItem:]
// Type encoding: v20@0:8B16
// Implementation: 0x106194928

// -[SCFeatureSpeedModeImpl _dismissWidget]
// Type encoding: v16@0:8
// Implementation: 0x106194a74

// -[SCFeatureSpeedModeImpl _createAndRegisterToolbarItemsIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x106194b44

// -[SCFeatureSpeedModeImpl _createToolbarItems]
// Type encoding: v16@0:8
// Implementation: 0x106194bc8

// -[SCFeatureSpeedModeImpl _handleToolbarItemDidChangeSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x106194fb0

// -[SCFeatureSpeedModeImpl _handleViewWillDisappear]
// Type encoding: v16@0:8
// Implementation: 0x106194fc0

// -[SCFeatureSpeedModeImpl _handleApplicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106194fc4

// -[SCFeatureSpeedModeImpl _handleVideoWillBeginRecording]
// Type encoding: v16@0:8
// Implementation: 0x106194fc8

// -[SCFeatureSpeedModeImpl _handleCameraToolbarExpandCollapse]
// Type encoding: v16@0:8
// Implementation: 0x106194fcc

// -[SCFeatureSpeedModeImpl _handleCameraToolbarItemTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x106194fd0

// -[SCFeatureSpeedModeImpl _logUserTapActionDidStartWithUIItem:]
// Type encoding: v24@0:8q16
// Implementation: 0x106195000

// -[SCFeatureSpeedModeImpl _logUserTapActionDidEndWithUIItem:fromSpeedMode:toSpeedMode:]
// Type encoding: v32@0:8q16i24i28
// Implementation: 0x106195044

// -[SCFeatureSpeedModeImpl _recordingSpeedStringForSpeedMode:]
// Type encoding: @20@0:8i16
// Implementation: 0x106195188

// -[SCFeatureSpeedModeImpl reset]
// Type encoding: v16@0:8
// Implementation: 0x1061951cc

// -[SCFeatureSpeedModeImpl isActive]
// Type encoding: B16@0:8
// Implementation: 0x1061951d4

// -[SCFeatureSpeedModeImpl speedModeCurrentModeRecordingSpeed]
// Type encoding: d16@0:8
// Implementation: 0x1061951e4

// -[SCFeatureSpeedModeImpl speedModeSelectionInfoObservable]
// Type encoding: @16@0:8
// Implementation: 0x1061951f4

// -[SCFeatureSpeedModeImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106195224

// -[SCFeatureSpeedModeImpl configureWithCameraToolbar:]
// Type encoding: v24@0:8@16
// Implementation: 0x10619525c

// -[SCFeatureSpeedModeImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x10619551c

// -[SCFeatureSpeedModeImpl beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106195754

// -[SCFeatureSpeedModeImpl modeEnabledStateChangedObservable]
// Type encoding: @16@0:8
// Implementation: 0x106195944

// -[SCFeatureSpeedModeImpl disableMode]
// Type encoding: v16@0:8
// Implementation: 0x106195974

// -[SCFeatureSpeedModeImpl incompatibleModes]
// Type encoding: @16@0:8
// Implementation: 0x10619597c

// -[SCFeatureSpeedModeImpl modeType]
// Type encoding: i16@0:8
// Implementation: 0x106195988

// -[SCFeatureSpeedModeImpl onTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x106195990

// -[SCFeatureSpeedModeImpl isHidden]
// Type encoding: B16@0:8
// Implementation: 0x1061959f8

// -[SCFeatureSpeedModeImpl secondaryOnTap:]
// Type encoding: v20@0:8i16
// Implementation: 0x106195a00

// -[SCFeatureSpeedModeImpl state]
// Type encoding: i16@0:8
// Implementation: 0x106195a44

// -[SCFeatureSpeedModeImpl secondaryButtonState]
// Type encoding: i16@0:8
// Implementation: 0x106195a5c

// -[SCFeatureSpeedModeImpl toolbarButtonPositionDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x106195a84

// -[SCFeatureSpeedModeImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106195b60

@end
