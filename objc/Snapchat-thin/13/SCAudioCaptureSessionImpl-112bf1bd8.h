// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAudioCaptureSessionImpl
// Superclass: NSObject
// Address: 0x112bf1bd8

@interface SCAudioCaptureSessionImpl

// Property: providerDelegate; attributes: T@"<SCAudioCaptureSessionProviderDelegate>",W,N,V_providerDelegate
// Property: delegate; attributes: T@"<SCAudioCaptureSessionDelegate>",W,N,V_delegate
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: audioQueueDiagnosticsEnabled; attributes: TB,N,GisAudioQueueDiagnosticsEnabled

// -[SCAudioCaptureSessionImpl initWithAudioSession:]
// Type encoding: @24@0:8@16
// Implementation: 0x1091a05c4

// -[SCAudioCaptureSessionImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1091a0724

// -[SCAudioCaptureSessionImpl isAudioQueueDiagnosticsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1091a0798

// -[SCAudioCaptureSessionImpl setAudioQueueDiagnosticsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1091a07a4

// -[SCAudioCaptureSessionImpl _shouldCollectAudioQueueDiagnostics]
// Type encoding: B16@0:8
// Implementation: 0x1091a07b8

// -[SCAudioCaptureSessionImpl _resetAudioQueueDiagnostics]
// Type encoding: v16@0:8
// Implementation: 0x1091a07c4

// -[SCAudioCaptureSessionImpl _captureAudioSessionStateAtAudioQueueStart]
// Type encoding: v16@0:8
// Implementation: 0x1091a0864

// -[SCAudioCaptureSessionImpl _recordAudioQueueInitialBufferSetupStatus:step:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x1091a0988

// -[SCAudioCaptureSessionImpl _recordAudioQueueRunningAfterStart]
// Type encoding: v16@0:8
// Implementation: 0x1091a09fc

// -[SCAudioCaptureSessionImpl _recordAudioQueueCallbackWithNumPackets:]
// Type encoding: v20@0:8I16
// Implementation: 0x1091a0a78

// -[SCAudioCaptureSessionImpl _recordAudioQueueSampleBufferBuildFailureWithErrorCode:step:]
// Type encoding: v28@0:8i16q20
// Implementation: 0x1091a0ae8

// -[SCAudioCaptureSessionImpl _recordAudioQueueSampleBufferForwarded]
// Type encoding: v16@0:8
// Implementation: 0x1091a0b60

// -[SCAudioCaptureSessionImpl audioQueueDiagnosticsSnapshot]
// Type encoding: @16@0:8
// Implementation: 0x1091a0b98

// -[SCAudioCaptureSessionImpl appendAudioQueueBuffer:numPackets:PTS:packetDescriptions:]
// Type encoding: v60@0:8^{AudioQueueBuffer=I^vI^vI^{AudioStreamPacketDescription}I}16I24{?=qiIq}28r^{AudioStreamPacketDescription=qII}52
// Implementation: 0x1091a1030

// -[SCAudioCaptureSessionImpl processAudioSampleBuffer:]
// Type encoding: v24@0:8^{opaqueCMSampleBuffer=}16
// Implementation: 0x1091a11e8

// -[SCAudioCaptureSessionImpl _isSpeedRateValidAndActive:]
// Type encoding: B24@0:8d16
// Implementation: 0x1091a1244

// -[SCAudioCaptureSessionImpl adjustAudioDataSpeedRateFromAudioData:numberOfSamplesInOriginalAudioData:speedRate:adjustedAudioSamples:]
// Type encoding: v48@0:8^s16q24d32^s40
// Implementation: 0x1091a125c

// -[SCAudioCaptureSessionImpl _fadeInAudioBuffer:]
// Type encoding: v24@0:8^{AudioQueueBuffer=I^vI^vI^{AudioStreamPacketDescription}I}16
// Implementation: 0x1091a12d4

// -[SCAudioCaptureSessionImpl _generateErrorForType:errorCode:format:]
// Type encoding: @68@0:8@16i24{AudioStreamBasicDescription=dIIIIIIII}28
// Implementation: 0x1091a1328

// -[SCAudioCaptureSessionImpl beginAudioRecordingAsynchronouslyWithSampleRate:devicePosition:audioContentWillBeIgnored:completionHandler:]
// Type encoding: v44@0:8d16q24B32@?36
// Implementation: 0x1091a16cc

// -[SCAudioCaptureSessionImpl beginAudioRecordingAsynchronouslyWithSampleRate:speedRate:devicePosition:audioContentWillBeIgnored:completionHandler:]
// Type encoding: v52@0:8d16d24q32B40@?44
// Implementation: 0x1091a16d4

// -[SCAudioCaptureSessionImpl disposeAudioRecordingSynchronouslyWithCompletionHandler:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1091a190c

// -[SCAudioCaptureSessionImpl _beginAudioRecordingWithSampleRate:]
// Type encoding: @24@0:8d16
// Implementation: 0x1091a1a18

// -[SCAudioCaptureSessionImpl _disposeAudioRecording]
// Type encoding: v16@0:8
// Implementation: 0x1091a1f70

// -[SCAudioCaptureSessionImpl audioSession]
// Type encoding: @16@0:8
// Implementation: 0x1091a2048

// -[SCAudioCaptureSessionImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1091a209c

// -[SCAudioCaptureSessionImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091a20b4

// -[SCAudioCaptureSessionImpl providerDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1091a20c0

// -[SCAudioCaptureSessionImpl setProviderDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1091a20d8

// -[SCAudioCaptureSessionImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1091a20e4

// -[SCAudioCaptureSessionImpl .cxx_construct]
// Type encoding: @16@0:8
// Implementation: 0x1091a213c

@end
