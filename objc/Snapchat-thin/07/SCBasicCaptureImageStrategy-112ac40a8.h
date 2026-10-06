// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBasicCaptureImageStrategy
// Superclass: NSObject
// Address: 0x112ac40a8

@interface SCBasicCaptureImageStrategy

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBasicCaptureImageStrategy initWithImageCaptureStrategyEvents:cameraHardwareServicesAPI:cameraCaptureRequestHandler:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10608f040

// -[SCBasicCaptureImageStrategy captureWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608f130

// -[SCBasicCaptureImageStrategy captureImageWithConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608f178

// -[SCBasicCaptureImageStrategy completeWithStillImageData:discardRelatedData:configuration:currentCapturerState:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x10608f3c0

// -[SCBasicCaptureImageStrategy completeWithError:configuration:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10608f404

// -[SCBasicCaptureImageStrategy _takeImageCallback:directSnapDiscard:captureConfiguration:currentCaptureState:error:]
// Type encoding: v56@0:8@16@24@32@40@48
// Implementation: 0x10608f448

// -[SCBasicCaptureImageStrategy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10608f61c

@end
