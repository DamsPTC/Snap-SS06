// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: CvAbstractCamera
// Superclass: NSObject
// Address: 0x112bf8028

@interface CvAbstractCamera

// Property: captureVideoPreviewLayer; attributes: T@"AVCaptureVideoPreviewLayer",&,N,VcaptureVideoPreviewLayer
// Property: captureSession; attributes: T@"AVCaptureSession",&,N,VcaptureSession
// Property: videoCaptureConnection; attributes: T@"AVCaptureConnection",&,N,VvideoCaptureConnection
// Property: running; attributes: TB,R,N,Vrunning
// Property: captureSessionLoaded; attributes: TB,R,N,VcaptureSessionLoaded
// Property: defaultFPS; attributes: Ti,N,VdefaultFPS
// Property: defaultAVCaptureDevicePosition; attributes: Tq,N,VdefaultAVCaptureDevicePosition
// Property: defaultAVCaptureVideoOrientation; attributes: Tq,N,VdefaultAVCaptureVideoOrientation
// Property: useAVCaptureVideoPreviewLayer; attributes: TB,N,VuseAVCaptureVideoPreviewLayer
// Property: defaultAVCaptureSessionPreset; attributes: T@"NSString",&,N,VdefaultAVCaptureSessionPreset
// Property: imageWidth; attributes: Ti,N,VimageWidth
// Property: imageHeight; attributes: Ti,N,VimageHeight
// Property: parentView; attributes: T@"UIView",&,N,VparentView

// -[CvAbstractCamera init]
// Type encoding: @16@0:8
// Implementation: 0x109b827cc

// -[CvAbstractCamera initWithParentView:]
// Type encoding: @24@0:8@16
// Implementation: 0x109b828f0

// -[CvAbstractCamera dealloc]
// Type encoding: v16@0:8
// Implementation: 0x109b82a20

// -[CvAbstractCamera start]
// Type encoding: v16@0:8
// Implementation: 0x109b82a84

// -[CvAbstractCamera pause]
// Type encoding: v16@0:8
// Implementation: 0x109b82b10

// -[CvAbstractCamera stop]
// Type encoding: v16@0:8
// Implementation: 0x109b82b28

// -[CvAbstractCamera switchCameras]
// Type encoding: v16@0:8
// Implementation: 0x109b82cf4

// -[CvAbstractCamera deviceOrientationDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b82d64

// -[CvAbstractCamera createCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x109b82dbc

// -[CvAbstractCamera createCaptureDevice]
// Type encoding: v16@0:8
// Implementation: 0x109b82e84

// -[CvAbstractCamera createVideoPreviewLayer]
// Type encoding: v16@0:8
// Implementation: 0x109b82f38

// -[CvAbstractCamera setDesiredCameraPosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x109b830a0

// -[CvAbstractCamera startCaptureSession]
// Type encoding: v16@0:8
// Implementation: 0x109b83310

// -[CvAbstractCamera createCaptureOutput]
// Type encoding: v16@0:8
// Implementation: 0x109b8338c

// -[CvAbstractCamera createCustomVideoPreview]
// Type encoding: v16@0:8
// Implementation: 0x109b833e0

// -[CvAbstractCamera updateOrientation]
// Type encoding: v16@0:8
// Implementation: 0x109b83434

// -[CvAbstractCamera updateSize]
// Type encoding: v16@0:8
// Implementation: 0x109b83438

// -[CvAbstractCamera lockFocus]
// Type encoding: v16@0:8
// Implementation: 0x109b83560

// -[CvAbstractCamera unlockFocus]
// Type encoding: v16@0:8
// Implementation: 0x109b835ec

// -[CvAbstractCamera lockExposure]
// Type encoding: v16@0:8
// Implementation: 0x109b83678

// -[CvAbstractCamera unlockExposure]
// Type encoding: v16@0:8
// Implementation: 0x109b83704

// -[CvAbstractCamera lockBalance]
// Type encoding: v16@0:8
// Implementation: 0x109b83790

// -[CvAbstractCamera unlockBalance]
// Type encoding: v16@0:8
// Implementation: 0x109b8381c

// -[CvAbstractCamera imageWidth]
// Type encoding: i16@0:8
// Implementation: 0x109b838a8

// -[CvAbstractCamera setImageWidth:]
// Type encoding: v20@0:8i16
// Implementation: 0x109b838b0

// -[CvAbstractCamera imageHeight]
// Type encoding: i16@0:8
// Implementation: 0x109b838b8

// -[CvAbstractCamera setImageHeight:]
// Type encoding: v20@0:8i16
// Implementation: 0x109b838c0

// -[CvAbstractCamera defaultFPS]
// Type encoding: i16@0:8
// Implementation: 0x109b838c8

// -[CvAbstractCamera setDefaultFPS:]
// Type encoding: v20@0:8i16
// Implementation: 0x109b838d0

// -[CvAbstractCamera defaultAVCaptureDevicePosition]
// Type encoding: q16@0:8
// Implementation: 0x109b838d8

// -[CvAbstractCamera setDefaultAVCaptureDevicePosition:]
// Type encoding: v24@0:8q16
// Implementation: 0x109b838e0

// -[CvAbstractCamera defaultAVCaptureVideoOrientation]
// Type encoding: q16@0:8
// Implementation: 0x109b838e8

// -[CvAbstractCamera setDefaultAVCaptureVideoOrientation:]
// Type encoding: v24@0:8q16
// Implementation: 0x109b838f0

// -[CvAbstractCamera defaultAVCaptureSessionPreset]
// Type encoding: @16@0:8
// Implementation: 0x109b838f8

// -[CvAbstractCamera setDefaultAVCaptureSessionPreset:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b83900

// -[CvAbstractCamera captureSession]
// Type encoding: @16@0:8
// Implementation: 0x109b83908

// -[CvAbstractCamera setCaptureSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b83910

// -[CvAbstractCamera captureVideoPreviewLayer]
// Type encoding: @16@0:8
// Implementation: 0x109b83918

// -[CvAbstractCamera setCaptureVideoPreviewLayer:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b83920

// -[CvAbstractCamera videoCaptureConnection]
// Type encoding: @16@0:8
// Implementation: 0x109b83928

// -[CvAbstractCamera setVideoCaptureConnection:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b83930

// -[CvAbstractCamera running]
// Type encoding: B16@0:8
// Implementation: 0x109b83938

// -[CvAbstractCamera captureSessionLoaded]
// Type encoding: B16@0:8
// Implementation: 0x109b83940

// -[CvAbstractCamera useAVCaptureVideoPreviewLayer]
// Type encoding: B16@0:8
// Implementation: 0x109b83948

// -[CvAbstractCamera setUseAVCaptureVideoPreviewLayer:]
// Type encoding: v20@0:8B16
// Implementation: 0x109b83950

// -[CvAbstractCamera parentView]
// Type encoding: @16@0:8
// Implementation: 0x109b83958

// -[CvAbstractCamera setParentView:]
// Type encoding: v24@0:8@16
// Implementation: 0x109b83960

@end
