// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedVideoCapturerHandlerImpl
// Superclass: NSObject
// Address: 0x112be2cc8

@interface SCManagedVideoCapturerHandlerImpl

// Property: cameraCaptureLensProvider; attributes: T@"<SCCameraCaptureLensProviding>",&,N,VcameraCaptureLensProvider
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCManagedVideoCapturerHandlerImpl initWithCaptureResource:deviceCapacityAnalyzer:captureDeviceManager:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x100c267a4

// -[SCManagedVideoCapturerHandlerImpl videoFrameSampler]
// Type encoding: @16@0:8
// Implementation: 0x109047aac

// -[SCManagedVideoCapturerHandlerImpl sampleNextFrame:]
// Type encoding: v24@0:8@?16
// Implementation: 0x109047afc

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturerWillBeginVideoRecording:]
// Type encoding: v24@0:8@16
// Implementation: 0x109047b4c

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didBeginVideoRecording:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109047d38

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didBeginAudioRecording:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109047f44

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:willStopWithRecordedVideoFuture:videoSize:placeholderImage:session:]
// Type encoding: v64@0:8@16@24{CGSize=dd}32@48@56
// Implementation: 0x10904805c

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didSucceedWithRecordedVideo:session:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x109048318

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didFailWithError:session:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1090485d8

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didCancelVideoRecording:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109048898

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didGetError:forType:session:]
// Type encoding: v48@0:8@16@24q32@40
// Implementation: 0x109048b1c

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturerGetExtraFrameHealthInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x109048be4

// -[SCManagedVideoCapturerHandlerImpl managedVideoCapturer:didAppendVideoSampleBuffer:presentationTimestamp:]
// Type encoding: v56@0:8@16^{opaqueCMSampleBuffer=}24{?=qiIq}32
// Implementation: 0x109048da8

// -[SCManagedVideoCapturerHandlerImpl _videoRecordingCleanupWithVideoCapturer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10904915c

// -[SCManagedVideoCapturerHandlerImpl cameraCaptureLensProvider]
// Type encoding: @16@0:8
// Implementation: 0x1090493dc

// -[SCManagedVideoCapturerHandlerImpl setCameraCaptureLensProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c26e70

// -[SCManagedVideoCapturerHandlerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090493e4

@end
