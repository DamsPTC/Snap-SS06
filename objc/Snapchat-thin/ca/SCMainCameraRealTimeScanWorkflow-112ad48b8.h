// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCMainCameraRealTimeScanWorkflow
// Superclass: NSObject
// Address: 0x112ad48b8

@interface SCMainCameraRealTimeScanWorkflow

// Property: asynchronousMainThreadPerformer; attributes: T@"<SCPerforming>",&,N,V_asynchronousMainThreadPerformer
// Property: scannableDataSubject; attributes: T@"SCSubject",&,N,V_scannableDataSubject
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCMainCameraRealTimeScanWorkflow initWithScanResultsNotificationUIScopeExposer:scanResultsNotificationUIScopeServices:queryObservable:activationSupportStateUpdateObservable:realTimeScanConfiguration:realTimeScanLogger:performerProvider:triggerWorkflow:delegate:]
// Type encoding: @88@0:8@16@24@32@40@48@56@64@72@80
// Implementation: 0x10620dd88

// -[SCMainCameraRealTimeScanWorkflow begin]
// Type encoding: v16@0:8
// Implementation: 0x10620e008

// -[SCMainCameraRealTimeScanWorkflow endWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10620e230

// -[SCMainCameraRealTimeScanWorkflow end]
// Type encoding: v16@0:8
// Implementation: 0x10620e2cc

// -[SCMainCameraRealTimeScanWorkflow _endWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10620e3c0

// -[SCMainCameraRealTimeScanWorkflow _presentRealTimeScanResult]
// Type encoding: v16@0:8
// Implementation: 0x10620e41c

// -[SCMainCameraRealTimeScanWorkflow _exposeNotificationUIScopeWithMetadata:]
// Type encoding: v24@0:8@16
// Implementation: 0x10620e718

// -[SCMainCameraRealTimeScanWorkflow _didReceiveQuery:]
// Type encoding: v24@0:8@16
// Implementation: 0x10620e8f0

// -[SCMainCameraRealTimeScanWorkflow _didReceiveSupportedStateUpdate:]
// Type encoding: v24@0:8@16
// Implementation: 0x10620e984

// -[SCMainCameraRealTimeScanWorkflow notificationDidPresentWithId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10620ead0

// -[SCMainCameraRealTimeScanWorkflow notificationDidTapWithId:resultType:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x10620eb3c

// -[SCMainCameraRealTimeScanWorkflow notificationDidDismiss]
// Type encoding: v16@0:8
// Implementation: 0x10620eb64

// -[SCMainCameraRealTimeScanWorkflow _launchScanIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x10620eb6c

// -[SCMainCameraRealTimeScanWorkflow _restartTriggerWorkflowWithQueryIfNecessary:]
// Type encoding: v24@0:8@16
// Implementation: 0x10620ec90

// -[SCMainCameraRealTimeScanWorkflow _triggerDidReturnScannableData:forQuery:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10620ee6c

// -[SCMainCameraRealTimeScanWorkflow _dismissNotificationUIIfNecessaryWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10620ef34

// -[SCMainCameraRealTimeScanWorkflow _logRealTimeScanDidReceiveBannerActionWithType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10620f0b4

// -[SCMainCameraRealTimeScanWorkflow asynchronousMainThreadPerformer]
// Type encoding: @16@0:8
// Implementation: 0x10620f100

// -[SCMainCameraRealTimeScanWorkflow setAsynchronousMainThreadPerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x10620f108

// -[SCMainCameraRealTimeScanWorkflow scannableDataSubject]
// Type encoding: @16@0:8
// Implementation: 0x10620f138

// -[SCMainCameraRealTimeScanWorkflow setScannableDataSubject:]
// Type encoding: v24@0:8@16
// Implementation: 0x10620f140

// -[SCMainCameraRealTimeScanWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10620f170

@end
