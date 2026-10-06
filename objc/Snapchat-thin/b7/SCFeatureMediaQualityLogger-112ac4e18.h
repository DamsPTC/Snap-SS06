// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCFeatureMediaQualityLogger
// Superclass: SCFeature
// Address: 0x112ac4e18

@interface SCFeatureMediaQualityLogger


// -[SCFeatureMediaQualityLogger initWithBlurryScoreConfig:blizzardLogger:cameraHardwareResource:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1060c165c

// -[SCFeatureMediaQualityLogger beginObservingVideoCaptureEvents:imageCaptureEvents:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1060c1740

// -[SCFeatureMediaQualityLogger _onDidCaptureImageWithStillImageData:discardRelatedData:configuration:currentCaptureState:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1060c1980

// -[SCFeatureMediaQualityLogger _updateBlurryScoreSampleRateWithConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1060c1b7c

// -[SCFeatureMediaQualityLogger _logMediaQualityInfoWithImage:captureSessionId:hasLens:isFrontFacing:lowLightCondition:isMainCamera:metadata:]
// Type encoding: v56@0:8@16@24B32B36B40B44@48
// Implementation: 0x1060c1c74

// -[SCFeatureMediaQualityLogger _shouldSampleWithRate:]
// Type encoding: B20@0:8f16
// Implementation: 0x1060c1fcc

// -[SCFeatureMediaQualityLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1060c2018

@end
