// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanWorkflow
// Superclass: NSObject
// Address: 0x112ab8ed8

@interface SCScanWorkflow

// Property: delegate; attributes: T@"<SCScanWorkflowDelegate>",W,N,V_delegate

// -[SCScanWorkflow initWithUIContainer:queryObservable:scanMetadataProvider:scanResultsPresenter:scanResultsAnalyzerWorkflow:scanToastPresenter:realTimeScanConfiguration:performer:scanMainCameraWorkflow:scanSessionLogger:]
// Type encoding: @96@0:8@16@24@32@40@48@56@64@72@80@88
// Implementation: 0x105ff7fbc

// -[SCScanWorkflow beginWithSource:sourceId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105ff830c

// -[SCScanWorkflow endWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ff8424

// -[SCScanWorkflow _beginWithSource:sourceId:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x105ff8530

// -[SCScanWorkflow _endWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ff872c

// -[SCScanWorkflow _endWorkflowWithError:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff87c8

// -[SCScanWorkflow _didReceiveQuery:sessionId:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x105ff8808

// -[SCScanWorkflow _launchScanResultsWithQuery:sessionId:scanCategoryMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ff8af8

// -[SCScanWorkflow _presentScanResultsWithSessionId:query:scanCategoryMetadata:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ff8cb0

// -[SCScanWorkflow _presentScanResultsWithScanAnalysisObservables:query:scanSessionId:]
// Type encoding: v40@0:8@16@24@32
// Implementation: 0x105ff8eec

// -[SCScanWorkflow _dismissScanResultsWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ff912c

// -[SCScanWorkflow _didReceiveDelegateAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff913c

// -[SCScanWorkflow delegate]
// Type encoding: @16@0:8
// Implementation: 0x105ff92b4

// -[SCScanWorkflow setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff92cc

// -[SCScanWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ff92d8

@end
