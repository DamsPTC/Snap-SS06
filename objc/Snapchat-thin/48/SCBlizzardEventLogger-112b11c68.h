// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEventLogger
// Superclass: NSObject
// Address: 0x112b11c68

@interface SCBlizzardEventLogger

// Property: protoFrameSequenceId; attributes: Tq,N,V_protoFrameSequenceId
// Property: protoQueueName; attributes: T@"NSString",&,N,V_protoQueueName
// Property: protoQueueStats; attributes: T@"NSMutableDictionary",&,N,V_protoQueueStats
// Property: trimTierZeroEventsEnabled; attributes: TB,N,V_trimTierZeroEventsEnabled
// Property: blizzardRtusEventRouter; attributes: T@"SCBlizzardRtusEventRouter",&,N,V_blizzardRtusEventRouter
// Property: config; attributes: T@"SCBlizzardLogQueueConfigAdapter",R,N,V_config
// Property: eventConfigurer; attributes: T@"SCBlizzardEventConfigurer",R,N,V_eventConfigurer
// Property: appStateProvider; attributes: T@"SCBlizzardAppStateProvider",R,N,V_appStateProvider
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,N,V_experimentProvider
// Property: uploadManager; attributes: T@"SCBlizzardUploadManager",W,N,V_uploadManager
// Property: isEagerUploadingEnabledForQueue; attributes: TB,R,N,V_isEagerUploadingEnabledForQueue
// Property: blizzardLastDiskFlushTimeSecs; attributes: Td,V_blizzardLastDiskFlushTimeSecs
// Property: spectrumLastDiskFlushTimeSecs; attributes: Td,V_spectrumLastDiskFlushTimeSecs
// Property: logQueueName; attributes: T@"NSString",R,N,V_logQueueName
// Property: queuePriority; attributes: TQ,R,N
// Property: region; attributes: TQ,R,N
// Property: spectrumSequenceId; attributes: Tq,N,V_spectrumSequenceId
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",R,N,V_graphene
// Property: jsonSerializer; attributes: T@"SCBlizzardJsonSerializer",R,N,V_jsonSerializer
// Property: frameEventList; attributes: T@"SCBlizzardEventList",R,N,V_frameEventList
// Property: spectrumEventList; attributes: T@"SCSpectrumEventList",R,N,V_spectrumEventList
// Property: filePersistenceSink; attributes: T@"SCBlizzardFilePersistenceSink",R,N,V_filePersistenceSink
// Property: frameStartProvider; attributes: T@"SCBlizzardFrameStartProvider",R,N,V_frameStartProvider
// Property: eventLoggerPrefetcher; attributes: T@"<SCBlizzardEventsPrefetching>",W,N,V_eventLoggerPrefetcher
// Property: eagerUploadClient; attributes: T@"SCBlizzardEagerUploadClient",R,N,V_eagerUploadClient
// Property: eagerUploadIdProvider; attributes: T@"SCBlizzardEagerUploadIdProvider",R,N,V_eagerUploadIdProvider

// -[SCBlizzardEventLogger logSpectrumEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1005558b4

// -[SCBlizzardEventLogger maybeFlushSpectrumAllEventsToDiskIfTimeElapsed]
// Type encoding: v16@0:8
// Implementation: 0x106ad8f04

// -[SCBlizzardEventLogger flushSpectrumAllEventsToDisk]
// Type encoding: v16@0:8
// Implementation: 0x106ad9078

// -[SCBlizzardEventLogger _saveSpectrumEventsAndDrain]
// Type encoding: v16@0:8
// Implementation: 0x106ad907c

// -[SCBlizzardEventLogger _logSpectrumHeaderStatusGrapheneEvents:]
// Type encoding: v20@0:8B16
// Implementation: 0x1005564f0

// -[SCBlizzardEventLogger _shouldPersistAndUploadSpectrumEventImmediately:]
// Type encoding: B24@0:8@16
// Implementation: 0x10055663c

// -[SCBlizzardEventLogger _shouldPersistSpectrumEventImmediately:]
// Type encoding: B24@0:8@16
// Implementation: 0x100557d54

// -[SCBlizzardEventLogger _isCriticalAdsTrackEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x100557adc

// -[SCBlizzardEventLogger _isSnapAirHighPriorityEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x1005569e0

// -[SCBlizzardEventLogger _isLeadGenAdPreviewEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x100557c60

// -[SCBlizzardEventLogger _isTraceEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x100557c1c

// -[SCBlizzardEventLogger _isInternalBuild]
// Type encoding: B16@0:8
// Implementation: 0x106ad9744

// -[SCBlizzardEventLogger initWithConfig:frameEventList:spectrumEventList:jsonSerializer:appStateProvider:logQueueName:experimentProvider:grapheneRegistry:filePersistenceSink:uploadManager:eventConfigurer:blizzardRtusEventRouter:eagerUploadClient:eagerUploadIdProvider:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x100322fb4

// -[SCBlizzardEventLogger logEvent:uploadImmediately:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1003ea474

// -[SCBlizzardEventLogger _logFramesEvent:uploadImmediately:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1003eaeec

// -[SCBlizzardEventLogger _getClientTsMillisFromEvent:]
// Type encoding: q24@0:8@16
// Implementation: 0x1003eb2bc

// -[SCBlizzardEventLogger _logFrameStartGrapheneEvents:properties:]
// Type encoding: v28@0:8B16@20
// Implementation: 0x1003ec138

// -[SCBlizzardEventLogger _getFrameEvent:currentTimeMillis:]
// Type encoding: @32@0:8@16q24
// Implementation: 0x1003ec1f4

// -[SCBlizzardEventLogger _incrementProtoFrameSequenceId]
// Type encoding: v16@0:8
// Implementation: 0x1004c401c

// -[SCBlizzardEventLogger _convertPageTabTypeFromBlizzardSchemaToPbSchema:]
// Type encoding: i24@0:8q16
// Implementation: 0x1003f2c88

// -[SCBlizzardEventLogger _onFrameEventLogged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f6634

// -[SCBlizzardEventLogger _routeEventToRtusCacheOnFrameEventLogged:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003f6674

// -[SCBlizzardEventLogger _handleDPHEventStatsOnFrameEventLogged:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7164

// -[SCBlizzardEventLogger _saveFrameEventsAndDrain]
// Type encoding: v16@0:8
// Implementation: 0x10057e314

// -[SCBlizzardEventLogger _logEvent:uploadImmediately:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1003ea62c

// -[SCBlizzardEventLogger _getSerializationMethodForEvent:]
// Type encoding: Q24@0:8@16
// Implementation: 0x1003f2cb0

// -[SCBlizzardEventLogger _isEventBlacklisted:]
// Type encoding: B24@0:8@16
// Implementation: 0x1003ea94c

// -[SCBlizzardEventLogger queuePriority]
// Type encoding: Q16@0:8
// Implementation: 0x106ad72b4

// -[SCBlizzardEventLogger region]
// Type encoding: Q16@0:8
// Implementation: 0x1003eaa74

// -[SCBlizzardEventLogger _isAppBackgrounded]
// Type encoding: B16@0:8
// Implementation: 0x1003eaab8

// -[SCBlizzardEventLogger maybeFlushAllEventsToDiskIfTimeElapsed]
// Type encoding: v16@0:8
// Implementation: 0x106ad72f0

// -[SCBlizzardEventLogger flushAllEventsToDisk]
// Type encoding: v16@0:8
// Implementation: 0x106ad7470

// -[SCBlizzardEventLogger isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x100325240

// -[SCBlizzardEventLogger isEqualToLogger:]
// Type encoding: B24@0:8@16
// Implementation: 0x1003252cc

// -[SCBlizzardEventLogger hash]
// Type encoding: Q16@0:8
// Implementation: 0x1003251fc

// -[SCBlizzardEventLogger _shouldLogSessionHealthFor:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad7474

// -[SCBlizzardEventLogger getDPHQueueStatsWith:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ad7500

// -[SCBlizzardEventLogger getAllLoggedSessions]
// Type encoding: @16@0:8
// Implementation: 0x106ad75a8

// -[SCBlizzardEventLogger _emitEstimatedEventSizeMetricsWithEventNames:totalSizeBytes:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x100780c2c

// -[SCBlizzardEventLogger _isEagerUploadingEnabledForQueue:]
// Type encoding: B24@0:8@16
// Implementation: 0x10032360c

// -[SCBlizzardEventLogger logQueueName]
// Type encoding: @16@0:8
// Implementation: 0x100325238

// -[SCBlizzardEventLogger spectrumSequenceId]
// Type encoding: q16@0:8
// Implementation: 0x106ad7608

// -[SCBlizzardEventLogger setSpectrumSequenceId:]
// Type encoding: v24@0:8q16
// Implementation: 0x106ad7610

// -[SCBlizzardEventLogger graphene]
// Type encoding: @16@0:8
// Implementation: 0x100556534

// -[SCBlizzardEventLogger jsonSerializer]
// Type encoding: @16@0:8
// Implementation: 0x106ad7618

// -[SCBlizzardEventLogger frameEventList]
// Type encoding: @16@0:8
// Implementation: 0x1003eb960

// -[SCBlizzardEventLogger spectrumEventList]
// Type encoding: @16@0:8
// Implementation: 0x1005561a0

// -[SCBlizzardEventLogger filePersistenceSink]
// Type encoding: @16@0:8
// Implementation: 0x10057f214

// -[SCBlizzardEventLogger frameStartProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ad7620

// -[SCBlizzardEventLogger eventLoggerPrefetcher]
// Type encoding: @16@0:8
// Implementation: 0x106ad7628

// -[SCBlizzardEventLogger setEventLoggerPrefetcher:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7640

// -[SCBlizzardEventLogger eagerUploadClient]
// Type encoding: @16@0:8
// Implementation: 0x106ad764c

// -[SCBlizzardEventLogger eagerUploadIdProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ad7654

// -[SCBlizzardEventLogger protoFrameSequenceId]
// Type encoding: q16@0:8
// Implementation: 0x1003eb3e0

// -[SCBlizzardEventLogger setProtoFrameSequenceId:]
// Type encoding: v24@0:8q16
// Implementation: 0x1004c4044

// -[SCBlizzardEventLogger protoQueueName]
// Type encoding: @16@0:8
// Implementation: 0x1003f6734

// -[SCBlizzardEventLogger setProtoQueueName:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad765c

// -[SCBlizzardEventLogger protoQueueStats]
// Type encoding: @16@0:8
// Implementation: 0x106ad768c

// -[SCBlizzardEventLogger setProtoQueueStats:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7694

// -[SCBlizzardEventLogger trimTierZeroEventsEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ad76c4

// -[SCBlizzardEventLogger setTrimTierZeroEventsEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ad76cc

// -[SCBlizzardEventLogger blizzardRtusEventRouter]
// Type encoding: @16@0:8
// Implementation: 0x106ad76d4

// -[SCBlizzardEventLogger setBlizzardRtusEventRouter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad76dc

// -[SCBlizzardEventLogger config]
// Type encoding: @16@0:8
// Implementation: 0x1003eaa64

// -[SCBlizzardEventLogger eventConfigurer]
// Type encoding: @16@0:8
// Implementation: 0x106ad770c

// -[SCBlizzardEventLogger appStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ad7714

// -[SCBlizzardEventLogger experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x100323448

// -[SCBlizzardEventLogger uploadManager]
// Type encoding: @16@0:8
// Implementation: 0x106ad771c

// -[SCBlizzardEventLogger setUploadManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7734

// -[SCBlizzardEventLogger isEagerUploadingEnabledForQueue]
// Type encoding: B16@0:8
// Implementation: 0x10057f20c

// -[SCBlizzardEventLogger blizzardLastDiskFlushTimeSecs]
// Type encoding: d16@0:8
// Implementation: 0x106ad7740

// -[SCBlizzardEventLogger setBlizzardLastDiskFlushTimeSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x100781a10

// -[SCBlizzardEventLogger spectrumLastDiskFlushTimeSecs]
// Type encoding: d16@0:8
// Implementation: 0x106ad7748

// -[SCBlizzardEventLogger setSpectrumLastDiskFlushTimeSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ad7750

// -[SCBlizzardEventLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100367b60

// +[SCBlizzardEventLogger SnapAirFatalCrashTypes]
// Type encoding: @16@0:8
// Implementation: 0x100556c64

@end
