// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessApplyLensCommandV2
// Superclass: SCImageProcessLensCommandV2
// Address: 0x112be2818

@interface SCImageProcessApplyLensCommandV2

// Property: isLensLoaded; attributes: TB,V_isLensLoaded
// Property: lens; attributes: T@"SCLens",&,V_lens
// Property: isLensActivating; attributes: TB,V_isLensActivating

// -[SCImageProcessApplyLensCommandV2 initWithLensMode:lensProcessingCore:fpsTracker:dirtyFrameProvider:entryPointTracker:lensCrashLogger:lensId:isVideo:isSnapEditor:isExportMode:performer:]
// Type encoding: @92@0:8@16@24@32@40@48@56@64B72B76B80@84
// Implementation: 0x10903cf24

// -[SCImageProcessApplyLensCommandV2 initWithCommand:isExportMode:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10903d230

// -[SCImageProcessApplyLensCommandV2 initWithCommand:lensMode:lensProcessingCore:isExportMode:]
// Type encoding: @44@0:8@16@24@32B40
// Implementation: 0x10903d3c4

// -[SCImageProcessApplyLensCommandV2 lensIds]
// Type encoding: @16@0:8
// Implementation: 0x10903d528

// -[SCImageProcessApplyLensCommandV2 isDynamicLens]
// Type encoding: B16@0:8
// Implementation: 0x10903d608

// -[SCImageProcessApplyLensCommandV2 isAnimatedLens]
// Type encoding: B16@0:8
// Implementation: 0x10903d670

// -[SCImageProcessApplyLensCommandV2 isEffectLoaded]
// Type encoding: B16@0:8
// Implementation: 0x10903d6d8

// -[SCImageProcessApplyLensCommandV2 isEffectApplied]
// Type encoding: B16@0:8
// Implementation: 0x10903d720

// -[SCImageProcessApplyLensCommandV2 isResourcesDownloaded]
// Type encoding: B16@0:8
// Implementation: 0x10903d768

// -[SCImageProcessApplyLensCommandV2 isLoaded]
// Type encoding: B16@0:8
// Implementation: 0x10903d7d0

// -[SCImageProcessApplyLensCommandV2 loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10903d7d4

// -[SCImageProcessApplyLensCommandV2 unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10903d8b0

// -[SCImageProcessApplyLensCommandV2 clearEffect]
// Type encoding: v16@0:8
// Implementation: 0x10903d914

// -[SCImageProcessApplyLensCommandV2 copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x10903d950

// -[SCImageProcessApplyLensCommandV2 _setupWithLensMode:]
// Type encoding: v24@0:8@16
// Implementation: 0x10903d974

// -[SCImageProcessApplyLensCommandV2 _didDisableLensMode]
// Type encoding: v16@0:8
// Implementation: 0x10903daa4

// -[SCImageProcessApplyLensCommandV2 _applyEffect]
// Type encoding: v16@0:8
// Implementation: 0x10903db58

// -[SCImageProcessApplyLensCommandV2 _applyEffectAndWaitWithError:]
// Type encoding: v24@0:8^@16
// Implementation: 0x10903deb8

// -[SCImageProcessApplyLensCommandV2 _isContinuesRenderingRequiredFroLens:]
// Type encoding: B24@0:8@16
// Implementation: 0x10903e410

// -[SCImageProcessApplyLensCommandV2 isLensLoaded]
// Type encoding: B16@0:8
// Implementation: 0x10903e46c

// -[SCImageProcessApplyLensCommandV2 setIsLensLoaded:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903e480

// -[SCImageProcessApplyLensCommandV2 lens]
// Type encoding: @16@0:8
// Implementation: 0x10903e490

// -[SCImageProcessApplyLensCommandV2 setLens:]
// Type encoding: v24@0:8@16
// Implementation: 0x10903e4a0

// -[SCImageProcessApplyLensCommandV2 isLensActivating]
// Type encoding: B16@0:8
// Implementation: 0x10903e4ac

// -[SCImageProcessApplyLensCommandV2 setIsLensActivating:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903e4c0

// -[SCImageProcessApplyLensCommandV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10903e4d0

@end
