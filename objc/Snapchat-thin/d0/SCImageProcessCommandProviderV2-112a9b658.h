// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessCommandProviderV2
// Superclass: SCBaseImageProcessCommandProvider
// Address: 0x112a9b658

@interface SCImageProcessCommandProviderV2


// -[SCImageProcessCommandProviderV2 initWithSharedServices:spectaclesCommandFactory:entryPointTracker:lensCrashLogger:usedForTranscodingOnly:isVideo:performer:]
// Type encoding: @64@0:8@16@24@32@40B48B52@56
// Implementation: 0x105d148d8

// -[SCImageProcessCommandProviderV2 lensModeProvider]
// Type encoding: @16@0:8
// Implementation: 0x105d14a34

// -[SCImageProcessCommandProviderV2 lensProcessingCore]
// Type encoding: @16@0:8
// Implementation: 0x105d14abc

// -[SCImageProcessCommandProviderV2 dirtyFrameProvider]
// Type encoding: @16@0:8
// Implementation: 0x105d14b24

// -[SCImageProcessCommandProviderV2 fpsTracker]
// Type encoding: @16@0:8
// Implementation: 0x105d14b6c

// -[SCImageProcessCommandProviderV2 videoCPUCommandForFilterName:config:isSpectacles:]
// Type encoding: @36@0:8@16@24B32
// Implementation: 0x105d14bd4

// -[SCImageProcessCommandProviderV2 imageCommandForCommandConfiguration:filterConfiguration:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d14cbc

// -[SCImageProcessCommandProviderV2 spectaclesRectificationCommandForConfig:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d14f1c

// -[SCImageProcessCommandProviderV2 commandsForRequest:]
// Type encoding: @24@0:8@16
// Implementation: 0x105d14f88

// -[SCImageProcessCommandProviderV2 commandForRequest:imageProcessCommand:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d15150

// -[SCImageProcessCommandProviderV2 commandForRequest:lensId:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d15178

// -[SCImageProcessCommandProviderV2 imageCommandForRequest:filterName:filterConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105d154b0

// -[SCImageProcessCommandProviderV2 videoCommandForRequest:filterName:filterConfig:]
// Type encoding: @40@0:8@16@24@32
// Implementation: 0x105d15864

// -[SCImageProcessCommandProviderV2 _lensModeForLensId:filterName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d15ab0

// -[SCImageProcessCommandProviderV2 _lensIdForFilterConfig:filterName:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x105d15b48

// -[SCImageProcessCommandProviderV2 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x105d15c38

@end
