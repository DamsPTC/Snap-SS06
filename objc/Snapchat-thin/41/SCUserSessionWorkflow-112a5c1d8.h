// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSessionWorkflow
// Superclass: NSObject
// Address: 0x112a5c1d8

@interface SCUserSessionWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCUserSessionWorkflow initWithSystemScope:userSession:userSessionContext:workflowConfig:termsOfUseService:featureSettingServices:configManagerServices:router:workflowDelegate:userSessionLogger:watchdogFactory:]
// Type encoding: @104@0:8@16@24@32@40@48@56@64@72@80@88@96
// Implementation: 0x100261810

// -[SCUserSessionWorkflow endWorkflowWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056f9c3c

// -[SCUserSessionWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x100261b04

// -[SCUserSessionWorkflow _performFastLoginBackgroundSyncOrAdvanceWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x100261b28

// -[SCUserSessionWorkflow _processBootstrapResponseOrAdvanceWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x100261d20

// -[SCUserSessionWorkflow _beginPostRegistrationOrAdvanceWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x10026231c

// -[SCUserSessionWorkflow _showTermsOfUseOrAdvanceWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x10026394c

// -[SCUserSessionWorkflow _observeFeatureSettingsLogInComplete]
// Type encoding: v16@0:8
// Implementation: 0x1056f9df0

// -[SCUserSessionWorkflow termsOfUseWorkflowEnded]
// Type encoding: v16@0:8
// Implementation: 0x1056f9fc0

// -[SCUserSessionWorkflow postRegistrationCompleted]
// Type encoding: v16@0:8
// Implementation: 0x1056f9fe8

// -[SCUserSessionWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056fa00c

@end
