// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapRendererBackupTranscodingImpl
// Superclass: NSObject
// Address: 0x112b49668

@interface SCSnapRendererBackupTranscodingImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapRendererBackupTranscodingImpl initWithSnapRendererLogger:snapDocEditorFactory:memoriesBackupTranscoder:circumstanceEngine:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106f3cb6c

// -[SCSnapRendererBackupTranscodingImpl _shouldSkipRawMediaTranscode]
// Type encoding: B16@0:8
// Implementation: 0x106f3cc90

// -[SCSnapRendererBackupTranscodingImpl requiresRenderPlugins]
// Type encoding: B16@0:8
// Implementation: 0x106f3cca8

// -[SCSnapRendererBackupTranscodingImpl renderSnapDoc:watermarkProfile:toResponse:toDestination:snapSource:withPlugins:]
// Type encoding: v64@0:8@16@24@32q40q48@56
// Implementation: 0x106f3ccb0

// -[SCSnapRendererBackupTranscodingImpl _transcodeWithHardTrimForEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3cf78

// -[SCSnapRendererBackupTranscodingImpl _transcodeWithSoftTrimForEditor:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3d460

// -[SCSnapRendererBackupTranscodingImpl _transcodeAndUpdateMediaReferenceWithMetadata:localCacheKey:timeRange:editor:memoriesBackupTranscoder:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x106f3d758

// -[SCSnapRendererBackupTranscodingImpl _transcodeAndInsertMediaReferenceWithMetadata:playbackLayer:localCacheKey:timeRange:toEditor:memoriesBackupTranscoder:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x106f3dbfc

// -[SCSnapRendererBackupTranscodingImpl _timeRangeForPlaybackLayer:]
// Type encoding: @24@0:8@16
// Implementation: 0x106f3e41c

// -[SCSnapRendererBackupTranscodingImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f3e54c

@end
