// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCContextScanActionPerformer
// Superclass: NSObject
// Address: 0x112a20e08

@interface SCContextScanActionPerformer

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCContextScanActionPerformer initWithScanScopeLauncher:scanScopeServices:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1051d389c

// -[SCContextScanActionPerformer performAction:onViewController:uiContainer:params:source:completion:]
// Type encoding: @64@0:8@16@24@32@40@48@?56
// Implementation: 0x1051d3974

// -[SCContextScanActionPerformer _selectImageFromOperaViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051d3c40

// -[SCContextScanActionPerformer _createAndLaunchScanScopeWithImage:uiContainer:captureOrientationMetadata:completion:]
// Type encoding: v48@0:8@16@24@32@?40
// Implementation: 0x1051d3cd4

// -[SCContextScanActionPerformer _findOperaViewControllerInHierarchy]
// Type encoding: @16@0:8
// Implementation: 0x1051d4184

// -[SCContextScanActionPerformer _recursiveFindOperaViewControllerInViewController:]
// Type encoding: @24@0:8@16
// Implementation: 0x1051d41f8

// -[SCContextScanActionPerformer _sourceCategoryForSpecificStoriesSource:]
// Type encoding: q24@0:8q16
// Implementation: 0x1051d43c8

// -[SCContextScanActionPerformer _sourceCategoryForViewLocation:specificSource:]
// Type encoding: q32@0:8q16q24
// Implementation: 0x1051d43e4

// -[SCContextScanActionPerformer _scanSourceForViewLocation:specificSource:]
// Type encoding: q32@0:8q16q24
// Implementation: 0x1051d4454

// -[SCContextScanActionPerformer _querySourceForViewLocation:specificSource:]
// Type encoding: q32@0:8q16q24
// Implementation: 0x1051d4484

// -[SCContextScanActionPerformer _runActionPerformerCompletion]
// Type encoding: v16@0:8
// Implementation: 0x1051d44b4

// -[SCContextScanActionPerformer scanWantsDismiss:]
// Type encoding: v24@0:8@16
// Implementation: 0x1051d44f8

// -[SCContextScanActionPerformer scanWantsQueryWithSource:requestedAnalyzerServiceIds:]
// Type encoding: v32@0:8q16@24
// Implementation: 0x1051d46bc

// -[SCContextScanActionPerformer _pausePlayback]
// Type encoding: v16@0:8
// Implementation: 0x1051d46c0

// -[SCContextScanActionPerformer _resumePlayback]
// Type encoding: v16@0:8
// Implementation: 0x1051d4748

// -[SCContextScanActionPerformer .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1051d47d0

@end
