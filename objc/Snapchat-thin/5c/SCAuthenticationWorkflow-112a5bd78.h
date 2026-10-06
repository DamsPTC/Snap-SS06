// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuthenticationWorkflow
// Superclass: NSObject
// Address: 0x112a5bd78

@interface SCAuthenticationWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCAuthenticationWorkflow initWithApplicationDataChecker:userSessionRepository:appStartExperimentReader:legacyAuthFlowProxy:router:performer:authTokenManager:authenticationStateTracker:grapheneRegistry:userTraceLogger:systemApplicationLogger:snapTokenStore:watchdogFactory:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10018c8b8

// -[SCAuthenticationWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x10018d004

// -[SCAuthenticationWorkflow _resumePersistedUserSessionOrBeginUnauthenticatedSession:]
// Type encoding: v20@0:8B16
// Implementation: 0x10018d340

// -[SCAuthenticationWorkflow userCompletedRegistrationWithUserSession:bootstrapData:registrationInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056f653c

// -[SCAuthenticationWorkflow userCompletedLogInWithUserSession:bootstrapData:loginInfo:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056f6610

// -[SCAuthenticationWorkflow _beginUserSession:authToken:context:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x1056f66ec

// -[SCAuthenticationWorkflow _beginUserSessionWorkflowAfterCompletingCleanupIfNeededWithUserSession:context:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056f6da8

// -[SCAuthenticationWorkflow _beginUserSessionWorkflowAfterCompletingCleanupWithUserSession:context:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056f6dc0

// -[SCAuthenticationWorkflow _trackCleanupSessionLatency]
// Type encoding: v16@0:8
// Implementation: 0x1056f6e2c

// -[SCAuthenticationWorkflow _beginUserSessionWorkflowAfterUnauthCleanupWithUserSession:context:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056f6ed0

// -[SCAuthenticationWorkflow userSessionEnded:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f7068

// -[SCAuthenticationWorkflow dataUnavailableWorkflowEndedWithDataAvailable]
// Type encoding: v16@0:8
// Implementation: 0x1056f7198

// -[SCAuthenticationWorkflow tweakDidChange:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f71c0

// -[SCAuthenticationWorkflow _resetEmergencyModeTweak]
// Type encoding: v16@0:8
// Implementation: 0x1056f7240

// -[SCAuthenticationWorkflow _logApplicationLogout:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f7244

// -[SCAuthenticationWorkflow _ensureSyncWriteIfNecessary:source:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056f7408

// -[SCAuthenticationWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f76ac

@end
