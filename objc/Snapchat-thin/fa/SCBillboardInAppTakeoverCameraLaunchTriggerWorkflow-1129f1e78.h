// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow
// Superclass: NSObject
// Address: 0x1129f1e78

@interface SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow initWithApplicationLifecycleEvents:fstCampaignDataProvider:navigationServices:userSessionContext:userInstallServices:notificationLifecycleEvents:inAppTakeoverScopeExposer:performer:appStartExperimentReader:circumstanceEngine:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x104c9fe84

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow beginWorkflow]
// Type encoding: v16@0:8
// Implementation: 0x104ca00ec

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _launchFSTIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x104ca04f4

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _fetchFSTCampaignWithTriggerType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ca06ac

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _notificationTriggeredTakeover]
// Type encoding: B16@0:8
// Implementation: 0x104ca0858

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _handleFetchedCampaign:triggerType:]
// Type encoding: v32@0:8@16q24
// Implementation: 0x104ca0868

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _updateAppOpenFromPushType:]
// Type encoding: v24@0:8q16
// Implementation: 0x104ca0bf4

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _createAdditionalMetricsData]
// Type encoding: @16@0:8
// Implementation: 0x104ca0cd0

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow _resetProperties]
// Type encoding: v16@0:8
// Implementation: 0x104ca0d48

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow inAppTakeoverScopeDidComplete]
// Type encoding: v16@0:8
// Implementation: 0x104ca0d50

// -[SCBillboardInAppTakeoverCameraLaunchTriggerWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x104ca0d70

@end
