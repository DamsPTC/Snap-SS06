// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanResultsPresenter
// Superclass: NSObject
// Address: 0x112ab8f78

@interface SCScanResultsPresenter

// Property: mainQueuePerformer; attributes: T@"<SCPerforming>",&,N,V_mainQueuePerformer
// Property: invalidated; attributes: TB,V_invalidated
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: delegateActionObservable; attributes: T@"SCObservable",R,N

// -[SCScanResultsPresenter initWithScanResultsScopeExposer:scanActionRouter:scanSessionLogger:scanSource:realTimeScanConfiguration:scanResultsScopeServices:]
// Type encoding: @64@0:8@16@24@32q40@48@56
// Implementation: 0x105ff9448

// -[SCScanResultsPresenter delegateActionObservable]
// Type encoding: @16@0:8
// Implementation: 0x105ff95b4

// -[SCScanResultsPresenter invalidate]
// Type encoding: v16@0:8
// Implementation: 0x105ff95dc

// -[SCScanResultsPresenter presentScanResultsWithUIContainer:scanAnalysisObservables:dataObservable:scanSessionId:]
// Type encoding: v48@0:8@16@24@32@40
// Implementation: 0x105ff95e4

// -[SCScanResultsPresenter dismissScanResultsWithCompletion:performer:]
// Type encoding: v32@0:8@?16@24
// Implementation: 0x105ff97d0

// -[SCScanResultsPresenter _runOnMainQueuePerformer:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105ff9da4

// -[SCScanResultsPresenter resultsWantsDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff9dac

// -[SCScanResultsPresenter resultsDidDeflate]
// Type encoding: v16@0:8
// Implementation: 0x105ff9df0

// -[SCScanResultsPresenter resultsDidInflate]
// Type encoding: v16@0:8
// Implementation: 0x105ff9e34

// -[SCScanResultsPresenter didDisplayResultViewWithViewModel:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff9e78

// -[SCScanResultsPresenter didActionOnResultViewWithId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff9ebc

// -[SCScanResultsPresenter resultActionDidDismissFullscreenModal]
// Type encoding: v16@0:8
// Implementation: 0x105ff9f00

// -[SCScanResultsPresenter resultActionDidDisplayFullscreenModal]
// Type encoding: v16@0:8
// Implementation: 0x105ff9f44

// -[SCScanResultsPresenter mainQueuePerformer]
// Type encoding: @16@0:8
// Implementation: 0x105ff9f88

// -[SCScanResultsPresenter setMainQueuePerformer:]
// Type encoding: v24@0:8@16
// Implementation: 0x105ff9f90

// -[SCScanResultsPresenter invalidated]
// Type encoding: B16@0:8
// Implementation: 0x105ff9fc0

// -[SCScanResultsPresenter setInvalidated:]
// Type encoding: v20@0:8B16
// Implementation: 0x105ff9fcc

// -[SCScanResultsPresenter .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105ff9fd4

@end
