// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: _TtC24SCCrashServicesImplSwift15SCKsCrashLogger
// Superclass: NSObject
// Address: 0x1127dad10

@interface _TtC24SCCrashServicesImplSwift15SCKsCrashLogger

// Property: hasCrashedOnLastLaunch; attributes: TB,N,R
// Property: lastCrashReportId; attributes: T@"NSString",N,C
// Property: hasReportedCrashInCurrentSession; attributes: TB,N,VhasReportedCrashInCurrentSession

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportAssertNonFatalWithMessage:includeAllThreads:]
// Type encoding: v28@0:8@16B24
// Implementation: 0x1014c7da4

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportStrictModeViolationWithMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1014c7e38

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportNonFatalWithErrorCode:metadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1014c6af4

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportNonFatalWithErrorCode:metadata:message:threadCaptureOption:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1014c6e70

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportLowMemoryWithTitle:description:completion:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x1014c71f4

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportMemoryHeapDumpWithReportId:title:description:heapSnapshotFilePath:priorSessionId:fromPreviousLaunch:onComplete:]
// Type encoding: v68@0:8@16@24@32@40@48B56@?60
// Implementation: 0x1014c7468

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportMetricKitDiagnostics:appVersion:lastKSCrashReportId:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1014c776c

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportSpectaclesFirmwareCrashWithReportId:userId:title:description:otherInfoInJson:firmwareLogPath:onComplete:]
// Type encoding: v72@0:8@16@24@32@40@48@56@?64
// Implementation: 0x1014c7a34

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportAbnormalCrashWithDescription:lastAppSessionMetadata:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100213ac4

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportFailedExpectationWithMessage:threadCaptureOption:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1014c7b70

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger leaveBreadcrumb:]
// Type encoding: v24@0:8@16
// Implementation: 0x1014c7c54

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger reportMemoryLeakWithTitle:description:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1014c7cd8

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger dumpStackTraceOfThread:]
// Type encoding: @24@0:8Q16
// Implementation: 0x1014c7cdc

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger hasCrashedOnLastLaunch]
// Type encoding: B16@0:8
// Implementation: 0x1001de054

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger lastCrashReportId]
// Type encoding: @16@0:8
// Implementation: 0x10018c7c4

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger setLastCrashReportId:]
// Type encoding: v24@0:8@16
// Implementation: 0x1014c5f14

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger hasReportedCrashInCurrentSession]
// Type encoding: B16@0:8
// Implementation: 0x1014c5f8c

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger setHasReportedCrashInCurrentSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x1014c6010

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger initWithCrashManager:circumstanceEngine:appStartExperimentReader:timeProvider:metadataStorage:performer:backgroundPerformer:uuidProvider:blizzardSessionIDProvider:metricLogger:ksCrashMetricTracker:mainThread:]
// Type encoding: @112@0:8@16@24@32@40@48@56@64@?72@80@88@96Q104
// Implementation: 0x1014c6598

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger startServices]
// Type encoding: v16@0:8
// Implementation: 0x1014c695c

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger init]
// Type encoding: @16@0:8
// Implementation: 0x1014c6984

// -[_TtC24SCCrashServicesImplSwift15SCKsCrashLogger .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1014c69e0

@end
