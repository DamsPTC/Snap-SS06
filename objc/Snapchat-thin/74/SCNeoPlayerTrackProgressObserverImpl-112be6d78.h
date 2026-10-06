// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerTrackProgressObserverImpl
// Superclass: NSObject
// Address: 0x112be6d78

@interface SCNeoPlayerTrackProgressObserverImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCNeoPlayerTrackProgressObserverImpl initWithLogPrefix:delegate:shouldCheckPipelineBackPressure:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x1090bf5fc

// -[SCNeoPlayerTrackProgressObserverImpl setEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090bf6dc

// -[SCNeoPlayerTrackProgressObserverImpl setProcessingPipelineStatusProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090bf774

// -[SCNeoPlayerTrackProgressObserverImpl updateLastEnqueuedBufferPts:presentationEndTime:]
// Type encoding: v64@0:8{?=qiIq}16{?=qiIq}40
// Implementation: 0x1090bf780

// -[SCNeoPlayerTrackProgressObserverImpl didFinishBatchEnqueueBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1090bf824

// -[SCNeoPlayerTrackProgressObserverImpl didInsertPlayableTimeRange]
// Type encoding: v16@0:8
// Implementation: 0x1090bf850

// -[SCNeoPlayerTrackProgressObserverImpl didFinishProcessingBuffers]
// Type encoding: v16@0:8
// Implementation: 0x1090bf894

// -[SCNeoPlayerTrackProgressObserverImpl updateLastDequeuedBufferPts:presentationEndTime:]
// Type encoding: v64@0:8{?=qiIq}16{?=qiIq}40
// Implementation: 0x1090bf8d8

// -[SCNeoPlayerTrackProgressObserverImpl updateLastProcessedBufferPts:presentationEndTime:]
// Type encoding: v64@0:8{?=qiIq}16{?=qiIq}40
// Implementation: 0x1090bf97c

// -[SCNeoPlayerTrackProgressObserverImpl didReachEndOfStream]
// Type encoding: v16@0:8
// Implementation: 0x1090bfa20

// -[SCNeoPlayerTrackProgressObserverImpl willSeek]
// Type encoding: v16@0:8
// Implementation: 0x1090bfa64

// -[SCNeoPlayerTrackProgressObserverImpl endTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090bfa98

// -[SCNeoPlayerTrackProgressObserverImpl isEnabled]
// Type encoding: B16@0:8
// Implementation: 0x1090bfaac

// -[SCNeoPlayerTrackProgressObserverImpl hasPendingBufferAtTargetTime:]
// Type encoding: B40@0:8{?=qiIq}16
// Implementation: 0x1090bfab4

// -[SCNeoPlayerTrackProgressObserverImpl latestEnqueuedPresentationEndTime]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090bfb18

// -[SCNeoPlayerTrackProgressObserverImpl progressAtTargetTime:hasSufficientDataForReliablePlayback:currentTime:]
// Type encoding: {SCNeoPlayerTrackProgress=BBBB{?=qiIq}{?=qiIq}B@}68@0:8{?=qiIq}16B40{?=qiIq}44
// Implementation: 0x1090bfb2c

// -[SCNeoPlayerTrackProgressObserverImpl _logTag]
// Type encoding: @16@0:8
// Implementation: 0x1090bff60

// -[SCNeoPlayerTrackProgressObserverImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090bffc4

@end
