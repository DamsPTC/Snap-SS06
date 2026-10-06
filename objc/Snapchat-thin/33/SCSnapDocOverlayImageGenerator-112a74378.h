// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapDocOverlayImageGenerator
// Superclass: NSObject
// Address: 0x112a74378

@interface SCSnapDocOverlayImageGenerator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapDocOverlayImageGenerator initWithSnapDocEditorServices:previewCameraSourceOverlayService:targetTrajectoryFactory:stickerInjector:ctpItemViewService:previewABProvider:creativeToolsABProvider:userInfoServices:snapDocConverter:userSession:circumstanceEngine:snapchatterFetcher:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@72@80@88@96@104
// Implementation: 0x10586dd78

// -[SCSnapDocOverlayImageGenerator generateOverlayImageForSnapDoc:overlaySize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10586e06c

// -[SCSnapDocOverlayImageGenerator generateOverlayUIImageForSnapDocEditor:overlaySize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10586e114

// -[SCSnapDocOverlayImageGenerator generateOverlayImageForSnapDocEditor:overlaySize:]
// Type encoding: @40@0:8@16{CGSize=dd}24
// Implementation: 0x10586e4f0

// -[SCSnapDocOverlayImageGenerator _getSOJUOverlayFromSnapDocWithEditor:atIndex:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10586e9cc

// -[SCSnapDocOverlayImageGenerator _generateAndReplaceOverlayImageWithEditingState:atIndex:snapDocEditor:overlaySize:]
// Type encoding: @56@0:8@16@24@32{CGSize=dd}40
// Implementation: 0x10586eb9c

// -[SCSnapDocOverlayImageGenerator _mergeLocalEditingState:withGlobalEditingState:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10586ecf0

// -[SCSnapDocOverlayImageGenerator _editingStateWithOverlaySize:snapDocEditor:timeRange:segment:]
// Type encoding: @56@0:8{CGSize=dd}16@32@40@48
// Implementation: 0x10586ef84

// -[SCSnapDocOverlayImageGenerator _regenerateOverlayImageEditingState:overlaySize:snapDocEditor:]
// Type encoding: @48@0:8@16{CGSize=dd}24@40
// Implementation: 0x10586f144

// -[SCSnapDocOverlayImageGenerator replaceOverlayInSnapDocEditor:image:atIndex:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10586f388

// -[SCSnapDocOverlayImageGenerator _retrieveFirstSegmentTimeRangeFromSnapDocEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x10586f5c8

// -[SCSnapDocOverlayImageGenerator _defaultOverlaySize]
// Type encoding: {CGSize=dd}16@0:8
// Implementation: 0x10586f834

// -[SCSnapDocOverlayImageGenerator _incrementGenerateOverlayCounterWithSucceeded:overlayCount:]
// Type encoding: v28@0:8B16Q20
// Implementation: 0x10586f8c8

// -[SCSnapDocOverlayImageGenerator _incrementSnapDocUpdateCountWithSucceeded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10586f97c

// -[SCSnapDocOverlayImageGenerator _addTimerForSnapDocEditWithStartTime:]
// Type encoding: v24@0:8d16
// Implementation: 0x10586f9e8

// -[SCSnapDocOverlayImageGenerator _shouldGenerateOverlayWithEditor:atIndex:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10586fa30

// -[SCSnapDocOverlayImageGenerator _infoStickerMetadataWithSnapDocEditor:atSegment:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10586fabc

// -[SCSnapDocOverlayImageGenerator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10586fc0c

@end
