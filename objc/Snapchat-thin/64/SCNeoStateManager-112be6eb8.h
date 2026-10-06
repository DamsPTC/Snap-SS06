// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoStateManager
// Superclass: SCNeoPlayerTimerBase
// Address: 0x112be6eb8

@interface SCNeoStateManager

// Property: audioTrackObserver; attributes: T@"<SCNeoPlayerTrackProgressObserver>",R,N
// Property: videoTrackObserver; attributes: T@"<SCNeoPlayerTrackProgressObserver>",R,N
// Property: endTime; attributes: T{?=qiIq},R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoStateManager initWithTimebase:queue:timeLooper:shouldCheckPipelineBackPressure:outputStatusProvider:delegate:]
// Type encoding: @60@0:8^{OpaqueCMTimebase=}16@24@32B40@44@52
// Implementation: 0x1090c244c

// -[SCNeoStateManager audioTrackObserver]
// Type encoding: @16@0:8
// Implementation: 0x1090c25cc

// -[SCNeoStateManager videoTrackObserver]
// Type encoding: @16@0:8
// Implementation: 0x1090c25f4

// -[SCNeoStateManager logTag]
// Type encoding: @16@0:8
// Implementation: 0x1090c261c

// -[SCNeoStateManager stateNeedsUpdate]
// Type encoding: v16@0:8
// Implementation: 0x1090c2668

// -[SCNeoStateManager setInstruments:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090c266c

// -[SCNeoStateManager willSeek]
// Type encoding: v16@0:8
// Implementation: 0x1090c26a4

// -[SCNeoStateManager reset]
// Type encoding: v16@0:8
// Implementation: 0x1090c26cc

// -[SCNeoStateManager endTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090c26fc

// -[SCNeoStateManager generateNewStateWithDependencies:]
// Type encoding: {SCNeoPlayerStateTransitionResult=Q@BB}24@0:8@16
// Implementation: 0x1090c280c

// -[SCNeoStateManager timeDidJump]
// Type encoding: v16@0:8
// Implementation: 0x1090c2bec

// -[SCNeoStateManager onEvent]
// Type encoding: v16@0:8
// Implementation: 0x1090c2bf0

// -[SCNeoStateManager effectiveRateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x1090c2e74

// -[SCNeoStateManager _debugMessageFromAudioOutputState:videoOutputState:currentTime:targetTime:]
// Type encoding: @192@0:8{SCNeoPlayerTrackProgress=BBBB{?=qiIq}{?=qiIq}B@}16{SCNeoPlayerTrackProgress=BBBB{?=qiIq}{?=qiIq}B@}80{?=qiIq}144{?=qiIq}168
// Implementation: 0x1090c2edc

// -[SCNeoStateManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090c2fa0

@end
