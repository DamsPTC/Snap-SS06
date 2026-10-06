// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCapturerStateMediaCaptureUpdate
// Superclass: NSObject
// Address: 0x1129ac880

@interface SCCapturerStateMediaCaptureUpdate

// Property: description; attributes: T@"NSString",N,R

// -[SCCapturerStateMediaCaptureUpdate description]
// Type encoding: @16@0:8
// Implementation: 0x1043d876c

// -[SCCapturerStateMediaCaptureUpdate init]
// Type encoding: @16@0:8
// Implementation: 0x1043d9d14

// -[SCCapturerStateMediaCaptureUpdate copyWithZone:]
// Type encoding: @24@0:8^v16
// Implementation: 0x1043d9d5c

// -[SCCapturerStateMediaCaptureUpdate onWillBeginVideoRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da224

// -[SCCapturerStateMediaCaptureUpdate onDidBeginVideoRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da2c8

// -[SCCapturerStateMediaCaptureUpdate onDidBeginAudioRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da360

// -[SCCapturerStateMediaCaptureUpdate onWillFinishRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da430

// -[SCCapturerStateMediaCaptureUpdate onDidFinishRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da4d4

// -[SCCapturerStateMediaCaptureUpdate onDidFailRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da578

// -[SCCapturerStateMediaCaptureUpdate onDidCancelRecording:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da610

// -[SCCapturerStateMediaCaptureUpdate onDidGetError:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da6c8

// -[SCCapturerStateMediaCaptureUpdate onDidAppendVideoSampleBuffer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da778

// -[SCCapturerStateMediaCaptureUpdate onWillCapturePhoto:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da810

// -[SCCapturerStateMediaCaptureUpdate onDidCapturePhoto:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1043da898

// -[SCCapturerStateMediaCaptureUpdate .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1043da920

// +[SCCapturerStateMediaCaptureUpdate willBeginVideoRecordingWithState:]
// Type encoding: @24@0:8@16
// Implementation: 0x1043d9d64

// +[SCCapturerStateMediaCaptureUpdate didBeginVideoRecordingWithState:session:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1043d9da8

// +[SCCapturerStateMediaCaptureUpdate didBeginAudioRecordingWithState:session:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1043d9e10

// +[SCCapturerStateMediaCaptureUpdate willFinishRecordingWithState:session:recordedVideoFuture:videoSize:placeholderImage:]
// Type encoding: @64@0:8@16@24@32{CGSize=dd}40@56
// Implementation: 0x1043d9e78

// +[SCCapturerStateMediaCaptureUpdate didFinishRecordingWithState:session:recordedVideo:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1043d9f40

// +[SCCapturerStateMediaCaptureUpdate didFailRecordingWithState:session:error:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x1043d9f50

// +[SCCapturerStateMediaCaptureUpdate didCancelRecordingWithState:session:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1043d9ff4

// +[SCCapturerStateMediaCaptureUpdate didGetErrorWithError:type:session:]
// Type encoding: @40@0:8@16q24@32
// Implementation: 0x1043da05c

// +[SCCapturerStateMediaCaptureUpdate didAppendVideoSampleBufferWithPresentationTime:sampleMetadata:]
// Type encoding: @48@0:8{?=qiIq}16@40
// Implementation: 0x1043da0d4

// +[SCCapturerStateMediaCaptureUpdate willCapturePhotoWithState:sampleMetadata:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1043da13c

// +[SCCapturerStateMediaCaptureUpdate didCapturePhotoWithState:]
// Type encoding: @24@0:8@16
// Implementation: 0x1043da1a4

@end
