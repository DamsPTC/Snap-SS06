// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBlizzardEventLoggerAdapter
// Superclass: NSObject
// Address: 0x112b11cb8

@interface SCBlizzardEventLoggerAdapter

// Property: foregroundDiskFlushTimer; attributes: T@"SCWeakTimer",&,N,V_foregroundDiskFlushTimer
// Property: backgroundDiskFlushTimer; attributes: T@"SCWeakTimer",&,N,V_backgroundDiskFlushTimer
// Property: backgroundFlushCounter; attributes: TQ,N,V_backgroundFlushCounter
// Property: backgroundDiskFlushIntervalSecs; attributes: Td,N,V_backgroundDiskFlushIntervalSecs
// Property: backgroundDiskFlushCountThreshold; attributes: TQ,N,V_backgroundDiskFlushCountThreshold
// Property: healthReporter; attributes: T@"SCBlizzardHealthReporter",&,N,V_healthReporter
// Property: invariantChecker; attributes: T@"SCBlizzardInvariantChecker",&,N,V_invariantChecker
// Property: loggingQueue; attributes: T@"NSOperationQueue",&,N,V_loggingQueue
// Property: loggerProvider; attributes: T@"<SCBlizzardEventLoggerProvider>",&,N,V_loggerProvider
// Property: eventConfigurer; attributes: T@"SCBlizzardEventConfigurer",&,N,V_eventConfigurer
// Property: eventSerializer; attributes: T@"SCBlizzardEventSerializer",&,N,V_eventSerializer
// Property: samplingProvider; attributes: T@"SCBlizzardSamplingProvider",&,N,V_samplingProvider
// Property: eventObserverManager; attributes: T@"SCBlizzardEventObserverManager",&,N,V_eventObserverManager
// Property: sessionLogger; attributes: T@"SCBlizzardSessionLogger",&,N,V_sessionLogger
// Property: config; attributes: T@"SCBlizzardConfig",&,N,V_config
// Property: notificationCenter; attributes: T@"NSNotificationCenter",&,N,V_notificationCenter
// Property: abEventManager; attributes: T@"SCBlizzardABEventManager",&,N,V_abEventManager
// Property: blacklistedBlizzardEvents; attributes: T@"NSSet",&,N,V_blacklistedBlizzardEvents
// Property: shouldSampleEvents; attributes: TB,N,V_shouldSampleEvents
// Property: experimentProvider; attributes: T@"SCBlizzardExperimentProvider",W,N,V_experimentProvider
// Property: appStateProvider; attributes: T@"SCBlizzardAppStateProvider",&,N,V_appStateProvider
// Property: pageViewStateManager; attributes: T@"SCBlizzardPageViewStateManager",&,N,V_pageViewStateManager
// Property: graphene; attributes: T@"SCGrapheneBlizzardMetric2",&,N,V_graphene
// Property: mapDeserializer; attributes: T@"SCAMapDeserializer",&,N,V_mapDeserializer
// Property: fileQueues; attributes: T@"NSArray",&,N,V_fileQueues
// Property: flipper; attributes: T@"<SCFlipper>",R,N
// Property: isSpectrumEnabled; attributes: TB,N,V_isSpectrumEnabled
// Property: appInsightsMetadataStorage; attributes: T@"SCLazy",R,N,V_appInsightsMetadataStorage
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBlizzardEventLoggerAdapter streamEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x1002cf02c

// -[SCBlizzardEventLoggerAdapter streamEvent:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x106ad974c

// -[SCBlizzardEventLoggerAdapter _wrapAndLogEvent:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x1004d25c0

// -[SCBlizzardEventLoggerAdapter _exposeToEventObserver:wrappedEvent:region:]
// Type encoding: v40@0:8@16@24Q32
// Implementation: 0x100557dd8

// -[SCBlizzardEventLoggerAdapter _wrapEvent:]
// Type encoding: @24@0:8@16
// Implementation: 0x1004d271c

// -[SCBlizzardEventLoggerAdapter _appendToSpectrumLogViewerIfLoggingEnabled:region:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x100557d84

// -[SCBlizzardEventLoggerAdapter _outputSepectrumLogToFlipperIfFlipperEnabled:]
// Type encoding: v24@0:8@16
// Implementation: 0x100557d88

// -[SCBlizzardEventLoggerAdapter logSerializedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7758

// -[SCBlizzardEventLoggerAdapter _validateBlizzardEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad78cc

// -[SCBlizzardEventLoggerAdapter _logBlizzardEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7a4c

// -[SCBlizzardEventLoggerAdapter initWithLoggingQueue:experimentProvider:samplingProvider:sessionLogger:flipper:eventObserverManager:appInsightsMetadataStorage:]
// Type encoding: @72@0:8@16@24@32@40@48@56@64
// Implementation: 0x100280d20

// -[SCBlizzardEventLoggerAdapter startLoggingWithLoggerProvider:config:notificationCenter:eventConfigurer:eventSerializer:grapheneRegistry:pageViewStateManager:mapDeserializer:]
// Type encoding: v80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x100362690

// -[SCBlizzardEventLoggerAdapter _logUserEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100282008

// -[SCBlizzardEventLoggerAdapter logUserTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x100282004

// -[SCBlizzardEventLoggerAdapter logUserNotTrackedEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad7d3c

// -[SCBlizzardEventLoggerAdapter willLogEventsOfType:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad7d40

// -[SCBlizzardEventLoggerAdapter startSession]
// Type encoding: v16@0:8
// Implementation: 0x100c7560c

// -[SCBlizzardEventLoggerAdapter startFeatureSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad7e3c

// -[SCBlizzardEventLoggerAdapter endFeatureSession:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad7e40

// -[SCBlizzardEventLoggerAdapter _logEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10028607c

// -[SCBlizzardEventLoggerAdapter _createEventBaseForComposerEvents:userGuid:isUserTracked:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x100366f8c

// -[SCBlizzardEventLoggerAdapter _isNativeEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x106ad7e44

// -[SCBlizzardEventLoggerAdapter _isComposerEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x100282154

// -[SCBlizzardEventLoggerAdapter _isWatchEvent:]
// Type encoding: B24@0:8@16
// Implementation: 0x100285abc

// -[SCBlizzardEventLoggerAdapter _validateEvent:]
// Type encoding: v24@0:8@16
// Implementation: 0x10028588c

// -[SCBlizzardEventLoggerAdapter _exposeToObserverEvent:isCritical:andProperties:blizzardEventSource:loggers:]
// Type encoding: v48@0:8@16B24@28i36@40
// Implementation: 0x1004c40fc

// -[SCBlizzardEventLoggerAdapter _applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c7a5cc

// -[SCBlizzardEventLoggerAdapter _applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x106ad7ebc

// -[SCBlizzardEventLoggerAdapter _applicationWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x106ad80c8

// -[SCBlizzardEventLoggerAdapter _sceneDidDisconnect]
// Type encoding: v16@0:8
// Implementation: 0x106ad80cc

// -[SCBlizzardEventLoggerAdapter _notifyLoggersToFlushWithTimerInBackground]
// Type encoding: v16@0:8
// Implementation: 0x106ad80d0

// -[SCBlizzardEventLoggerAdapter _notifyLoggersToMaybeFlushWithTimerInForeground]
// Type encoding: v16@0:8
// Implementation: 0x106ad8148

// -[SCBlizzardEventLoggerAdapter _notifyLoggersToFlush]
// Type encoding: v16@0:8
// Implementation: 0x106ad8424

// -[SCBlizzardEventLoggerAdapter sessionId]
// Type encoding: @16@0:8
// Implementation: 0x106ad8718

// -[SCBlizzardEventLoggerAdapter setHealthReporter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100367620

// -[SCBlizzardEventLoggerAdapter flipper]
// Type encoding: @16@0:8
// Implementation: 0x100557db0

// -[SCBlizzardEventLoggerAdapter foregroundDiskFlushTimer]
// Type encoding: @16@0:8
// Implementation: 0x106ad8760

// -[SCBlizzardEventLoggerAdapter setForegroundDiskFlushTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7a660

// -[SCBlizzardEventLoggerAdapter backgroundDiskFlushTimer]
// Type encoding: @16@0:8
// Implementation: 0x100365ef0

// -[SCBlizzardEventLoggerAdapter setBackgroundDiskFlushTimer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c7a690

// -[SCBlizzardEventLoggerAdapter backgroundFlushCounter]
// Type encoding: Q16@0:8
// Implementation: 0x106ad8768

// -[SCBlizzardEventLoggerAdapter setBackgroundFlushCounter:]
// Type encoding: v24@0:8Q16
// Implementation: 0x100365ef8

// -[SCBlizzardEventLoggerAdapter backgroundDiskFlushIntervalSecs]
// Type encoding: d16@0:8
// Implementation: 0x106ad8770

// -[SCBlizzardEventLoggerAdapter setBackgroundDiskFlushIntervalSecs:]
// Type encoding: v24@0:8d16
// Implementation: 0x106ad8778

// -[SCBlizzardEventLoggerAdapter backgroundDiskFlushCountThreshold]
// Type encoding: Q16@0:8
// Implementation: 0x106ad8780

// -[SCBlizzardEventLoggerAdapter setBackgroundDiskFlushCountThreshold:]
// Type encoding: v24@0:8Q16
// Implementation: 0x106ad8788

// -[SCBlizzardEventLoggerAdapter healthReporter]
// Type encoding: @16@0:8
// Implementation: 0x106ad8790

// -[SCBlizzardEventLoggerAdapter invariantChecker]
// Type encoding: @16@0:8
// Implementation: 0x106ad8798

// -[SCBlizzardEventLoggerAdapter setInvariantChecker:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003660a0

// -[SCBlizzardEventLoggerAdapter loggingQueue]
// Type encoding: @16@0:8
// Implementation: 0x100286374

// -[SCBlizzardEventLoggerAdapter setLoggingQueue:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad87a0

// -[SCBlizzardEventLoggerAdapter loggerProvider]
// Type encoding: @16@0:8
// Implementation: 0x1003ea3c0

// -[SCBlizzardEventLoggerAdapter setLoggerProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x100363240

// -[SCBlizzardEventLoggerAdapter eventConfigurer]
// Type encoding: @16@0:8
// Implementation: 0x10036718c

// -[SCBlizzardEventLoggerAdapter setEventConfigurer:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003632a0

// -[SCBlizzardEventLoggerAdapter eventSerializer]
// Type encoding: @16@0:8
// Implementation: 0x106ad87d0

// -[SCBlizzardEventLoggerAdapter setEventSerializer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100363300

// -[SCBlizzardEventLoggerAdapter samplingProvider]
// Type encoding: @16@0:8
// Implementation: 0x1002828b0

// -[SCBlizzardEventLoggerAdapter setSamplingProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad87d8

// -[SCBlizzardEventLoggerAdapter eventObserverManager]
// Type encoding: @16@0:8
// Implementation: 0x106ad8808

// -[SCBlizzardEventLoggerAdapter setEventObserverManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8810

// -[SCBlizzardEventLoggerAdapter sessionLogger]
// Type encoding: @16@0:8
// Implementation: 0x100c757a8

// -[SCBlizzardEventLoggerAdapter setSessionLogger:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8840

// -[SCBlizzardEventLoggerAdapter config]
// Type encoding: @16@0:8
// Implementation: 0x106ad8870

// -[SCBlizzardEventLoggerAdapter setConfig:]
// Type encoding: v24@0:8@16
// Implementation: 0x1003632d0

// -[SCBlizzardEventLoggerAdapter notificationCenter]
// Type encoding: @16@0:8
// Implementation: 0x10036613c

// -[SCBlizzardEventLoggerAdapter setNotificationCenter:]
// Type encoding: v24@0:8@16
// Implementation: 0x100363270

// -[SCBlizzardEventLoggerAdapter abEventManager]
// Type encoding: @16@0:8
// Implementation: 0x1004d02bc

// -[SCBlizzardEventLoggerAdapter setAbEventManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x100365ec0

// -[SCBlizzardEventLoggerAdapter blacklistedBlizzardEvents]
// Type encoding: @16@0:8
// Implementation: 0x100282140

// -[SCBlizzardEventLoggerAdapter setBlacklistedBlizzardEvents:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad8878

// -[SCBlizzardEventLoggerAdapter shouldSampleEvents]
// Type encoding: B16@0:8
// Implementation: 0x106ad88a8

// -[SCBlizzardEventLoggerAdapter setShouldSampleEvents:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ad88b0

// -[SCBlizzardEventLoggerAdapter experimentProvider]
// Type encoding: @16@0:8
// Implementation: 0x100363478

// -[SCBlizzardEventLoggerAdapter setExperimentProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad88b8

// -[SCBlizzardEventLoggerAdapter appStateProvider]
// Type encoding: @16@0:8
// Implementation: 0x106ad88c4

// -[SCBlizzardEventLoggerAdapter setAppStateProvider:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad88cc

// -[SCBlizzardEventLoggerAdapter pageViewStateManager]
// Type encoding: @16@0:8
// Implementation: 0x1003ea0d8

// -[SCBlizzardEventLoggerAdapter setPageViewStateManager:]
// Type encoding: v24@0:8@16
// Implementation: 0x100363360

// -[SCBlizzardEventLoggerAdapter graphene]
// Type encoding: @16@0:8
// Implementation: 0x1004a0904

// -[SCBlizzardEventLoggerAdapter setGraphene:]
// Type encoding: v24@0:8@16
// Implementation: 0x100363330

// -[SCBlizzardEventLoggerAdapter mapDeserializer]
// Type encoding: @16@0:8
// Implementation: 0x106ad88fc

// -[SCBlizzardEventLoggerAdapter setMapDeserializer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100363390

// -[SCBlizzardEventLoggerAdapter fileQueues]
// Type encoding: @16@0:8
// Implementation: 0x106ad8904

// -[SCBlizzardEventLoggerAdapter setFileQueues:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ad890c

// -[SCBlizzardEventLoggerAdapter isSpectrumEnabled]
// Type encoding: B16@0:8
// Implementation: 0x106ad893c

// -[SCBlizzardEventLoggerAdapter setIsSpectrumEnabled:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ad8944

// -[SCBlizzardEventLoggerAdapter appInsightsMetadataStorage]
// Type encoding: @16@0:8
// Implementation: 0x106ad894c

// -[SCBlizzardEventLoggerAdapter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ad8954

// +[SCBlizzardEventLoggerAdapter setIsUserTrackedLoggerInitialized:]
// Type encoding: v20@0:8B16
// Implementation: 0x1002885fc

// +[SCBlizzardEventLoggerAdapter resetDispatchOnceToken]
// Type encoding: v16@0:8
// Implementation: 0x106ad875c

@end
