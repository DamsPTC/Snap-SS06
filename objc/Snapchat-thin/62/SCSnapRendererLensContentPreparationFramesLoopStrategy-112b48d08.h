// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCSnapRendererLensContentPreparationFramesLoopStrategy
// Superclass: NSObject
// Address: 0x112b48d08

@interface SCSnapRendererLensContentPreparationFramesLoopStrategy

// Property: frameProcessingBlock; attributes: T@?,C,N,V_frameProcessingBlock
// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy initWithLoopFrequencyMs:timeoutSec:asyncTaskAnnouncer:performer:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x106f223c4

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy prepareLensContentForLensId:frameProcessingBlock:]
// Type encoding: @32@0:8@16@?24
// Implementation: 0x106f224fc

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _reset]
// Type encoding: v16@0:8
// Implementation: 0x106f2262c

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _startTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f22680

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _stopTimer]
// Type encoding: v16@0:8
// Implementation: 0x106f227d8

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _startAsyncTaskObserving]
// Type encoding: v16@0:8
// Implementation: 0x106f22814

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _stopAsyncTaskObserving]
// Type encoding: v16@0:8
// Implementation: 0x106f22d08

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _tick]
// Type encoding: v16@0:8
// Implementation: 0x106f22d10

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy _completeWithValue:error:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x106f22ecc

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy frameProcessingBlock]
// Type encoding: @?16@0:8
// Implementation: 0x106f22f50

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy setFrameProcessingBlock:]
// Type encoding: v24@0:8@?16
// Implementation: 0x106f22f58

// -[SCSnapRendererLensContentPreparationFramesLoopStrategy .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x106f22f60

@end
