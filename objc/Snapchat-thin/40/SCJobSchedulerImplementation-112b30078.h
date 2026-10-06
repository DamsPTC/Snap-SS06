// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCJobSchedulerImplementation
// Superclass: NSObject
// Address: 0x112b30078

@interface SCJobSchedulerImplementation


// -[SCJobSchedulerImplementation initWithSystemDocObjectContext:networkConnectivityAnnouncer:applicationState:backgroundPrefetchObservable:grapheneRegistry:grapheneFlusher:idleMonitor:backgroundTaskWrapper:cof:criticalSectionObservable:perfLogger:applicationLifecycleEvents:appRefreshJobTypeIdAllowListString:enableJobCompletionGrapheneBgFlush:]
// Type encoding: @128@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112@120
// Implementation: 0x1006f1110

// -[SCJobSchedulerImplementation setUserDocObjectContext:]
// Type encoding: v24@0:8@16
// Implementation: 0x1008a91c4

// -[SCJobSchedulerImplementation _registerNotification]
// Type encoding: v16@0:8
// Implementation: 0x1006f20a4

// -[SCJobSchedulerImplementation submitJobWithInput:jobConfig:queue:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1008aa478

// -[SCJobSchedulerImplementation _submitJobWithInput:jobConfig:queue:onComplete:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x106cb9004

// -[SCJobSchedulerImplementation cancelJobWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cb900c

// -[SCJobSchedulerImplementation _cancelJobWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cb91b0

// -[SCJobSchedulerImplementation jobExistsWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cb91b8

// -[SCJobSchedulerImplementation _jobExistsWithTypeIdentifier:jobSubtypeIdentifier:jobScope:queue:onComplete:]
// Type encoding: v52@0:8@16@24i32@36@?44
// Implementation: 0x106cb935c

// -[SCJobSchedulerImplementation runningJobsWithQueue:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106cb9364

// -[SCJobSchedulerImplementation _runningJobsWithQueue:onComplete:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x106cb95b4

// -[SCJobSchedulerImplementation setUserJobProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb95bc

// -[SCJobSchedulerImplementation cleanUserJobProviders]
// Type encoding: v16@0:8
// Implementation: 0x1008a911c

// -[SCJobSchedulerImplementation _setUserJobProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb96c8

// -[SCJobSchedulerImplementation _clearUserJobProviders]
// Type encoding: v16@0:8
// Implementation: 0x1008a979c

// -[SCJobSchedulerImplementation setSystemJobProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb96f8

// -[SCJobSchedulerImplementation _setSystemJobProviders:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb9804

// -[SCJobSchedulerImplementation networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x1006f1df0

// -[SCJobSchedulerImplementation _networkConnectivityStatusDidChange:]
// Type encoding: v24@0:8q16
// Implementation: 0x1006f4b80

// -[SCJobSchedulerImplementation _applicationEnteredForeground]
// Type encoding: v16@0:8
// Implementation: 0x106cb9834

// -[SCJobSchedulerImplementation _applicationEnteredBackground]
// Type encoding: v16@0:8
// Implementation: 0x106cb990c

// -[SCJobSchedulerImplementation _appStateDidChange:]
// Type encoding: v20@0:8B16
// Implementation: 0x106cb99e4

// -[SCJobSchedulerImplementation _handleBatteryStateDidChangeNotification]
// Type encoding: v16@0:8
// Implementation: 0x106cb99f4

// -[SCJobSchedulerImplementation _batteryStateDidChange]
// Type encoding: v16@0:8
// Implementation: 0x106cb9ac8

// -[SCJobSchedulerImplementation _setupBackgroundObserverIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x1008a989c

// -[SCJobSchedulerImplementation _onBackgroundWakeupReceived:]
// Type encoding: v24@0:8@16
// Implementation: 0x106cb9c9c

// -[SCJobSchedulerImplementation _onBackgroundTaskStarted:completionHandler:notificaionContext:]
// Type encoding: v40@0:8q16@?24@32
// Implementation: 0x106cb9d6c

// -[SCJobSchedulerImplementation _onBackgroundTaskExpired:]
// Type encoding: v24@0:8q16
// Implementation: 0x106cb9e10

// -[SCJobSchedulerImplementation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106cb9e60

@end
