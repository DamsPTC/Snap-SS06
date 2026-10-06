// Objective-C runtime metadata recovered from the supplied IPA.
// Method bodies and original source files are NOT recovered here.
// Selectors, type encodings and implementation addresses follow.
#pragma once

// Runtime class: SCViewfinderPipelineCoordinator
// Superclass: NSObject
// Address: 0x112ad57b8

@interface SCViewfinderPipelineCoordinator

// Property: hash; attributes: TQ,R
// Property: superclass; attributes: T#,R
// Property: description; attributes: T@"NSString",R,C
// Property: debugDescription; attributes: T@"NSString",?,R,C

// -[SCViewfinderPipelineCoordinator initWithProcessingPipeline:audioProcessingPipeline:renderingPipeline:observationPipeline:]
// Type encoding: @48@0:8@16@24@32@40
// Implementation: 0x1006b9f54

// -[SCViewfinderPipelineCoordinator dataSourceDidStart:]
// Type encoding: v24@0:8@16
// Implementation: 0x10087d624

// -[SCViewfinderPipelineCoordinator dataSource:didReceiveSampleBuffer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x100883468

// -[SCViewfinderPipelineCoordinator dataSource:didReceiveAudioSampleBuffer:]
// Type encoding: v32@0:8@16@24
// Implementation: 0x10621a258

// -[SCViewfinderPipelineCoordinator dataSourceDidStop:]
// Type encoding: v24@0:8@16
// Implementation: 0x10621a27c

// -[SCViewfinderPipelineCoordinator didAddRenderingModuleOfType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x1006c0ee8

// -[SCViewfinderPipelineCoordinator didRemoveRenderingModuleOfType:]
// Type encoding: v24@0:8Q16
// Implementation: 0x10621a280

// -[SCViewfinderPipelineCoordinator .cxx_destruct]
// Type encoding: v16@0:8
// Implementation: 0x10621a284

@end
