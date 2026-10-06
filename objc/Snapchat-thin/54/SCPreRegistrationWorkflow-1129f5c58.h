// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCPreRegistrationWorkflow
// Superclass: NSObject
// Address: 0x1129f5c58

@interface SCPreRegistrationWorkflow


// -[SCPreRegistrationWorkflow initWithRouter:delegate:pushNotificationRegistrar:registrationInterceptorsCheck:preRegistrationLogger:contactPrepromptInfoProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x104d134d4

// -[SCPreRegistrationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104d13648

// -[SCPreRegistrationWorkflow _startWorkflowAfterInterceptorsCheck]
// Type encoding: v16@0:8
// Implementation: 0x104d13794

// -[SCPreRegistrationWorkflow _showNotificationPrepromptIfNecessary]
// Type encoding: v16@0:8
// Implementation: 0x104d137cc

// -[SCPreRegistrationWorkflow _handleBlitzPrepromptNotificationActionCompleted]
// Type encoding: v16@0:8
// Implementation: 0x104d13830

// -[SCPreRegistrationWorkflow systemNotificationPermissionDidCompleteWithPrepromptGranted:OSPromptGranted:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x104d1385c

// -[SCPreRegistrationWorkflow systemNotificationPermissionDidSkip]
// Type encoding: v16@0:8
// Implementation: 0x104d138ec

// -[SCPreRegistrationWorkflow systemNotificationPermissionViewDidAppear]
// Type encoding: v16@0:8
// Implementation: 0x104d1396c

// -[SCPreRegistrationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104d13978

// +[SCPreRegistrationWorkflow isRegistrationPrefillEnabled]
// Type encoding: B16@0:8
// Implementation: 0x104d13640

@end
