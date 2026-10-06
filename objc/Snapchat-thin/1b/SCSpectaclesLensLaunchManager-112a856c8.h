// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSpectaclesLensLaunchManager
// Superclass: NSObject
// Address: 0x112a856c8

@interface SCSpectaclesLensLaunchManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C
// Property: currentActiveLensId; attributes: T@"NSString",R,C,N,V_currentActiveLensId
// Property: lensLaunchEventObservable; attributes: T@"SCObservable",R,N,V_lensLaunchEventObservable

// -[SCSpectaclesLensLaunchManager initWithConnectionHub:]
// Type encoding: @24@0:8@16
// Implementation: 0x105a5bf04

// -[SCSpectaclesLensLaunchManager launchLensWithLensId:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5bf94

// -[SCSpectaclesLensLaunchManager launchLensWithLensId:completionBlock:]
// Type encoding: v32@0:8@16@?24
// Implementation: 0x105a5bfd8

// -[SCSpectaclesLensLaunchManager syncLensesWithCompletionBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x105a5c0ac

// -[SCSpectaclesLensLaunchManager handleResponse:]
// Type encoding: v24@0:8@16
// Implementation: 0x105a5c178

// -[SCSpectaclesLensLaunchManager responseMonitorState]
// Type encoding: q16@0:8
// Implementation: 0x105a5c24c

// -[SCSpectaclesLensLaunchManager currentActiveLensId]
// Type encoding: @16@0:8
// Implementation: 0x105a5c254

// -[SCSpectaclesLensLaunchManager lensLaunchEventObservable]
// Type encoding: @16@0:8
// Implementation: 0x105a5c25c

// -[SCSpectaclesLensLaunchManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105a5c264

@end
