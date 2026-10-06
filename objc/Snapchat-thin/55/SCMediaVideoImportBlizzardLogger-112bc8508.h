// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaVideoImportBlizzardLogger
// Superclass: NSObject
// Address: 0x112bc8508

@interface SCMediaVideoImportBlizzardLogger


// -[SCMediaVideoImportBlizzardLogger initWithUserBlizzardLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x108eadaf4

// -[SCMediaVideoImportBlizzardLogger logCameraRollMediaImportWithAVAsset:outputURL:mediaImportStage:transcodingStatus:startTime:context:importedContentId:retryCount:skipTranscodingFailureReason:currentPreset:error:]
// Type encoding: v104@0:8@16@24q32q40d48@56@64q72q80@88@96
// Implementation: 0x108eadbb8

// -[SCMediaVideoImportBlizzardLogger _addEvent:latencyMs:withContentId:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x108eade7c

// -[SCMediaVideoImportBlizzardLogger _getAndRemoveEventWithContentId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108eadf44

// -[SCMediaVideoImportBlizzardLogger _getAndRemoveLatencyWithContentId:]
// Type encoding: q24@0:8@16
// Implementation: 0x108eadfd4

// -[SCMediaVideoImportBlizzardLogger _imageOrientationIsMirrored:]
// Type encoding: B24@0:8q16
// Implementation: 0x108eae090

// -[SCMediaVideoImportBlizzardLogger _appendOutputMedatataWithEvent:outputVideoURL:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108eae0a0

// -[SCMediaVideoImportBlizzardLogger _appendInputMedatataWithEvent:avAsset:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108eae290

// -[SCMediaVideoImportBlizzardLogger _appendError:withEvent:mediaImportStage:]
// Type encoding: v40@0:8@16@24q32
// Implementation: 0x108eae8c0

// -[SCMediaVideoImportBlizzardLogger _appendSkipTranscodingFailureReason:withEvent:outputVideoURL:]
// Type encoding: v40@0:8q16@24@32
// Implementation: 0x108eaea4c

// -[SCMediaVideoImportBlizzardLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108eaec3c

@end
