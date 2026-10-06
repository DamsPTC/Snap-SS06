// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCUserSessionSubScopesRouter
// Superclass: NSObject
// Address: 0x112a5c188

@interface SCUserSessionSubScopesRouter


// -[SCUserSessionSubScopesRouter initWithSystemScope:userSessionScope:activeUserSessionScopeServices:activeUserSessionScopeExposer:postRegistrationScopeExposer:postRegistrationScopeServices:termsOfUseScopeExposer:bootstrapResponseProcessorScopeExposer:bootstrapResponseProcessorPluginSaberService:logoutCleanupHandlersScopeExposer:logoutCleanupHandlerPluginSaberService:uiContainer:watchdogFactory:]
// Type encoding: @120@0:8@16@24@32@40@48@56@64@72@80@88@96@104@112
// Implementation: 0x10026142c

// -[SCUserSessionSubScopesRouter prepareLogoutHandler]
// Type encoding: v16@0:8
// Implementation: 0x100999080

// -[SCUserSessionSubScopesRouter beginActiveUserSessionWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x100266b20

// -[SCUserSessionSubScopesRouter endActiveUserSessionWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1056f8fc4

// -[SCUserSessionSubScopesRouter processBootstrapResponse:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056f8fe4

// -[SCUserSessionSubScopesRouter cleanUpUserData:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056f924c

// -[SCUserSessionSubScopesRouter _cleanUpUserDataWithCleanupFutures:]
// Type encoding: v24@0:8@?16
// Implementation: 0x1056f943c

// -[SCUserSessionSubScopesRouter endBootstrapReponseProcessorWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1056f96a8

// -[SCUserSessionSubScopesRouter beginTermsOfUseWorkflowWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f96b0

// -[SCUserSessionSubScopesRouter endTermsOfUseWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x1056f9754

// -[SCUserSessionSubScopesRouter beginPostRegistrationWithDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1056f9774

// -[SCUserSessionSubScopesRouter endPostRegistration]
// Type encoding: v16@0:8
// Implementation: 0x1056f9838

// -[SCUserSessionSubScopesRouter _bootstrapResponseProcessors]
// Type encoding: @16@0:8
// Implementation: 0x1056f9858

// -[SCUserSessionSubScopesRouter _logoutCleanupHandlers]
// Type encoding: @16@0:8
// Implementation: 0x100999138

// -[SCUserSessionSubScopesRouter _addBootstrapResponseProcessorWatchDog:processor:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x1056f9a24

// -[SCUserSessionSubScopesRouter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1056f9b6c

@end
