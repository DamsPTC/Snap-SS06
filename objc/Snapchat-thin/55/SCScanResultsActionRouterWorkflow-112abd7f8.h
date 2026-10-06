// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCScanResultsActionRouterWorkflow
// Superclass: NSObject
// Address: 0x112abd7f8

@interface SCScanResultsActionRouterWorkflow

// Property: actionObservable; attributes: T@"SCObservable",R,N
// Property: scanActionRouter; attributes: T@"<SCScanResultsScanActionRouting>",R,W,N,V_scanActionRouter
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCScanResultsActionRouterWorkflow initWithPerformer:scanActionRouter:scanResultsDelegate:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x10600c7b0

// -[SCScanResultsActionRouterWorkflow dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10600c8a8

// -[SCScanResultsActionRouterWorkflow actionObservable]
// Type encoding: @16@0:8
// Implementation: 0x10600c8f0

// -[SCScanResultsActionRouterWorkflow beginWithScanCardsActionObservable:]
// Type encoding: v24@0:8@16
// Implementation: 0x10600c918

// -[SCScanResultsActionRouterWorkflow endWithCompletion:]
// Type encoding: v24@0:8@?16
// Implementation: 0x10600ca78

// -[SCScanResultsActionRouterWorkflow deflateResultsWithAction:cleanup:]
// Type encoding: v32@0:8@?16@?24
// Implementation: 0x10600cac4

// -[SCScanResultsActionRouterWorkflow dismissParentScopes:]
// Type encoding: v24@0:8q16
// Implementation: 0x10600cba4

// -[SCScanResultsActionRouterWorkflow dismissParentScopes:withError:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x10600cbac

// -[SCScanResultsActionRouterWorkflow _didReceiveScanCardsAction:]
// Type encoding: v24@0:8@16
// Implementation: 0x10600cbf4

// -[SCScanResultsActionRouterWorkflow _cleanup]
// Type encoding: v16@0:8
// Implementation: 0x10600cc68

// -[SCScanResultsActionRouterWorkflow scanActionRouter]
// Type encoding: @16@0:8
// Implementation: 0x10600ccc0

// -[SCScanResultsActionRouterWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10600ccd8

@end
