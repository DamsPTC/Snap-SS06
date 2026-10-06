// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrash
// Superclass: NSObject
// Address: 0x112b13108

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
// Implementation: 0x1001651dc

// -[KSCrash initWithBasePath:]
// Type encoding: @24@0:8@16
// Implementation: 0x10017d7e8

// -[KSCrash setUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001b8c7c

// -[KSCrash userInfo]
// Type encoding: @16@0:8
// Implementation: 0x106ae4e28

// -[KSCrash setMonitoring:]
// Type encoding: v20@0:8i16
// Implementation: 0x10017dc4c

// -[KSCrash setSearchQueueNames:]
// Type encoding: v20@0:8B16
// Implementation: 0x10017dc08

// -[KSCrash setOnCrash:]
// Type encoding: v24@0:8^?16
// Implementation: 0x1001b6658

// -[KSCrash setIntrospectMemory:]
// Type encoding: v20@0:8B16
// Implementation: 0x10017da30

// -[KSCrash setDoNotIntrospectClasses:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae4f18

// -[KSCrash setMaxReportCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x10017da48

// -[KSCrash systemInfo]
// Type encoding: @16@0:8
// Implementation: 0x106ae4fdc

// -[KSCrash install]
// Type encoding: B16@0:8
// Implementation: 0x1001b66e8

// -[KSCrash sendAllReportsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1001f8030

// -[KSCrash deleteAllReports]
// Type encoding: v16@0:8
// Implementation: 0x106ae556c

// -[KSCrash deleteReportWithID:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae5570

// -[KSCrash reportUserException:reason:language:lineOfCode:stackTrace:logAllThreads:terminateProgram:]
// Type encoding: v64@0:8@16@24@32@40@48B56B60
// Implementation: 0x106ae5588

// -[KSCrash enableSwapOfCxaThrow]
// Type encoding: v16@0:8
// Implementation: 0x106ae5720

// -[KSCrash activeDurationSinceLastCrash]
// Type encoding: d16@0:8
// Implementation: 0x106ae5724

// -[KSCrash backgroundDurationSinceLastCrash]
// Type encoding: d16@0:8
// Implementation: 0x106ae5730

// -[KSCrash launchesSinceLastCrash]
// Type encoding: i16@0:8
// Implementation: 0x106ae573c

// -[KSCrash sessionsSinceLastCrash]
// Type encoding: i16@0:8
// Implementation: 0x106ae5748

// -[KSCrash activeDurationSinceLaunch]
// Type encoding: d16@0:8
// Implementation: 0x106ae5754

// -[KSCrash backgroundDurationSinceLaunch]
// Type encoding: d16@0:8
// Implementation: 0x106ae5760

// -[KSCrash sessionsSinceLaunch]
// Type encoding: i16@0:8
// Implementation: 0x106ae576c

// -[KSCrash crashedLastLaunch]
// Type encoding: B16@0:8
// Implementation: 0x1001de368

// -[KSCrash reportID]
// Type encoding: r*16@0:8
// Implementation: 0x10018acd8

// -[KSCrash sessionId]
// Type encoding: r*16@0:8
// Implementation: 0x106ae5778

// -[KSCrash getLastCrashReportID]
// Type encoding: @16@0:8
// Implementation: 0x10018aca8

// -[KSCrash reportCount]
// Type encoding: i16@0:8
// Implementation: 0x106ae5784

// -[KSCrash sendReports:onCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x1001f8b1c

// -[KSCrash loadCrashReportJSONWithID:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ae579c

// -[KSCrash doctorReport:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae57ec

// -[KSCrash reportIDs]
// Type encoding: @16@0:8
// Implementation: 0x106ae5904

// -[KSCrash reportWithID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ae59d4

// -[KSCrash reportWithIntID:]
// Type encoding: @24@0:8q16
// Implementation: 0x106ae5a00

// -[KSCrash allReports]
// Type encoding: @16@0:8
// Implementation: 0x1001f80cc

// -[KSCrash setAddConsoleLogToReport:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ae5ae0

// -[KSCrash setPrintPreviousLog:]
// Type encoding: v20@0:8B16
// Implementation: 0x106ae5af0

// -[KSCrash nullTerminated:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ae5b00

// -[KSCrash applicationDidBecomeActive]
// Type encoding: v16@0:8
// Implementation: 0x100c7a508

// -[KSCrash applicationWillResignActive]
// Type encoding: v16@0:8
// Implementation: 0x106ae5b4c

// -[KSCrash applicationDidEnterBackground]
// Type encoding: v16@0:8
// Implementation: 0x106ae5b54

// -[KSCrash applicationWillEnterForeground]
// Type encoding: v16@0:8
// Implementation: 0x106ae5b5c

// -[KSCrash applicationWillTerminate]
// Type encoding: v16@0:8
// Implementation: 0x106ae5b64

// -[KSCrash sink]
// Type encoding: @16@0:8
// Implementation: 0x106ae5b68

// -[KSCrash setSink:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001f8010

// -[KSCrash deleteBehaviorAfterSendAll]
// Type encoding: i16@0:8
// Implementation: 0x1001f8d20

// -[KSCrash setDeleteBehaviorAfterSendAll:]
// Type encoding: v20@0:8i16
// Implementation: 0x10017d9c0

// -[KSCrash monitoring]
// Type encoding: i16@0:8
// Implementation: 0x1001f3b5c

// -[KSCrash searchQueueNames]
// Type encoding: B16@0:8
// Implementation: 0x106ae5b70

// -[KSCrash onCrash]
// Type encoding: ^?16@0:8
// Implementation: 0x1001b6650

// -[KSCrash bundleName]
// Type encoding: @16@0:8
// Implementation: 0x1001b6800

// -[KSCrash setBundleName:]
// Type encoding: v24@0:8@16
// Implementation: 0x10017d970

// -[KSCrash basePath]
// Type encoding: @16@0:8
// Implementation: 0x10017d9b8

// -[KSCrash setBasePath:]
// Type encoding: v24@0:8@16
// Implementation: 0x10017d998

// -[KSCrash introspectMemory]
// Type encoding: B16@0:8
// Implementation: 0x106ae5b78

// -[KSCrash doNotIntrospectClasses]
// Type encoding: @16@0:8
// Implementation: 0x106ae5b80

// -[KSCrash demangleLanguages]
// Type encoding: i16@0:8
// Implementation: 0x106ae5b88

// -[KSCrash setDemangleLanguages:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ae5b90

// -[KSCrash addConsoleLogToReport]
// Type encoding: B16@0:8
// Implementation: 0x106ae5b98

// -[KSCrash printPreviousLog]
// Type encoding: B16@0:8
// Implementation: 0x106ae5ba0

// -[KSCrash maxReportCount]
// Type encoding: i16@0:8
// Implementation: 0x106ae5ba8

// -[KSCrash uncaughtExceptionHandler]
// Type encoding: ^?16@0:8
// Implementation: 0x106ae5bb0

// -[KSCrash setUncaughtExceptionHandler:]
// Type encoding: v24@0:8^?16
// Implementation: 0x106ae5bb8

// -[KSCrash currentSnapshotUserReportedExceptionHandler]
// Type encoding: ^?16@0:8
// Implementation: 0x106ae5bc0

// -[KSCrash setCurrentSnapshotUserReportedExceptionHandler:]
// Type encoding: v24@0:8^?16
// Implementation: 0x106ae5bc8

// -[KSCrash catchZombies]
// Type encoding: B16@0:8
// Implementation: 0x106ae5bd0

// -[KSCrash setCatchZombies:]
// Type encoding: v20@0:8B16
// Implementation: 0x10017da40

// -[KSCrash .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106ae5bd8

// +[KSCrash sharedInstance]
// Type encoding: @16@0:8
// Implementation: 0x100102e30

// +[KSCrash deviceID]
// Type encoding: @16@0:8
// Implementation: 0x1002802ec

// +[KSCrash setCurrentSessionID:]
// Type encoding: v24@0:8@16
// Implementation: 0x100c75d6c

@end
