// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreviewAlignmentRotationDetector
// Superclass: NSObject
// Address: 0x112a9bb58

@interface SCPreviewAlignmentRotationDetector

// Property: rotationGuide; attributes: T@"SCPreviewAlignmentRotationGuide",&,N,V_rotationGuide
// Property: beginRotationAngle; attributes: Td,N,V_beginRotationAngle
// Property: shouldIgnoreRotationGuide; attributes: TB,N,V_shouldIgnoreRotationGuide
// Property: rotationAngles; attributes: T@"NSArray",C,N,V_rotationAngles
// Property: delegate; attributes: T@"<SCPreviewAlignmentDetectorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCPreviewAlignmentRotationDetector initWithDelegate:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d18bc0

// -[SCPreviewAlignmentRotationDetector gestureType]
// Type encoding: q16@0:8
// Implementation: 0x105d18c64

// -[SCPreviewAlignmentRotationDetector adjustView:gesture:objectViews:guideContainerView:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105d18c6c

// -[SCPreviewAlignmentRotationDetector processView:gesture:containerView:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105d191e8

// -[SCPreviewAlignmentRotationDetector _convertRadiansToDegrees:]
// Type encoding: d24@0:8d16
// Implementation: 0x105d19420

// -[SCPreviewAlignmentRotationDetector _rotationGuideForAngle:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d19454

// -[SCPreviewAlignmentRotationDetector _findGuidesInContainerView:draggingView:angle:velocity:]
// Type encoding: v48@0:8@16@24d32d40
// Implementation: 0x105d19518

// -[SCPreviewAlignmentRotationDetector _addGuide:inView:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105d197e4

// -[SCPreviewAlignmentRotationDetector _removeGuide:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d19890

// -[SCPreviewAlignmentRotationDetector _centerRotationPoint:alignableTouchControlView:diffRotation:]
// Type encoding: {CGPoint=dd}40@0:8@16@24d32
// Implementation: 0x105d19914

// -[SCPreviewAlignmentRotationDetector delegate]
// Type encoding: @16@0:8
// Implementation: 0x105d199f8

// -[SCPreviewAlignmentRotationDetector setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d19a10

// -[SCPreviewAlignmentRotationDetector rotationAngles]
// Type encoding: @16@0:8
// Implementation: 0x105d19a1c

// -[SCPreviewAlignmentRotationDetector setRotationAngles:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d19a24

// -[SCPreviewAlignmentRotationDetector rotationGuide]
// Type encoding: @16@0:8
// Implementation: 0x105d19a2c

// -[SCPreviewAlignmentRotationDetector setRotationGuide:]
// Type encoding: v24@0:8@16
// Implementation: 0x105d19a34

// -[SCPreviewAlignmentRotationDetector beginRotationAngle]
// Type encoding: d16@0:8
// Implementation: 0x105d19a64

// -[SCPreviewAlignmentRotationDetector setBeginRotationAngle:]
// Type encoding: v24@0:8d16
// Implementation: 0x105d19a6c

// -[SCPreviewAlignmentRotationDetector shouldIgnoreRotationGuide]
// Type encoding: B16@0:8
// Implementation: 0x105d19a74

// -[SCPreviewAlignmentRotationDetector setShouldIgnoreRotationGuide:]
// Type encoding: v20@0:8B16
// Implementation: 0x105d19a7c

// -[SCPreviewAlignmentRotationDetector .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d19a84

@end
