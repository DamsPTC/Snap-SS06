// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoNoSoundLogger
// Superclass: NSObject
// Address: 0x112ac3f18

@interface SCVideoNoSoundLogger

// Property: audioSessionError; attributes: T@"NSError",&,N,V_audioSessionError
// Property: audioQueueError; attributes: T@"NSError",&,N,V_audioQueueError
// Property: assetWriterError; attributes: T@"NSError",&,N,V_assetWriterError
// Property: retryAudioQueueSuccess; attributes: TB,N,V_retryAudioQueueSuccess
// Property: retryAudioQueueSuccessSetDataSource; attributes: TB,N,V_retryAudioQueueSuccessSetDataSource
// Property: brokenMicCodeType; attributes: T@"NSString",&,N,V_brokenMicCodeType
// Property: lenseActiveWhileRecording; attributes: TB,N,V_lenseActiveWhileRecording
// Property: activeLensId; attributes: T@"NSString",&,V_activeLensId
// Property: firstWrittenAudioBufferDelay; attributes: T{?=qiIq},N,V_firstWrittenAudioBufferDelay
// Property: audioQueueStarted; attributes: TB,N,V_audioQueueStarted
// Property: audioSamplesReceived; attributes: TQ,N,V_audioSamplesReceived
// Property: captureSessionId; attributes: T@"NSString",&,N,V_captureSessionId
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoNoSoundLogger initWithCameraUserLoggingServices:audioSessionServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10608c29c

// -[SCVideoNoSoundLogger increaseNoSoundCount]
// Type encoding: v16@0:8
// Implementation: 0x10608c43c

// -[SCVideoNoSoundLogger startCountingVideoNoSoundHaveBeenFixed]
// Type encoding: v16@0:8
// Implementation: 0x10608c44c

// -[SCVideoNoSoundLogger appSessionIdForNoSound]
// Type encoding: @16@0:8
// Implementation: 0x10608c458

// -[SCVideoNoSoundLogger logVideoNoSoundHaveBeenFixedWithMicInUseWarningShowed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608c4a8

// -[SCVideoNoSoundLogger logAudioSessionCategoryHaveBeenFixedWithMicInUseWarningShowed:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608c4d0

// -[SCVideoNoSoundLogger logAudioSessionBrokenMicHaveBeenFixed:micInUseWarningShowed:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10608c4e8

// -[SCVideoNoSoundLogger logNoAudioErrorEventWithIsFixed:micInUseWarningShowed:fixedErrorType:unfixableErrorType:errorMessage:]
// Type encoding: v48@0:8B16B20q24q32@40
// Implementation: 0x10608c77c

// -[SCVideoNoSoundLogger resetAll]
// Type encoding: v16@0:8
// Implementation: 0x10608cb84

// -[SCVideoNoSoundLogger setCaptureSessionId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608cccc

// -[SCVideoNoSoundLogger checkVideoFileAndLogIfNeeded:hasShownMicInUseWarning:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10608cdf8

// -[SCVideoNoSoundLogger _reportNoAudioIfNeeded:hasShownMicInUseWarning:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10608d084

// -[SCVideoNoSoundLogger _isIPhone7Or7Plus]
// Type encoding: B16@0:8
// Implementation: 0x10608d8d8

// -[SCVideoNoSoundLogger _audioSessionWillDeactivate]
// Type encoding: v16@0:8
// Implementation: 0x10608d978

// -[SCVideoNoSoundLogger _audioSessionDidActivate]
// Type encoding: v16@0:8
// Implementation: 0x10608da44

// -[SCVideoNoSoundLogger managedLensesProcessorDidCallResumeAllSounds]
// Type encoding: v16@0:8
// Implementation: 0x10608db0c

// -[SCVideoNoSoundLogger audioSessionError]
// Type encoding: @16@0:8
// Implementation: 0x10608dbdc

// -[SCVideoNoSoundLogger setAudioSessionError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608dbe4

// -[SCVideoNoSoundLogger audioQueueError]
// Type encoding: @16@0:8
// Implementation: 0x10608dc14

// -[SCVideoNoSoundLogger setAudioQueueError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608dc1c

// -[SCVideoNoSoundLogger assetWriterError]
// Type encoding: @16@0:8
// Implementation: 0x10608dc4c

// -[SCVideoNoSoundLogger setAssetWriterError:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608dc54

// -[SCVideoNoSoundLogger retryAudioQueueSuccess]
// Type encoding: B16@0:8
// Implementation: 0x10608dc84

// -[SCVideoNoSoundLogger setRetryAudioQueueSuccess:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608dc8c

// -[SCVideoNoSoundLogger retryAudioQueueSuccessSetDataSource]
// Type encoding: B16@0:8
// Implementation: 0x10608dc94

// -[SCVideoNoSoundLogger setRetryAudioQueueSuccessSetDataSource:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608dc9c

// -[SCVideoNoSoundLogger brokenMicCodeType]
// Type encoding: @16@0:8
// Implementation: 0x10608dca4

// -[SCVideoNoSoundLogger setBrokenMicCodeType:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608dcac

// -[SCVideoNoSoundLogger lenseActiveWhileRecording]
// Type encoding: B16@0:8
// Implementation: 0x10608dcdc

// -[SCVideoNoSoundLogger setLenseActiveWhileRecording:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608dce4

// -[SCVideoNoSoundLogger activeLensId]
// Type encoding: @16@0:8
// Implementation: 0x10608dcec

// -[SCVideoNoSoundLogger setActiveLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10608dcf8

// -[SCVideoNoSoundLogger firstWrittenAudioBufferDelay]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x10608dd00

// -[SCVideoNoSoundLogger setFirstWrittenAudioBufferDelay:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x10608dd14

// -[SCVideoNoSoundLogger audioQueueStarted]
// Type encoding: B16@0:8
// Implementation: 0x10608dd28

// -[SCVideoNoSoundLogger setAudioQueueStarted:]
// Type encoding: v20@0:8B16
// Implementation: 0x10608dd30

// -[SCVideoNoSoundLogger audioSamplesReceived]
// Type encoding: Q16@0:8
// Implementation: 0x10608dd38

// -[SCVideoNoSoundLogger setAudioSamplesReceived:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10608dd40

// -[SCVideoNoSoundLogger captureSessionId]
// Type encoding: @16@0:8
// Implementation: 0x10608dd48

// -[SCVideoNoSoundLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10608dd50

@end
