// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrashReportFilterAppleFmt
// Superclass: NSObject
// Address: 0x112b13298

@interface KSCrashReportFilterAppleFmt

// Property: reportStyle; attributes: Ti,N,V_reportStyle
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[KSCrashReportFilterAppleFmt initWithReportStyle:]
// Type encoding: @20@0:8i16
// Implementation: 0x1001f7500

// -[KSCrashReportFilterAppleFmt majorVersion:]
// Type encoding: i24@0:8@16
// Implementation: 0x106af1368

// -[KSCrashReportFilterAppleFmt filterReports:onCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x100214e5c

// -[KSCrashReportFilterAppleFmt CPUType:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af1414

// -[KSCrashReportFilterAppleFmt CPUArchForMajor:minor:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x106af14c4

// -[KSCrashReportFilterAppleFmt backtraceString:reportStyle:mainExecutableName:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x106af1584

// -[KSCrashReportFilterAppleFmt toCompactUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af18dc

// -[KSCrashReportFilterAppleFmt stringFromDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af192c

// -[KSCrashReportFilterAppleFmt recrashReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af1988

// -[KSCrashReportFilterAppleFmt systemReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af1998

// -[KSCrashReportFilterAppleFmt infoReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af19a8

// -[KSCrashReportFilterAppleFmt processReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af19b8

// -[KSCrashReportFilterAppleFmt crashReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af19c8

// -[KSCrashReportFilterAppleFmt binaryImagesReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af19d8

// -[KSCrashReportFilterAppleFmt crashedThread:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af19e8

// -[KSCrashReportFilterAppleFmt mainExecutableNameForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af1b44

// -[KSCrashReportFilterAppleFmt cpuArchForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af1b88

// -[KSCrashReportFilterAppleFmt headerStringForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af1c28

// -[KSCrashReportFilterAppleFmt headerStringForSystemInfo:reportID:crashTime:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x106af1dcc

// -[KSCrashReportFilterAppleFmt binaryImagesStringForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af20d4

// -[KSCrashReportFilterAppleFmt crashedThreadCPUStateStringForReport:cpuArch:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af2504

// -[KSCrashReportFilterAppleFmt extraInfoStringForReport:mainExecutableName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af2740

// -[KSCrashReportFilterAppleFmt JSONForObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af2bb0

// -[KSCrashReportFilterAppleFmt isZombieNSException:]
// Type encoding: B24@0:8@16
// Implementation: 0x106af2c48

// -[KSCrashReportFilterAppleFmt errorInfoStringForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af2eec

// -[KSCrashReportFilterAppleFmt stringWithUncaughtExceptionName:reason:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af3578

// -[KSCrashReportFilterAppleFmt stringWithHandledExceptionName:reason:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af35a0

// -[KSCrashReportFilterAppleFmt stringWithApplicationSpecificInformationUserInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af35c8

// -[KSCrashReportFilterAppleFmt userExceptionTrace:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af3640

// -[KSCrashReportFilterAppleFmt threadStringForThread:mainExecutableName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af37b8

// -[KSCrashReportFilterAppleFmt threadListStringForReport:mainExecutableName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x106af39e4

// -[KSCrashReportFilterAppleFmt crashReportString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af3c4c

// -[KSCrashReportFilterAppleFmt composerThreadsString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af3d90

// -[KSCrashReportFilterAppleFmt recrashReportString:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af3f00

// -[KSCrashReportFilterAppleFmt toAppleFormat:]
// Type encoding: @24@0:8@16
// Implementation: 0x106af40a4

// -[KSCrashReportFilterAppleFmt reportStyle]
// Type encoding: i16@0:8
// Implementation: 0x106af4158

// -[KSCrashReportFilterAppleFmt setReportStyle:]
// Type encoding: v20@0:8i16
// Implementation: 0x1001f7558

// +[KSCrashReportFilterAppleFmt initialize]
// Type encoding: v16@0:8
// Implementation: 0x1001f4f28

// +[KSCrashReportFilterAppleFmt filterWithReportStyle:]
// Type encoding: @20@0:8i16
// Implementation: 0x1001f74dc

// +[KSCrashReportFilterAppleFmt constructPreambleWithTraceNum:objName:pc:]
// Type encoding: @36@0:8i16r*20Q28
// Implementation: 0x106af130c

// +[KSCrashReportFilterAppleFmt constructUnSymbolicatedFrameWithObjAddr:pc:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x106af133c

@end
