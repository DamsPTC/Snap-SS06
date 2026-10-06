// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCARImageCapturer
// Superclass: NSObject
// Address: 0x112be2138

@interface SCARImageCapturer

// Property: isCapturingPhoto; attributes: TB,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCARImageCapturer initWithCaptureResource:captureDeviceManager:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x100c26ea0

// -[SCARImageCapturer isCapturingPhoto]
// Type encoding: B16@0:8
// Implementation: 0x100c2ce50

// -[SCARImageCapturer setIsCapturingPhoto:]
// Type encoding: v20@0:8B16
// Implementation: 0x109032364

// -[SCARImageCapturer captureStillImageWithCaptureConfiguration:completionHandler:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109032370

// -[SCARImageCapturer dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10903242c

// -[SCARImageCapturer startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c27054

// -[SCARImageCapturer stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x109032668

// -[SCARImageCapturer _orientationOfImageCreatedFromVideoSourceWithDevicePosition:]
// Type encoding: q24@0:8q16
// Implementation: 0x109032694

// -[SCARImageCapturer _didReceiveManagedVideoDataSourceEvent:sampleTimestamp:devicePosition:]
// Type encoding: v56@0:8@16{?=qiIq}24q48
// Implementation: 0x100c2d434

// -[SCARImageCapturer _orientationForIpadWithPosition:]
// Type encoding: q24@0:8q16
// Implementation: 0x109032814

// -[SCARImageCapturer isAsync]
// Type encoding: B16@0:8
// Implementation: 0x10903286c

// -[SCARImageCapturer observeSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109032874

// -[SCARImageCapturer observeSampleBufferAsynchronously:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x109032948

// -[SCARImageCapturer willCaptureARImage]
// Type encoding: v16@0:8
// Implementation: 0x10903294c

// -[SCARImageCapturer didCaptureARImage]
// Type encoding: v16@0:8
// Implementation: 0x109032b44

// -[SCARImageCapturer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109032c54

@end
