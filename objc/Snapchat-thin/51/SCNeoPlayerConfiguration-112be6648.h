// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCNeoPlayerConfiguration
// Superclass: NSObject
// Address: 0x112be6648

@interface SCNeoPlayerConfiguration

// Property: currentTimeUpdateInterval; attributes: T{?=qiIq},R,N,V_currentTimeUpdateInterval
// Property: bufferProcessingPipelineSize; attributes: TQ,R,N,V_bufferProcessingPipelineSize
// Property: maxForwardDecodedFramesSize; attributes: TQ,R,N,V_maxForwardDecodedFramesSize
// Property: cppPlayer; attributes: TB,R,N,V_cppPlayer
// Property: enableCustomOutputImplementation; attributes: TB,R,N,V_enableCustomOutputImplementation
// Property: maxDecodingFramesInFlight; attributes: TQ,R,N,V_maxDecodingFramesInFlight
// Property: subtitleSchedulingMode; attributes: TQ,N,V_subtitleSchedulingMode
// Property: subtitlePollingInterval; attributes: T{?=qiIq},N,V_subtitlePollingInterval
// Property: spsReorderDepthThreshold; attributes: Tq,R,N,V_spsReorderDepthThreshold
// Property: rendererCreationThreadMode; attributes: Tq,R,N,V_rendererCreationThreadMode
// Property: invalidSessionRetryLimit; attributes: TQ,R,N,V_invalidSessionRetryLimit
// Property: enableBackgroundRecoveryRevamp; attributes: TB,R,N,V_enableBackgroundRecoveryRevamp
// Property: enableFrozenFrameRecovery; attributes: TB,R,N,V_enableFrozenFrameRecovery
// Property: enableSafeVideoRendererTeardown; attributes: TB,R,N,V_enableSafeVideoRendererTeardown
// Property: enableFirstFrameRevealHandoff; attributes: TB,N,V_enableFirstFrameRevealHandoff
// Property: gateStallOnPlaybackRequested; attributes: TB,N,V_gateStallOnPlaybackRequested
// Property: discardStaleVideoFramesOnSeek; attributes: TB,N,V_discardStaleVideoFramesOnSeek
// Property: enableFileReopenPerRead; attributes: TB,R,N,V_enableFileReopenPerRead
// Property: enableConsoleLogging; attributes: TB,R,N,V_enableConsoleLogging
// Property: minLogLevel; attributes: TI,R,N,V_minLogLevel
// Property: parserType; attributes: Tq,R,N,V_parserType
// Property: requireVideoFrameOutputSufficientBuffer; attributes: TB,R,N,V_requireVideoFrameOutputSufficientBuffer
// Property: shouldCheckPipelineBackPressure; attributes: TB,R,N,V_shouldCheckPipelineBackPressure
// Property: enablePerPlayerMediaQueue; attributes: TB,R,N,V_enablePerPlayerMediaQueue
// Property: mediaQueuePriority; attributes: Tq,R,N,V_mediaQueuePriority
// Property: enableResizeScaleSync; attributes: TB,R,N,V_enableResizeScaleSync
// Property: externalVideoRenderer; attributes: T@"AVSampleBufferDisplayLayer",&,N,V_externalVideoRenderer
// Property: copyEncodedSampleData; attributes: TB,N,V_copyEncodedSampleData

// -[SCNeoPlayerConfiguration initWithCurrentTimeUpdateInterval:bufferProcessingPipelineSize:maxForwardDecodedFramesSize:maxDecodingFramesInFlight:useCppNeoPlayer:enableCustomOutputImplementation:subtitleSchedulingMode:rendererCreationThreadMode:spsReorderDepthThreshold:invalidSessionRetryLimit:enableBackgroundRecoveryRevamp:enableFrozenFrameRecovery:enableConsoleLogging:minLogLevel:parserType:requireVideoFrameOutputSufficientBuffer:shouldCheckPipelineBackPressure:enableSafeVideoRendererTeardown:enableFileReopenPerRead:enablePerPlayerMediaQueue:mediaQueuePriority:enableResizeScaleSync:discardStaleVideoFramesOnSeek:]
// Type encoding: @164@0:8{?=qiIq}16Q40Q48Q56B64B68Q72q80q88Q96B104B108B112I116q120B128B132B136B140B144q148B156B160
// Implementation: 0x1090aee4c

// -[SCNeoPlayerConfiguration currentTimeUpdateInterval]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090af01c

// -[SCNeoPlayerConfiguration bufferProcessingPipelineSize]
// Type encoding: Q16@0:8
// Implementation: 0x1090af030

// -[SCNeoPlayerConfiguration maxForwardDecodedFramesSize]
// Type encoding: Q16@0:8
// Implementation: 0x1090af038

// -[SCNeoPlayerConfiguration cppPlayer]
// Type encoding: B16@0:8
// Implementation: 0x1090af040

// -[SCNeoPlayerConfiguration enableCustomOutputImplementation]
// Type encoding: B16@0:8
// Implementation: 0x1090af048

// -[SCNeoPlayerConfiguration maxDecodingFramesInFlight]
// Type encoding: Q16@0:8
// Implementation: 0x1090af050

// -[SCNeoPlayerConfiguration subtitleSchedulingMode]
// Type encoding: Q16@0:8
// Implementation: 0x1090af058

// -[SCNeoPlayerConfiguration setSubtitleSchedulingMode:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1090af060

// -[SCNeoPlayerConfiguration subtitlePollingInterval]
// Type encoding: {?=qiIq}16@0:8
// Implementation: 0x1090af068

// -[SCNeoPlayerConfiguration setSubtitlePollingInterval:]
// Type encoding: v40@0:8{?=qiIq}16
// Implementation: 0x1090af07c

// -[SCNeoPlayerConfiguration spsReorderDepthThreshold]
// Type encoding: q16@0:8
// Implementation: 0x1090af090

// -[SCNeoPlayerConfiguration rendererCreationThreadMode]
// Type encoding: q16@0:8
// Implementation: 0x1090af098

// -[SCNeoPlayerConfiguration invalidSessionRetryLimit]
// Type encoding: Q16@0:8
// Implementation: 0x1090af0a0

// -[SCNeoPlayerConfiguration enableBackgroundRecoveryRevamp]
// Type encoding: B16@0:8
// Implementation: 0x1090af0a8

// -[SCNeoPlayerConfiguration enableFrozenFrameRecovery]
// Type encoding: B16@0:8
// Implementation: 0x1090af0b0

// -[SCNeoPlayerConfiguration enableSafeVideoRendererTeardown]
// Type encoding: B16@0:8
// Implementation: 0x1090af0b8

// -[SCNeoPlayerConfiguration enableFirstFrameRevealHandoff]
// Type encoding: B16@0:8
// Implementation: 0x1090af0c0

// -[SCNeoPlayerConfiguration setEnableFirstFrameRevealHandoff:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090af0c8

// -[SCNeoPlayerConfiguration gateStallOnPlaybackRequested]
// Type encoding: B16@0:8
// Implementation: 0x1090af0d0

// -[SCNeoPlayerConfiguration setGateStallOnPlaybackRequested:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090af0d8

// -[SCNeoPlayerConfiguration discardStaleVideoFramesOnSeek]
// Type encoding: B16@0:8
// Implementation: 0x1090af0e0

// -[SCNeoPlayerConfiguration setDiscardStaleVideoFramesOnSeek:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090af0e8

// -[SCNeoPlayerConfiguration enableFileReopenPerRead]
// Type encoding: B16@0:8
// Implementation: 0x1090af0f0

// -[SCNeoPlayerConfiguration enableConsoleLogging]
// Type encoding: B16@0:8
// Implementation: 0x1090af0f8

// -[SCNeoPlayerConfiguration minLogLevel]
// Type encoding: I16@0:8
// Implementation: 0x1090af100

// -[SCNeoPlayerConfiguration parserType]
// Type encoding: q16@0:8
// Implementation: 0x1090af108

// -[SCNeoPlayerConfiguration requireVideoFrameOutputSufficientBuffer]
// Type encoding: B16@0:8
// Implementation: 0x1090af110

// -[SCNeoPlayerConfiguration shouldCheckPipelineBackPressure]
// Type encoding: B16@0:8
// Implementation: 0x1090af118

// -[SCNeoPlayerConfiguration enablePerPlayerMediaQueue]
// Type encoding: B16@0:8
// Implementation: 0x1090af120

// -[SCNeoPlayerConfiguration mediaQueuePriority]
// Type encoding: q16@0:8
// Implementation: 0x1090af128

// -[SCNeoPlayerConfiguration enableResizeScaleSync]
// Type encoding: B16@0:8
// Implementation: 0x1090af130

// -[SCNeoPlayerConfiguration externalVideoRenderer]
// Type encoding: @16@0:8
// Implementation: 0x1090af138

// -[SCNeoPlayerConfiguration setExternalVideoRenderer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090af140

// -[SCNeoPlayerConfiguration copyEncodedSampleData]
// Type encoding: B16@0:8
// Implementation: 0x1090af170

// -[SCNeoPlayerConfiguration setCopyEncodedSampleData:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090af178

// -[SCNeoPlayerConfiguration .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090af180

// +[SCNeoPlayerConfiguration makeTestConfigurationWithEnableCpp:useCustomOutput:parserType:]
// Type encoding: @32@0:8B16B20q24
// Implementation: 0x1090aef60

// +[SCNeoPlayerConfiguration makeTestConfigurationWithEnableCpp:useCustomOutput:parserType:enableBackgroundRecoveryRevamp:]
// Type encoding: @36@0:8B16B20q24B32
// Implementation: 0x1090aef68

@end
