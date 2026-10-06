// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerUncaughtErrorReporter
// Superclass: NSObject
// Address: 0x112a41bf8

@interface SCComposerUncaughtErrorReporter

// Property: getAllModuleHashes; attributes: T@?,C,N,V_getAllModuleHashes
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerUncaughtErrorReporter initWithCircumstanceEngine:crashLogger:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1009b3f5c

// -[SCComposerUncaughtErrorReporter reportNonFatalWithErrorCode:message:module:stackTrace:]
// Type encoding: v48@0:8q16@24@32@40
// Implementation: 0x1054e4130

// -[SCComposerUncaughtErrorReporter reportCrashWithMessage:module:stackTrace:isANR:]
// Type encoding: v44@0:8@16@24@32B40
// Implementation: 0x1054e41e0

// -[SCComposerUncaughtErrorReporter reportUncaughtComposerError:message:module:crashLogger:stackTrace:isANR:]
// Type encoding: v60@0:8q16@24@32@40@48B56
// Implementation: 0x1054e42a4

// -[SCComposerUncaughtErrorReporter getAllModuleHashes]
// Type encoding: @?16@0:8
// Implementation: 0x1054e4484

// -[SCComposerUncaughtErrorReporter setGetAllModuleHashes:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1054e448c

// -[SCComposerUncaughtErrorReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1054e4494

@end
