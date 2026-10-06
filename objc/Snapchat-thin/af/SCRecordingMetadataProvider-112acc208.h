// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCRecordingMetadataProvider
// Superclass: NSObject
// Address: 0x112acc208

@interface SCRecordingMetadataProvider

// Property: performer; attributes: T@"<SCPerforming>",&,N,V_performer
// Property: recordingMetadata; attributes: T@"NSArray",R,N
// Property: deviceMotionData; attributes: T@"NSArray",R,N
// Property: accelerometerData; attributes: T@"NSArray",R,N
// Property: gyroData; attributes: T@"NSArray",R,N
// Property: firstCameraCaptureTimestamp; attributes: T{?=qiIq},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCRecordingMetadataProvider initWithDeviceMotionCaptureFeatureProvider:]
// Type encoding: @24@0:8@16
// Implementation: 0x1008d6bf4

// -[SCRecordingMetadataProvider dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10611bf04

// -[SCRecordingMetadataProvider recordingMetadata]
// Type encoding: @16@0:8
// Implementation: 0x10611bf48

// -[SCRecordingMetadataProvider deviceMotionData]
// Type encoding: @16@0:8
// Implementation: 0x10611bf60

// -[SCRecordingMetadataProvider gyroData]
// Type encoding: @16@0:8
// Implementation: 0x10611bf78

// -[SCRecordingMetadataProvider accelerometerData]
// Type encoding: @16@0:8
// Implementation: 0x10611bf90

// -[SCRecordingMetadataProvider firstCameraCaptureTimestamp]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10611bfa8

// -[SCRecordingMetadataProvider startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1008d6cf4

// -[SCRecordingMetadataProvider stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x10611c304

// -[SCRecordingMetadataProvider _didCancelRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611c330

// -[SCRecordingMetadataProvider _willCapturePhoto:sampleMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611c378

// -[SCRecordingMetadataProvider _didBeginVideoRecording:session:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10611c428

// -[SCRecordingMetadataProvider _didAppendVideoSampleBuffer:sampleMetadata:]
// Type encoding: v48@0:8{?=qiIq}16@40
// Implementation: 0x10611c4c8

// -[SCRecordingMetadataProvider performer]
// Type encoding: @16@0:8
// Implementation: 0x10611c8b4

// -[SCRecordingMetadataProvider setPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10611c8bc

// -[SCRecordingMetadataProvider .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10611c8ec

@end
