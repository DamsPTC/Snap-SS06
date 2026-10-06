// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCAuthenticationSubScopesRouter
// Superclass: NSObject
// Address: 0x112a5bd28

@interface SCAuthenticationSubScopesRouter


// -[SCAuthenticationSubScopesRouter initWithUserSessionScopeExposer:unauthenticatedScopeExposer:dataUnavailableScopeExposer:emergencyModeScopeExposer:userSessionScopeServices:unauthenticatedScopeServices:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x100180208

// -[SCAuthenticationSubScopesRouter beginDataUnavailableWorkflowWithApplicationDataChecker:delegate:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056f6150

// -[SCAuthenticationSubScopesRouter endDataUnavailableWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1056f6194

// -[SCAuthenticationSubScopesRouter beginEmergencyModeWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1056f61b4

// -[SCAuthenticationSubScopesRouter emergencyModeAvailable]
// Type encoding: B16@0:8
// Implementation: 0x1056f6208

// -[SCAuthenticationSubScopesRouter beginUnauthenticatedWorkflowWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f6210

// -[SCAuthenticationSubScopesRouter endUnauthenticatedWorkflow]
// Type encoding: @16@0:8
// Implementation: 0x1056f6250

// -[SCAuthenticationSubScopesRouter beginUserSessionWorkflowWithUserSession:userSessionContext:delegate:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x10018ddac

// -[SCAuthenticationSubScopesRouter endUserSessionWorkflow:]
// Type encoding: @24@0:8@16
// Implementation: 0x1056f6318

// -[SCAuthenticationSubScopesRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f64dc

@end
