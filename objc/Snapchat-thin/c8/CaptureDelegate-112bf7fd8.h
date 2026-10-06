// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CaptureDelegate
// Superclass: NSObject
// Address: 0x112bf7fd8

@interface CaptureDelegate

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CaptureDelegate init]
// Type encoding: @16@0:8
// Implementation: 0x109b824a0

// -[CaptureDelegate dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109b824f8

// -[CaptureDelegate captureOutput:didOutputSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x109b82568

// -[CaptureDelegate getOutput]
// Type encoding: ^{_IplImage=iiiii[4c][4c]iiiii^{_IplROI}^{_IplImage}^v^{_IplTileInfo}i*i[4i][4i]*}16@0:8
// Implementation: 0x109b825c0

// -[CaptureDelegate updateImage]
// Type encoding: i16@0:8
// Implementation: 0x109b825c8

@end
