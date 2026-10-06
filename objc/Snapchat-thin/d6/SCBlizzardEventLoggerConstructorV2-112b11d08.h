// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEventLoggerConstructorV2
// Superclass: NSObject
// Address: 0x112b11d08

@interface SCBlizzardEventLoggerConstructorV2

// Property: config; attributes: T@"SCBlizzardConfig",&,N,V_config
// Property: loggingQueue; attributes: T@"NSOperationQueue",&,N,V_loggingQueue
// Property: timeProvider; attributes: T@"<SCTimeProviding>",&,N,V_timeProvider
// Property: eventConfigurer; attributes: T@"SCBlizzardEventConfigurer",&,N,V_eventConfigurer
// Property: appStateProvider; attributes: T@"SCBlizzardAppStateProvider",&,N,V_appStateProvider
// Property: fileSystem; attributes: T@"SCBlizzardFileSystem",&,N,V_fileSystem
// Property: fileCompressor; attributes: T@"SCBlizzardFileCompressor",&,N,V_fileCompressor
// Property: loggerIndex; attributes: T@"NSDictionary",&,N,V_loggerIndex
// Property: spectrumPriorityToLoggerMap; attributes: T@"NSDictionary",&,N,V_spectrumPriorityToLoggerMap
// Property: allSpectrumLoggers; attributes: T@"NSMutableArray",&,N,V_allSpectrumLoggers
// Property: sortedLoggers; attributes: T@"NSMutableOrderedSet",&,N,V_sortedLoggers
// Property: qosToLoggersDict; attributes: T@"NSDictionary",&,N,V_qosToLoggersDict
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",R,W,N,V_experimentProvider
// Property: grapheneRegistry; attributes: T@"SCGrapheneBlizzardMetric2",R,N,V_grapheneRegistry
// Property: snapTokenProvider; attributes: T@"SCLazy",R,N,V_snapTokenProvider
// Property: circumstanceEngine; attributes: T@"<SCCircumstanceEngineProtocol>",R,N,V_circumstanceEngine
// Property: blizzardRtusEventRouter; attributes: T@"SCBlizzardRtusEventRouter",&,N,V_blizzardRtusEventRouter
// Property: eagerUploadStatusManager; attributes: T@"SCBlizzardEagerUploadStatusManager",&,N,V_eagerUploadStatusManager
// Property: eagerUploadIdProvider; attributes: T@"SCBlizzardEagerUploadIdProvider",&,N,V_eagerUploadIdProvider
// Property: uploadManagerForBlizzard; attributes: T@"SCBlizzardUploadManager",R,N,V_uploadManagerForBlizzard
// Property: uploadManagerForSpectrum; attributes: T@"SCBlizzardUploadManager",R,N,V_uploadManagerForSpectrum

// -[SCBlizzardEventLoggerConstructorV2 initWithConfig:loggingQueue:timeProvider:eventConfigurer:fileSystem:appStateProvider:experimentProvider:grapheneRegistry:snapTokenProvider:circumstanceEngine:blizzardRtusEventRouter:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x1002d248c

// -[SCBlizzardEventLoggerConstructorV2 constructLoggersForBlizzard]
// Type encoding: v16@0:8
// Implementation: 0x1002d29d0

// -[SCBlizzardEventLoggerConstructorV2 constructLoggersForSpectrum]
// Type encoding: v16@0:8
// Implementation: 0x1003254f4

// -[SCBlizzardEventLoggerConstructorV2 _constructLoggersForSpectrum]
// Type encoding: @16@0:8
// Implementation: 0x100325530

// -[SCBlizzardEventLoggerConstructorV2 getBlizzardLoggers]
// Type encoding: @16@0:8
// Implementation: 0x100344204

// -[SCBlizzardEventLoggerConstructorV2 getSpectrumLoggers]
// Type encoding: @16@0:8
// Implementation: 0x1003442a4

// -[SCBlizzardEventLoggerConstructorV2 getSpectrumPriorityToLoggerMap]
// Type encoding: @16@0:8
// Implementation: 0x100344304

// -[SCBlizzardEventLoggerConstructorV2 getQoSToLoggersDict]
// Type encoding: @16@0:8
// Implementation: 0x100344138

// -[SCBlizzardEventLoggerConstructorV2 _sortQosStrings:]
// Type encoding: @24@0:8@16
// Implementation: 0x100324650

// -[SCBlizzardEventLoggerConstructorV2 _constructLoggerIndex]
// Type encoding: @16@0:8
// Implementation: 0x1002d2a74

// -[SCBlizzardEventLoggerConstructorV2 _sortLoggers:]
// Type encoding: @24@0:8@16
// Implementation: 0x100324dd8

// -[SCBlizzardEventLoggerConstructorV2 _loggerDictFromQoSDict:]
// Type encoding: @24@0:8@16
// Implementation: 0x100324420

// -[SCBlizzardEventLoggerConstructorV2 uploadManagerForBlizzard]
// Type encoding: @16@0:8
// Implementation: 0x100344050

// -[SCBlizzardEventLoggerConstructorV2 uploadManagerForSpectrum]
// Type encoding: @16@0:8
// Implementation: 0x100338384

// -[SCBlizzardEventLoggerConstructorV2 config]
// Type encoding: @16@0:8
// Implementation: 0x1002d34dc

// -[SCBlizzardEventLoggerConstructorV2 setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8b8c

// -[SCBlizzardEventLoggerConstructorV2 loggingQueue]
// Type encoding: @16@0:8
// Implementation: 0x1003221d0

// -[SCBlizzardEventLoggerConstructorV2 setLoggingQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8bbc

// -[SCBlizzardEventLoggerConstructorV2 timeProvider]
// Type encoding: @16@0:8
// Implementation: 0x100322168

// -[SCBlizzardEventLoggerConstructorV2 setTimeProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8bec

// -[SCBlizzardEventLoggerConstructorV2 eventConfigurer]
// Type encoding: @16@0:8
// Implementation: 0x100322fa4

// -[SCBlizzardEventLoggerConstructorV2 setEventConfigurer:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8c1c

// -[SCBlizzardEventLoggerConstructorV2 appStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x100322160

// -[SCBlizzardEventLoggerConstructorV2 setAppStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8c4c

// -[SCBlizzardEventLoggerConstructorV2 fileSystem]
// Type encoding: @16@0:8
// Implementation: 0x1002f1708

// -[SCBlizzardEventLoggerConstructorV2 setFileSystem:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8c7c

// -[SCBlizzardEventLoggerConstructorV2 fileCompressor]
// Type encoding: @16@0:8
// Implementation: 0x106ad8cac

// -[SCBlizzardEventLoggerConstructorV2 setFileCompressor:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8cb4

// -[SCBlizzardEventLoggerConstructorV2 loggerIndex]
// Type encoding: @16@0:8
// Implementation: 0x100324dd0

// -[SCBlizzardEventLoggerConstructorV2 setLoggerIndex:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003242dc

// -[SCBlizzardEventLoggerConstructorV2 spectrumPriorityToLoggerMap]
// Type encoding: @16@0:8
// Implementation: 0x100344308

// -[SCBlizzardEventLoggerConstructorV2 setSpectrumPriorityToLoggerMap:]
// Type encoding: v24@0:8@16
// Implementation: 0x100344020

// -[SCBlizzardEventLoggerConstructorV2 allSpectrumLoggers]
// Type encoding: @16@0:8
// Implementation: 0x1003383f4

// -[SCBlizzardEventLoggerConstructorV2 setAllSpectrumLoggers:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8ce4

// -[SCBlizzardEventLoggerConstructorV2 sortedLoggers]
// Type encoding: @16@0:8
// Implementation: 0x100324ed0

// -[SCBlizzardEventLoggerConstructorV2 setSortedLoggers:]
// Type encoding: v24@0:8@16
// Implementation: 0x100325180

// -[SCBlizzardEventLoggerConstructorV2 qosToLoggersDict]
// Type encoding: @16@0:8
// Implementation: 0x1003441fc

// -[SCBlizzardEventLoggerConstructorV2 setQosToLoggersDict:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003254c4

// -[SCBlizzardEventLoggerConstructorV2 experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x100322170

// -[SCBlizzardEventLoggerConstructorV2 grapheneRegistry]
// Type encoding: @16@0:8
// Implementation: 0x100322a08

// -[SCBlizzardEventLoggerConstructorV2 snapTokenProvider]
// Type encoding: @16@0:8
// Implementation: 0x1003221c8

// -[SCBlizzardEventLoggerConstructorV2 circumstanceEngine]
// Type encoding: @16@0:8
// Implementation: 0x106ad8d14

// -[SCBlizzardEventLoggerConstructorV2 blizzardRtusEventRouter]
// Type encoding: @16@0:8
// Implementation: 0x106ad8d1c

// -[SCBlizzardEventLoggerConstructorV2 setBlizzardRtusEventRouter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8d24

// -[SCBlizzardEventLoggerConstructorV2 eagerUploadStatusManager]
// Type encoding: @16@0:8
// Implementation: 0x1002fedb0

// -[SCBlizzardEventLoggerConstructorV2 setEagerUploadStatusManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8d54

// -[SCBlizzardEventLoggerConstructorV2 eagerUploadIdProvider]
// Type encoding: @16@0:8
// Implementation: 0x100322fac

// -[SCBlizzardEventLoggerConstructorV2 setEagerUploadIdProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8d84

// -[SCBlizzardEventLoggerConstructorV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x100367a50

@end
