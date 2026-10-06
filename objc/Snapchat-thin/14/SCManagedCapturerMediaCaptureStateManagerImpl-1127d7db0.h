// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedCapturerMediaCaptureStateManagerImpl
// Superclass: NSObject
// Address: 0x1127d7db0

@interface SCManagedCapturerMediaCaptureStateManagerImpl

// Property: updateObservable; attributes: T@,N,R

// -[SCManagedCapturerMediaCaptureStateManagerImpl updateObservable]
// Type encoding: @16@0:8
// Implementation: 0x10068ae7c

// -[SCManagedCapturerMediaCaptureStateManagerImpl willBeginVideoRecording]
// Type encoding: v16@0:8
// Implementation: 0x101456e98

// -[SCManagedCapturerMediaCaptureStateManagerImpl didBeginVideoRecordingWithSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x101456eb0

// -[SCManagedCapturerMediaCaptureStateManagerImpl didBeginAudioRecordingWithSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x101456ec8

// -[SCManagedCapturerMediaCaptureStateManagerImpl willFinishRecordingWithSession:recordedVideoFuture:videoSize:placeholderImage:]
// Type encoding: v56@0:8@16@24{CGSize=dd}32@48
// Implementation: 0x101457004

// -[SCManagedCapturerMediaCaptureStateManagerImpl didFinishRecordingWithSession:recordedVideo:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x101457114

// -[SCManagedCapturerMediaCaptureStateManagerImpl didFailRecordingWithSession:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x101457240

// -[SCManagedCapturerMediaCaptureStateManagerImpl didCancelRecordingWithSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x101457324

// -[SCManagedCapturerMediaCaptureStateManagerImpl didGetErrorWithError:type:session:]
// Type encoding: v40@0:8@16q24@32
// Implementation: 0x101457380

// -[SCManagedCapturerMediaCaptureStateManagerImpl didAppendVideoSampleBufferWithPresentationTime:sampleMetadata:]
// Type encoding: v48@0:8{?=qiIq}16@40
// Implementation: 0x101457478

// -[SCManagedCapturerMediaCaptureStateManagerImpl willCapturePhotoWithSampleMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x101457618

// -[SCManagedCapturerMediaCaptureStateManagerImpl didCapturePhoto]
// Type encoding: v16@0:8
// Implementation: 0x1014577d4

// -[SCManagedCapturerMediaCaptureStateManagerImpl init]
// Type encoding: @16@0:8
// Implementation: 0x101457864

// -[SCManagedCapturerMediaCaptureStateManagerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1014578c4

@end
