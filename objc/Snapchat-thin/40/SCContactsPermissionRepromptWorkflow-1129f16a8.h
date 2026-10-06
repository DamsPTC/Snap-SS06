// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContactsPermissionRepromptWorkflow
// Superclass: NSObject
// Address: 0x1129f16a8

@interface SCContactsPermissionRepromptWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContactsPermissionRepromptWorkflow initWithPermissionPromptUIContainer:allContactsUIContainer:preferences:featureSettingsService:fstCampaignDataProvider:additionalMetricsData:contactPermissionRequestScopeExposer:allContactsScopeExposer:circumstanceEngine:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x104c98768

// -[SCContactsPermissionRepromptWorkflow contactPermissionWorkflowCompletedWithPermissionGranted:]
// Type encoding: v20@0:8B16
// Implementation: 0x104c98af4

// -[SCContactsPermissionRepromptWorkflow contactPermissionWorkflowSkipped]
// Type encoding: v16@0:8
// Implementation: 0x104c98c80

// -[SCContactsPermissionRepromptWorkflow contactPermissionWorkflowCompletedWithGoToSettings:]
// Type encoding: v20@0:8B16
// Implementation: 0x104c98c84

// -[SCContactsPermissionRepromptWorkflow allContactsWorkflowCompleted]
// Type encoding: v16@0:8
// Implementation: 0x104c98ce0

// -[SCContactsPermissionRepromptWorkflow canShowCampaign:]
// Type encoding: B24@0:8@16
// Implementation: 0x104c98d00

// -[SCContactsPermissionRepromptWorkflow showCampaign:uiContainer:onComplete:]
// Type encoding: v40@0:8@16@24@?32
// Implementation: 0x104c98d48

// -[SCContactsPermissionRepromptWorkflow _detachPermissionPromptUIAndRemoveScope]
// Type encoding: v16@0:8
// Implementation: 0x104c98eec

// -[SCContactsPermissionRepromptWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104c98fa8

@end
