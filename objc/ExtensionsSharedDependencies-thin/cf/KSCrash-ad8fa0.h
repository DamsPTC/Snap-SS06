// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrash
// Superclass: NSObject
// Address: 0xad8fa0

@interface KSCrash

// Property: bundleName; attributes: T@"NSString",&,N,V_bundleName
// Property: basePath; attributes: T@"NSString",&,N,V_basePath
// Property: deleteBehaviorAfterSendAll; attributes: Ti,N,V_deleteBehaviorAfterSendAll
// Property: monitoring; attributes: Ti,N,V_monitoring
// Property: searchQueueNames; attributes: TB,N,V_searchQueueNames
// Property: introspectMemory; attributes: TB,N,V_introspectMemory
// Property: catchZombies; attributes: TB,N,V_catchZombies
// Property: doNotIntrospectClasses; attributes: T@"NSArray",&,N,V_doNotIntrospectClasses
// Property: maxReportCount; attributes: Ti,N,V_maxReportCount
// Property: sink; attributes: T@"<KSCrashReportFilter>",&,N,V_sink
// Property: onCrash; attributes: T^?,N,V_onCrash
// Property: addConsoleLogToReport; attributes: TB,N,V_addConsoleLogToReport
// Property: printPreviousLog; attributes: TB,N,V_printPreviousLog
// Property: demangleLanguages; attributes: Ti,N,V_demangleLanguages
// Property: uncaughtExceptionHandler; attributes: T^?,N,V_uncaughtExceptionHandler
// Property: currentSnapshotUserReportedExceptionHandler; attributes: T^?,N,V_currentSnapshotUserReportedExceptionHandler
// Property: activeDurationSinceLastCrash; attributes: Td,R,N
// Property: backgroundDurationSinceLastCrash; attributes: Td,R,N
// Property: launchesSinceLastCrash; attributes: Ti,R,N
// Property: sessionsSinceLastCrash; attributes: Ti,R,N
// Property: activeDurationSinceLaunch; attributes: Td,R,N
// Property: backgroundDurationSinceLaunch; attributes: Td,R,N
// Property: sessionsSinceLaunch; attributes: Ti,R,N
// Property: crashedLastLaunch; attributes: TB,R,N
// Property: reportCount; attributes: Ti,R,N
// Property: systemInfo; attributes: T@"NSDictionary",R,N

// -[KSCrash init]
// Type encoding: @16@0:8
// Implementation: 0x49cbac

// -[KSCrash initWithBasePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x49cce4

// -[KSCrash setUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x49ce5c

// -[KSCrash userInfo]
// Type encoding: @16@0:8
// Implementation: 0x49cef8

// -[KSCrash setMonitoring:]
// Type encoding: v20@0:8i16
// Implementation: 0x49cfe8

// -[KSCrash setSearchQueueNames:]
// Type encoding: v20@0:8B16
// Implementation: 0x49d010

// -[KSCrash setOnCrash:]
// Type encoding: v24@0:8^?16
// Implementation: 0x49d020

// -[KSCrash setIntrospectMemory:]
// Type encoding: v20@0:8B16
// Implementation: 0x49d030

// -[KSCrash setDoNotIntrospectClasses:]
// Type encoding: v24@0:8@16
// Implementation: 0x49d040

// -[KSCrash setMaxReportCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x49d104

// -[KSCrash systemInfo]
// Type encoding: @16@0:8
// Implementation: 0x49d114

// -[KSCrash install]
// Type encoding: B16@0:8
// Implementation: 0x49d6a4

// -[KSCrash sendAllReportsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x49d7bc

// -[KSCrash deleteAllReports]
// Type encoding: v16@0:8
// Implementation: 0x49d8f8

// -[KSCrash deleteReportWithID:]
// Type encoding: v24@0:8@16
// Implementation: 0x49d8fc

// -[KSCrash reportUserException:reason:language:lineOfCode:stackTrace:logAllThreads:terminateProgram:]
// Type encoding: v64@0:8@16@24@32@40@48B56B60
// Implementation: 0x49d914

// -[KSCrash enableSwapOfCxaThrow]
// Type encoding: v16@0:8
// Implementation: 0x49daac

// -[KSCrash activeDurationSinceLastCrash]
// Type encoding: d16@0:8
// Implementation: 0x49dab0

// -[KSCrash backgroundDurationSinceLastCrash]
// Type encoding: d16@0:8
// Implementation: 0x49dabc

// -[KSCrash launchesSinceLastCrash]
// Type encoding: i16@0:8
// Implementation: 0x49dac8

// -[KSCrash sessionsSinceLastCrash]
// Type encoding: i16@0:8
// Implementation: 0x49dad4

// -[KSCrash activeDurationSinceLaunch]
// Type encoding: d16@0:8
// Implementation: 0x49dae0

// -[KSCrash backgroundDurationSinceLaunch]
// Type encoding: d16@0:8
// Implementation: 0x49daec

// -[KSCrash sessionsSinceLaunch]
// Type encoding: i16@0:8
// Implementation: 0x49daf8

// -[KSCrash crashedLastLaunch]
// Type encoding: B16@0:8
// Implementation: 0x49db04

// -[KSCrash reportID]
// Type encoding: r*16@0:8
// Implementation: 0x49db10

// -[KSCrash sessionId]
// Type encoding: r*16@0:8
// Implementation: 0x49db1c

// -[KSCrash getLastCrashReportID]
// Type encoding: @16@0:8
// Implementation: 0x49db28

// -[KSCrash reportCount]
// Type encoding: i16@0:8
// Implementation: 0x49db74

// -[KSCrash sendReports:onCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x49db78

// -[KSCrash loadCrashReportJSONWithID:]
// Type encoding: @24@0:8q16
// Implementation: 0x49dcdc

// -[KSCrash doctorReport:]
// Type encoding: v24@0:8@16
// Implementation: 0x49dd2c

// -[KSCrash reportIDs]
// Type encoding: @16@0:8
// Implementation: 0x49de44

// -[KSCrash reportWithID:]
// Type encoding: @24@0:8@16
// Implementation: 0x49df14

// -[KSCrash reportWithIntID:]
// Type encoding: @24@0:8q16
// Implementation: 0x49df40

// -[KSCrash allReports]
// Type encoding: @16@0:8
// Implementation: 0x49e020

// -[KSCrash setAddConsoleLogToReport:]
// Type encoding: v20@0:8B16
// Implementation: 0x49e0f8

// -[KSCrash setPrintPreviousLog:]
// Type encoding: v20@0:8B16
// Implementation: 0x49e108

// -[KSCrash nullTerminated:]
// Type encoding: @24@0:8@16
// Implementation: 0x49e118

// -[KSCrash applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x49e164

// -[KSCrash applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x49e16c

// -[KSCrash applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x49e174

// -[KSCrash applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x49e17c

// -[KSCrash applicationWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x49e184

// -[KSCrash sink]
// Type encoding: @16@0:8
// Implementation: 0x49e188

// -[KSCrash setSink:]
// Type encoding: v24@0:8@16
// Implementation: 0x49e190

// -[KSCrash deleteBehaviorAfterSendAll]
// Type encoding: i16@0:8
// Implementation: 0x49e1b0

// -[KSCrash setDeleteBehaviorAfterSendAll:]
// Type encoding: v20@0:8i16
// Implementation: 0x49e1b8

// -[KSCrash monitoring]
// Type encoding: i16@0:8
// Implementation: 0x49e1c0

// -[KSCrash searchQueueNames]
// Type encoding: B16@0:8
// Implementation: 0x49e1c8

// -[KSCrash onCrash]
// Type encoding: ^?16@0:8
// Implementation: 0x49e1d0

// -[KSCrash bundleName]
// Type encoding: @16@0:8
// Implementation: 0x49e1d8

// -[KSCrash setBundleName:]
// Type encoding: v24@0:8@16
// Implementation: 0x49e1e0

// -[KSCrash basePath]
// Type encoding: @16@0:8
// Implementation: 0x49e200

// -[KSCrash setBasePath:]
// Type encoding: v24@0:8@16
// Implementation: 0x49e208

// -[KSCrash introspectMemory]
// Type encoding: B16@0:8
// Implementation: 0x49e228

// -[KSCrash doNotIntrospectClasses]
// Type encoding: @16@0:8
// Implementation: 0x49e230

// -[KSCrash demangleLanguages]
// Type encoding: i16@0:8
// Implementation: 0x49e238

// -[KSCrash setDemangleLanguages:]
// Type encoding: v20@0:8i16
// Implementation: 0x49e240

// -[KSCrash addConsoleLogToReport]
// Type encoding: B16@0:8
// Implementation: 0x49e248

// -[KSCrash printPreviousLog]
// Type encoding: B16@0:8
// Implementation: 0x49e250

// -[KSCrash maxReportCount]
// Type encoding: i16@0:8
// Implementation: 0x49e258

// -[KSCrash uncaughtExceptionHandler]
// Type encoding: ^?16@0:8
// Implementation: 0x49e260

// -[KSCrash setUncaughtExceptionHandler:]
// Type encoding: v24@0:8^?16
// Implementation: 0x49e268

// -[KSCrash currentSnapshotUserReportedExceptionHandler]
// Type encoding: ^?16@0:8
// Implementation: 0x49e270

// -[KSCrash setCurrentSnapshotUserReportedExceptionHandler:]
// Type encoding: v24@0:8^?16
// Implementation: 0x49e278

// -[KSCrash catchZombies]
// Type encoding: B16@0:8
// Implementation: 0x49e280

// -[KSCrash setCatchZombies:]
// Type encoding: v20@0:8B16
// Implementation: 0x49e288

// -[KSCrash .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x49e290

// +[KSCrash sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x49cab0

// +[KSCrash deviceID]
// Type encoding: @16@0:8
// Implementation: 0x49cb28

// +[KSCrash setCurrentSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x49db58

@end
