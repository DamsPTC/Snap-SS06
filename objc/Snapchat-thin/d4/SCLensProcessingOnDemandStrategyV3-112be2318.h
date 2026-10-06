// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCLensProcessingOnDemandStrategyV3
// Superclass: SCLensBaseProcessingStrategy
// Address: 0x112be2318

@interface SCLensProcessingOnDemandStrategyV3

// Property: active; attributes: TB,V_active
// Property: applingLens; attributes: TB,V_applingLens
// Property: processingFrameNumber; attributes: Tq,V_processingFrameNumber
// Property: cancelationCount; attributes: Ti,V_cancelationCount

// -[SCLensProcessingOnDemandStrategyV3 initWithEffectProcessor:effectApplicator:renderingStrategy:configuration:performer:]
// Type encoding: @56@0:8@16@24@32@40@48
// Implementation: 0x1090380c0

// -[SCLensProcessingOnDemandStrategyV3 _subscribeOnApplicator:]
// Type encoding: v24@0:8@16
// Implementation: 0x109038230

// -[SCLensProcessingOnDemandStrategyV3 dealloc]
// Type encoding: v16@0:8
// Implementation: 0x1090384ac

// -[SCLensProcessingOnDemandStrategyV3 setLensProcessingActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x1090384f0

// -[SCLensProcessingOnDemandStrategyV3 processSampleBuffer:inputSource:error:]
// Type encoding: @40@0:8@16Q24^@32
// Implementation: 0x109038528

// -[SCLensProcessingOnDemandStrategyV3 _emptySampleBufferForSkippedFrame:]
// Type encoding: @24@0:8@16
// Implementation: 0x10903898c

// -[SCLensProcessingOnDemandStrategyV3 _performApplyAndRender]
// Type encoding: v16@0:8
// Implementation: 0x109038a30

// -[SCLensProcessingOnDemandStrategyV3 _processSampleBuffer:inputSource:error:]
// Type encoding: @40@0:8@16Q24^@32
// Implementation: 0x109038cd4

// -[SCLensProcessingOnDemandStrategyV3 processPixelBufferToImage:orientation:inputSource:timestamp:error:]
// Type encoding: @72@0:8^{__CVBuffer=}16q24Q32{?=qiIq}40^@64
// Implementation: 0x109039054

// -[SCLensProcessingOnDemandStrategyV3 _setSampleBuffer:inputSource:]
// Type encoding: v32@0:8@16Q24
// Implementation: 0x109039274

// -[SCLensProcessingOnDemandStrategyV3 _clearPixelBuffer]
// Type encoding: v16@0:8
// Implementation: 0x109039300

// -[SCLensProcessingOnDemandStrategyV3 cancelEffectApplicationIfPossible]
// Type encoding: v16@0:8
// Implementation: 0x109039358

// -[SCLensProcessingOnDemandStrategyV3 isCanceled]
// Type encoding: B16@0:8
// Implementation: 0x1090393fc

// -[SCLensProcessingOnDemandStrategyV3 active]
// Type encoding: B16@0:8
// Implementation: 0x109039418

// -[SCLensProcessingOnDemandStrategyV3 setActive:]
// Type encoding: v20@0:8B16
// Implementation: 0x10903942c

// -[SCLensProcessingOnDemandStrategyV3 applingLens]
// Type encoding: B16@0:8
// Implementation: 0x10903943c

// -[SCLensProcessingOnDemandStrategyV3 setApplingLens:]
// Type encoding: v20@0:8B16
// Implementation: 0x109039450

// -[SCLensProcessingOnDemandStrategyV3 processingFrameNumber]
// Type encoding: q16@0:8
// Implementation: 0x109039460

// -[SCLensProcessingOnDemandStrategyV3 setProcessingFrameNumber:]
// Type encoding: v24@0:8q16
// Implementation: 0x109039470

// -[SCLensProcessingOnDemandStrategyV3 cancelationCount]
// Type encoding: i16@0:8
// Implementation: 0x109039480

// -[SCLensProcessingOnDemandStrategyV3 setCancelationCount:]
// Type encoding: v20@0:8i16
// Implementation: 0x109039490

// -[SCLensProcessingOnDemandStrategyV3 .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x1090394a0

@end
