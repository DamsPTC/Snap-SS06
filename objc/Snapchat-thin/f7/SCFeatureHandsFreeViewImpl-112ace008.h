// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureHandsFreeViewImpl
// Superclass: UIView
// Address: 0x112ace008

@interface SCFeatureHandsFreeViewImpl

// Property: hitboxView; attributes: T@"UIView",&,N,V_hitboxView
// Property: lockIconView; attributes: T@"UIView",&,N,V_lockIconView
// Property: lockIcon; attributes: T@"UIImageView",&,N,V_lockIcon
// Property: lockBackdropGradient; attributes: T@"SCGradientView",&,N,V_lockBackdropGradient
// Property: cancelButton; attributes: T@"SCGrowingButton",&,N,V_cancelButton
// Property: lockIconDefaultPosition; attributes: T{CGPoint=dd},R,N
// Property: gestureHorizontalPanDistance; attributes: Td,R,N
// Property: spacingBetweenCameraAndLockIcon; attributes: Td,R,N
// Property: state; attributes: TQ,N,V_state
// Property: handsFreeEnabled; attributes: TB,N,V_handsFreeEnabled
// Property: cancelBlock; attributes: T@?,C,N,V_cancelBlock
// Property: videoCaptureConfiguration; attributes: T@"SCVideoCaptureConfiguration",C,N,V_videoCaptureConfiguration
// Property: handsFreeView; attributes: T@"UIView",R,W,N,V_handsFreeView
// Property: gestureStartPosition; attributes: T{CGPoint=dd},N,V_gestureStartPosition
// Property: gestureCurrentPosition; attributes: T{CGPoint=dd},N,V_gestureCurrentPosition
// Property: cameraTimerFrame; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: handsFreeTooltipHostBounds; attributes: T{CGRect={CGPoint=dd}{CGSize=dd}},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCFeatureHandsFreeViewImpl initWithContainerView:featureLayout:userSession:blizzardLogger:featureSettingsService:simpleFeatureGatingConfig:verticalToolbarConfiguration:handsFreeRecordingStateSubject:scopedCameraType:cameraModeActivationController:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72Q80@88
// Implementation: 0x10616f150

// -[SCFeatureHandsFreeViewImpl initWithContainerView:featureLayout:userSession:blizzardLogger:featureSettingsService:simpleFeatureGatingConfig:verticalToolbarConfiguration:handsFreeRecordingStateSubject:scopedCameraType:cameraModeActivationController:usesRuntimeViewfinderGeometry:]
// Type encoding: @100@0:8@16@24@32@40@48@56@64@72Q80@88B96
// Implementation: 0x10616f280

// -[SCFeatureHandsFreeViewImpl layoutSubviews]
// Type encoding: v16@0:8
// Implementation: 0x10616f618

// -[SCFeatureHandsFreeViewImpl shouldActivateHandsFree]
// Type encoding: B16@0:8
// Implementation: 0x10616f794

// -[SCFeatureHandsFreeViewImpl pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x10616f80c

// -[SCFeatureHandsFreeViewImpl isPointInHitBox:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10616f8a4

// -[SCFeatureHandsFreeViewImpl isPointInCaptureButton:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10616f8fc

// -[SCFeatureHandsFreeViewImpl isPointInCancelButton:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x10616f928

// -[SCFeatureHandsFreeViewImpl spacingBetweenCameraAndLockIcon]
// Type encoding: d16@0:8
// Implementation: 0x10616f9f0

// -[SCFeatureHandsFreeViewImpl gestureHorizontalPanDistance]
// Type encoding: d16@0:8
// Implementation: 0x10616f9f8

// -[SCFeatureHandsFreeViewImpl lockIconDefaultPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10616fa34

// -[SCFeatureHandsFreeViewImpl lockIconView]
// Type encoding: @16@0:8
// Implementation: 0x10616fa9c

// -[SCFeatureHandsFreeViewImpl lockBackdropGradient]
// Type encoding: @16@0:8
// Implementation: 0x10616fb8c

// -[SCFeatureHandsFreeViewImpl hitboxView]
// Type encoding: @16@0:8
// Implementation: 0x10616fdc0

// -[SCFeatureHandsFreeViewImpl lockIcon]
// Type encoding: @16@0:8
// Implementation: 0x10616fe50

// -[SCFeatureHandsFreeViewImpl cancelButton]
// Type encoding: @16@0:8
// Implementation: 0x106170108

// -[SCFeatureHandsFreeViewImpl setState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106170240

// -[SCFeatureHandsFreeViewImpl _ensureHapticsAllowedDuringRecording]
// Type encoding: v16@0:8
// Implementation: 0x106170a98

// -[SCFeatureHandsFreeViewImpl setGestureCurrentPosition:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106170af4

// -[SCFeatureHandsFreeViewImpl setVideoCaptureConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x106170c6c

// -[SCFeatureHandsFreeViewImpl _isPointWithinInterestRange:]
// Type encoding: B32@0:8{CGPoint=dd}16
// Implementation: 0x106170cd4

// -[SCFeatureHandsFreeViewImpl _setLockIconToSelectedState:]
// Type encoding: v20@0:8B16
// Implementation: 0x106170d2c

// -[SCFeatureHandsFreeViewImpl _cancelTapped]
// Type encoding: v16@0:8
// Implementation: 0x106170d3c

// -[SCFeatureHandsFreeViewImpl _layoutCameraLockIcon]
// Type encoding: v16@0:8
// Implementation: 0x106170e14

// -[SCFeatureHandsFreeViewImpl _isLockIconVisible]
// Type encoding: B16@0:8
// Implementation: 0x106171054

// -[SCFeatureHandsFreeViewImpl _handsFreeStopButtonColor]
// Type encoding: @16@0:8
// Implementation: 0x106171114

// -[SCFeatureHandsFreeViewImpl _ghostAllowedForCurrentState]
// Type encoding: B16@0:8
// Implementation: 0x10617117c

// -[SCFeatureHandsFreeViewImpl _ensureHoverTransferCircle]
// Type encoding: @16@0:8
// Implementation: 0x1061711e4

// -[SCFeatureHandsFreeViewImpl _removeHoverTransferCircle]
// Type encoding: v16@0:8
// Implementation: 0x1061712f8

// -[SCFeatureHandsFreeViewImpl _animateGhostToLock:]
// Type encoding: v20@0:8B16
// Implementation: 0x106171370

// -[SCFeatureHandsFreeViewImpl _syncHoverGhostForCurrentState]
// Type encoding: v16@0:8
// Implementation: 0x106171c8c

// -[SCFeatureHandsFreeViewImpl _scheduleSyncHoverGhost]
// Type encoding: v16@0:8
// Implementation: 0x106171d90

// -[SCFeatureHandsFreeViewImpl _finishGhostForHandsFreeBegan]
// Type encoding: v16@0:8
// Implementation: 0x106171e94

// -[SCFeatureHandsFreeViewImpl _ensureLockHoverCircle]
// Type encoding: @16@0:8
// Implementation: 0x106171f74

// -[SCFeatureHandsFreeViewImpl _showLockHoverCircleAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x106172124

// -[SCFeatureHandsFreeViewImpl _hideLockHoverCircleAnimated:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061721ec

// -[SCFeatureHandsFreeViewImpl shouldDisplayHandsFreeTooltip]
// Type encoding: B16@0:8
// Implementation: 0x1061722dc

// -[SCFeatureHandsFreeViewImpl isHandsFreeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106172304

// -[SCFeatureHandsFreeViewImpl cameraTimerFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106172308

// -[SCFeatureHandsFreeViewImpl handsFreeTooltipHostBounds]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x106172384

// -[SCFeatureHandsFreeViewImpl tooltipTextForTriggeringHandsFree]
// Type encoding: @16@0:8
// Implementation: 0x106172388

// -[SCFeatureHandsFreeViewImpl accessibilityElements]
// Type encoding: @16@0:8
// Implementation: 0x1061723cc

// -[SCFeatureHandsFreeViewImpl isAccessibilityElement]
// Type encoding: B16@0:8
// Implementation: 0x1061724c8

// -[SCFeatureHandsFreeViewImpl cancelBlock]
// Type encoding: @?16@0:8
// Implementation: 0x1061724d0

// -[SCFeatureHandsFreeViewImpl setCancelBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1061724e0

// -[SCFeatureHandsFreeViewImpl handsFreeView]
// Type encoding: @16@0:8
// Implementation: 0x1061724ec

// -[SCFeatureHandsFreeViewImpl state]
// Type encoding: Q16@0:8
// Implementation: 0x10617250c

// -[SCFeatureHandsFreeViewImpl handsFreeEnabled]
// Type encoding: B16@0:8
// Implementation: 0x10617251c

// -[SCFeatureHandsFreeViewImpl setHandsFreeEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x10617252c

// -[SCFeatureHandsFreeViewImpl videoCaptureConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x10617253c

// -[SCFeatureHandsFreeViewImpl gestureStartPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x10617254c

// -[SCFeatureHandsFreeViewImpl setGestureStartPosition:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x106172560

// -[SCFeatureHandsFreeViewImpl gestureCurrentPosition]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x106172574

// -[SCFeatureHandsFreeViewImpl setHitboxView:]
// Type encoding: v24@0:8@16
// Implementation: 0x106172588

// -[SCFeatureHandsFreeViewImpl setLockIconView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061725c8

// -[SCFeatureHandsFreeViewImpl setLockIcon:]
// Type encoding: v24@0:8@16
// Implementation: 0x106172608

// -[SCFeatureHandsFreeViewImpl setLockBackdropGradient:]
// Type encoding: v24@0:8@16
// Implementation: 0x106172648

// -[SCFeatureHandsFreeViewImpl setCancelButton:]
// Type encoding: v24@0:8@16
// Implementation: 0x106172688

// -[SCFeatureHandsFreeViewImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061726c8

@end
