// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCManagedAudioStreamer
// Superclass: NSObject
// Address: 0x112bf1b38

@interface SCManagedAudioStreamer

// Property: audioCaptureSession; attributes: T@"<SCAudioCaptureSession>",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: isStreaming; attributes: TB,R,N
// Property: performer; attributes: T@"<SCPerforming>",R,N,V_performer

// -[SCManagedAudioStreamer initSharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10068c694

// -[SCManagedAudioStreamer isStreaming]
// Type encoding: B16@0:8
// Implementation: 0x10919ff04

// -[SCManagedAudioStreamer startStreamingWithAudioConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x10919ff14

// -[SCManagedAudioStreamer stopStreaming]
// Type encoding: v16@0:8
// Implementation: 0x1091a0098

// -[SCManagedAudioStreamer addListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x10068ccf0

// -[SCManagedAudioStreamer removeListener:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091a0188

// -[SCManagedAudioStreamer audioCaptureSession:didOutputSampleBuffer:]
// Type encoding: v32@0:8@16^{opaqueCMSampleBuffer=}24
// Implementation: 0x1091a0190

// -[SCManagedAudioStreamer _processCachedSampleBuffer]
// Type encoding: v16@0:8
// Implementation: 0x1091a02bc

// -[SCManagedAudioStreamer audioCaptureSession]
// Type encoding: @16@0:8
// Implementation: 0x1091a0314

// -[SCManagedAudioStreamer performer]
// Type encoding: @16@0:8
// Implementation: 0x1091a03ac

// -[SCManagedAudioStreamer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091a03b4

// +[SCManagedAudioStreamer sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x10068c420

@end
