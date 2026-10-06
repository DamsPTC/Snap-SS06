// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserPhoneVerificationWorkflow
// Superclass: NSObject
// Address: 0x1129f7288

@interface SCUserPhoneVerificationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserPhoneVerificationWorkflow initWithRouter:delegate:context:codeVerificationService:userSearchabilityService:contactPermissionInfoProvider:contactSyncer:logger:]
// Type encoding: @80@0:8@16@24@32@40@48@56@64@72
// Implementation: 0x104d3d108

// -[SCUserPhoneVerificationWorkflow begin]
// Type encoding: v16@0:8
// Implementation: 0x104d3d2a8

// -[SCUserPhoneVerificationWorkflow phoneEntryFinishedWithSuccess:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d3d348

// -[SCUserPhoneVerificationWorkflow phoneEntryExited]
// Type encoding: v16@0:8
// Implementation: 0x104d3d56c

// -[SCUserPhoneVerificationWorkflow phoneEntryExitedWithUnretryableError:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d3d600

// -[SCUserPhoneVerificationWorkflow headerTitleForPhoneEntry]
// Type encoding: @16@0:8
// Implementation: 0x104d3d694

// -[SCUserPhoneVerificationWorkflow accessoryTextForPhoneEntry]
// Type encoding: @16@0:8
// Implementation: 0x104d3d698

// -[SCUserPhoneVerificationWorkflow codeVerificationExited]
// Type encoding: v16@0:8
// Implementation: 0x104d3d80c

// -[SCUserPhoneVerificationWorkflow codeVerificationExitedWithUnretryableError]
// Type encoding: v16@0:8
// Implementation: 0x104d3d824

// -[SCUserPhoneVerificationWorkflow codeVerificationFinished:]
// Type encoding: v24@0:8@16
// Implementation: 0x104d3d83c

// -[SCUserPhoneVerificationWorkflow codeVerificationResendCodeAttempted]
// Type encoding: v16@0:8
// Implementation: 0x104d3d9fc

// -[SCUserPhoneVerificationWorkflow codeVerificationVerifyCodeAttempted]
// Type encoding: v16@0:8
// Implementation: 0x104d3da08

// -[SCUserPhoneVerificationWorkflow _phoneEntryContext]
// Type encoding: q16@0:8
// Implementation: 0x104d3da18

// -[SCUserPhoneVerificationWorkflow _pageType]
// Type encoding: q16@0:8
// Implementation: 0x104d3db28

// -[SCUserPhoneVerificationWorkflow _syncContactsIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x104d3dc3c

// -[SCUserPhoneVerificationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d3dcc0

@end
