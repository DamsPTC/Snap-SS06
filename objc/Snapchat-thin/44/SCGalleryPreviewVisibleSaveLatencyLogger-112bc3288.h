// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCGalleryPreviewVisibleSaveLatencyLogger
// Superclass: NSObject
// Address: 0x112bc3288

@interface SCGalleryPreviewVisibleSaveLatencyLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCGalleryPreviewVisibleSaveLatencyLogger initWithUserTrackedLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e00fd8

// -[SCGalleryPreviewVisibleSaveLatencyLogger _logPreviewVisibleSaveLatencyWithSaveSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e0106c

// -[SCGalleryPreviewVisibleSaveLatencyLogger didStartSavingWithSaveSessionId:sessionStatus:shouldSaveToMemories:shouldSaveToCameraRoll:]
// Type encoding: v40@0:8@16@24B32B36
// Implementation: 0x108e01a00

// -[SCGalleryPreviewVisibleSaveLatencyLogger logPreviewVisibleSaveLatencySplitWithSaveSessionId:splitName:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x108e01abc

// -[SCGalleryPreviewVisibleSaveLatencyLogger logPreviewVisibleSaveLatencyEndWithSaveSessionId:didFinishSavingSucceeded:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108e01b18

// -[SCGalleryPreviewVisibleSaveLatencyLogger _removePreviewVisibleSaveLatencyWithSaveSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108e01ba0

// -[SCGalleryPreviewVisibleSaveLatencyLogger _setPreviewVisibleSaveLatency:forSaveSessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108e01bfc

// -[SCGalleryPreviewVisibleSaveLatencyLogger _previewVisibleSaveLatencyForSaveSessionId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108e01c78

// -[SCGalleryPreviewVisibleSaveLatencyLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108e01cf0

@end
