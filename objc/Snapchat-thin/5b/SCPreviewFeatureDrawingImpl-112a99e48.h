// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewFeatureDrawingImpl
// Superclass: NSObject
// Address: 0x112a99e48

@interface SCPreviewFeatureDrawingImpl

// Property: pinchResizeTooltipView; attributes: T@"SCPinchResizeTooltipView",&,N,V_pinchResizeTooltipView
// Property: previewView; attributes: T@"UIView<SCPreviewViewProtocol>",W,N,V_previewView
// Property: drawingV2UIState; attributes: TQ,N,V_drawingV2UIState
// Property: colorPickerV2State; attributes: TQ,N,V_colorPickerV2State
// Property: toolbarItemViewModel; attributes: T@"SCPreviewToolbarItemViewModel",&,N,V_toolbarItemViewModel
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCPreviewFeatureDrawingDelegate>",W,N,V_delegate
// Property: isEditing; attributes: TB,R,N,V_isEditing
// Property: drawingView; attributes: T@"UIView<SCDrawingViewCommon>",R,N,V_drawingView
// Property: emojiBrushResourceProvider; attributes: T@"<SCEmojiBrushResourceProvider>",R,N,V_emojiBrushResourceProvider
// Property: toolbarButtonItem; attributes: T@"SCPreviewDrawingToolBarButtonItem",R,N
// Property: hasStroke; attributes: TB,R,N
// Property: strokeCount; attributes: Tq,R,N
// Property: pointCount; attributes: Tq,R,N
// Property: updateVersion; attributes: Tq,R,N
// Property: drawingMetadata; attributes: T@"SCDrawingMetadata",R,N
// Property: multiSnapDrawingCache; attributes: T@"SCMultiSnapDrawingCacheImpl",R,N
// Property: emojiBrushListVersion; attributes: T@"NSString",R,N
// Property: shouldDisplayEmojiBrushOnboardingAnimation; attributes: TB,R,N
// Property: toolbarItemViewModelObservable; attributes: T@"SCObservable",R,N

// -[SCPreviewFeatureDrawingImpl initWithConfiguration:previewScopeServices:previewABServices:snapCrop:userInteractionStateLogger:commonLoggingParamsBuilder:emojiBrushResourceProvider:preferences:simpleContentFetcher:filterUIContainer:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105ce8f74

// -[SCPreviewFeatureDrawingImpl snapEditor:didChangeToolBarButtonItemType:selected:]
// Type encoding: v36@0:8@16q24B32
// Implementation: 0x105ce9334

// -[SCPreviewFeatureDrawingImpl snapEditor:updateLoggingWithBuilder:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ce9350

// -[SCPreviewFeatureDrawingImpl editCount]
// Type encoding: q16@0:8
// Implementation: 0x105ce9374

// -[SCPreviewFeatureDrawingImpl setToolbarItemViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce9378

// -[SCPreviewFeatureDrawingImpl toolbarItemViewModelObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ce9418

// -[SCPreviewFeatureDrawingImpl createDrawingViewWithFrame:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x105ce9440

// -[SCPreviewFeatureDrawingImpl hasStroke]
// Type encoding: B16@0:8
// Implementation: 0x105ce976c

// -[SCPreviewFeatureDrawingImpl strokeCount]
// Type encoding: q16@0:8
// Implementation: 0x105ce9788

// -[SCPreviewFeatureDrawingImpl pointCount]
// Type encoding: q16@0:8
// Implementation: 0x105ce9790

// -[SCPreviewFeatureDrawingImpl updateVersion]
// Type encoding: q16@0:8
// Implementation: 0x105ce9798

// -[SCPreviewFeatureDrawingImpl drawingMetadata]
// Type encoding: @16@0:8
// Implementation: 0x105ce97a0

// -[SCPreviewFeatureDrawingImpl multiSnapDrawingCache]
// Type encoding: @16@0:8
// Implementation: 0x105ce97a8

// -[SCPreviewFeatureDrawingImpl emojiBrushListVersion]
// Type encoding: @16@0:8
// Implementation: 0x105ce9834

// -[SCPreviewFeatureDrawingImpl shouldDisplayEmojiBrushOnboardingAnimation]
// Type encoding: B16@0:8
// Implementation: 0x105ce983c

// -[SCPreviewFeatureDrawingImpl toolbarButtonItem]
// Type encoding: @16@0:8
// Implementation: 0x105ce9858

// -[SCPreviewFeatureDrawingImpl setHidden:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ce9a58

// -[SCPreviewFeatureDrawingImpl setAlpha:]
// Type encoding: v24@0:8d16
// Implementation: 0x105ce9a60

// -[SCPreviewFeatureDrawingImpl setTransform:]
// Type encoding: v64@0:8{CGAffineTransform=dddddd}16
// Implementation: 0x105ce9a68

// -[SCPreviewFeatureDrawingImpl convertPoint:toView:]
// Type encoding: {CGPoint=dd}40@0:8{CGPoint=dd}16@32
// Implementation: 0x105ce9a9c

// -[SCPreviewFeatureDrawingImpl addAnimation:forKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ce9aa4

// -[SCPreviewFeatureDrawingImpl removeAnimationForKey:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce9aac

// -[SCPreviewFeatureDrawingImpl _updateStrokeColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ce9ab4

// -[SCPreviewFeatureDrawingImpl _updateUserPreferencesWithColor:paletteType:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ce9b04

// -[SCPreviewFeatureDrawingImpl _updateUIWithUserAction:dataDict:]
// Type encoding: v32@0:8Q16@24
// Implementation: 0x105ce9ba4

// -[SCPreviewFeatureDrawingImpl drawingColorsHexString]
// Type encoding: @16@0:8
// Implementation: 0x105ce9cc4

// -[SCPreviewFeatureDrawingImpl drawingStartPositions]
// Type encoding: @16@0:8
// Implementation: 0x105ce9e98

// -[SCPreviewFeatureDrawingImpl drawingV1DidChangeColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cea09c

// -[SCPreviewFeatureDrawingImpl drawingDidChangePaletteType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105cea0a4

// -[SCPreviewFeatureDrawingImpl updateForDrawItem:]
// Type encoding: v20@0:8B16
// Implementation: 0x105cea0ec

// -[SCPreviewFeatureDrawingImpl updatePinchResizeTooltipFrame]
// Type encoding: v16@0:8
// Implementation: 0x105cea1e0

// -[SCPreviewFeatureDrawingImpl hideTooltip]
// Type encoding: v16@0:8
// Implementation: 0x105cea210

// -[SCPreviewFeatureDrawingImpl setTooltipDidResize]
// Type encoding: v16@0:8
// Implementation: 0x105cea218

// -[SCPreviewFeatureDrawingImpl setMultiSnapDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cea224

// -[SCPreviewFeatureDrawingImpl replaceDrawingStrokeHistory:forSegmentIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x105cea22c

// -[SCPreviewFeatureDrawingImpl configureWithView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cea234

// -[SCPreviewFeatureDrawingImpl activate]
// Type encoding: v16@0:8
// Implementation: 0x105cea3a4

// -[SCPreviewFeatureDrawingImpl responderChainPriority]
// Type encoding: q16@0:8
// Implementation: 0x105cea3e0

// -[SCPreviewFeatureDrawingImpl _restoreDrawingState]
// Type encoding: v16@0:8
// Implementation: 0x105cea3e8

// -[SCPreviewFeatureDrawingImpl _pinchResizeTooltipFrame]
// Type encoding: {CGRect={CGPoint=dd}{CGSize=dd}}16@0:8
// Implementation: 0x105cea784

// -[SCPreviewFeatureDrawingImpl _toolbarButtonTapped:]
// Type encoding: v24@0:8@16
// Implementation: 0x105cea80c

// -[SCPreviewFeatureDrawingImpl toolbarColorPickerView:didChangeColor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105cea908

// -[SCPreviewFeatureDrawingImpl toolbarColorPickerView:didTogglePaletteToType:selectedColor:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x105cea9f0

// -[SCPreviewFeatureDrawingImpl drawingViewDidStartDrawing:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceab18

// -[SCPreviewFeatureDrawingImpl drawingView:didEndDrawingWithStrokeSize:isResized:]
// Type encoding: v36@0:8@16d24B32
// Implementation: 0x105ceab1c

// -[SCPreviewFeatureDrawingImpl drawingViewDidStartPinchResize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceab20

// -[SCPreviewFeatureDrawingImpl drawingViewDidFinishPinchResize:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceab24

// -[SCPreviewFeatureDrawingImpl drawingView:didMoveToPoint:]
// Type encoding: v40@0:8@16{CGPoint=dd}24
// Implementation: 0x105ceab28

// -[SCPreviewFeatureDrawingImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x105ceab2c

// -[SCPreviewFeatureDrawingImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceab44

// -[SCPreviewFeatureDrawingImpl isEditing]
// Type encoding: B16@0:8
// Implementation: 0x105ceab50

// -[SCPreviewFeatureDrawingImpl drawingView]
// Type encoding: @16@0:8
// Implementation: 0x105ceab58

// -[SCPreviewFeatureDrawingImpl emojiBrushResourceProvider]
// Type encoding: @16@0:8
// Implementation: 0x105ceab60

// -[SCPreviewFeatureDrawingImpl pinchResizeTooltipView]
// Type encoding: @16@0:8
// Implementation: 0x105ceab68

// -[SCPreviewFeatureDrawingImpl setPinchResizeTooltipView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceab70

// -[SCPreviewFeatureDrawingImpl previewView]
// Type encoding: @16@0:8
// Implementation: 0x105ceaba0

// -[SCPreviewFeatureDrawingImpl setPreviewView:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ceabb8

// -[SCPreviewFeatureDrawingImpl drawingV2UIState]
// Type encoding: Q16@0:8
// Implementation: 0x105ceabc4

// -[SCPreviewFeatureDrawingImpl setDrawingV2UIState:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ceabcc

// -[SCPreviewFeatureDrawingImpl colorPickerV2State]
// Type encoding: Q16@0:8
// Implementation: 0x105ceabd4

// -[SCPreviewFeatureDrawingImpl setColorPickerV2State:]
// Type encoding: v24@0:8Q16
// Implementation: 0x105ceabdc

// -[SCPreviewFeatureDrawingImpl toolbarItemViewModel]
// Type encoding: @16@0:8
// Implementation: 0x105ceabe4

// -[SCPreviewFeatureDrawingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ceabec

@end
