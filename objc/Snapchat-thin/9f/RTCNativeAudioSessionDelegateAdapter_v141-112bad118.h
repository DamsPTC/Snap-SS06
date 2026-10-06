// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: RTCNativeAudioSessionDelegateAdapter_v141
// Superclass: NSObject
// Address: 0x112bad118

@interface RTCNativeAudioSessionDelegateAdapter_v141

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[RTCNativeAudioSessionDelegateAdapter_v141 initWithObserver:]
// Type encoding: @24@0:8^{AudioSessionObserver=^^?}16
// Implementation: 0x108b64568

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidBeginInterruption:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b645b0

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidEndInterruption:shouldResumeSession:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108b645c0

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidChangeRoute:reason:previousRoute:]
// Type encoding: v40@0:8@16Q24@32
// Implementation: 0x108b645d0

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionMediaServerTerminated:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b64708

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionMediaServerReset:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b6470c

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSession:didChangeCanPlayOrRecord:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x108b64710

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidStartPlayOrRecord:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b64724

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSessionDidStopPlayOrRecord:]
// Type encoding: v24@0:8@16
// Implementation: 0x108b64728

// -[RTCNativeAudioSessionDelegateAdapter_v141 audioSession:didChangeOutputVolume:]
// Type encoding: v28@0:8@16f24
// Implementation: 0x108b6472c

@end
