// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrashReportFilterAppleFmt
// Superclass: NSObject
// Address: 0xad9130

@interface KSCrashReportFilterAppleFmt

// Property: reportStyle; attributes: Ti,N,V_reportStyle
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[KSCrashReportFilterAppleFmt initWithReportStyle:]
// Type encoding: @20@0:8i16
// Implementation: 0x4ae148

// -[KSCrashReportFilterAppleFmt majorVersion:]
// Type encoding: i24@0:8@16
// Implementation: 0x4ae1a0

// -[KSCrashReportFilterAppleFmt filterReports:onCompletion:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x4ae24c

// -[KSCrashReportFilterAppleFmt CPUType:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae3bc

// -[KSCrashReportFilterAppleFmt CPUArchForMajor:minor:]
// Type encoding: @24@0:8i16i20
// Implementation: 0x4ae46c

// -[KSCrashReportFilterAppleFmt backtraceString:reportStyle:mainExecutableName:]
// Type encoding: @36@0:8@16i24@28
// Implementation: 0x4ae52c

// -[KSCrashReportFilterAppleFmt toCompactUUID:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae884

// -[KSCrashReportFilterAppleFmt stringFromDate:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae8d4

// -[KSCrashReportFilterAppleFmt recrashReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae930

// -[KSCrashReportFilterAppleFmt systemReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae940

// -[KSCrashReportFilterAppleFmt infoReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae950

// -[KSCrashReportFilterAppleFmt processReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae960

// -[KSCrashReportFilterAppleFmt crashReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae970

// -[KSCrashReportFilterAppleFmt binaryImagesReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae980

// -[KSCrashReportFilterAppleFmt crashedThread:]
// Type encoding: @24@0:8@16
// Implementation: 0x4ae990

// -[KSCrashReportFilterAppleFmt mainExecutableNameForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4aeaec

// -[KSCrashReportFilterAppleFmt cpuArchForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4aeb30

// -[KSCrashReportFilterAppleFmt headerStringForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4aebd0

// -[KSCrashReportFilterAppleFmt headerStringForSystemInfo:reportID:crashTime:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x4aed74

// -[KSCrashReportFilterAppleFmt binaryImagesStringForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4af07c

// -[KSCrashReportFilterAppleFmt crashedThreadCPUStateStringForReport:cpuArch:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4af4ac

// -[KSCrashReportFilterAppleFmt extraInfoStringForReport:mainExecutableName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4af6e8

// -[KSCrashReportFilterAppleFmt JSONForObject:]
// Type encoding: @24@0:8@16
// Implementation: 0x4afb58

// -[KSCrashReportFilterAppleFmt isZombieNSException:]
// Type encoding: B24@0:8@16
// Implementation: 0x4afbf0

// -[KSCrashReportFilterAppleFmt errorInfoStringForReport:]
// Type encoding: @24@0:8@16
// Implementation: 0x4afe94

// -[KSCrashReportFilterAppleFmt stringWithUncaughtExceptionName:reason:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4b0520

// -[KSCrashReportFilterAppleFmt stringWithHandledExceptionName:reason:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4b0548

// -[KSCrashReportFilterAppleFmt stringWithApplicationSpecificInformationUserInfo:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b0570

// -[KSCrashReportFilterAppleFmt userExceptionTrace:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b05e8

// -[KSCrashReportFilterAppleFmt threadStringForThread:mainExecutableName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4b0760

// -[KSCrashReportFilterAppleFmt threadListStringForReport:mainExecutableName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x4b098c

// -[KSCrashReportFilterAppleFmt crashReportString:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b0bf4

// -[KSCrashReportFilterAppleFmt composerThreadsString:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b0d38

// -[KSCrashReportFilterAppleFmt recrashReportString:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b0ea8

// -[KSCrashReportFilterAppleFmt toAppleFormat:]
// Type encoding: @24@0:8@16
// Implementation: 0x4b104c

// -[KSCrashReportFilterAppleFmt reportStyle]
// Type encoding: i16@0:8
// Implementation: 0x4b1100

// -[KSCrashReportFilterAppleFmt setReportStyle:]
// Type encoding: v20@0:8i16
// Implementation: 0x4b1108

// +[KSCrashReportFilterAppleFmt initialize]
// Type encoding: v16@0:8
// Implementation: 0x4adcc0

// +[KSCrashReportFilterAppleFmt filterWithReportStyle:]
// Type encoding: @20@0:8i16
// Implementation: 0x4ae0c8

// +[KSCrashReportFilterAppleFmt constructPreambleWithTraceNum:objName:pc:]
// Type encoding: @36@0:8i16r*20Q28
// Implementation: 0x4ae0ec

// +[KSCrashReportFilterAppleFmt constructUnSymbolicatedFrameWithObjAddr:pc:]
// Type encoding: @32@0:8Q16Q24
// Implementation: 0x4ae11c

@end
