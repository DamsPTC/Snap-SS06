// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewAlignmentTranslationDetector
// Superclass: NSObject
// Address: 0x112a9bbf8

@interface SCPreviewAlignmentTranslationDetector

// Property: guides; attributes: T@"NSMutableArray",&,N,V_guides
// Property: shouldIgnoreTransaltionX; attributes: TB,N,V_shouldIgnoreTransaltionX
// Property: shouldIgnoreTransaltionY; attributes: TB,N,V_shouldIgnoreTransaltionY
// Property: beginDraggingLocation; attributes: T{CGPoint=dd},N,V_beginDraggingLocation
// Property: boundingGuides; attributes: T@"NSArray",C,N,V_boundingGuides
// Property: objectsGuides; attributes: T@"NSArray",C,N,V_objectsGuides
// Property: edgeMargins; attributes: T{UIEdgeInsets=dddd},N,V_edgeMargins
// Property: enableBoundaryHint; attributes: TB,N,V_enableBoundaryHint
// Property: delegate; attributes: T@"<SCPreviewAlignmentDetectorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewAlignmentTranslationDetector initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d19d6c

// -[SCPreviewAlignmentTranslationDetector gestureType]
// Type encoding: q16@0:8
// Implementation: 0x105d19e88

// -[SCPreviewAlignmentTranslationDetector adjustView:gesture:objectViews:guideContainerView:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105d19e90

// -[SCPreviewAlignmentTranslationDetector processView:gesture:containerView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d1a330

// -[SCPreviewAlignmentTranslationDetector _addGuide:inView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d1a4cc

// -[SCPreviewAlignmentTranslationDetector _removeGuide:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d1a5a0

// -[SCPreviewAlignmentTranslationDetector _removeAllGuides]
// Type encoding: v16@0:8
// Implementation: 0x105d1a66c

// -[SCPreviewAlignmentTranslationDetector _translationDirectionForGuideAlignmentType:]
// Type encoding: q24@0:8q16
// Implementation: 0x105d1a7c8

// -[SCPreviewAlignmentTranslationDetector _alignmentGuideForEdge:object:]
// Type encoding: @32@0:8q16@24
// Implementation: 0x105d1a7ec

// -[SCPreviewAlignmentTranslationDetector _hasAlignmentForDirection:]
// Type encoding: B24@0:8q16
// Implementation: 0x105d1a94c

// -[SCPreviewAlignmentTranslationDetector _isDirectionLocked:]
// Type encoding: B24@0:8q16
// Implementation: 0x105d1aa70

// -[SCPreviewAlignmentTranslationDetector _centerForLockedGuides:]
// Type encoding: {CGPoint=dd}32@0:8{CGPoint=dd}16
// Implementation: 0x105d1aba4

// -[SCPreviewAlignmentTranslationDetector _findGuidesForView:objectViews:touchLocation:guideContainerView:translation:velocity:]
// Type encoding: v88@0:8@16@24{CGPoint=dd}32@48{CGPoint=dd}56{CGPoint=dd}72
// Implementation: 0x105d1ad04

// -[SCPreviewAlignmentTranslationDetector _findGuidesInContainerView:draggingView:nearbyView:touchLocation:translation:velocity:guides:]
// Type encoding: v96@0:8@16@24@32{CGPoint=dd}40{CGPoint=dd}56{CGPoint=dd}72@88
// Implementation: 0x105d1af5c

// -[SCPreviewAlignmentTranslationDetector delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d1be08

// -[SCPreviewAlignmentTranslationDetector setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d1be20

// -[SCPreviewAlignmentTranslationDetector boundingGuides]
// Type encoding: @16@0:8
// Implementation: 0x105d1be2c

// -[SCPreviewAlignmentTranslationDetector setBoundingGuides:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d1be34

// -[SCPreviewAlignmentTranslationDetector objectsGuides]
// Type encoding: @16@0:8
// Implementation: 0x105d1be3c

// -[SCPreviewAlignmentTranslationDetector setObjectsGuides:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d1be44

// -[SCPreviewAlignmentTranslationDetector edgeMargins]
// Type encoding: {UIEdgeInsets=dddd}16@0:8
// Implementation: 0x105d1be4c

// -[SCPreviewAlignmentTranslationDetector setEdgeMargins:]
// Type encoding: v48@0:8{UIEdgeInsets=dddd}16
// Implementation: 0x105d1be58

// -[SCPreviewAlignmentTranslationDetector enableBoundaryHint]
// Type encoding: B16@0:8
// Implementation: 0x105d1be64

// -[SCPreviewAlignmentTranslationDetector setEnableBoundaryHint:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d1be6c

// -[SCPreviewAlignmentTranslationDetector guides]
// Type encoding: @16@0:8
// Implementation: 0x105d1be74

// -[SCPreviewAlignmentTranslationDetector setGuides:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d1be7c

// -[SCPreviewAlignmentTranslationDetector shouldIgnoreTransaltionX]
// Type encoding: B16@0:8
// Implementation: 0x105d1beac

// -[SCPreviewAlignmentTranslationDetector setShouldIgnoreTransaltionX:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d1beb4

// -[SCPreviewAlignmentTranslationDetector shouldIgnoreTransaltionY]
// Type encoding: B16@0:8
// Implementation: 0x105d1bebc

// -[SCPreviewAlignmentTranslationDetector setShouldIgnoreTransaltionY:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d1bec4

// -[SCPreviewAlignmentTranslationDetector beginDraggingLocation]
// Type encoding: {CGPoint=dd}16@0:8
// Implementation: 0x105d1becc

// -[SCPreviewAlignmentTranslationDetector setBeginDraggingLocation:]
// Type encoding: v32@0:8{CGPoint=dd}16
// Implementation: 0x105d1bed4

// -[SCPreviewAlignmentTranslationDetector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d1bedc

@end
