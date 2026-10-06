// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: LCVCoreSystem
// Superclass: NSObject
// Address: 0x112bf78f8

@interface LCVCoreSystem


// -[LCVCoreSystem initWithExtractionParams:withInputType:withCalibrationFilePath:]
// Type encoding: @40@0:8q16q24@32
// Implementation: 0x1092270b4

// -[LCVCoreSystem initWithExtractionParams:withInputType:withCalibrationFilePath:withClassifierDataPath:withAdjustmentFilePath:withContentFilePath:]
// Type encoding: @64@0:8q16q24@32@40@48@56
// Implementation: 0x1092272b8

// -[LCVCoreSystem setImuData:]
// Type encoding: v24@0:8@16
// Implementation: 0x109227588

// -[LCVCoreSystem setPoseData:withRectifiedLeftFromImuTransformation:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1092276b0

// -[LCVCoreSystem nativeInputDeviceFromInputDevice:]
// Type encoding: C24@0:8q16
// Implementation: 0x109227c64

// -[LCVCoreSystem nativeInputTypeFromInputType:]
// Type encoding: C24@0:8q16
// Implementation: 0x109227c70

// -[LCVCoreSystem extractCalibration:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x109227c80

// -[LCVCoreSystem extractDepthForPrimaryCamera:withFrameOutputCallback:withProgressCallback:prepareForStorage:extractBothSides:error:]
// Type encoding: v56@0:8q16@?24@?32B40B44^@48
// Implementation: 0x109227e30

// -[LCVCoreSystem .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109228460

// -[LCVCoreSystem .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x109228518

// +[LCVCoreSystem concatPoses:toPoseData:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10922830c

@end
