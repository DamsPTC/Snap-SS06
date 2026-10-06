// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMediaTranscodingLogger
// Superclass: NSObject
// Address: 0x112ba7d08

@interface SCMediaTranscodingLogger

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMediaTranscodingLogger initWithPerformer:userBlizzardLogger:performanceAutomationLogger:notificationServices:grapheneRegistry:applicationLifecycleEvents:logVideoTranscodeErrorTypeEnabled:logFrameStatisticsEnabled:]
// Type encoding: @72@0:8@16@24@32@40@48@56B64B68
// Implementation: 0x1085891b8

// -[SCMediaTranscodingLogger startCameraVideoTranscodingLoggingWithTaskId:captureSessionId:snapSessionId:clientMessageId:inputVideoDurationMS:inputMediaFormat:inputResolution:inputFileSize:inputVideoBitrate:mediaSource:mediaDestination:mediaQualityLevel:numSegments:segmentIndex:segmentTimeRange:lensIds:spotlightModes:playbackRateMultiplier:inputHasAudio:inputAudioBitrate:snapIsMuted:keyframeInterval:inputFrameRate:inputAudioChannels:inputIsHDR:snapSource:mediaOrchestrationId:]
// Type encoding: v264@0:8@16@24@32@40Q48@56{CGSize=dd}64q80Q88Q96Q104q112q120q128{?={?=qiIq}{?=qiIq}}136@184@192d200B208Q212B220Q224f232Q236B244@248@256
// Implementation: 0x10858951c

// -[SCMediaTranscodingLogger startCameraVideoTranscodingMultipleInputLoggingWithTaskId:captureSessionId:snapSessionId:clientMessageId:inputVideoFilesNumber:inputVideoTotalDurationMS:inputTotalFileSize:inputMediaFormat:inputResolution:inputVideoBitrate:mediaSource:mediaDestination:mediaQualityLevel:numSegments:segmentIndex:segmentTimeRange:lensIds:spotlightModes:playbackRateMultiplier:hasAudioMixing:inputHasAudio:inputAudioBitrate:inputAudioChannels:snapIsMuted:keyframeInterval:inputFrameRate:isORT:inputIsHDR:snapSource:mediaOrchestrationId:]
// Type encoding: v280@0:8@16@24@32@40Q48Q56q64@72{CGSize=dd}80Q96Q104Q112q120q128q136{?={?=qiIq}{?=qiIq}}144@192@200d208B216B220Q224Q232B240Q244f252B256B260@264@272
// Implementation: 0x1085899e8

// -[SCMediaTranscodingLogger stopCameraVideoTranscodingLoggingStatusSuccessWithTaskId:clientMessageId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputFrameRate:imageProcessingError:retryCount:captureSessionId:]
// Type encoding: v152@0:8@16@24Q32@40Q48Q56Q64@72{CGSize=dd}80q96Q104B112q116f124@128q136@144
// Implementation: 0x108589f28

// -[SCMediaTranscodingLogger stopCameraVideoTranscodingMultipleOutputLoggingStatusSuccessWithTaskId:clientMessageId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputFrameRate:keyframeInterval:outputVideoFilesNumber:outputVideoFileIndex:imageProcessingError:retryCount:captureSessionId:]
// Type encoding: v176@0:8@16@24Q32@40Q48Q56Q64@72{CGSize=dd}80q96Q104B112q116f124Q128Q136Q144@152q160@168
// Implementation: 0x108589f7c

// -[SCMediaTranscodingLogger stopCameraVideoTranscodingLoggingStatusFailedWithTaskId:imageProcessCommandsInfo:error:imageProcessingError:retryCount:]
// Type encoding: v56@0:8@16@24@32@40q48
// Implementation: 0x10858a37c

// -[SCMediaTranscodingLogger stopCameraVideoTranscodingMultipleOutputLoggingStatusFailedWithTaskId:imageProcessCommandsInfo:outputVideoFilesNumber:outputVideoFileIndex:error:imageProcessingError:retryCount:]
// Type encoding: v72@0:8@16@24Q32Q40@48@56q64
// Implementation: 0x10858a3b0

// -[SCMediaTranscodingLogger stopCameraVideoTranscodingMultipleOutputLoggingStatusCancelledWithTaskId:imageProcessCommandsInfo:outputVideoFilesNumber:outputVideoFileIndex:error:retryCount:]
// Type encoding: v64@0:8@16@24Q32Q40@48q56
// Implementation: 0x10858a8e8

// -[SCMediaTranscodingLogger startCameraImageTranscodingLoggingWithTaskId:captureSessionId:snapSessionId:inputMediaFormat:lensIds:imageProcessCommandsInfo:inputResolution:mediaSource:mediaDestination:mediaOrchestrationId:]
// Type encoding: v104@0:8@16@24@32@40@48@56{CGSize=dd}64Q80Q88@96
// Implementation: 0x10858aae4

// -[SCMediaTranscodingLogger stopCameraImageTranscodingLoggingStatusSuccessWithTaskId:outputMediaFormat:outputResolution:outputFileSize:outputOverlayFileSize:imageProcessingError:]
// Type encoding: v72@0:8@16@24{CGSize=dd}32q48q56@64
// Implementation: 0x10858ad6c

// -[SCMediaTranscodingLogger stopCameraImageTranscodingLoggingStatusFailedWithTaskId:imageProcessingError:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10858af8c

// -[SCMediaTranscodingLogger stopCameraTranscodingLoggingStatusCancelledWithTaskId:imageProcessCommandsInfo:error:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10858b110

// -[SCMediaTranscodingLogger markEventTimeForTaskId:event:timeSec:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10858b294

// -[SCMediaTranscodingLogger markFrameStatisticsForTaskId:muxerVideoProcessedFrameCount:muxerAudioProcessedFrameCount:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10858b3c0

// -[SCMediaTranscodingLogger markRetryContextForTaskId:retryContext:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10858b530

// -[SCMediaTranscodingLogger logSkipTranscodingWithTaskId:captureSessionId:snapSessionId:clientMessageId:inputVideoTotalDurationMS:inputTotalFileSize:inputMediaFormat:inputResolution:inputVideoBitrate:mediaSource:mediaDestination:mediaQualityLevel:spotlightModes:playbackRateMultiplier:inputHasAudio:inputAudioBitrate:snapSource:mediaOrchestrationId:]
// Type encoding: v164@0:8@16@24@32@40Q48q56@64{CGSize=dd}72Q88Q96Q104q112@120d128B136Q140@148@156
// Implementation: 0x10858b668

// -[SCMediaTranscodingLogger _markLifecycleEvent:inBackground:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x10858bab4

// -[SCMediaTranscodingLogger _addTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858bc98

// -[SCMediaTranscodingLogger _removeTaskWithTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858bd40

// -[SCMediaTranscodingLogger _getTaskWithTaskId:]
// Type encoding: @24@0:8@16
// Implementation: 0x10858bd50

// -[SCMediaTranscodingLogger _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858bd7c

// -[SCMediaTranscodingLogger _setFrameStatisticsOnEvent:fromTask:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10858c700

// -[SCMediaTranscodingLogger _logTranscodingGrapheneEventWithTask:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858c840

// -[SCMediaTranscodingLogger _logGrapheneMetricsForVideo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858c920

// -[SCMediaTranscodingLogger _logGrapheneMetricsForImage:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858cbd0

// -[SCMediaTranscodingLogger _logGrapheneTranscodingStartIsImage:source:destination:type:]
// Type encoding: v44@0:8B16Q20Q28@36
// Implementation: 0x10858cd48

// -[SCMediaTranscodingLogger _logBlizzardVideoTranscodingStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10858cdf8

// -[SCMediaTranscodingLogger _stringFromMediaSource:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10858cfbc

// -[SCMediaTranscodingLogger _stringFromMediaDestination:]
// Type encoding: @24@0:8Q16
// Implementation: 0x10858cfe4

// -[SCMediaTranscodingLogger _stringFromStatus:]
// Type encoding: @24@0:8q16
// Implementation: 0x10858d008

// -[SCMediaTranscodingLogger _traceTranscodingForName:startTimeSecs:endTimeSecs:]
// Type encoding: v40@0:8@16d24d32
// Implementation: 0x10858d02c

// -[SCMediaTranscodingLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10858d0dc

@end
