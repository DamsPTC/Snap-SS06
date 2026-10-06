// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactPermissionEventsLoggerImpl
// Superclass: NSObject
// Address: 0x112a5de48

@interface SCContactPermissionEventsLoggerImpl

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContactPermissionEventsLoggerImpl initWithUserTrackedLogger:phoneNumberProvider:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x10571ffc8

// -[SCContactPermissionEventsLoggerImpl logContactPermissionDeny]
// Type encoding: v16@0:8
// Implementation: 0x10572006c

// -[SCContactPermissionEventsLoggerImpl logContactPermissionGrant]
// Type encoding: v16@0:8
// Implementation: 0x1057200e0

// -[SCContactPermissionEventsLoggerImpl logContactPermissionContinue]
// Type encoding: v16@0:8
// Implementation: 0x105720154

// -[SCContactPermissionEventsLoggerImpl logContactPermissionPromptResponseWithPermissionGranted:permissionPromptType:]
// Type encoding: v28@0:8B16q20
// Implementation: 0x1057201c8

// -[SCContactPermissionEventsLoggerImpl _getVerificationType:]
// Type encoding: q20@0:8B16
// Implementation: 0x10572024c

// -[SCContactPermissionEventsLoggerImpl _hasVerifiedNumber]
// Type encoding: B16@0:8
// Implementation: 0x105720254

// -[SCContactPermissionEventsLoggerImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1057202dc

@end
