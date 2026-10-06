// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessLensCommandV2
// Superclass: SCImageProcessCommandImpl
// Address: 0x112be28b8

@interface SCImageProcessLensCommandV2

// Property: sessionTracker; attributes: T@"SCLensCommandSessionTracker",R,N,V_sessionTracker
// Property: isEffectApplied; attributes: TB,R,N
// Property: isDynamicLens; attributes: TB,R,N
// Property: isAnimatedLens; attributes: TB,R,N
// Property: lensIds; attributes: T@"NSSet",R,N
// Property: delegate; attributes: T@"<SCImageProcessLensCommandV2Delegate>",W,V_delegate
// Property: isEffectLoaded; attributes: TB,R,N

// -[SCImageProcessLensCommandV2 initWithLensProcessingCore:fpsTracker:dirtyFrameProvider:entryPointTracker:lensCrashLogger:lensId:isVideo:isExportMode:performer:]
// Type encoding: @80@0:8@16@24@32@40@48@56B64B68@72
// Implementation: 0x10903f0a0

// -[SCImageProcessLensCommandV2 initWithCommand:isExportMode:]
// Type encoding: @28@0:8@16B24
// Implementation: 0x10903f348

// -[SCImageProcessLensCommandV2 lensIds]
// Type encoding: @16@0:8
// Implementation: 0x10903f47c

// -[SCImageProcessLensCommandV2 commandName]
// Type encoding: @16@0:8
// Implementation: 0x10903f4f0

// -[SCImageProcessLensCommandV2 isDynamicLens]
// Type encoding: B16@0:8
// Implementation: 0x10903f554

// -[SCImageProcessLensCommandV2 isAnimatedLens]
// Type encoding: B16@0:8
// Implementation: 0x10903f55c

// -[SCImageProcessLensCommandV2 isEffectLoaded]
// Type encoding: B16@0:8
// Implementation: 0x10903f564

// -[SCImageProcessLensCommandV2 isEffectApplied]
// Type encoding: B16@0:8
// Implementation: 0x10903f56c

// -[SCImageProcessLensCommandV2 clearEffect]
// Type encoding: v16@0:8
// Implementation: 0x10903f574

// -[SCImageProcessLensCommandV2 isGPUPass]
// Type encoding: B16@0:8
// Implementation: 0x10903f578

// -[SCImageProcessLensCommandV2 isUnifiedCameraObjectCompatible]
// Type encoding: B16@0:8
// Implementation: 0x10903f580

// -[SCImageProcessLensCommandV2 isRenderingCompatible]
// Type encoding: B16@0:8
// Implementation: 0x10903f588

// -[SCImageProcessLensCommandV2 isColorFilter]
// Type encoding: B16@0:8
// Implementation: 0x10903f590

// -[SCImageProcessLensCommandV2 isUnifiedCameraObjectExportable]
// Type encoding: B16@0:8
// Implementation: 0x10903f598

// -[SCImageProcessLensCommandV2 isPixelBufferInputCompatible]
// Type encoding: B16@0:8
// Implementation: 0x10903f5a0

// -[SCImageProcessLensCommandV2 appliesInputTransform]
// Type encoding: B16@0:8
// Implementation: 0x10903f5a8

// -[SCImageProcessLensCommandV2 appliesInputOrientation]
// Type encoding: B16@0:8
// Implementation: 0x10903f5b0

// -[SCImageProcessLensCommandV2 isResourcesDownloaded]
// Type encoding: B16@0:8
// Implementation: 0x10903f5b8

// -[SCImageProcessLensCommandV2 inputConstraint]
// Type encoding: Q16@0:8
// Implementation: 0x10903f5c0

// -[SCImageProcessLensCommandV2 loadWithContext:error:]
// Type encoding: B32@0:8@16^@24
// Implementation: 0x10903f5c8

// -[SCImageProcessLensCommandV2 unloadWithError:]
// Type encoding: B24@0:8^@16
// Implementation: 0x10903f7d8

// -[SCImageProcessLensCommandV2 runWithContext:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @144@0:8@16{?=QQ}24Q40{?=QQ}48{?=ff}64Q72{CGAffineTransform=dddddd}80@128^@136
// Implementation: 0x10903f86c

// -[SCImageProcessLensCommandV2 copyWithZone:]
// Type encoding: @24@0:8^{_NSZone=}16
// Implementation: 0x109040590

// -[SCImageProcessLensCommandV2 isEqual:]
// Type encoding: B24@0:8@16
// Implementation: 0x1090405b4

// -[SCImageProcessLensCommandV2 _didCompleteTaskWithError:]
// Type encoding: v24@0:8^@16
// Implementation: 0x109040674

// -[SCImageProcessLensCommandV2 _presentationTimeWithValue:offset:]
// Type encoding: {?=qiIq}32@0:8@16@24
// Implementation: 0x109040694

// -[SCImageProcessLensCommandV2 _fallbackCommandIfNeededWithPixelBuffer:context:pixelSize:bytesPerRow:outputPixelSize:renderRange:orientationFit:viewportTransform:negativeSpaceColor:error:]
// Type encoding: @152@0:8^{__CVBuffer=}16@24{?=QQ}32Q48{?=QQ}56{?=ff}72Q80{CGAffineTransform=dddddd}88@136^@144
// Implementation: 0x10904080c

// -[SCImageProcessLensCommandV2 sessionTracker]
// Type encoding: @16@0:8
// Implementation: 0x1090409b8

// -[SCImageProcessLensCommandV2 delegate]
// Type encoding: @16@0:8
// Implementation: 0x1090409c8

// -[SCImageProcessLensCommandV2 setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1090409e8

// -[SCImageProcessLensCommandV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090409fc

@end
