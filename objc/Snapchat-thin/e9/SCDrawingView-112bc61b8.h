// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDrawingView
// Superclass: UIView
// Address: 0x112bc61b8

@interface SCDrawingView

// Property: multiSnapDrawingCache; attributes: T@"<SCMultiSegmentDrawingCache>",R,N,V_multiSnapDrawingCache
// Property: smoothingAlgorithmVersion; attributes: Tq,N,V_smoothingAlgorithmVersion
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegate; attributes: T@"<SCDrawingViewCommonDelegate>",W,N,V_delegate
// Property: multiSnapDelegate; attributes: T@"<SCDrawingViewMultiSnapDelegate>",W,N,V_multiSnapDelegate
// Property: updateVersion; attributes: Tq,R,N,V_updateVersion
// Property: defaultStrokeWidth; attributes: Td,N,V_defaultStrokeWidth

// -[SCDrawingView initWithFrame:multiCache:grapheneRegistry:snapDocEditor:snapEditor:previewABServices:]
// Type encoding: @88@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16@48@56@64@72@80
// Implementation: 0x108e87cc8

// -[SCDrawingView _hasMultiSnapDrawingCache]
// Type encoding: B16@0:8
// Implementation: 0x108e88080

// -[SCDrawingView setDefaultStrokeWidth:]
// Type encoding: v24@0:8d16
// Implementation: 0x108e88098

// -[SCDrawingView startNewStrokeWithColor:lineWidth:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108e880b4

// -[SCDrawingView startNewStrokeWithEmoji:lineWidth:]
// Type encoding: v32@0:8@16d24
// Implementation: 0x108e88114

// -[SCDrawingView saveCurrentStrokeToHistoryIfNeeded]
// Type encoding: v16@0:8
// Implementation: 0x108e881a0

// -[SCDrawingView historyIds]
// Type encoding: @16@0:8
// Implementation: 0x108e884f4

// -[SCDrawingView drawCurrentStrokeOntoImage:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e88648

// -[SCDrawingView finishStroke]
// Type encoding: v16@0:8
// Implementation: 0x108e88730

// -[SCDrawingView undoStroke]
// Type encoding: v16@0:8
// Implementation: 0x108e88740

// -[SCDrawingView strokeCount]
// Type encoding: q16@0:8
// Implementation: 0x108e88a54

// -[SCDrawingView pointCount]
// Type encoding: q16@0:8
// Implementation: 0x108e88aa0

// -[SCDrawingView currentStrokeColor]
// Type encoding: @16@0:8
// Implementation: 0x108e88c20

// -[SCDrawingView currentStrokeLineWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e88c30

// -[SCDrawingView drawScreenshotImageInCurrentContextWithRect:]
// Type encoding: v48@0:8{CGRect={CGPoint=dd}{CGSize=dd}}16
// Implementation: 0x108e88c40

// -[SCDrawingView imageFromDrawingView]
// Type encoding: @16@0:8
// Implementation: 0x108e88cec

// -[SCDrawingView setSmoothingAlgorithmVersion:]
// Type encoding: v24@0:8q16
// Implementation: 0x108e88d90

// -[SCDrawingView setBrushAffordanceSize:withCenter:]
// Type encoding: v40@0:8d16{CGPoint=dd}24
// Implementation: 0x108e88dac

// -[SCDrawingView setBrushAffordanceColor:OrEmoji:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e88dec

// -[SCDrawingView toggleBrushAffordanceShown:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e88e50

// -[SCDrawingView setBrushAffordanceVisibility:]
// Type encoding: v20@0:8B16
// Implementation: 0x108e88ef4

// -[SCDrawingView updateColor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e88f08

// -[SCDrawingView updateEmoji:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e88fb8

// -[SCDrawingView _restoreFromHistoryIndex:buildCache:]
// Type encoding: v28@0:8q16B24
// Implementation: 0x108e89070

// -[SCDrawingView _setStrokeOnSingleStrokeDrawingView:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e89674

// -[SCDrawingView updateWithDrawingMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e89700

// -[SCDrawingView drawingMetadata]
// Type encoding: @16@0:8
// Implementation: 0x108e89810

// -[SCDrawingView replaceDrawingStrokeHistory:forSegmentIndex:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108e898e8

// -[SCDrawingView _handlePoint:gestureState:]
// Type encoding: v40@0:8{CGPoint=dd}16q32
// Implementation: 0x108e899d4

// -[SCDrawingView _scalePinch:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e89da8

// -[SCDrawingView _drawingPress:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e89fb8

// -[SCDrawingView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x108e8a070

// -[SCDrawingView delegate]
// Type encoding: @16@0:8
// Implementation: 0x108e8a0c8

// -[SCDrawingView setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8a0e8

// -[SCDrawingView updateVersion]
// Type encoding: q16@0:8
// Implementation: 0x108e8a0fc

// -[SCDrawingView multiSnapDelegate]
// Type encoding: @16@0:8
// Implementation: 0x108e8a10c

// -[SCDrawingView setMultiSnapDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e8a12c

// -[SCDrawingView defaultStrokeWidth]
// Type encoding: d16@0:8
// Implementation: 0x108e8a140

// -[SCDrawingView multiSnapDrawingCache]
// Type encoding: @16@0:8
// Implementation: 0x108e8a150

// -[SCDrawingView smoothingAlgorithmVersion]
// Type encoding: q16@0:8
// Implementation: 0x108e8a160

// -[SCDrawingView .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e8a170

// +[SCDrawingView calculateEmojiRectDrawRatio:]
// Type encoding: d24@0:8d16
// Implementation: 0x108e8a078

@end
