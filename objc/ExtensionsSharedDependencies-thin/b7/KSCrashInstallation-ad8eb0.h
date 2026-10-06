// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrashInstallation
// Superclass: NSObject
// Address: 0xad8eb0

@interface KSCrashInstallation

// Property: nextFieldIndex; attributes: Ti,N,V_nextFieldIndex
// Property: crashHandlerData; attributes: T^{?=^?i[0^{?}]},R,N
// Property: crashHandlerDataBacking; attributes: T@"NSMutableData",&,N,V_crashHandlerDataBacking
// Property: fields; attributes: T@"NSMutableDictionary",&,N,V_fields
// Property: requiredProperties; attributes: T@"NSArray",&,N,V_requiredProperties
// Property: prependedFilters; attributes: T@"KSCrashReportFilterPipeline",&,N,V_prependedFilters
// Property: deleteBehavior; attributes: Ti,N,V_deleteBehavior
// Property: onCrash; attributes: T^?
// Property: handler; attributes: T@"KSCrash",R,V_handler

// -[KSCrashInstallation init]
// Type encoding: @16@0:8
// Implementation: 0x49b4fc

// -[KSCrashInstallation initWithRequiredProperties:]
// Type encoding: @24@0:8@16
// Implementation: 0x49b554

// -[KSCrashInstallation dealloc]
// Type encoding: v16@0:8
// Implementation: 0x49b614

// -[KSCrashInstallation crashHandlerData]
// Type encoding: ^{?=^?i[0^{?}]}16@0:8
// Implementation: 0x49b6c8

// -[KSCrashInstallation reportFieldForProperty:]
// Type encoding: @24@0:8@16
// Implementation: 0x49b700

// -[KSCrashInstallation reportFieldForProperty:setKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x49b7f0

// -[KSCrashInstallation reportFieldForProperty:setValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x49b834

// -[KSCrashInstallation validateProperties]
// Type encoding: @16@0:8
// Implementation: 0x49b878

// -[KSCrashInstallation makeKeyPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x49ba5c

// -[KSCrashInstallation makeKeyPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x49bad0

// -[KSCrashInstallation onCrash]
// Type encoding: ^?16@0:8
// Implementation: 0x49bbf8

// -[KSCrashInstallation setOnCrash:]
// Type encoding: v24@0:8^?16
// Implementation: 0x49bc38

// -[KSCrashInstallation deleteBehavior]
// Type encoding: i16@0:8
// Implementation: 0x49bc78

// -[KSCrashInstallation setDeleteBehavior:]
// Type encoding: v20@0:8i16
// Implementation: 0x49bc80

// -[KSCrashInstallation install]
// Type encoding: v16@0:8
// Implementation: 0x49bc88

// -[KSCrashInstallation installWithHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x49bce8

// -[KSCrashInstallation sendAllReportsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x49be00

// -[KSCrashInstallation addPreFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x49bf54

// -[KSCrashInstallation sink]
// Type encoding: @16@0:8
// Implementation: 0x49bf90

// -[KSCrashInstallation nextFieldIndex]
// Type encoding: i16@0:8
// Implementation: 0x49bf98

// -[KSCrashInstallation setNextFieldIndex:]
// Type encoding: v20@0:8i16
// Implementation: 0x49bfa0

// -[KSCrashInstallation crashHandlerDataBacking]
// Type encoding: @16@0:8
// Implementation: 0x49bfa8

// -[KSCrashInstallation setCrashHandlerDataBacking:]
// Type encoding: v24@0:8@16
// Implementation: 0x49bfb0

// -[KSCrashInstallation fields]
// Type encoding: @16@0:8
// Implementation: 0x49bfd0

// -[KSCrashInstallation setFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x49bfd8

// -[KSCrashInstallation requiredProperties]
// Type encoding: @16@0:8
// Implementation: 0x49bff8

// -[KSCrashInstallation setRequiredProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x49c000

// -[KSCrashInstallation prependedFilters]
// Type encoding: @16@0:8
// Implementation: 0x49c020

// -[KSCrashInstallation setPrependedFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x49c028

// -[KSCrashInstallation handler]
// Type encoding: @16@0:8
// Implementation: 0x49c048

// -[KSCrashInstallation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x49c054

@end
