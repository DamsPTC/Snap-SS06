// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CvVideoCamera
// Superclass: CvAbstractCamera
// Address: 0x112bf80c8

@interface CvVideoCamera

// Property: customPreviewLayer; attributes: T@"CALayer",&,N,VcustomPreviewLayer
// Property: videoDataOutput; attributes: T@"AVCaptureVideoDataOutput",&,N,VvideoDataOutput
// Property: delegate; attributes: T@"<CvVideoCameraDelegate>",N,Vdelegate
// Property: grayscaleMode; attributes: TB,N,VgrayscaleMode
// Property: recordVideo; attributes: TB,N,VrecordVideo
// Property: rotateVideo; attributes: TB,N,VrotateVideo
// Property: recordAssetWriterInput; attributes: T@"AVAssetWriterInput",&,N,VrecordAssetWriterInput
// Property: recordPixelBufferAdaptor; attributes: T@"AVAssetWriterInputPixelBufferAdaptor",&,N,VrecordPixelBufferAdaptor
// Property: recordAssetWriter; attributes: T@"AVAssetWriter",&,N,VrecordAssetWriter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[CvVideoCamera initWithParentView:]
// Type encoding: @24@0:8@16
// Implementation: 0x109b83e30

// -[CvVideoCamera start]
// Type encoding: v16@0:8
// Implementation: 0x109b83e9c

// -[CvVideoCamera stop]
// Type encoding: v16@0:8
// Implementation: 0x109b83f70

// -[CvVideoCamera adjustLayoutToInterfaceOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x109b84050

// -[CvVideoCamera layoutPreviewLayer]
// Type encoding: v16@0:8
// Implementation: 0x109b84230

// -[CvVideoCamera createVideoDataOutput]
// Type encoding: v16@0:8
// Implementation: 0x109b843f8

// -[CvVideoCamera createVideoFileOutput]
// Type encoding: v16@0:8
// Implementation: 0x109b84734

// -[CvVideoCamera createCaptureOutput]
// Type encoding: v16@0:8
// Implementation: 0x109b8496c

// -[CvVideoCamera createCustomVideoPreview]
// Type encoding: v16@0:8
// Implementation: 0x109b849a8

// -[CvVideoCamera pixelBufferFromCGImage:]
// Type encoding: ^{__CVBuffer=}24@0:8^{CGImage=}16
// Implementation: 0x109b849e0

// -[CvVideoCamera captureOutput:didOutputSampleBuffer:fromConnection:]
// Type encoding: v40@0:8@16^{opaqueCMSampleBuffer=}24@32
// Implementation: 0x109b84bc0

// -[CvVideoCamera updateOrientation]
// Type encoding: v16@0:8
// Implementation: 0x109b850ec

// -[CvVideoCamera saveVideo]
// Type encoding: v16@0:8
// Implementation: 0x109b85174

// -[CvVideoCamera videoFileURL]
// Type encoding: @16@0:8
// Implementation: 0x109b851c8

// -[CvVideoCamera videoFileString]
// Type encoding: @16@0:8
// Implementation: 0x109b85258

// -[CvVideoCamera delegate]
// Type encoding: @16@0:8
// Implementation: 0x109b852a8

// -[CvVideoCamera setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b852b8

// -[CvVideoCamera grayscaleMode]
// Type encoding: B16@0:8
// Implementation: 0x109b852c8

// -[CvVideoCamera setGrayscaleMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x109b852d8

// -[CvVideoCamera customPreviewLayer]
// Type encoding: @16@0:8
// Implementation: 0x109b852e8

// -[CvVideoCamera setCustomPreviewLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b852f8

// -[CvVideoCamera videoDataOutput]
// Type encoding: @16@0:8
// Implementation: 0x109b85304

// -[CvVideoCamera setVideoDataOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b85314

// -[CvVideoCamera recordVideo]
// Type encoding: B16@0:8
// Implementation: 0x109b85320

// -[CvVideoCamera setRecordVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x109b85330

// -[CvVideoCamera rotateVideo]
// Type encoding: B16@0:8
// Implementation: 0x109b85340

// -[CvVideoCamera setRotateVideo:]
// Type encoding: v20@0:8B16
// Implementation: 0x109b85350

// -[CvVideoCamera recordAssetWriterInput]
// Type encoding: @16@0:8
// Implementation: 0x109b85360

// -[CvVideoCamera setRecordAssetWriterInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b85370

// -[CvVideoCamera recordPixelBufferAdaptor]
// Type encoding: @16@0:8
// Implementation: 0x109b8537c

// -[CvVideoCamera setRecordPixelBufferAdaptor:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b8538c

// -[CvVideoCamera recordAssetWriter]
// Type encoding: @16@0:8
// Implementation: 0x109b85398

// -[CvVideoCamera setRecordAssetWriter:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b853a8

@end
