// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCCrashRecoveryNotificationModifier
// Superclass: NSObject
// Address: 0x1000d4188

@interface SCCrashRecoveryNotificationModifier

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCCrashRecoveryNotificationModifier initWithProcessingScope:]
// Type encoding: @24@0:8@16
// Implementation: 0x10002eeec

// -[SCCrashRecoveryNotificationModifier initWithUserSession:event:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10002ef74

// -[SCCrashRecoveryNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:]
// Type encoding: v36@0:8@16@24B32
// Implementation: 0x10002f018

// -[SCCrashRecoveryNotificationModifier bestAttemptContent]
// Type encoding: @16@0:8
// Implementation: 0x10002f154

// -[SCCrashRecoveryNotificationModifier processCofResponseFromUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002f188

// -[SCCrashRecoveryNotificationModifier processParamedicResponseFromUserInfo:]
// Type encoding: v24@0:8@16
// Implementation: 0x10002f478

// -[SCCrashRecoveryNotificationModifier .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10002f564

@end
