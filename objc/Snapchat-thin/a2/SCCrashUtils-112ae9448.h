// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCrashUtils
// Superclass: NSObject
// Address: 0x112ae9448

@interface SCCrashUtils

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCrashUtils initWithCrashLogger:]
// Type encoding: @24@0:8@16
// Implementation: 0x1065f16e4

// -[SCCrashUtils reportNonFatalWithSource:errorMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065f1758

// -[SCCrashUtils reportWithFatalCrashWithSource:errorMessage:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1065f1760

// -[SCCrashUtils reportWithSource:errorMessage:fatal:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x1065f1768

// -[SCCrashUtils fatalCrashNoReportWithErrorMessage:]
// Type encoding: v24@0:8@16
// Implementation: 0x1065f1854

// -[SCCrashUtils .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1065f1858

@end
