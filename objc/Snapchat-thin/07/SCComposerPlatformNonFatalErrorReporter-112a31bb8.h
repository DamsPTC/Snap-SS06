// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCComposerPlatformNonFatalErrorReporter
// Superclass: NSObject
// Address: 0x112a31bb8

@interface SCComposerPlatformNonFatalErrorReporter

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCComposerPlatformNonFatalErrorReporter initWithCrashLogger:runtime:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1053cd360

// -[SCComposerPlatformNonFatalErrorReporter reportErrorWithErrorCode:message:stacktrace:metadata:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x1053cd404

// -[SCComposerPlatformNonFatalErrorReporter pushToValdiMarshaller:]
// Type encoding: q24@0:8^{SCValdiMarshaller=}16
// Implementation: 0x1053cd538

// -[SCComposerPlatformNonFatalErrorReporter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1053cd544

@end
