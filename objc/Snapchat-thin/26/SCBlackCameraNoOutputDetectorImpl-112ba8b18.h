// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlackCameraNoOutputDetectorImpl
// Superclass: NSObject
// Address: 0x112ba8b18

@interface SCBlackCameraNoOutputDetectorImpl

// Property: queuePerformer; attributes: T@"SCQueuePerformer",&,N,V_queuePerformer
// Property: sampleBufferReceived; attributes: TB,N,V_sampleBufferReceived
// Property: delegate; attributes: T@"<SCBlackCameraDetectorDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlackCameraNoOutputDetectorImpl initWithAppStartExperimentReader:]
// Type encoding: @24@0:8@16
// Implementation: 0x1000e74cc

// -[SCBlackCameraNoOutputDetectorImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1085a7fb8

// -[SCBlackCameraNoOutputDetectorImpl startObservingManagedVideoDataSourceOutputEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c24ce4

// -[SCBlackCameraNoOutputDetectorImpl stopObservingManagedVideoDataSourceOutputEvent]
// Type encoding: v16@0:8
// Implementation: 0x1085a8014

// -[SCBlackCameraNoOutputDetectorImpl _didReceiveManagedVideoDataSouceEvent:sampleTimestamp:devicePosition:]
// Type encoding: v56@0:8^{opaqueCMSampleBuffer=}16{?=qiIq}24q48
// Implementation: 0x100c2d09c

// -[SCBlackCameraNoOutputDetectorImpl _cancelCheck]
// Type encoding: v16@0:8
// Implementation: 0x1085a8040

// -[SCBlackCameraNoOutputDetectorImpl _scheduleCheck]
// Type encoding: v16@0:8
// Implementation: 0x100c79e58

// -[SCBlackCameraNoOutputDetectorImpl _checkState]
// Type encoding: v16@0:8
// Implementation: 0x1085a8190

// -[SCBlackCameraNoOutputDetectorImpl sessionRuntimeError]
// Type encoding: v16@0:8
// Implementation: 0x1085a81ec

// -[SCBlackCameraNoOutputDetectorImpl startObservingCapturerStateUpdate:state:managedCapturerStateCoordinator:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x100c24b50

// -[SCBlackCameraNoOutputDetectorImpl stopObservingCapturerStateUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1085a8274

// -[SCBlackCameraNoOutputDetectorImpl _sessionDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x1085a82a0

// -[SCBlackCameraNoOutputDetectorImpl _capturerDidStartRunning]
// Type encoding: v16@0:8
// Implementation: 0x100c716e4

// -[SCBlackCameraNoOutputDetectorImpl _scheduleCheckIfNotInBackground]
// Type encoding: v16@0:8
// Implementation: 0x100c716e8

// -[SCBlackCameraNoOutputDetectorImpl _sessionDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x1085a82a4

// -[SCBlackCameraNoOutputDetectorImpl _capturerDidStopRunning]
// Type encoding: v16@0:8
// Implementation: 0x1085a82a8

// -[SCBlackCameraNoOutputDetectorImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1085a82ac

// -[SCBlackCameraNoOutputDetectorImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c24804

// -[SCBlackCameraNoOutputDetectorImpl queuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x100c2d164

// -[SCBlackCameraNoOutputDetectorImpl setQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085a82c4

// -[SCBlackCameraNoOutputDetectorImpl sampleBufferReceived]
// Type encoding: B16@0:8
// Implementation: 0x1085a82f4

// -[SCBlackCameraNoOutputDetectorImpl setSampleBufferReceived:]
// Type encoding: v20@0:8B16
// Implementation: 0x1085a82fc

// -[SCBlackCameraNoOutputDetectorImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1085a8304

@end
