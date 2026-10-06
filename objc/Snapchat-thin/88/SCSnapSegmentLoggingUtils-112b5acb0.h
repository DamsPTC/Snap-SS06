// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapSegmentLoggingUtils
// Superclass: NSObject
// Address: 0x112b5acb0

@interface SCSnapSegmentLoggingUtils


// +[SCSnapSegmentLoggingUtils detailedCameraModesFromModesArray:modesInfo:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x107032138

// +[SCSnapSegmentLoggingUtils cameraModesInfoFromDetailedCameraModes:]
// Type encoding: @24@0:8@16
// Implementation: 0x10703231c

// +[SCSnapSegmentLoggingUtils segmentCreateEventForSegment:snapSessionId:cameraMode:]
// Type encoding: @40@0:8@16@24q32
// Implementation: 0x107032388

// +[SCSnapSegmentLoggingUtils segmentCreateForImportedMediaContent:importedContentId:sourceAsset:segment:snapSessionId:cameraMode:spotlightMetadata:directorModeSource:]
// Type encoding: @80@0:8@16@24@32@40@48q56@64q72
// Implementation: 0x107032530

// +[SCSnapSegmentLoggingUtils timelineSegmentCreateForImportedMediaContent:importedContentId:sourceAsset:segment:snapSessionId:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x10703298c

// +[SCSnapSegmentLoggingUtils directSegmentSourceWithImportedMediaContent:sourceAsset:]
// Type encoding: q32@0:8@16@24
// Implementation: 0x107032e4c

@end
