// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessRenderSessionFilterViewUCOCommandManager
// Superclass: NSObject
// Address: 0x112b904c8

@interface SCImageProcessRenderSessionFilterViewUCOCommandManager

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager initWithCommandMapper:queue:outputCommands:midOutputCommands:delegate:generationRulesProvider:]
// Type encoding: @64@0:8@16@24@32@40@48@56
// Implementation: 0x107fa588c

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager dealloc]
// Type encoding: v16@0:8
// Implementation: 0x107fa5a14

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager getCommandsForExportMode:]
// Type encoding: @20@0:8B16
// Implementation: 0x107fa5a88

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager getCommandsForExportMode:timestamp:]
// Type encoding: @44@0:8B16{?=qiIq}20
// Implementation: 0x107fa5acc

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager warmupCommandsIfNeededForOutputSize:]
// Type encoding: v32@0:8{CGSize=dd}16
// Implementation: 0x107fa5ad0

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager setOutputCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa5ad4

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager setMidOutputCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa5b38

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager updateSwipeFilterOffset:]
// Type encoding: B20@0:8f16
// Implementation: 0x107fa5c40

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager setContinuousRendering:isExportMode:]
// Type encoding: v24@0:8B16B20
// Implementation: 0x107fa5cb0

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager setStackedCommandPosition:]
// Type encoding: v24@0:8Q16
// Implementation: 0x107fa5cc4

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager unloadCommands]
// Type encoding: v16@0:8
// Implementation: 0x107fa5ce0

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager pendingUnloadCommandCleanup]
// Type encoding: v16@0:8
// Implementation: 0x107fa5ce8

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager releaseUnloadCommandCleanup]
// Type encoding: v16@0:8
// Implementation: 0x107fa5cf4

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager holdExistingCacheResultOutputCommandsExcept:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa5d20

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager restorePreviousCacheResultOutputCommands]
// Type encoding: v16@0:8
// Implementation: 0x107fa5ed0

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager removeAllowlistedCommand]
// Type encoding: v16@0:8
// Implementation: 0x107fa5f58

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager _updateCachedCommandsIfNeededForExportMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa60ec

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager _updateCachedCommandsForExportMode:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa611c

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager setUseOutputTexture:]
// Type encoding: v20@0:8B16
// Implementation: 0x107fa652c

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager _addUnloadRequestForCommands:]
// Type encoding: v24@0:8@16
// Implementation: 0x107fa653c

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager _normalizedDualSwipingCommandOffsetFromOffset:]
// Type encoding: f24@0:8d16
// Implementation: 0x107fa65c8

// -[SCImageProcessRenderSessionFilterViewUCOCommandManager .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x107fa65e8

@end
