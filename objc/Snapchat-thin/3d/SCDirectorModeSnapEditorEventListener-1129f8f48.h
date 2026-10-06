// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCDirectorModeSnapEditorEventListener
// Superclass: NSObject
// Address: 0x1129f8f48

@interface SCDirectorModeSnapEditorEventListener

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCDirectorModeSnapEditorEventListener initWithPreviewScope:previewScopeServices:notificationPool:circumstanceEngine:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x104d6628c

// -[SCDirectorModeSnapEditorEventListener sendActionGuard]
// Type encoding: @16@0:8
// Implementation: 0x104d663f0

// -[SCDirectorModeSnapEditorEventListener snapEditor:didTriggerLifecycle:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x104d66564

// -[SCDirectorModeSnapEditorEventListener _subscribeToPreviewConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x104d66574

// -[SCDirectorModeSnapEditorEventListener _subscribeToTimelineConfiguration]
// Type encoding: v16@0:8
// Implementation: 0x104d6665c

// -[SCDirectorModeSnapEditorEventListener _updateSendingDisabledState]
// Type encoding: v16@0:8
// Implementation: 0x104d666b0

// -[SCDirectorModeSnapEditorEventListener _updatePreviewViewWithSendButtonIsInactive:]
// Type encoding: v20@0:8B16
// Implementation: 0x104d6672c

// -[SCDirectorModeSnapEditorEventListener _presentSendToDisabledToast]
// Type encoding: v16@0:8
// Implementation: 0x104d667d4

// -[SCDirectorModeSnapEditorEventListener _allowShortDurationVideo]
// Type encoding: B16@0:8
// Implementation: 0x104d669d8

// -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didAddSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d66a14

// -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didAddSegments:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d66a18

// -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didDeleteSegment:atIndex:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x104d66a1c

// -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didMoveSegment:atIndex:toDestinationIndex:]
// Type encoding: v48@0:8@16@24q32q40
// Implementation: 0x104d66a20

// -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidEnterReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d66a24

// -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidExitReorderMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d66a28

// -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidRestoreToInitialState:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d66a2c

// -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didUpdateSegmentTrim:atIndex:]
// Type encoding: v80@0:8@16{?={?=qiIq}{?=qiIq}}24q72
// Implementation: 0x104d66a30

// -[SCDirectorModeSnapEditorEventListener timelineConfigurationWillDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d66a34

// -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidDeleteAllSegments:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d66a38

// -[SCDirectorModeSnapEditorEventListener timelineConfigurationDidUpdateThumbnails:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d66a3c

// -[SCDirectorModeSnapEditorEventListener timelineConfiguration:didUpdateThumbnailsForSegment:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x104d66a40

// -[SCDirectorModeSnapEditorEventListener .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d66a44

@end
