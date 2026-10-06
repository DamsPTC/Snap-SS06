// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCameraToolbarButtonImpl
// Superclass: SCGrowingButton
// Address: 0x112ad25b8

@interface SCCameraToolbarButtonImpl

// Property: titleLabel; attributes: T@"SIGLabel",&,N,V_titleLabel
// Property: newBadgeView; attributes: T@"SIGBadgeView",&,N,V_newBadgeView
// Property: lableView; attributes: T@"UIView",&,N,V_lableView
// Property: hintTimer; attributes: T@"NSTimer",&,N,V_hintTimer
// Property: tooltipTimer; attributes: T@"NSTimer",&,N,V_tooltipTimer
// Property: labelTimer; attributes: T@"NSTimer",&,N,V_labelTimer
// Property: tooltipBalloon; attributes: T@"SCPreviewTooltipBalloon",&,N,V_tooltipBalloon
// Property: labelsConstraints; attributes: T@"NSMutableArray",&,N,V_labelsConstraints
// Property: buttonLifecycle; attributes: T@"SCDisposableObserverLifecycle",&,N,V_buttonLifecycle
// Property: cameraUserActionLogger; attributes: T@"<SCFeatureCameraUserActionLogging>",W,N,V_cameraUserActionLogger
// Property: appearanceType; attributes: Tq,N,V_appearanceType
// Property: loadingAnimationLayer; attributes: T@"CALayer",&,N,V_loadingAnimationLayer
// Property: loadingAnimationOuterCircle; attributes: T@"CAShapeLayer",&,N,V_loadingAnimationOuterCircle
// Property: loadingAnimationInnerCircle; attributes: T@"CAShapeLayer",&,N,V_loadingAnimationInnerCircle
// Property: isDisappearing; attributes: TB,N,V_isDisappearing
// Property: customTapAreaInsets; attributes: T{UIEdgeInsets=dddd},N,V_customTapAreaInsets
// Property: providesHapticFeedback; attributes: TB,N,GdoesProvideHapticFeedback,V_providesHapticFeedback
// Property: selected; attributes: TB,N,V_selected
// Property: toolbarItem; attributes: T@"<SCCameraToolbarItem>",R,N,V_toolbarItem
// Property: delegate; attributes: T@"<SCCameraToolbarButtonDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCameraToolbarButtonImpl initWithToolbarItem:cameraUserActionLogger:appearanceType:iconStyle:sigPerfFixesEnabled:circumstanceEngine:]
// Type encoding: @60@0:8@16@24q32Q40B48@52
// Implementation: 0x100894158

// -[SCCameraToolbarButtonImpl _removeSelectedBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x1061e13e0

// -[SCCameraToolbarButtonImpl _setupSelectedBackgroundView]
// Type encoding: v16@0:8
// Implementation: 0x1061e1428

// -[SCCameraToolbarButtonImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1061e178c

// -[SCCameraToolbarButtonImpl setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008b48e4

// -[SCCameraToolbarButtonImpl setAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x1008ad860

// -[SCCameraToolbarButtonImpl setTitleVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008a08f4

// -[SCCameraToolbarButtonImpl setToolbarVisibiltyStatus:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1061e1824

// -[SCCameraToolbarButtonImpl setTitleAndNewBadgeVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e1834

// -[SCCameraToolbarButtonImpl setNewBadgeVisible:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e1890

// -[SCCameraToolbarButtonImpl forceHideTitleAndNewBadge]
// Type encoding: v16@0:8
// Implementation: 0x1061e18f4

// -[SCCameraToolbarButtonImpl restoreTitleAndNewBadgeVisibility]
// Type encoding: v16@0:8
// Implementation: 0x1061e1948

// -[SCCameraToolbarButtonImpl isNewBadgeVisible]
// Type encoding: B16@0:8
// Implementation: 0x1061e199c

// -[SCCameraToolbarButtonImpl initialLayoutDidFinish]
// Type encoding: v16@0:8
// Implementation: 0x1061e19c4

// -[SCCameraToolbarButtonImpl animateTitleToShowBriefly]
// Type encoding: v16@0:8
// Implementation: 0x1061e19d8

// -[SCCameraToolbarButtonImpl showHint:forDuration:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x1061e1a78

// -[SCCameraToolbarButtonImpl hideHint]
// Type encoding: v16@0:8
// Implementation: 0x1061e1b2c

// -[SCCameraToolbarButtonImpl _showBalloonTooltipImmediatelyWithTitle:duration:isForChildButton:animationStyle:completion:]
// Type encoding: v52@0:8@16d24B32q36@?44
// Implementation: 0x1061e1b8c

// -[SCCameraToolbarButtonImpl showBalloonTooltipsWithTitle:delay:duration:isForChildButton:completion:]
// Type encoding: v52@0:8@16d24d32B40@?44
// Implementation: 0x1061e1ec8

// -[SCCameraToolbarButtonImpl showBalloonTooltipsWithTitle:delay:duration:isForChildButton:animationStyle:completion:]
// Type encoding: v60@0:8@16d24d32B40q44@?52
// Implementation: 0x1061e1ed4

// -[SCCameraToolbarButtonImpl hideBalloonTooltips]
// Type encoding: v16@0:8
// Implementation: 0x1061e20ac

// -[SCCameraToolbarButtonImpl setSelected:]
// Type encoding: v20@0:8B16
// Implementation: 0x1061e2110

// -[SCCameraToolbarButtonImpl tapButton]
// Type encoding: v16@0:8
// Implementation: 0x1061e2128

// -[SCCameraToolbarButtonImpl setAppearanceType:]
// Type encoding: v24@0:8q16
// Implementation: 0x10089eb30

// -[SCCameraToolbarButtonImpl setImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10089fa98

// -[SCCameraToolbarButtonImpl loadingAnimationLayer]
// Type encoding: @16@0:8
// Implementation: 0x1061e2174

// -[SCCameraToolbarButtonImpl gestureRecognizer:shouldRequireFailureOfGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x1061e248c

// -[SCCameraToolbarButtonImpl press:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e2538

// -[SCCameraToolbarButtonImpl _tapEndedWithResult:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e2704

// -[SCCameraToolbarButtonImpl pointInside:withEvent:]
// Type encoding: B40@0:8{CGPoint=dd}16@32
// Implementation: 0x1061e2804

// -[SCCameraToolbarButtonImpl accessibilityElements]
// Type encoding: @16@0:8
// Implementation: 0x1061e292c

// -[SCCameraToolbarButtonImpl titleLabel]
// Type encoding: @16@0:8
// Implementation: 0x1008a0c2c

// -[SCCameraToolbarButtonImpl newBadgeView]
// Type encoding: @16@0:8
// Implementation: 0x1061e296c

// -[SCCameraToolbarButtonImpl lableView]
// Type encoding: @16@0:8
// Implementation: 0x1008a6590

// -[SCCameraToolbarButtonImpl didMoveToWindow]
// Type encoding: v16@0:8
// Implementation: 0x100c2c7f0

// -[SCCameraToolbarButtonImpl _updateTitle]
// Type encoding: v16@0:8
// Implementation: 0x1008a0924

// -[SCCameraToolbarButtonImpl _layoutTitleLabelWithNewBadgeView]
// Type encoding: v16@0:8
// Implementation: 0x1008a677c

// -[SCCameraToolbarButtonImpl _setSelected:animated:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x1061e2ab0

// -[SCCameraToolbarButtonImpl _didChangeToolbarItemWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e2de4

// -[SCCameraToolbarButtonImpl _didChangeToolbarItemLoadingStateWithEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e2e1c

// -[SCCameraToolbarButtonImpl _startLoadingAnimation]
// Type encoding: v16@0:8
// Implementation: 0x1061e2eb4

// -[SCCameraToolbarButtonImpl _stopLoadingAnimation]
// Type encoding: v16@0:8
// Implementation: 0x1061e3028

// -[SCCameraToolbarButtonImpl showImageAnimationWithImage:duration:delay:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x1061e306c

// -[SCCameraToolbarButtonImpl hideImageAnimation]
// Type encoding: v16@0:8
// Implementation: 0x1061e3690

// -[SCCameraToolbarButtonImpl _hideImageOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1061e3694

// -[SCCameraToolbarButtonImpl _removeImageOverlay]
// Type encoding: v16@0:8
// Implementation: 0x1061e3984

// -[SCCameraToolbarButtonImpl isDisappearing]
// Type encoding: B16@0:8
// Implementation: 0x1008a03e0

// -[SCCameraToolbarButtonImpl setIsDisappearing:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008ad63c

// -[SCCameraToolbarButtonImpl customTapAreaInsets]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x1061e3aa8

// -[SCCameraToolbarButtonImpl setCustomTapAreaInsets:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x1061e3ac0

// -[SCCameraToolbarButtonImpl selected]
// Type encoding: B16@0:8
// Implementation: 0x1008a0c0c

// -[SCCameraToolbarButtonImpl toolbarItem]
// Type encoding: @16@0:8
// Implementation: 0x1008a0c1c

// -[SCCameraToolbarButtonImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1061e3ad8

// -[SCCameraToolbarButtonImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a0134

// -[SCCameraToolbarButtonImpl doesProvideHapticFeedback]
// Type encoding: B16@0:8
// Implementation: 0x1061e3af8

// -[SCCameraToolbarButtonImpl setProvidesHapticFeedback:]
// Type encoding: v20@0:8B16
// Implementation: 0x1008a0124

// -[SCCameraToolbarButtonImpl setTitleLabel:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3b08

// -[SCCameraToolbarButtonImpl setNewBadgeView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3b48

// -[SCCameraToolbarButtonImpl setLableView:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3b88

// -[SCCameraToolbarButtonImpl hintTimer]
// Type encoding: @16@0:8
// Implementation: 0x1061e3bc8

// -[SCCameraToolbarButtonImpl setHintTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3bd8

// -[SCCameraToolbarButtonImpl tooltipTimer]
// Type encoding: @16@0:8
// Implementation: 0x1061e3c18

// -[SCCameraToolbarButtonImpl setTooltipTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3c28

// -[SCCameraToolbarButtonImpl labelTimer]
// Type encoding: @16@0:8
// Implementation: 0x1061e3c68

// -[SCCameraToolbarButtonImpl setLabelTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3c78

// -[SCCameraToolbarButtonImpl tooltipBalloon]
// Type encoding: @16@0:8
// Implementation: 0x1061e3cb8

// -[SCCameraToolbarButtonImpl setTooltipBalloon:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3cc8

// -[SCCameraToolbarButtonImpl labelsConstraints]
// Type encoding: @16@0:8
// Implementation: 0x1008a6eb8

// -[SCCameraToolbarButtonImpl setLabelsConstraints:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3d08

// -[SCCameraToolbarButtonImpl buttonLifecycle]
// Type encoding: @16@0:8
// Implementation: 0x1061e3d48

// -[SCCameraToolbarButtonImpl setButtonLifecycle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3d58

// -[SCCameraToolbarButtonImpl cameraUserActionLogger]
// Type encoding: @16@0:8
// Implementation: 0x1061e3d98

// -[SCCameraToolbarButtonImpl setCameraUserActionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3db8

// -[SCCameraToolbarButtonImpl appearanceType]
// Type encoding: q16@0:8
// Implementation: 0x10089fc20

// -[SCCameraToolbarButtonImpl setLoadingAnimationLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3dcc

// -[SCCameraToolbarButtonImpl loadingAnimationOuterCircle]
// Type encoding: @16@0:8
// Implementation: 0x1061e3e0c

// -[SCCameraToolbarButtonImpl setLoadingAnimationOuterCircle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3e1c

// -[SCCameraToolbarButtonImpl loadingAnimationInnerCircle]
// Type encoding: @16@0:8
// Implementation: 0x1061e3e5c

// -[SCCameraToolbarButtonImpl setLoadingAnimationInnerCircle:]
// Type encoding: v24@0:8@16
// Implementation: 0x1061e3e6c

// -[SCCameraToolbarButtonImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1061e3eac

@end
