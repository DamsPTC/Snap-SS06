// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: KSCrashInstallation
// Superclass: NSObject
// Address: 0x112b13018

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
// Implementation: 0x106ae4774

// -[KSCrashInstallation initWithRequiredProperties:]
// Type encoding: @24@0:8@16
// Implementation: 0x1001aeb5c

// -[KSCrashInstallation dealloc]
// Type encoding: v16@0:8
// Implementation: 0x100232430

// -[KSCrashInstallation crashHandlerData]
// Type encoding: ^{?=^?i[0^{?}]}16@0:8
// Implementation: 0x1001b64cc

// -[KSCrashInstallation reportFieldForProperty:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ae47cc

// -[KSCrashInstallation reportFieldForProperty:setKey:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ae48bc

// -[KSCrashInstallation reportFieldForProperty:setValue:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106ae4900

// -[KSCrashInstallation validateProperties]
// Type encoding: @16@0:8
// Implementation: 0x1001f42b0

// -[KSCrashInstallation makeKeyPath:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ae4944

// -[KSCrashInstallation makeKeyPaths:]
// Type encoding: @24@0:8@16
// Implementation: 0x106ae49b8

// -[KSCrashInstallation onCrash]
// Type encoding: ^?16@0:8
// Implementation: 0x106ae4ae0

// -[KSCrashInstallation setOnCrash:]
// Type encoding: v24@0:8^?16
// Implementation: 0x1001b6414

// -[KSCrashInstallation deleteBehavior]
// Type encoding: i16@0:8
// Implementation: 0x106ae4b20

// -[KSCrashInstallation setDeleteBehavior:]
// Type encoding: v20@0:8i16
// Implementation: 0x1001b284c

// -[KSCrashInstallation install]
// Type encoding: v16@0:8
// Implementation: 0x1001b655c

// -[KSCrashInstallation installWithHandler:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001b65c8

// -[KSCrashInstallation sendAllReportsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1001f4148

// -[KSCrashInstallation addPreFilter:]
// Type encoding: v24@0:8@16
// Implementation: 0x106ae4bc8

// -[KSCrashInstallation sink]
// Type encoding: @16@0:8
// Implementation: 0x106ae4c04

// -[KSCrashInstallation nextFieldIndex]
// Type encoding: i16@0:8
// Implementation: 0x106ae4c0c

// -[KSCrashInstallation setNextFieldIndex:]
// Type encoding: v20@0:8i16
// Implementation: 0x106ae4c14

// -[KSCrashInstallation crashHandlerDataBacking]
// Type encoding: @16@0:8
// Implementation: 0x1001b6504

// -[KSCrashInstallation setCrashHandlerDataBacking:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001aecc8

// -[KSCrashInstallation fields]
// Type encoding: @16@0:8
// Implementation: 0x106ae4c1c

// -[KSCrashInstallation setFields:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001afc04

// -[KSCrashInstallation requiredProperties]
// Type encoding: @16@0:8
// Implementation: 0x1001f4c54

// -[KSCrashInstallation setRequiredProperties:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001b0c80

// -[KSCrashInstallation prependedFilters]
// Type encoding: @16@0:8
// Implementation: 0x1001f8000

// -[KSCrashInstallation setPrependedFilters:]
// Type encoding: v24@0:8@16
// Implementation: 0x1001b27ec

// -[KSCrashInstallation handler]
// Type encoding: @16@0:8
// Implementation: 0x1001b65bc

// -[KSCrashInstallation .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1002325ac

@end
