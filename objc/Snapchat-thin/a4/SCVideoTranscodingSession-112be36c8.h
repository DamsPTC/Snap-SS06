// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingSession
// Superclass: NSObject
// Address: 0x112be36c8

@interface SCVideoTranscodingSession

// Property: status; attributes: TQ,R,N,V_status
// Property: outputHasAudio; attributes: TB,R,N,V_outputHasAudio
// Property: error; attributes: T@"NSError",R,C,N,V_error
// Property: imageProcessingError; attributes: T@"NSError",R,C,N,V_imageProcessingError
// Property: qualityScore; attributes: Td,R,N,V_qualityScore
// Property: overrideMaxFrameRate; attributes: Tq,N,V_overrideMaxFrameRate
// Property: frameProcessedCount; attributes: Tq,R,N,V_frameProcessedCount
// Property: muxerAudioProcessedFrameCount; attributes: Tq,R,N,V_muxerAudioProcessedFrameCount
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingSession initWithInputMediaProvider:outputVideoURL:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:circumstanceEngine:transcodingLogger:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10905fd2c

// -[SCVideoTranscodingSession initWithInputMediaProvider:segmentDataOutputBlock:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:circumstanceEngine:transcodingLogger:]
// Type encoding: @88@0:8@16@?24@32@40@48@56@64@72@80
// Implementation: 0x10905fde8

// -[SCVideoTranscodingSession initWithInputMediaProvider:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:circumstanceEngine:transcodingLogger:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x10905fea4

// -[SCVideoTranscodingSession _stallDetectorDidReportEvent:stage:detail:markCount:secondsSinceLastMark:didEnterBackgroundInGap:]
// Type encoding: v60@0:8q16@24@32Q40d48B56
// Implementation: 0x1090605a0

// -[SCVideoTranscodingSession dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090606a0

// -[SCVideoTranscodingSession startRunningWithCompletionBlock:progressBlock:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x1090606d4

// -[SCVideoTranscodingSession startRunningWithCompletionBlock:progressBlock:statusBlock:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x1090606dc

// -[SCVideoTranscodingSession cancelRunning]
// Type encoding: v16@0:8
// Implementation: 0x109060a38

// -[SCVideoTranscodingSession retryCount]
// Type encoding: q16@0:8
// Implementation: 0x109060c0c

// -[SCVideoTranscodingSession videoEncoderDidCompleteEncoding:]
// Type encoding: v24@0:8@16
// Implementation: 0x109060c1c

// -[SCVideoTranscodingSession videoEncoderDidCancelEncoding:]
// Type encoding: v24@0:8@16
// Implementation: 0x109060e14

// -[SCVideoTranscodingSession videoEncoder:didFailEncodingWithError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x109060ec8

// -[SCVideoTranscodingSession videoEncoder:didProgressWithPresentationTime:]
// Type encoding: v48@0:8@16{?=qiIq}24
// Implementation: 0x109061080

// -[SCVideoTranscodingSession _setupVideoTranscodingSession]
// Type encoding: B16@0:8
// Implementation: 0x1090612a0

// -[SCVideoTranscodingSession _setupVideoFrameProvider]
// Type encoding: B16@0:8
// Implementation: 0x109061410

// -[SCVideoTranscodingSession _setupVideoEncoderWithFirstAudioSampleBuffer:firstVideoFrame:]
// Type encoding: B40@0:8^{opaqueCMSampleBuffer=}16{?=^{opaqueCMSampleBuffer}q}24
// Implementation: 0x109061854

// -[SCVideoTranscodingSession _startTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x109062040

// -[SCVideoTranscodingSession _cancelTranscoding]
// Type encoding: v16@0:8
// Implementation: 0x109062080

// -[SCVideoTranscodingSession _cancelFrameFetching]
// Type encoding: v16@0:8
// Implementation: 0x1090620bc

// -[SCVideoTranscodingSession _transcodingFailureHandler]
// Type encoding: v16@0:8
// Implementation: 0x109062248

// -[SCVideoTranscodingSession _isErrorAwareRetryEnabled]
// Type encoding: B16@0:8
// Implementation: 0x109062420

// -[SCVideoTranscodingSession _retryBaseDelayMs]
// Type encoding: q16@0:8
// Implementation: 0x10906248c

// -[SCVideoTranscodingSession _statusTickMinIntervalMs]
// Type encoding: q16@0:8
// Implementation: 0x1090624f8

// -[SCVideoTranscodingSession _shouldEmitEncodingTickWithProgress:]
// Type encoding: B24@0:8d16
// Implementation: 0x109062564

// -[SCVideoTranscodingSession _emitStatusWithPhase:progress:]
// Type encoding: v32@0:8q16d24
// Implementation: 0x1090625f4

// -[SCVideoTranscodingSession _emitTerminalStatus]
// Type encoding: v16@0:8
// Implementation: 0x1090626ec

// -[SCVideoTranscodingSession _resetFrameProvider]
// Type encoding: v16@0:8
// Implementation: 0x10906272c

// -[SCVideoTranscodingSession _captureEncoderFrameCounts]
// Type encoding: v16@0:8
// Implementation: 0x109062794

// -[SCVideoTranscodingSession _invokeCompletionBlock]
// Type encoding: v16@0:8
// Implementation: 0x1090627c8

// -[SCVideoTranscodingSession _logGrapheneConcurrentMetric]
// Type encoding: v16@0:8
// Implementation: 0x10906286c

// -[SCVideoTranscodingSession _bitrateMultiplierWithVideoContentComplexity:]
// Type encoding: d24@0:8q16
// Implementation: 0x10906299c

// -[SCVideoTranscodingSession _retryTranscodingIfFails]
// Type encoding: v16@0:8
// Implementation: 0x1090629b4

// -[SCVideoTranscodingSession _teardownFailedAttempt]
// Type encoding: v16@0:8
// Implementation: 0x109062a80

// -[SCVideoTranscodingSession _increaseConcurrentTranscodingCount]
// Type encoding: v16@0:8
// Implementation: 0x109062ac0

// -[SCVideoTranscodingSession _decreaseConcurrentTranscodingCount]
// Type encoding: v16@0:8
// Implementation: 0x109062b04

// -[SCVideoTranscodingSession _logQueueTimeWithStartTime:didTimeOut:fixEnabled:]
// Type encoding: v40@0:8d16@24@32
// Implementation: 0x109062b58

// -[SCVideoTranscodingSession status]
// Type encoding: Q16@0:8
// Implementation: 0x109062c10

// -[SCVideoTranscodingSession outputHasAudio]
// Type encoding: B16@0:8
// Implementation: 0x109062c18

// -[SCVideoTranscodingSession error]
// Type encoding: @16@0:8
// Implementation: 0x109062c20

// -[SCVideoTranscodingSession imageProcessingError]
// Type encoding: @16@0:8
// Implementation: 0x109062c28

// -[SCVideoTranscodingSession qualityScore]
// Type encoding: d16@0:8
// Implementation: 0x109062c30

// -[SCVideoTranscodingSession overrideMaxFrameRate]
// Type encoding: q16@0:8
// Implementation: 0x109062c38

// -[SCVideoTranscodingSession setOverrideMaxFrameRate:]
// Type encoding: v24@0:8q16
// Implementation: 0x109062c40

// -[SCVideoTranscodingSession frameProcessedCount]
// Type encoding: q16@0:8
// Implementation: 0x109062c48

// -[SCVideoTranscodingSession muxerAudioProcessedFrameCount]
// Type encoding: q16@0:8
// Implementation: 0x109062c50

// -[SCVideoTranscodingSession .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x109062c58

@end
