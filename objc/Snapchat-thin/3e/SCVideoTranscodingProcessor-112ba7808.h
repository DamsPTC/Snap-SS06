// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCVideoTranscodingProcessor
// Superclass: NSObject
// Address: 0x112ba7808

@interface SCVideoTranscodingProcessor

// Property: processorId; attributes: T@"NSString",&,N,V_processorId
// Property: requestInput; attributes: T@"SCVideoTranscodingRequestInput",&,N,V_requestInput
// Property: requestOutput; attributes: T@"SCVideoTranscodingRequestOutput",&,N,V_requestOutput
// Property: cancelable; attributes: T@"SCCancelableRequest",&,N,V_cancelable
// Property: videoTranscodingSession; attributes: T@"SCVideoTranscodingSession",&,N,V_videoTranscodingSession
// Property: imageProcessor; attributes: T@"<SCVideoTranscodingImageProcessor>",&,N,V_imageProcessor
// Property: overlayImageData; attributes: T@"NSData",&,N,V_overlayImageData
// Property: audioProcessingWrapper; attributes: T@"SCLookseryAudioProcessingWrapper",&,N,V_audioProcessingWrapper
// Property: taskItem; attributes: T@"SCVideoTranscodingTaskItem",&,N,V_taskItem
// Property: logger; attributes: T@"<SCMediaTranscodingLogging>",&,N,V_logger
// Property: videoTranscodingConfiguration; attributes: T@"SCVideoTranscodingConfiguration",R,N,V_videoTranscodingConfiguration
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCVideoTranscodingProcessor initWithRequestInput:requestOutput:logger:parameterProvider:targetTrajectoryFactory:backgroundTaskWrapper:audioProcessingSessionFactory:spectaclesImageProcessCommandFactory:circumstanceEngine:previewAssetVideoProviderFactory:ippCommandProvider:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x10856d0fc

// -[SCVideoTranscodingProcessor processWithOutputHandler:progressHandler:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10856d3c0

// -[SCVideoTranscodingProcessor processWithOutputHandler:progressHandler:statusHandler:]
// Type encoding: v40@0:8@?16@?24@?32
// Implementation: 0x10856d3c8

// -[SCVideoTranscodingProcessor cancel]
// Type encoding: v16@0:8
// Implementation: 0x10856ee2c

// -[SCVideoTranscodingProcessor _runWithTaskId:trackSegments:processedReason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x10856eec0

// -[SCVideoTranscodingProcessor _runWithVideoAssetMutatorForTaskId:composition:processedNGSMESnap:trackSegments:videoRenderSize:runIPPThroughCustomCompositor:processedReason:]
// Type encoding: v76@0:8@16@24@32@40{CGSize=dd}48B64Q68
// Implementation: 0x10856f254

// -[SCVideoTranscodingProcessor _useDirectAssetPathForComposition:videoRenderSize:]
// Type encoding: B40@0:8@16{CGSize=dd}24
// Implementation: 0x10856fae8

// -[SCVideoTranscodingProcessor _useStaticImageProviderForProcessedNGSMESnap:videoRenderSize:runIPPThroughCustomCompositor:]
// Type encoding: B44@0:8@16{CGSize=dd}24B40
// Implementation: 0x10857020c

// -[SCVideoTranscodingProcessor _imageSnapFrameRateOverrideForSnap:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1085706b4

// -[SCVideoTranscodingProcessor _buildDirectAssetMutatorOutputForComposition:]
// Type encoding: @24@0:8@16
// Implementation: 0x108570880

// -[SCVideoTranscodingProcessor _runWithStaticImageProviderForTaskId:processedNGSMESnap:processedReason:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x108570980

// -[SCVideoTranscodingProcessor _extractImageFromSegment:]
// Type encoding: @24@0:8@16
// Implementation: 0x108570d8c

// -[SCVideoTranscodingProcessor _ensureAudioProcessingWrapperForConfiguration:]
// Type encoding: v24@0:8@16
// Implementation: 0x108570f84

// -[SCVideoTranscodingProcessor _ensureImageProcessorForTaskId:processedNGSMESnap:sourceSize:runIPPThroughCustomCompositor:]
// Type encoding: v52@0:8@16@24{CGSize=dd}32B48
// Implementation: 0x108571164

// -[SCVideoTranscodingProcessor _beginBackgroundTaskAndStartTranscodingTaskItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x1085713d8

// -[SCVideoTranscodingProcessor _buildMutatorOutputForProcessedNGSMESnap:videoRenderSize:runIPPThroughCustomCompositor:errorType:outVideoAssetMutator:]
// Type encoding: @60@0:8@16{CGSize=dd}24B40^q44^@52
// Implementation: 0x108571528

// -[SCVideoTranscodingProcessor _createTranscodingConfigurationWithVideoSourceSize:sourceBitrate:sourceDuration:sourceVideoCodec:]
// Type encoding: @56@0:8{CGSize=dd}16d32d40q48
// Implementation: 0x108571624

// -[SCVideoTranscodingProcessor _createTranscodingConfigurationForClipsEditing:]
// Type encoding: @24@0:8@16
// Implementation: 0x108571dec

// -[SCVideoTranscodingProcessor _shouldBlendOverlay]
// Type encoding: B16@0:8
// Implementation: 0x1085725c8

// -[SCVideoTranscodingProcessor _shouldEnableContentAdaptiveVideoExportWithVideoAsset:rawDataURL:]
// Type encoding: B32@0:8@16@24
// Implementation: 0x10857274c

// -[SCVideoTranscodingProcessor _generateTranscodingTaskItemsWithTaskId:videoAsset:videoCompositionOutputBuilder:assetAudioMix:outputURL:processedReason:]
// Type encoding: @64@0:8@16@24@32@40@48Q56
// Implementation: 0x1085728cc

// -[SCVideoTranscodingProcessor _startTranscodingTask:completion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x108572998

// -[SCVideoTranscodingProcessor _sessionStatusBlock]
// Type encoding: @?16@0:8
// Implementation: 0x10857354c

// -[SCVideoTranscodingProcessor _completeTranscodingTaskWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x108573628

// -[SCVideoTranscodingProcessor _handleVideoProcessingDidSuccessIntermediateUrl:completion:]
// Type encoding: B32@0:8@16@?24
// Implementation: 0x10857363c

// -[SCVideoTranscodingProcessor _imageProcessCommandInfo]
// Type encoding: @16@0:8
// Implementation: 0x108574678

// -[SCVideoTranscodingProcessor _markFrameStatisticsForTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x10857491c

// -[SCVideoTranscodingProcessor _handleVideoProcessingDidFailWithTaskId:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x108574a30

// -[SCVideoTranscodingProcessor _handleVideoProcessingDidSkipTranscoding:videoBitrate:audioBitrate:sourceVideoCodec:]
// Type encoding: v48@0:8@16d24d32q40
// Implementation: 0x108574b9c

// -[SCVideoTranscodingProcessor _logCameraVideoTranscodingMultipleOutputSuccessWithTaskId:clientMessageId:reasons:imageProcessCommandsInfo:outputVideoDurationMS:outputVideoTrackDurationMS:outputAudioTrackDurationMS:outputMediaFormat:outputResolution:outputFileSize:outputVideoBitrate:outputHasAudio:outputOverlayFileSize:outputVideoFilesNumber:outputVideoFileIndex:outputFrameRate:keyframeInterval:captureSessionId:]
// Type encoding: v160@0:8@16@24Q32@40Q48Q56Q64@72{CGSize=dd}80q96Q104B112q116Q124Q132f140Q144@152
// Implementation: 0x108575340

// -[SCVideoTranscodingProcessor _handleVideoProcessingDidCancelWithTaskId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108575930

// -[SCVideoTranscodingProcessor _computeVideoSourceSizeWithVideoTrack:]
// Type encoding: {CGSize=dd}24@0:8@16
// Implementation: 0x108575aa0

// -[SCVideoTranscodingProcessor _videoTranscodingSessionWithInputMediaProvider:outputVideoURL:videoTranscodingConfiguration:imageProcessor:audioProcessingWrapper:audioProcessingSessionFactory:transcodingTaskId:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x108575c30

// -[SCVideoTranscodingProcessor _shouldTriggerIPPCommandThroughCustomCompositor:]
// Type encoding: B24@0:8@16
// Implementation: 0x108575d44

// -[SCVideoTranscodingProcessor _shouldUseUpgradedIpp:]
// Type encoding: B24@0:8@16
// Implementation: 0x108575e14

// -[SCVideoTranscodingProcessor _renderEffectsFrom:videoRenderSize:useOverlayImageAsMask:]
// Type encoding: @44@0:8@16{CGSize=dd}24B40
// Implementation: 0x108575eec

// -[SCVideoTranscodingProcessor _generateNewDagWithNGSMESnap:overlayImage:videoRenderSize:useOverlayImageAsMask:]
// Type encoding: @52@0:8@16@24{CGSize=dd}32B48
// Implementation: 0x108576450

// -[SCVideoTranscodingProcessor _videoTranscodingReasons:sourceSize:sourceBitrate:sourceDuration:sourceVideoCodec:sourceAudioCodec:NGSMESnap:]
// Type encoding: Q80@0:8@16{CGSize=dd}24d40d48q56q64@72
// Implementation: 0x10857694c

// -[SCVideoTranscodingProcessor videoTranscodingConfiguration]
// Type encoding: @16@0:8
// Implementation: 0x108576d94

// -[SCVideoTranscodingProcessor processorId]
// Type encoding: @16@0:8
// Implementation: 0x108576d9c

// -[SCVideoTranscodingProcessor setProcessorId:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576da4

// -[SCVideoTranscodingProcessor requestInput]
// Type encoding: @16@0:8
// Implementation: 0x108576dd4

// -[SCVideoTranscodingProcessor setRequestInput:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576ddc

// -[SCVideoTranscodingProcessor requestOutput]
// Type encoding: @16@0:8
// Implementation: 0x108576e0c

// -[SCVideoTranscodingProcessor setRequestOutput:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576e14

// -[SCVideoTranscodingProcessor cancelable]
// Type encoding: @16@0:8
// Implementation: 0x108576e44

// -[SCVideoTranscodingProcessor setCancelable:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576e4c

// -[SCVideoTranscodingProcessor videoTranscodingSession]
// Type encoding: @16@0:8
// Implementation: 0x108576e7c

// -[SCVideoTranscodingProcessor setVideoTranscodingSession:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576e84

// -[SCVideoTranscodingProcessor imageProcessor]
// Type encoding: @16@0:8
// Implementation: 0x108576eb4

// -[SCVideoTranscodingProcessor setImageProcessor:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576ebc

// -[SCVideoTranscodingProcessor overlayImageData]
// Type encoding: @16@0:8
// Implementation: 0x108576eec

// -[SCVideoTranscodingProcessor setOverlayImageData:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576ef4

// -[SCVideoTranscodingProcessor audioProcessingWrapper]
// Type encoding: @16@0:8
// Implementation: 0x108576f24

// -[SCVideoTranscodingProcessor setAudioProcessingWrapper:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576f2c

// -[SCVideoTranscodingProcessor taskItem]
// Type encoding: @16@0:8
// Implementation: 0x108576f5c

// -[SCVideoTranscodingProcessor setTaskItem:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576f64

// -[SCVideoTranscodingProcessor logger]
// Type encoding: @16@0:8
// Implementation: 0x108576f94

// -[SCVideoTranscodingProcessor setLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x108576f9c

// -[SCVideoTranscodingProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108576fcc

@end
