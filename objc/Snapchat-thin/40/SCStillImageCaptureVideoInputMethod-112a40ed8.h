// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCStillImageCaptureVideoInputMethod
// Superclass: NSObject
// Address: 0x112a40ed8

@interface SCStillImageCaptureVideoInputMethod

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCStillImageCaptureVideoInputMethod initWithCameraHardwareResource:]
// Type encoding: @24@0:8@16
// Implementation: 0x1054d5520

// -[SCStillImageCaptureVideoInputMethod captureStillImageWithCapturerState:videoDataSource:successBlock:failureBlock:]
// Type encoding: v48@0:8@16@24@?32@?40
// Implementation: 0x1054d558c

// -[SCStillImageCaptureVideoInputMethod flipCGImage:size:]
// Type encoding: @40@0:8^{CGImage=}16{CGSize=dd}24
// Implementation: 0x1054d5898

// -[SCStillImageCaptureVideoInputMethod imageWithCVPixelBuffer:]
// Type encoding: @24@0:8^{__CVBuffer=}16
// Implementation: 0x1054d58fc

// -[SCStillImageCaptureVideoInputMethod methodName]
// Type encoding: @16@0:8
// Implementation: 0x1054d5af0

// -[SCStillImageCaptureVideoInputMethod .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054d5afc

@end
