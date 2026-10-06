// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCImageProcessPipelinePingPongProcessor
// Superclass: NSObject
// Address: 0x112be4ac8

@interface SCImageProcessPipelinePingPongProcessor

// Property: nextOutputTextureIndex; attributes: TQ,R,N,V_nextOutputTextureIndex

// -[SCImageProcessPipelinePingPongProcessor initWithContext:glWrapper:outputRenderer:pingPongTextureContainer:activeTextureUnit:]
// Type encoding: @52@0:8@16@24@32{?=[2I]}40I48
// Implementation: 0x1090823ac

// -[SCImageProcessPipelinePingPongProcessor processCommands:runContext:initialOutputTextureIndex:outputTextureUnit:inputPixelSize:outputPixelSize:orientation:viewportTransform:customBackgroundColor:drawLastCommandIntoOutputBuffer:error:]
// Type encoding: B152@0:8@16@24Q32I40{?=QQ}44{?=QQ}60q76{CGAffineTransform=dddddd}84@132B140^@144
// Implementation: 0x109082498

// -[SCImageProcessPipelinePingPongProcessor _runCommand:runContext:inputPixelSize:outputPixelSize:orientation:viewportTransform:negativeSpaceColor:error:]
// Type encoding: B136@0:8@16@24{?=QQ}32{?=QQ}48q64{CGAffineTransform=dddddd}72@120^@128
// Implementation: 0x109082728

// -[SCImageProcessPipelinePingPongProcessor nextOutputTextureIndex]
// Type encoding: Q16@0:8
// Implementation: 0x109082874

// -[SCImageProcessPipelinePingPongProcessor .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10908287c

@end
