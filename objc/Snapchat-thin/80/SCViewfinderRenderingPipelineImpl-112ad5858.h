// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewfinderRenderingPipelineImpl
// Superclass: SCViewfinderPipelineBase
// Address: 0x112ad5858

@interface SCViewfinderRenderingPipelineImpl

// Property: delegate; attributes: T@"<SCViewfinderRenderingPipelineDelegate>",W,N,V_delegate
// Property: startupDelegate; attributes: T@"<SCViewfinderRenderingStartupDelegate>",W,N,VstartupDelegate
// Property: renderModuleReadyFuture; attributes: T@"SCFuture",R,N
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewfinderRenderingPipelineImpl initWithUIHandler:rendererVisibilityObservable:]
// Type encoding: @32@0:8@16@24
// Implementation: 0x1006b95f8

// -[SCViewfinderRenderingPipelineImpl dealloc]
// Type encoding: v16@0:8
// Implementation: 0x10621a450

// -[SCViewfinderRenderingPipelineImpl renderModuleReadyFuture]
// Type encoding: @16@0:8
// Implementation: 0x10621a4ac

// -[SCViewfinderRenderingPipelineImpl addRenderingModule:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006c0c30

// -[SCViewfinderRenderingPipelineImpl removeRenderingModule:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621a5ac

// -[SCViewfinderRenderingPipelineImpl renderSampleBuffer:]
// Type encoding: v24@0:8@16
// Implementation: 0x100883790

// -[SCViewfinderRenderingPipelineImpl _pendingRenderingModule]
// Type encoding: @16@0:8
// Implementation: 0x1008838ac

// -[SCViewfinderRenderingPipelineImpl startupDelegate]
// Type encoding: @16@0:8
// Implementation: 0x1006c0d88

// -[SCViewfinderRenderingPipelineImpl setStartupDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006c0ba8

// -[SCViewfinderRenderingPipelineImpl delegate]
// Type encoding: @16@0:8
// Implementation: 0x1006c0ec8

// -[SCViewfinderRenderingPipelineImpl setDelegate:]
// Type encoding: v24@0:8@16
// Implementation: 0x1006ba9a4

// -[SCViewfinderRenderingPipelineImpl .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10621a664

@end
