// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensEffectOffscreenWarmupWorkflow
// Superclass: NSObject
// Address: 0x112bbc618

@interface SCLensEffectOffscreenWarmupWorkflow

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCLensEffectOffscreenWarmupWorkflow initWithLensDataFetcher:lensMetadataStoreProvider:lensEffectInfoProvider:concurrentPerformer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x108ca9fd4

// -[SCLensEffectOffscreenWarmupWorkflow warmupWithLensId:]
// Type encoding: @24@0:8@16
// Implementation: 0x108caa0d0

// -[SCLensEffectOffscreenWarmupWorkflow warmupEffectContainer:]
// Type encoding: @24@0:8@16
// Implementation: 0x108caa1e8

// -[SCLensEffectOffscreenWarmupWorkflow warmupAssetsContainers:withMemento:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108caa374

// -[SCLensEffectOffscreenWarmupWorkflow _effectsMementoForEffectId:optionalAssets:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108caa81c

// -[SCLensEffectOffscreenWarmupWorkflow _lensMetadataForEffectId:successBlock:failureBlock:]
// Type encoding: v40@0:8@16@?24@?32
// Implementation: 0x108caac94

// -[SCLensEffectOffscreenWarmupWorkflow _futureForDownloadAssetsContainer:withLens:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x108cab05c

// -[SCLensEffectOffscreenWarmupWorkflow .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x108cab44c

@end
